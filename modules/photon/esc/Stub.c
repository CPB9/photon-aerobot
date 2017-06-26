#ifdef PHOTON_STUB
#include "photon/esc/Esc.Component.h"

PhotonError PhotonEsc_SelectPreset(int8_t presetNum)
{
    (void)presetNum;
    return PhotonError_Ok;
}

PhotonError PhotonEsc_SetPreset(const PhotonEscPreset* preset)
{
    (void)preset;
    return PhotonError_Ok;
}

PhotonError PhotonEsc_SetSpeed(float speed)
{
    _photonEsc.speed = speed;
    return PhotonError_Ok;
}

#endif
