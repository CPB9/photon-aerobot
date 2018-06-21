#include "photongen/onboard/zcvm/Zcvm.Component.h"

#define _PHOTON_FNAME "Zcvm.c"

static bool ledsDisabled = false;

PhotonClkTimePoint bldcCmdTime = 0;

void PhotonZcvm_Init()
{
    _photonZcvm.slavesState.powerCom = false;
    _photonZcvm.slavesState.powerFan1 = false;
    _photonZcvm.slavesState.powerFan2 = false;

    _photonZcvm.slavesState.powerComLastTime = 0;
    _photonZcvm.slavesState.powerFan1LastTime = 0;
    _photonZcvm.slavesState.powerFan2LastTime = 0;

    _photonZcvm.enginesRotation.dir1 = 0;
    _photonZcvm.enginesRotation.dir2 = 0;
    _photonZcvm.enginesRotation.dir3 = 0;
    _photonZcvm.enginesRotation.dir4 = 0;
    _photonZcvm.currentChannel = PhotonZcvmExcChannelId_None;

    _photonZcvm.excChannels[0].id = PhotonZcvmExcChannelId_Modem1;
    _photonZcvm.excChannels[0].bytesReceived = 0;
    _photonZcvm.excChannels[0].bytesSent = 0;

    _photonZcvm.excChannels[1].id = PhotonZcvmExcChannelId_Modem2;
    _photonZcvm.excChannels[1].bytesReceived = 0;
    _photonZcvm.excChannels[1].bytesSent = 0;

    _photonZcvm.excChannels[2].id = PhotonZcvmExcChannelId_Ethernet;
    _photonZcvm.excChannels[2].bytesReceived = 0;
    _photonZcvm.excChannels[2].bytesSent = 0;
}

void setBldcDir(PhotonPowerfanproxyBldcId id, PhotonPowerfanReg reg, uint8_t value)
{
    bldcCmdTime = PhotonClk_GetTickTime();

    PhotonZcvm_QueueEvent_RestoreBldcReg(id, reg, value);

    int lastVal = 0;
    switch (id)
    {
        case PhotonPowerfanproxyBldcId_Bldc1:
            lastVal = _photonPowerfanproxy.bldc1.config.RUN;
            break;
        case PhotonPowerfanproxyBldcId_Bldc2:
            lastVal = _photonPowerfanproxy.bldc2.config.RUN;
            break;
        case PhotonPowerfanproxyBldcId_Bldc3:
            lastVal = _photonPowerfanproxy.bldc3.config.RUN;
            break;
        case PhotonPowerfanproxyBldcId_Bldc4:
            lastVal = _photonPowerfanproxy.bldc4.config.RUN;
            break;
    }

    PhotonPowerfanproxy_ExecCmd_Stop(id);
    PhotonPowerfanproxy_ExecCmd_SetCurrentPresetReg(id, PhotonPowerfanReg_DIR, value);
    PhotonPowerfanproxy_ExecCmd_SetCurrentPresetReg(id, PhotonPowerfanReg_RUN, lastVal);
    PhotonPowerfanproxy_ExecCmd_ApplyCurrentPreset(id);
}

