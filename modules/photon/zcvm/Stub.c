#include "photongen/onboard/zcvm/Zcvm.Component.h"

#define _PHOTON_FNAME "Zcvm.c"

static bool ledsDisabled = false;

void PhotonZcvm_Init()
{
    _photonZcvm.slavesState.powerCom = false;
    _photonZcvm.slavesState.powerFan1 = false;
    _photonZcvm.slavesState.powerFan2 = false;

    _photonZcvm.slavesState.powerComLastTime = 0;
    _photonZcvm.slavesState.powerFan1LastTime = 0;
    _photonZcvm.slavesState.powerFan2LastTime = 0;
}

void setBldcDir(PhotonPowerfanproxyBldcId id, PhotonPowerfanReg reg, uint8_t value)
{
    PhotonZcvm_QueueEvent_RestoreBldcReg(id, reg, value);

    PhotonPowerfanproxy_ExecCmd_SetCurrentPresetReg(id, PhotonPowerfanReg_DIR, value);
    PhotonPowerfanproxy_ExecCmd_SetCurrentPresetReg(id, PhotonPowerfanReg_RUN, 0);
    PhotonPowerfanproxy_ExecCmd_ApplyCurrentPreset(id);
    PhotonPowerfanproxy_ExecCmd_SetCurrentPresetReg(id, PhotonPowerfanReg_RUN, 1);
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

    if (_photonZcvm.slavesState.powerCom && !ledsDisabled)
    {
        if(_photonPowercom.chan12_1.isEnabled)
            PhotonPowercom_ExecCmd_DisableChannel(PhotonPowercomChannel_Chan12_1);
        if(_photonPowercom.chan12_2.isEnabled)
            PhotonPowercom_ExecCmd_DisableChannel(PhotonPowercomChannel_Chan12_2);
        if(_photonPowercom.chan12_3.isEnabled)
            PhotonPowercom_ExecCmd_DisableChannel(PhotonPowercomChannel_Chan12_3);
        if(_photonPowercom.chan12_4.isEnabled)
            PhotonPowercom_ExecCmd_DisableChannel(PhotonPowercomChannel_Chan12_4);

        if(!_photonPowercom.chan12_1.isEnabled &&
           !_photonPowercom.chan12_2.isEnabled &&
           !_photonPowercom.chan12_3.isEnabled &&
           !_photonPowercom.chan12_4.isEnabled)
        {
            ledsDisabled = true;
        }
    }

    if (_photonZcvm.slavesState.powerFan1)
    {
        if (_photonPowerfanproxy.bldc1.config.DIR != 0)
        {
            setBldcDir(PhotonPowerfanproxyBldcId_Bldc1, PhotonPowerfanReg_DIR, 1);
        }
        if (_photonPowerfanproxy.bldc2.config.DIR != 1)
        {
            setBldcDir(PhotonPowerfanproxyBldcId_Bldc2, PhotonPowerfanReg_DIR, 0);
        }
    }

    if (_photonZcvm.slavesState.powerFan2)
    {
        if (_photonPowerfanproxy.bldc3.config.DIR != 0)
        {
            setBldcDir(PhotonPowerfanproxyBldcId_Bldc3, PhotonPowerfanReg_DIR, 1);
        }
        if (_photonPowerfanproxy.bldc4.config.DIR != 1)
        {
            setBldcDir(PhotonPowerfanproxyBldcId_Bldc4, PhotonPowerfanReg_DIR, 0);
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
