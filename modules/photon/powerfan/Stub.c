#ifdef PHOTON_STUB
#include "photongen/onboard/powerfan/Powerfan.Component.h"

PhotonError PhotonPowerfan_ExecCmd_Stop()
{
    return PhotonError_Ok;
}

PhotonError PhotonPowerfan_ExecCmd_Run(PhotonPowerfanBldcId id)
{
    return PhotonError_Ok;
}

PhotonError PhotonPowerfan_ExecCmd_ApplyCurrentPreset(PhotonPowerfanBldcId id)
{
    return PhotonError_Ok;
}

PhotonError PhotonPowerfan_ExecCmd_SetCurrentPreset(PhotonPowerfanBldcId id, const PhotonPowerfanA4960Config* preset)
{
    return PhotonError_Ok;
}

PhotonError PhotonPowerfan_ExecCmd_SetCurrentPresetName(PhotonPowerfanBldcId id, const PhotonDynArrayOfCharMaxSize32* name)
{
    return PhotonError_Ok;
}

PhotonError PhotonPowerfan_ExecCmd_SetCurrentPresetReg(PhotonPowerfanBldcId id, PhotonPowerfanReg reg, uint8_t value)
{
    return PhotonError_Ok;
}

PhotonError PhotonPowerfan_ExecCmd_EnablePwmCapture(PhotonPowerfanBldcId id, bool isCaptured)
{
    return PhotonError_Ok;
}

PhotonError PhotonPowerfan_ExecCmd_SetTestPwmInput(PhotonPowerfanBldcId id, uint16_t value)
{
    return PhotonError_Ok;
}

PhotonError PhotonPowerfan_ExecCmd_PwmSetDisarmed(uint16_t value)
{
    return PhotonError_Ok;
}

PhotonError PhotonPowerfan_ExecCmd_PwmSetMinMax(uint16_t min, uint16_t max)
{
    return PhotonError_Ok;
}

PhotonError PhotonPowerfan_ExecCmd_PwmSetStep(uint16_t value)
{
    return PhotonError_Ok;
}

PhotonError PhotonPowerfan_ExecCmd_PwmSetMinDuty(float value)
{
    return PhotonError_Ok;
}

#endif