void PhotonZcvm_Tick()
{
    const int warningTime = 1 * 1e3;

    PhotonZcvmSlaveRunningState state;
    state.powerCom = PhotonClk_GetTickTime() - _photonZcvm.slavesState.powerComLastTime < warningTime;
    state.powerFan1 = PhotonClk_GetTickTime() - _photonZcvm.slavesState.powerFan1LastTime < warningTime;
    state.powerFan2 = PhotonClk_GetTickTime() - _photonZcvm.slavesState.powerFan2LastTime < warningTime;
    //PHOTON_CRITICAL("%u", PhotonClk_GetTickTime() - _photonZcvm.slavesState.powerFan1LastTime);
    if (_photonZcvm.slavesState.powerCom != state.powerCom ||
        _photonZcvm.slavesState.powerFan1 != state.powerFan1 ||
        _photonZcvm.slavesState.powerFan2 != state.powerFan2)
    {
        _photonZcvm.slavesState.powerCom = state.powerCom;
        _photonZcvm.slavesState.powerFan1 = state.powerFan1;
        _photonZcvm.slavesState.powerFan2 = state.powerFan2;
        PhotonZcvm_QueueEvent_SlaveConnectionChanged(&_photonZcvm.slavesState);
    }

    if (_photonZcvm.slavesState.powerFan1)
    {
        bool canSend = (PhotonClk_GetTickTime() - bldcCmdTime) > 1000;
        uint8_t bldc1Dir = _photonZcvm.enginesRotation.dir1;
        uint8_t bldc2Dir = _photonZcvm.enginesRotation.dir2;
        if (_photonPowerfanproxy.bldc1.config.DIR != bldc1Dir && canSend)
        {
            setBldcDir(PhotonPowerfanproxyBldcId_Bldc1, PhotonPowerfanReg_DIR, bldc1Dir);
            return;
        }
        if (_photonPowerfanproxy.bldc2.config.DIR != bldc2Dir && canSend)
        {
            setBldcDir(PhotonPowerfanproxyBldcId_Bldc2, PhotonPowerfanReg_DIR, bldc2Dir);
            return;
        }
    }

    if (_photonZcvm.slavesState.powerFan2)
    {
        bool canSend = (PhotonClk_GetTickTime() - bldcCmdTime) > 1000;
        uint8_t bldc3Dir = _photonZcvm.enginesRotation.dir3;
        uint8_t bldc4Dir = _photonZcvm.enginesRotation.dir4;

        if (_photonPowerfanproxy.bldc3.config.DIR != bldc3Dir && canSend)
        {
            setBldcDir(PhotonPowerfanproxyBldcId_Bldc3, PhotonPowerfanReg_DIR, bldc3Dir);
            return;
        }
        if (_photonPowerfanproxy.bldc4.config.DIR != bldc4Dir && canSend)
        {
            setBldcDir(PhotonPowerfanproxyBldcId_Bldc4, PhotonPowerfanReg_DIR, bldc4Dir);
            return;
        }
    }
}

void PhotonZcvm_UpdateSlaveMessageTime(PhotonZcvmSlaves slave)
{
    switch (slave)
    {
        case PhotonZcvmSlaves_PowerCom:
            _photonZcvm.slavesState.powerComLastTime = PhotonClk_GetTickTime();
            break;
        case PhotonZcvmSlaves_PowerFan1:
            _photonZcvm.slavesState.powerFan1LastTime = PhotonClk_GetTickTime();
            break;
        case PhotonZcvmSlaves_PowerFan2:
            _photonZcvm.slavesState.powerFan2LastTime = PhotonClk_GetTickTime();
            break;
    }
}

PhotonError PhotonZcvm_ExecCmd_SetEnginesRotation(const PhotonZcvmEngineRotation* dirs)
{
    _photonZcvm.enginesRotation.dir1 = dirs->dir1;
    _photonZcvm.enginesRotation.dir2 = dirs->dir2;
    _photonZcvm.enginesRotation.dir3 = dirs->dir3;
    _photonZcvm.enginesRotation.dir4 = dirs->dir4;

    PhotonAsv_SaveVars();

    return PhotonError_Ok;
}

bool PhotonZcvm_CanSendToChannel(PhotonZcvmExcChannelId id)
{
    return _photonZcvm.currentChannel == id;
}

void PhotonZcvm_SetCurrentChannel(PhotonZcvmExcChannelId id)
{
    if (_photonZcvm.currentChannel != id)
        PhotonZcvm_QueueEvent_ExcChannelChanged(id);

    _photonZcvm.currentChannel = id;
}

void PhotonZcvm_UpdateChannelStats(PhotonZcvmExcChannelId id, uint64_t bytesSent, uint64_t bytesReceived)
{
    PhotonZcvmExcChannelState* channel;
    switch (id)
    {
        case PhotonZcvmExcChannelId_Modem1:
            channel = &_photonZcvm.excChannels[0];
            break;
        case PhotonZcvmExcChannelId_Modem2:
            channel = &_photonZcvm.excChannels[1];
            break;
        case PhotonZcvmExcChannelId_Ethernet:
            channel = &_photonZcvm.excChannels[2];
            break;
    }
    channel->bytesSent += bytesSent;
    channel->bytesReceived += bytesReceived;
}
