#include "photongen/onboard/zcvm/Zcvm.Component.h"

#define _PHOTON_FNAME "Zcvm.c"

void PhotonZcvm_Init()
{
    _photonZcvm.slavesState.powerCom = false;
    _photonZcvm.slavesState.powerFan1 = false;
    _photonZcvm.slavesState.powerFan2 = false;

    _photonZcvm.slavesState.powerComLastTime = 0;
    _photonZcvm.slavesState.powerFan1LastTime = 0;
    _photonZcvm.slavesState.powerFan2LastTime = 0;

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
