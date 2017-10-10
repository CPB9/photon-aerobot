#include "photon/px4/Px4.Component.h"

#include "photon/core/Logging.h"

#define _PHOTON_FNAME "px4/Px4.c"

extern void setArmed();

void PhotonPx4_Init()
{
}

void PhotonPx4_Tick()
{
}

PhotonError PhotonPx4_Arm()
{
    setArmed(true);
    return PhotonError_Ok;
}

PhotonError PhotonPx4_Disarm()
{
    setArmed(false);
    return PhotonError_Ok;
}

#undef _PHOTON_FNAME
