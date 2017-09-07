#ifdef PHOTON_STUB
#include "photon/usm/Usm.Component.h"

PhotonError PhotonUsm_SelectPreset(int8_t presetNum)
{
    (void)presetNum;
    return PhotonError_Ok;
}

PhotonError PhotonUsm_SetPreset(const PhotonUsmPreset* preset)
{
    (void)preset;
    return PhotonError_Ok;
}

PhotonError PhotonUsm_SetSpeed(float speed)
{
//    _photonUsm.speed = speed;
    return PhotonError_Ok;
}

#endif
