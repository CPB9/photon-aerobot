#include "photongen/onboard/zlidar/Zlidar.Component.h"

#ifdef PHOTON_STUB

void PhotonZlidar_Init(){}
void PhotonZlidar_Tick(){}

/*cmd handlers*/
PhotonError PhotonZlidar_ExecCmd_UpdateInfo(PhotonZlidarFrames frameCode) { return PhotonError_NotImplemented; }
PhotonError PhotonZlidar_ExecCmd_UpdateInfoMultiple(uint64_t frames) { return PhotonError_NotImplemented; }
PhotonError PhotonZlidar_ExecCmd_Start() { return PhotonError_NotImplemented; }
PhotonError PhotonZlidar_ExecCmd_Stop() { return PhotonError_NotImplemented; }
PhotonError PhotonZlidar_ExecCmd_SetDistanceOffset(float offset) { return PhotonError_NotImplemented; }
PhotonError PhotonZlidar_ExecCmd_SetAccumulation(PhotonZlidarAccumulations accumulation) { return PhotonError_NotImplemented; }
PhotonError PhotonZlidar_ExecCmd_SetOversampling(PhotonZlidarOversamplings oversampling) { return PhotonError_NotImplemented; }
PhotonError PhotonZlidar_ExecCmd_SetPoints(uint16_t points) { return PhotonError_NotImplemented; }
PhotonError PhotonZlidar_ExecCmd_SetThresholdOffset(float sensitivity) { return PhotonError_NotImplemented; }
PhotonError PhotonZlidar_ExecCmd_SetSmoothing(int8_t smoothing) { return PhotonError_NotImplemented; }
PhotonError PhotonZlidar_ExecCmd_SetLedPower(PhotonZlidarLedPowers power) { return PhotonError_NotImplemented; }
PhotonError PhotonZlidar_ExecCmd_SetAcquisitionOption(uint8_t acquisition) { return PhotonError_NotImplemented; }
PhotonError PhotonZlidar_ExecCmd_SetAutoFrame(uint16_t frame) { return PhotonError_NotImplemented; }
PhotonError PhotonZlidar_ExecCmd_SetAutoEcho(uint16_t echo) { return PhotonError_NotImplemented; }
PhotonError PhotonZlidar_ExecCmd_SetOperationMode(PhotonZlidarOperationModeWrite mode) { return PhotonError_NotImplemented; }

#endif
