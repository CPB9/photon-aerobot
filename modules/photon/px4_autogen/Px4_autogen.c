#include "photongen/onboard/px4_autogen/Px4_autogen.Component.h"
#include "photongen/onboard/tm/Tm.Component.h"

static void setParam_Attitude_Q_estimator_ATT_W_ACC(uint32_t value)
{
    _photonPx4_autogen._Attitude_Q_estimator.ATT_W_ACC = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_Q_ESTIMATOR_ID);
    }
}

static void setParam_Attitude_Q_estimator_ATT_W_MAG(uint32_t value)
{
    _photonPx4_autogen._Attitude_Q_estimator.ATT_W_MAG = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_Q_ESTIMATOR_ID);
    }
}

static void setParam_Attitude_Q_estimator_ATT_W_EXT_HDG(uint32_t value)
{
    _photonPx4_autogen._Attitude_Q_estimator.ATT_W_EXT_HDG = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_Q_ESTIMATOR_ID);
    }
}

static void setParam_Attitude_Q_estimator_ATT_W_GYRO_BIAS(uint32_t value)
{
    _photonPx4_autogen._Attitude_Q_estimator.ATT_W_GYRO_BIAS = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_Q_ESTIMATOR_ID);
    }
}

static void setParam_Attitude_Q_estimator_ATT_MAG_DECL(uint32_t value)
{
    _photonPx4_autogen._Attitude_Q_estimator.ATT_MAG_DECL = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_Q_ESTIMATOR_ID);
    }
}

static void setParam_Attitude_Q_estimator_ATT_MAG_DECL_A(uint32_t value)
{
    _photonPx4_autogen._Attitude_Q_estimator.ATT_MAG_DECL_A = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_Q_ESTIMATOR_ID);
    }
}

static void setParam_Attitude_Q_estimator_ATT_EXT_HDG_M(uint32_t value)
{
    _photonPx4_autogen._Attitude_Q_estimator.ATT_EXT_HDG_M = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_Q_ESTIMATOR_ID);
    }
}

static void setParam_Attitude_Q_estimator_ATT_ACC_COMP(uint32_t value)
{
    _photonPx4_autogen._Attitude_Q_estimator.ATT_ACC_COMP = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_Q_ESTIMATOR_ID);
    }
}

static void setParam_Attitude_Q_estimator_ATT_BIAS_MAX(uint32_t value)
{
    _photonPx4_autogen._Attitude_Q_estimator.ATT_BIAS_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_Q_ESTIMATOR_ID);
    }
}

static void setParam_Attitude_Q_estimator_ATT_VIBE_THRESH(uint32_t value)
{
    _photonPx4_autogen._Attitude_Q_estimator.ATT_VIBE_THRESH = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_Q_ESTIMATOR_ID);
    }
}

static void setParam_Battery_Calibration_BAT_V_EMPTY(uint32_t value)
{
    _photonPx4_autogen._Battery_Calibration.BAT_V_EMPTY = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
    }
}

static void setParam_Battery_Calibration_BAT_V_CHARGED(uint32_t value)
{
    _photonPx4_autogen._Battery_Calibration.BAT_V_CHARGED = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
    }
}

static void setParam_Battery_Calibration_BAT_LOW_THR(uint32_t value)
{
    _photonPx4_autogen._Battery_Calibration.BAT_LOW_THR = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
    }
}

static void setParam_Battery_Calibration_BAT_CRIT_THR(uint32_t value)
{
    _photonPx4_autogen._Battery_Calibration.BAT_CRIT_THR = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
    }
}

static void setParam_Battery_Calibration_BAT_V_LOAD_DROP(uint32_t value)
{
    _photonPx4_autogen._Battery_Calibration.BAT_V_LOAD_DROP = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
    }
}

static void setParam_Battery_Calibration_BAT_R_INTERNAL(uint32_t value)
{
    _photonPx4_autogen._Battery_Calibration.BAT_R_INTERNAL = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
    }
}

static void setParam_Battery_Calibration_BAT_N_CELLS(uint32_t value)
{
    _photonPx4_autogen._Battery_Calibration.BAT_N_CELLS = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
    }
}

static void setParam_Battery_Calibration_BAT_CAPACITY(uint32_t value)
{
    _photonPx4_autogen._Battery_Calibration.BAT_CAPACITY = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
    }
}

static void setParam_Battery_Calibration_BAT_V_SCALE_IO(uint32_t value)
{
    _photonPx4_autogen._Battery_Calibration.BAT_V_SCALE_IO = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
    }
}

static void setParam_Battery_Calibration_BAT_CNT_V_VOLT(uint32_t value)
{
    _photonPx4_autogen._Battery_Calibration.BAT_CNT_V_VOLT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
    }
}

static void setParam_Battery_Calibration_BAT_CNT_V_CURR(uint32_t value)
{
    _photonPx4_autogen._Battery_Calibration.BAT_CNT_V_CURR = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
    }
}

static void setParam_Battery_Calibration_BAT_V_OFFS_CURR(uint32_t value)
{
    _photonPx4_autogen._Battery_Calibration.BAT_V_OFFS_CURR = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
    }
}

static void setParam_Battery_Calibration_BAT_V_DIV(uint32_t value)
{
    _photonPx4_autogen._Battery_Calibration.BAT_V_DIV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
    }
}

static void setParam_Battery_Calibration_BAT_A_PER_V(uint32_t value)
{
    _photonPx4_autogen._Battery_Calibration.BAT_A_PER_V = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
    }
}

static void setParam_Battery_Calibration_BAT_SOURCE(uint32_t value)
{
    _photonPx4_autogen._Battery_Calibration.BAT_SOURCE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
    }
}

static void setParam_Camera_trigger_TRIG_MODE(uint32_t value)
{
    _photonPx4_autogen._Camera_trigger.TRIG_MODE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CAMERA_TRIGGER_ID);
    }
}

static void setParam_Circuit_Breaker_CBRK_SUPPLY_CHK(uint32_t value)
{
    _photonPx4_autogen._Circuit_Breaker.CBRK_SUPPLY_CHK = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CIRCUIT_BREAKER_ID);
    }
}

static void setParam_Circuit_Breaker_CBRK_RATE_CTRL(uint32_t value)
{
    _photonPx4_autogen._Circuit_Breaker.CBRK_RATE_CTRL = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CIRCUIT_BREAKER_ID);
    }
}

static void setParam_Circuit_Breaker_CBRK_IO_SAFETY(uint32_t value)
{
    _photonPx4_autogen._Circuit_Breaker.CBRK_IO_SAFETY = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CIRCUIT_BREAKER_ID);
    }
}

static void setParam_Circuit_Breaker_CBRK_AIRSPD_CHK(uint32_t value)
{
    _photonPx4_autogen._Circuit_Breaker.CBRK_AIRSPD_CHK = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CIRCUIT_BREAKER_ID);
    }
}

static void setParam_Circuit_Breaker_CBRK_FLIGHTTERM(uint32_t value)
{
    _photonPx4_autogen._Circuit_Breaker.CBRK_FLIGHTTERM = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CIRCUIT_BREAKER_ID);
    }
}

static void setParam_Circuit_Breaker_CBRK_ENGINEFAIL(uint32_t value)
{
    _photonPx4_autogen._Circuit_Breaker.CBRK_ENGINEFAIL = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CIRCUIT_BREAKER_ID);
    }
}

static void setParam_Circuit_Breaker_CBRK_GPSFAIL(uint32_t value)
{
    _photonPx4_autogen._Circuit_Breaker.CBRK_GPSFAIL = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CIRCUIT_BREAKER_ID);
    }
}

static void setParam_Circuit_Breaker_CBRK_BUZZER(uint32_t value)
{
    _photonPx4_autogen._Circuit_Breaker.CBRK_BUZZER = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CIRCUIT_BREAKER_ID);
    }
}

static void setParam_Circuit_Breaker_CBRK_USB_CHK(uint32_t value)
{
    _photonPx4_autogen._Circuit_Breaker.CBRK_USB_CHK = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CIRCUIT_BREAKER_ID);
    }
}

static void setParam_Commander_COM_DL_LOSS_T(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_DL_LOSS_T = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_DL_REG_T(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_DL_REG_T = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_EF_THROT(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_EF_THROT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_EF_C2T(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_EF_C2T = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_EF_TIME(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_EF_TIME = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_RC_LOSS_T(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_RC_LOSS_T = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_HOME_H_T(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_HOME_H_T = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_HOME_V_T(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_HOME_V_T = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_AUTOS_PAR(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_AUTOS_PAR = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_RC_IN_MODE(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_RC_IN_MODE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_RC_ARM_HYST(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_RC_ARM_HYST = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_DISARM_LAND(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_DISARM_LAND = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_ARM_WO_GPS(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_ARM_WO_GPS = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_LOW_BAT_ACT(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_LOW_BAT_ACT = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_OF_LOSS_T(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_OF_LOSS_T = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_ARM_EKF_POS(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_ARM_EKF_POS = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_ARM_EKF_VEL(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_ARM_EKF_VEL = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_ARM_EKF_HGT(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_ARM_EKF_HGT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_ARM_EKF_YAW(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_ARM_EKF_YAW = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_ARM_EKF_AB(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_ARM_EKF_AB = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_ARM_EKF_GB(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_ARM_EKF_GB = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_ARM_IMU_ACC(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_ARM_IMU_ACC = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Commander_COM_ARM_IMU_GYR(uint32_t value)
{
    _photonPx4_autogen._Commander.COM_ARM_IMU_GYR = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
    }
}

static void setParam_Data_Link_Loss_NAV_AH_LAT(uint32_t value)
{
    _photonPx4_autogen._Data_Link_Loss.NAV_AH_LAT = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_DATA_LINK_LOSS_ID);
    }
}

static void setParam_Data_Link_Loss_NAV_AH_LON(uint32_t value)
{
    _photonPx4_autogen._Data_Link_Loss.NAV_AH_LON = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_DATA_LINK_LOSS_ID);
    }
}

static void setParam_Data_Link_Loss_NAV_AH_ALT(uint32_t value)
{
    _photonPx4_autogen._Data_Link_Loss.NAV_AH_ALT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_DATA_LINK_LOSS_ID);
    }
}

static void setParam_Data_Link_Loss_NAV_DLL_CH_T(uint32_t value)
{
    _photonPx4_autogen._Data_Link_Loss.NAV_DLL_CH_T = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_DATA_LINK_LOSS_ID);
    }
}

static void setParam_Data_Link_Loss_NAV_DLL_CH_LAT(uint32_t value)
{
    _photonPx4_autogen._Data_Link_Loss.NAV_DLL_CH_LAT = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_DATA_LINK_LOSS_ID);
    }
}

static void setParam_Data_Link_Loss_NAV_DLL_CH_LON(uint32_t value)
{
    _photonPx4_autogen._Data_Link_Loss.NAV_DLL_CH_LON = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_DATA_LINK_LOSS_ID);
    }
}

static void setParam_Data_Link_Loss_NAV_DLL_CH_ALT(uint32_t value)
{
    _photonPx4_autogen._Data_Link_Loss.NAV_DLL_CH_ALT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_DATA_LINK_LOSS_ID);
    }
}

static void setParam_Data_Link_Loss_NAV_DLL_AH_T(uint32_t value)
{
    _photonPx4_autogen._Data_Link_Loss.NAV_DLL_AH_T = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_DATA_LINK_LOSS_ID);
    }
}

static void setParam_Data_Link_Loss_NAV_DLL_N(uint32_t value)
{
    _photonPx4_autogen._Data_Link_Loss.NAV_DLL_N = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_DATA_LINK_LOSS_ID);
    }
}

static void setParam_Data_Link_Loss_NAV_DLL_CHSK(uint32_t value)
{
    _photonPx4_autogen._Data_Link_Loss.NAV_DLL_CHSK = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_DATA_LINK_LOSS_ID);
    }
}

static void setParam_FW_TECS_FW_AIRSPD_TRIM(uint32_t value)
{
    _photonPx4_autogen._FW_TECS.FW_AIRSPD_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
    }
}

static void setParam_Follow_target_NAV_MIN_FT_HT(uint32_t value)
{
    _photonPx4_autogen._Follow_target.NAV_MIN_FT_HT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FOLLOW_TARGET_ID);
    }
}

static void setParam_Follow_target_NAV_FT_DST(uint32_t value)
{
    _photonPx4_autogen._Follow_target.NAV_FT_DST = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FOLLOW_TARGET_ID);
    }
}

static void setParam_Follow_target_NAV_FT_FS(uint32_t value)
{
    _photonPx4_autogen._Follow_target.NAV_FT_FS = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FOLLOW_TARGET_ID);
    }
}

static void setParam_Follow_target_NAV_FT_RS(uint32_t value)
{
    _photonPx4_autogen._Follow_target.NAV_FT_RS = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FOLLOW_TARGET_ID);
    }
}

static void setParam_GPS_GPS_DUMP_COMM(uint32_t value)
{
    _photonPx4_autogen._GPS.GPS_DUMP_COMM = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GPS_ID);
    }
}

static void setParam_GPS_Failure_Navigation_NAV_GPSF_LT(uint32_t value)
{
    _photonPx4_autogen._GPS_Failure_Navigation.NAV_GPSF_LT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GPS_FAILURE_NAVIGATION_ID);
    }
}

static void setParam_GPS_Failure_Navigation_NAV_GPSF_R(uint32_t value)
{
    _photonPx4_autogen._GPS_Failure_Navigation.NAV_GPSF_R = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GPS_FAILURE_NAVIGATION_ID);
    }
}

static void setParam_GPS_Failure_Navigation_NAV_GPSF_P(uint32_t value)
{
    _photonPx4_autogen._GPS_Failure_Navigation.NAV_GPSF_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GPS_FAILURE_NAVIGATION_ID);
    }
}

static void setParam_GPS_Failure_Navigation_NAV_GPSF_TR(uint32_t value)
{
    _photonPx4_autogen._GPS_Failure_Navigation.NAV_GPSF_TR = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GPS_FAILURE_NAVIGATION_ID);
    }
}

static void setParam_Geofence_GF_ACTION(uint32_t value)
{
    _photonPx4_autogen._Geofence.GF_ACTION = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GEOFENCE_ID);
    }
}

static void setParam_Geofence_GF_ALTMODE(uint32_t value)
{
    _photonPx4_autogen._Geofence.GF_ALTMODE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GEOFENCE_ID);
    }
}

static void setParam_Geofence_GF_SOURCE(uint32_t value)
{
    _photonPx4_autogen._Geofence.GF_SOURCE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GEOFENCE_ID);
    }
}

static void setParam_Geofence_GF_COUNT(uint32_t value)
{
    _photonPx4_autogen._Geofence.GF_COUNT = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GEOFENCE_ID);
    }
}

static void setParam_Geofence_GF_MAX_HOR_DIST(uint32_t value)
{
    _photonPx4_autogen._Geofence.GF_MAX_HOR_DIST = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GEOFENCE_ID);
    }
}

static void setParam_Geofence_GF_MAX_VER_DIST(uint32_t value)
{
    _photonPx4_autogen._Geofence.GF_MAX_VER_DIST = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GEOFENCE_ID);
    }
}

static void setParam_Land_Detector_LNDMC_Z_VEL_MAX(uint32_t value)
{
    _photonPx4_autogen._Land_Detector.LNDMC_Z_VEL_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAND_DETECTOR_ID);
    }
}

static void setParam_Land_Detector_LNDMC_XY_VEL_MAX(uint32_t value)
{
    _photonPx4_autogen._Land_Detector.LNDMC_XY_VEL_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAND_DETECTOR_ID);
    }
}

static void setParam_Land_Detector_LNDMC_ROT_MAX(uint32_t value)
{
    _photonPx4_autogen._Land_Detector.LNDMC_ROT_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAND_DETECTOR_ID);
    }
}

static void setParam_Land_Detector_LNDMC_FFALL_THR(uint32_t value)
{
    _photonPx4_autogen._Land_Detector.LNDMC_FFALL_THR = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAND_DETECTOR_ID);
    }
}

static void setParam_Land_Detector_LNDMC_FFALL_TTRI(uint32_t value)
{
    _photonPx4_autogen._Land_Detector.LNDMC_FFALL_TTRI = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAND_DETECTOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_PUB_AGL_Z(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_PUB_AGL_Z = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_FLW_OFF_Z(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_FLW_OFF_Z = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_FLW_SCALE(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_FLW_SCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_FLW_GYRO_CMP(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_FLW_GYRO_CMP = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_FLW_QMIN(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_FLW_QMIN = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_SNR_Z(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_SNR_Z = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_SNR_OFF_Z(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_SNR_OFF_Z = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_LDR_Z(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_LDR_Z = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_LDR_OFF_Z(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_LDR_OFF_Z = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_ACC_XY(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_ACC_XY = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_ACC_Z(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_ACC_Z = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_BAR_Z(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_BAR_Z = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_GPS_ON(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_GPS_ON = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_GPS_DELAY(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_GPS_DELAY = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_GPS_XY(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_GPS_XY = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_GPS_Z(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_GPS_Z = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_GPS_VXY(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_GPS_VXY = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_GPS_VZ(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_GPS_VZ = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_EPH_MAX(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_EPH_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_EPV_MAX(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_EPV_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_VIS_DELAY(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_VIS_DELAY = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_VIS_XY(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_VIS_XY = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_VIS_Z(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_VIS_Z = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_VIS_ON(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_VIS_ON = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_VIC_P(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_VIC_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_PN_P(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_PN_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_PN_V(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_PN_V = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_PN_B(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_PN_B = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_PN_T(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_PN_T = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_T_MAX_GRADE(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_T_MAX_GRADE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_FGYRO_HP(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_FGYRO_HP = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_LAT(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_LAT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_LON(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_LON = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_X_LP(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_X_LP = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_VXY_PUB(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_VXY_PUB = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_Z_PUB(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_Z_PUB = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Local_Position_Estimator_LPE_LAND_Z(uint32_t value)
{
    _photonPx4_autogen._Local_Position_Estimator.LPE_LAND_Z = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_MAVLink_MAV_SYS_ID(uint32_t value)
{
    _photonPx4_autogen._MAVLink.MAV_SYS_ID = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MAVLINK_ID);
    }
}

static void setParam_MAVLink_MAV_COMP_ID(uint32_t value)
{
    _photonPx4_autogen._MAVLink.MAV_COMP_ID = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MAVLINK_ID);
    }
}

static void setParam_MAVLink_MAV_PROTO_VER(uint32_t value)
{
    _photonPx4_autogen._MAVLink.MAV_PROTO_VER = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MAVLINK_ID);
    }
}

static void setParam_MAVLink_MAV_RADIO_ID(uint32_t value)
{
    _photonPx4_autogen._MAVLink.MAV_RADIO_ID = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MAVLINK_ID);
    }
}

static void setParam_MAVLink_MAV_TYPE(uint32_t value)
{
    _photonPx4_autogen._MAVLink.MAV_TYPE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MAVLINK_ID);
    }
}

static void setParam_MAVLink_MAV_USEHILGPS(uint32_t value)
{
    _photonPx4_autogen._MAVLink.MAV_USEHILGPS = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MAVLINK_ID);
    }
}

static void setParam_MAVLink_MAV_FWDEXTSP(uint32_t value)
{
    _photonPx4_autogen._MAVLink.MAV_FWDEXTSP = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MAVLINK_ID);
    }
}

static void setParam_MAVLink_MAV_BROADCAST(uint32_t value)
{
    _photonPx4_autogen._MAVLink.MAV_BROADCAST = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MAVLINK_ID);
    }
}

static void setParam_MAVLink_MAV_TEST_PAR(uint32_t value)
{
    _photonPx4_autogen._MAVLink.MAV_TEST_PAR = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MAVLINK_ID);
    }
}

static void setParam_Mission_COM_OBL_ACT(uint32_t value)
{
    _photonPx4_autogen._Mission.COM_OBL_ACT = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
    }
}

static void setParam_Mission_COM_OBL_RC_ACT(uint32_t value)
{
    _photonPx4_autogen._Mission.COM_OBL_RC_ACT = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
    }
}

static void setParam_Mission_NAV_LOITER_RAD(uint32_t value)
{
    _photonPx4_autogen._Mission.NAV_LOITER_RAD = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
    }
}

static void setParam_Mission_NAV_ACC_RAD(uint32_t value)
{
    _photonPx4_autogen._Mission.NAV_ACC_RAD = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
    }
}

static void setParam_Mission_NAV_FW_ALT_RAD(uint32_t value)
{
    _photonPx4_autogen._Mission.NAV_FW_ALT_RAD = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
    }
}

static void setParam_Mission_NAV_MC_ALT_RAD(uint32_t value)
{
    _photonPx4_autogen._Mission.NAV_MC_ALT_RAD = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
    }
}

static void setParam_Mission_NAV_DLL_ACT(uint32_t value)
{
    _photonPx4_autogen._Mission.NAV_DLL_ACT = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
    }
}

static void setParam_Mission_NAV_RCL_ACT(uint32_t value)
{
    _photonPx4_autogen._Mission.NAV_RCL_ACT = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
    }
}

static void setParam_Mission_MIS_TAKEOFF_ALT(uint32_t value)
{
    _photonPx4_autogen._Mission.MIS_TAKEOFF_ALT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
    }
}

static void setParam_Mission_MIS_LTRMIN_ALT(uint32_t value)
{
    _photonPx4_autogen._Mission.MIS_LTRMIN_ALT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
    }
}

static void setParam_Mission_MIS_ONBOARD_EN(uint32_t value)
{
    _photonPx4_autogen._Mission.MIS_ONBOARD_EN = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
    }
}

static void setParam_Mission_MIS_DIST_1WP(uint32_t value)
{
    _photonPx4_autogen._Mission.MIS_DIST_1WP = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
    }
}

static void setParam_Mission_MIS_ALTMODE(uint32_t value)
{
    _photonPx4_autogen._Mission.MIS_ALTMODE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
    }
}

static void setParam_Mission_MIS_YAWMODE(uint32_t value)
{
    _photonPx4_autogen._Mission.MIS_YAWMODE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
    }
}

static void setParam_Mission_MIS_YAW_TMT(uint32_t value)
{
    _photonPx4_autogen._Mission.MIS_YAW_TMT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
    }
}

static void setParam_Mission_MIS_YAW_ERR(uint32_t value)
{
    _photonPx4_autogen._Mission.MIS_YAW_ERR = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
    }
}

static void setParam_Mission_VT_WV_LND_EN(uint32_t value)
{
    _photonPx4_autogen._Mission.VT_WV_LND_EN = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
    }
}

static void setParam_Mission_VT_WV_LTR_EN(uint32_t value)
{
    _photonPx4_autogen._Mission.VT_WV_LTR_EN = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_ROLL_TC(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_ROLL_TC = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_PITCH_TC(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_PITCH_TC = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_ROLL_P(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_ROLL_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_ROLLRATE_P(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_ROLLRATE_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_ROLLRATE_I(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_ROLLRATE_I = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_ROLLRATE_D(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_ROLLRATE_D = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_ROLLRATE_FF(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_ROLLRATE_FF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_PITCH_P(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_PITCH_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_PITCHRATE_P(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_PITCHRATE_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_PITCHRATE_I(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_PITCHRATE_I = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_PITCHRATE_D(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_PITCHRATE_D = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_PITCHRATE_FF(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_PITCHRATE_FF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_YAW_P(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_YAW_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_YAWRATE_P(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_YAWRATE_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_YAWRATE_I(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_YAWRATE_I = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_YAWRATE_D(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_YAWRATE_D = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_YAWRATE_FF(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_YAWRATE_FF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_YAW_FF(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_YAW_FF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_ROLLRATE_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_ROLLRATE_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_PITCHRATE_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_PITCHRATE_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_YAWRATE_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_YAWRATE_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_YAWRAUTO_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_YAWRAUTO_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_ACRO_R_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_ACRO_R_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_ACRO_P_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_ACRO_P_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_ACRO_Y_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_ACRO_Y_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_RATT_TH(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_RATT_TH = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_TPA_BREAK(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_TPA_BREAK = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_TPA_SLOPE(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_TPA_SLOPE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MC_BAT_SCALE_EN(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MC_BAT_SCALE_EN = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_THR_MIN(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_THR_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_THR_HOVER(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_THR_HOVER = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_ALTCTL_DZ(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_ALTCTL_DZ = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_ALTCTL_DY(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_ALTCTL_DY = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_THR_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_THR_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_MANTHR_MIN(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_MANTHR_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_MANTHR_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_MANTHR_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_Z_P(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_Z_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_Z_VEL_P(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_Z_VEL_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_Z_VEL_I(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_Z_VEL_I = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_Z_VEL_D(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_Z_VEL_D = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_Z_VEL_MAX_UP(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_Z_VEL_MAX_UP = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_Z_VEL_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_Z_VEL_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_Z_VEL_MAX_DN(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_Z_VEL_MAX_DN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_Z_FF(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_Z_FF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_XY_P(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_XY_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_XY_VEL_P(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_XY_VEL_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_XY_VEL_I(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_XY_VEL_I = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_XY_VEL_D(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_XY_VEL_D = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_XY_CRUISE(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_XY_CRUISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_XY_VEL_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_XY_VEL_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_XY_FF(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_XY_FF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_TILTMAX_AIR(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_TILTMAX_AIR = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_TILTMAX_LND(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_TILTMAX_LND = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_LAND_SPEED(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_LAND_SPEED = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_TKO_SPEED(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_TKO_SPEED = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_MAN_R_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_MAN_R_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_MAN_P_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_MAN_P_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_MAN_Y_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_MAN_Y_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_HOLD_XY_DZ(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_HOLD_XY_DZ = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_HOLD_MAX_XY(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_HOLD_MAX_XY = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_HOLD_MAX_Z(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_HOLD_MAX_Z = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_VELD_LP(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_VELD_LP = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_ACC_HOR_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_ACC_HOR_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPC_ALT_MODE(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPC_ALT_MODE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_PWM_Outputs_PWM_RATE(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_RATE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_PWM_MIN(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_MIN = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_PWM_MAX(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_MAX = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_PWM_DISARMED(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_DISARMED = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_PWM_AUX_MIN(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_AUX_MIN = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_PWM_AUX_MAX(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_AUX_MAX = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_PWM_AUX_DISARMED(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_AUX_DISARMED = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_MOT_SLEW_MAX(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.MOT_SLEW_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_PWM_MAIN_REV1(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_MAIN_REV1 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_PWM_MAIN_REV2(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_MAIN_REV2 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_PWM_MAIN_REV3(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_MAIN_REV3 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_PWM_MAIN_REV4(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_MAIN_REV4 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_PWM_MAIN_REV5(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_MAIN_REV5 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_PWM_MAIN_REV6(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_MAIN_REV6 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_PWM_MAIN_REV7(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_MAIN_REV7 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_PWM_MAIN_REV8(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_MAIN_REV8 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_PWM_SBUS_MODE(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_SBUS_MODE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_PWM_AUX_REV1(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_AUX_REV1 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_PWM_AUX_REV2(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_AUX_REV2 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_PWM_AUX_REV3(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_AUX_REV3 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_PWM_AUX_REV4(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_AUX_REV4 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_PWM_AUX_REV5(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_AUX_REV5 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_PWM_Outputs_PWM_AUX_REV6(uint32_t value)
{
    _photonPx4_autogen._PWM_Outputs.PWM_AUX_REV6 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
    }
}

static void setParam_Radio_Calibration_RC1_MIN(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC1_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC1_TRIM(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC1_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC1_MAX(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC1_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC1_REV(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC1_REV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC1_DZ(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC1_DZ = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC2_MIN(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC2_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC2_TRIM(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC2_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC2_MAX(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC2_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC2_REV(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC2_REV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC2_DZ(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC2_DZ = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC3_MIN(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC3_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC3_TRIM(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC3_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC3_MAX(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC3_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC3_REV(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC3_REV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC3_DZ(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC3_DZ = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC4_MIN(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC4_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC4_TRIM(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC4_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC4_MAX(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC4_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC4_REV(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC4_REV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC4_DZ(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC4_DZ = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC5_MIN(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC5_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC5_TRIM(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC5_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC5_MAX(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC5_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC5_REV(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC5_REV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC5_DZ(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC5_DZ = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC6_MIN(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC6_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC6_TRIM(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC6_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC6_MAX(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC6_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC6_REV(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC6_REV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC6_DZ(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC6_DZ = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC7_MIN(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC7_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC7_TRIM(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC7_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC7_MAX(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC7_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC7_REV(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC7_REV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC7_DZ(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC7_DZ = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC8_MIN(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC8_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC8_TRIM(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC8_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC8_MAX(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC8_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC8_REV(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC8_REV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC8_DZ(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC8_DZ = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC9_MIN(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC9_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC9_TRIM(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC9_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC9_MAX(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC9_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC9_REV(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC9_REV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC9_DZ(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC9_DZ = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC10_MIN(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC10_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC10_TRIM(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC10_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC10_MAX(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC10_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC10_REV(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC10_REV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC10_DZ(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC10_DZ = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC11_MIN(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC11_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC11_TRIM(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC11_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC11_MAX(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC11_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC11_REV(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC11_REV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC11_DZ(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC11_DZ = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC12_MIN(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC12_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC12_TRIM(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC12_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC12_MAX(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC12_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC12_REV(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC12_REV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC12_DZ(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC12_DZ = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC13_MIN(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC13_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC13_TRIM(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC13_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC13_MAX(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC13_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC13_REV(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC13_REV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC13_DZ(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC13_DZ = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC14_MIN(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC14_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC14_TRIM(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC14_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC14_MAX(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC14_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC14_REV(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC14_REV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC14_DZ(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC14_DZ = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC15_MIN(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC15_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC15_TRIM(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC15_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC15_MAX(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC15_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC15_REV(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC15_REV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC15_DZ(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC15_DZ = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC16_MIN(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC16_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC16_TRIM(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC16_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC16_MAX(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC16_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC16_REV(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC16_REV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC16_DZ(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC16_DZ = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC17_MIN(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC17_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC17_TRIM(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC17_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC17_MAX(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC17_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC17_REV(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC17_REV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC17_DZ(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC17_DZ = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC18_MIN(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC18_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC18_TRIM(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC18_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC18_MAX(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC18_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC18_REV(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC18_REV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC18_DZ(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC18_DZ = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC_DSM_BIND(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC_DSM_BIND = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC_CHAN_CNT(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC_CHAN_CNT = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC_TH_USER(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC_TH_USER = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC_MAP_ROLL(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC_MAP_ROLL = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC_MAP_PITCH(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC_MAP_PITCH = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC_MAP_THROTTLE(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC_MAP_THROTTLE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC_MAP_YAW(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC_MAP_YAW = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC_MAP_AUX1(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC_MAP_AUX1 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC_MAP_AUX2(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC_MAP_AUX2 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC_MAP_AUX3(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC_MAP_AUX3 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC_MAP_AUX4(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC_MAP_AUX4 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC_MAP_AUX5(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC_MAP_AUX5 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC_MAP_PARAM1(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC_MAP_PARAM1 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC_MAP_PARAM2(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC_MAP_PARAM2 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC_MAP_PARAM3(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC_MAP_PARAM3 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC_FAILS_THR(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC_FAILS_THR = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC_RSSI_PWM_CHAN(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC_RSSI_PWM_CHAN = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC_RSSI_PWM_MAX(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC_RSSI_PWM_MAX = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_RC_RSSI_PWM_MIN(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC_RSSI_PWM_MIN = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_TRIM_ROLL(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.TRIM_ROLL = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_TRIM_PITCH(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.TRIM_PITCH = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Calibration_TRIM_YAW(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.TRIM_YAW = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
    }
}

static void setParam_Radio_Signal_Loss_NAV_RCL_LT(uint32_t value)
{
    _photonPx4_autogen._Radio_Signal_Loss.NAV_RCL_LT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SIGNAL_LOSS_ID);
    }
}

static void setParam_Radio_Switches_RC_MAP_FLTMODE(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_MAP_FLTMODE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_MAP_MODE_SW(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_MAP_MODE_SW = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_MAP_RETURN_SW(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_MAP_RETURN_SW = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_MAP_RATT_SW(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_MAP_RATT_SW = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_MAP_POSCTL_SW(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_MAP_POSCTL_SW = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_MAP_LOITER_SW(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_MAP_LOITER_SW = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_MAP_ACRO_SW(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_MAP_ACRO_SW = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_MAP_OFFB_SW(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_MAP_OFFB_SW = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_MAP_KILL_SW(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_MAP_KILL_SW = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_MAP_FLAPS(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_MAP_FLAPS = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_MAP_TRANS_SW(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_MAP_TRANS_SW = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_MAP_GEAR_SW(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_MAP_GEAR_SW = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_ASSIST_TH(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_ASSIST_TH = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_AUTO_TH(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_AUTO_TH = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_RATT_TH(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_RATT_TH = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_POSCTL_TH(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_POSCTL_TH = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_RETURN_TH(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_RETURN_TH = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_LOITER_TH(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_LOITER_TH = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_ACRO_TH(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_ACRO_TH = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_OFFB_TH(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_OFFB_TH = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_KILLSWITCH_TH(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_KILLSWITCH_TH = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_TRANS_TH(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_TRANS_TH = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Radio_Switches_RC_GEAR_TH(uint32_t value)
{
    _photonPx4_autogen._Radio_Switches.RC_GEAR_TH = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
    }
}

static void setParam_Return_To_Land_RTL_RETURN_ALT(uint32_t value)
{
    _photonPx4_autogen._Return_To_Land.RTL_RETURN_ALT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RETURN_TO_LAND_ID);
    }
}

static void setParam_Return_To_Land_RTL_DESCEND_ALT(uint32_t value)
{
    _photonPx4_autogen._Return_To_Land.RTL_DESCEND_ALT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RETURN_TO_LAND_ID);
    }
}

static void setParam_Return_To_Land_RTL_LAND_DELAY(uint32_t value)
{
    _photonPx4_autogen._Return_To_Land.RTL_LAND_DELAY = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RETURN_TO_LAND_ID);
    }
}

static void setParam_Return_To_Land_RTL_MIN_DIST(uint32_t value)
{
    _photonPx4_autogen._Return_To_Land.RTL_MIN_DIST = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RETURN_TO_LAND_ID);
    }
}

static void setParam_SD_Logging_SDLOG_UTC_OFFSET(uint32_t value)
{
    _photonPx4_autogen._SD_Logging.SDLOG_UTC_OFFSET = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SD_LOGGING_ID);
    }
}

static void setParam_SD_Logging_SDLOG_MODE(uint32_t value)
{
    _photonPx4_autogen._SD_Logging.SDLOG_MODE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SD_LOGGING_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO0_ID(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO0_ID = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO0_XOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO0_XOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO0_YOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO0_YOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO0_ZOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO0_ZOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO0_XSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO0_XSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO0_YSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO0_YSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO0_ZSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO0_ZSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG0_ID(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG0_ID = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG0_ROT(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG0_ROT = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG0_XOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG0_XOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG0_YOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG0_YOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG0_ZOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG0_ZOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG0_XSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG0_XSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG0_YSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG0_YSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG0_ZSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG0_ZSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC0_ID(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC0_ID = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC0_XOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC0_XOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC0_YOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC0_YOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC0_ZOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC0_ZOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC0_XSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC0_XSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC0_YSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC0_YSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC0_ZSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC0_ZSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO1_ID(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO1_ID = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO1_XOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO1_XOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO1_YOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO1_YOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO1_ZOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO1_ZOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO1_XSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO1_XSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO1_YSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO1_YSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO1_ZSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO1_ZSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG1_ID(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG1_ID = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG1_ROT(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG1_ROT = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG1_XOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG1_XOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG1_YOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG1_YOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG1_ZOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG1_ZOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG1_XSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG1_XSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG1_YSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG1_YSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG1_ZSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG1_ZSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC1_ID(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC1_ID = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC1_XOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC1_XOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC1_YOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC1_YOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC1_ZOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC1_ZOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC1_XSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC1_XSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC1_YSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC1_YSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC1_ZSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC1_ZSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO2_ID(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO2_ID = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO2_XOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO2_XOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO2_YOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO2_YOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO2_ZOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO2_ZOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO2_XSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO2_XSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO2_YSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO2_YSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO2_ZSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO2_ZSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG2_ID(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG2_ID = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG2_ROT(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG2_ROT = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG2_XOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG2_XOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG2_YOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG2_YOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG2_ZOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG2_ZOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG2_XSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG2_XSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG2_YSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG2_YSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG2_ZSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG2_ZSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC2_ID(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC2_ID = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC2_XOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC2_XOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC2_YOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC2_YOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC2_ZOFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC2_ZOFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC2_XSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC2_XSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC2_YSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC2_YSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC2_ZSCALE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC2_ZSCALE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_ACC_PRIME(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_ACC_PRIME = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_GYRO_PRIME(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_GYRO_PRIME = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG_PRIME(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG_PRIME = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_MAG_SIDES(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_MAG_SIDES = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_BARO_PRIME(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_BARO_PRIME = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_SENS_DPRES_OFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.SENS_DPRES_OFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_SENS_DPRES_ANSC(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.SENS_DPRES_ANSC = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_SENS_BARO_QNH(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.SENS_BARO_QNH = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_SENS_BOARD_ROT(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.SENS_BOARD_ROT = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_SENS_BOARD_Y_OFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.SENS_BOARD_Y_OFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_SENS_BOARD_X_OFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.SENS_BOARD_X_OFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_SENS_BOARD_Z_OFF(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.SENS_BOARD_Z_OFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Enable_SENS_EN_LL40LS(uint32_t value)
{
    _photonPx4_autogen._Sensor_Enable.SENS_EN_LL40LS = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_ENABLE_ID);
    }
}

static void setParam_Sensor_Enable_SENS_EN_SF0X(uint32_t value)
{
    _photonPx4_autogen._Sensor_Enable.SENS_EN_SF0X = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_ENABLE_ID);
    }
}

static void setParam_Sensor_Enable_SENS_EN_MB12XX(uint32_t value)
{
    _photonPx4_autogen._Sensor_Enable.SENS_EN_MB12XX = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_ENABLE_ID);
    }
}

static void setParam_Sensor_Enable_SENS_EN_TRONE(uint32_t value)
{
    _photonPx4_autogen._Sensor_Enable.SENS_EN_TRONE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_ENABLE_ID);
    }
}

static void setParam_Sensor_Enable_SENS_EN_SF1XX(uint32_t value)
{
    _photonPx4_autogen._Sensor_Enable.SENS_EN_SF1XX = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_ENABLE_ID);
    }
}

static void setParam_Sensor_Enable_SENS_EN_THERMAL(uint32_t value)
{
    _photonPx4_autogen._Sensor_Enable.SENS_EN_THERMAL = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_ENABLE_ID);
    }
}

static void setParam_System_SYS_AUTOSTART(uint32_t value)
{
    _photonPx4_autogen._System.SYS_AUTOSTART = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSTEM_ID);
    }
}

static void setParam_System_SYS_AUTOCONFIG(uint32_t value)
{
    _photonPx4_autogen._System.SYS_AUTOCONFIG = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSTEM_ID);
    }
}

static void setParam_System_SYS_USE_IO(uint32_t value)
{
    _photonPx4_autogen._System.SYS_USE_IO = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSTEM_ID);
    }
}

static void setParam_System_SYS_RESTART_TYPE(uint32_t value)
{
    _photonPx4_autogen._System.SYS_RESTART_TYPE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSTEM_ID);
    }
}

static void setParam_System_SYS_MC_EST_GROUP(uint32_t value)
{
    _photonPx4_autogen._System.SYS_MC_EST_GROUP = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSTEM_ID);
    }
}

static void setParam_System_SYS_COMPANION(uint32_t value)
{
    _photonPx4_autogen._System.SYS_COMPANION = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSTEM_ID);
    }
}

static void setParam_System_SYS_PARAM_VER(uint32_t value)
{
    _photonPx4_autogen._System.SYS_PARAM_VER = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSTEM_ID);
    }
}

static void setParam_System_SYS_LOGGER(uint32_t value)
{
    _photonPx4_autogen._System.SYS_LOGGER = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSTEM_ID);
    }
}

static void setParam_UAVCAN_UAVCAN_ENABLE(uint32_t value)
{
    _photonPx4_autogen._UAVCAN.UAVCAN_ENABLE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_ID);
    }
}

static void setParam_Miscellaneous_RC_MAP_FAILSAFE(uint32_t value)
{
    _photonPx4_autogen._Miscellaneous.RC_MAP_FAILSAFE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
    }
}

static void setParam_Miscellaneous_COM_FLTMODE1(uint32_t value)
{
    _photonPx4_autogen._Miscellaneous.COM_FLTMODE1 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
    }
}

static void setParam_Miscellaneous_COM_FLTMODE2(uint32_t value)
{
    _photonPx4_autogen._Miscellaneous.COM_FLTMODE2 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
    }
}

static void setParam_Miscellaneous_COM_FLTMODE3(uint32_t value)
{
    _photonPx4_autogen._Miscellaneous.COM_FLTMODE3 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
    }
}

static void setParam_Miscellaneous_COM_FLTMODE4(uint32_t value)
{
    _photonPx4_autogen._Miscellaneous.COM_FLTMODE4 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
    }
}

static void setParam_Miscellaneous_COM_FLTMODE5(uint32_t value)
{
    _photonPx4_autogen._Miscellaneous.COM_FLTMODE5 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
    }
}

static void setParam_Miscellaneous_COM_FLTMODE6(uint32_t value)
{
    _photonPx4_autogen._Miscellaneous.COM_FLTMODE6 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
    }
}

void PhotonPx4_autogen_Init() 
{
    _photonPx4_autogen.inited = false;
    PhotonPx4_autogen_InitParam("ATT_W_ACC", setParam_Attitude_Q_estimator_ATT_W_ACC);
    PhotonPx4_autogen_InitParam("ATT_W_MAG", setParam_Attitude_Q_estimator_ATT_W_MAG);
    PhotonPx4_autogen_InitParam("ATT_W_EXT_HDG", setParam_Attitude_Q_estimator_ATT_W_EXT_HDG);
    PhotonPx4_autogen_InitParam("ATT_W_GYRO_BIAS", setParam_Attitude_Q_estimator_ATT_W_GYRO_BIAS);
    PhotonPx4_autogen_InitParam("ATT_MAG_DECL", setParam_Attitude_Q_estimator_ATT_MAG_DECL);
    PhotonPx4_autogen_InitParam("ATT_MAG_DECL_A", setParam_Attitude_Q_estimator_ATT_MAG_DECL_A);
    PhotonPx4_autogen_InitParam("ATT_EXT_HDG_M", setParam_Attitude_Q_estimator_ATT_EXT_HDG_M);
    PhotonPx4_autogen_InitParam("ATT_ACC_COMP", setParam_Attitude_Q_estimator_ATT_ACC_COMP);
    PhotonPx4_autogen_InitParam("ATT_BIAS_MAX", setParam_Attitude_Q_estimator_ATT_BIAS_MAX);
    PhotonPx4_autogen_InitParam("ATT_VIBE_THRESH", setParam_Attitude_Q_estimator_ATT_VIBE_THRESH);
    PhotonPx4_autogen_InitParam("BAT_V_EMPTY", setParam_Battery_Calibration_BAT_V_EMPTY);
    PhotonPx4_autogen_InitParam("BAT_V_CHARGED", setParam_Battery_Calibration_BAT_V_CHARGED);
    PhotonPx4_autogen_InitParam("BAT_LOW_THR", setParam_Battery_Calibration_BAT_LOW_THR);
    PhotonPx4_autogen_InitParam("BAT_CRIT_THR", setParam_Battery_Calibration_BAT_CRIT_THR);
    PhotonPx4_autogen_InitParam("BAT_V_LOAD_DROP", setParam_Battery_Calibration_BAT_V_LOAD_DROP);
    PhotonPx4_autogen_InitParam("BAT_R_INTERNAL", setParam_Battery_Calibration_BAT_R_INTERNAL);
    PhotonPx4_autogen_InitParam("BAT_N_CELLS", setParam_Battery_Calibration_BAT_N_CELLS);
    PhotonPx4_autogen_InitParam("BAT_CAPACITY", setParam_Battery_Calibration_BAT_CAPACITY);
    PhotonPx4_autogen_InitParam("BAT_V_SCALE_IO", setParam_Battery_Calibration_BAT_V_SCALE_IO);
    PhotonPx4_autogen_InitParam("BAT_CNT_V_VOLT", setParam_Battery_Calibration_BAT_CNT_V_VOLT);
    PhotonPx4_autogen_InitParam("BAT_CNT_V_CURR", setParam_Battery_Calibration_BAT_CNT_V_CURR);
    PhotonPx4_autogen_InitParam("BAT_V_OFFS_CURR", setParam_Battery_Calibration_BAT_V_OFFS_CURR);
    PhotonPx4_autogen_InitParam("BAT_V_DIV", setParam_Battery_Calibration_BAT_V_DIV);
    PhotonPx4_autogen_InitParam("BAT_A_PER_V", setParam_Battery_Calibration_BAT_A_PER_V);
    PhotonPx4_autogen_InitParam("BAT_SOURCE", setParam_Battery_Calibration_BAT_SOURCE);
    PhotonPx4_autogen_InitParam("TRIG_MODE", setParam_Camera_trigger_TRIG_MODE);
    PhotonPx4_autogen_InitParam("CBRK_SUPPLY_CHK", setParam_Circuit_Breaker_CBRK_SUPPLY_CHK);
    PhotonPx4_autogen_InitParam("CBRK_RATE_CTRL", setParam_Circuit_Breaker_CBRK_RATE_CTRL);
    PhotonPx4_autogen_InitParam("CBRK_IO_SAFETY", setParam_Circuit_Breaker_CBRK_IO_SAFETY);
    PhotonPx4_autogen_InitParam("CBRK_AIRSPD_CHK", setParam_Circuit_Breaker_CBRK_AIRSPD_CHK);
    PhotonPx4_autogen_InitParam("CBRK_FLIGHTTERM", setParam_Circuit_Breaker_CBRK_FLIGHTTERM);
    PhotonPx4_autogen_InitParam("CBRK_ENGINEFAIL", setParam_Circuit_Breaker_CBRK_ENGINEFAIL);
    PhotonPx4_autogen_InitParam("CBRK_GPSFAIL", setParam_Circuit_Breaker_CBRK_GPSFAIL);
    PhotonPx4_autogen_InitParam("CBRK_BUZZER", setParam_Circuit_Breaker_CBRK_BUZZER);
    PhotonPx4_autogen_InitParam("CBRK_USB_CHK", setParam_Circuit_Breaker_CBRK_USB_CHK);
    PhotonPx4_autogen_InitParam("COM_DL_LOSS_T", setParam_Commander_COM_DL_LOSS_T);
    PhotonPx4_autogen_InitParam("COM_DL_REG_T", setParam_Commander_COM_DL_REG_T);
    PhotonPx4_autogen_InitParam("COM_EF_THROT", setParam_Commander_COM_EF_THROT);
    PhotonPx4_autogen_InitParam("COM_EF_C2T", setParam_Commander_COM_EF_C2T);
    PhotonPx4_autogen_InitParam("COM_EF_TIME", setParam_Commander_COM_EF_TIME);
    PhotonPx4_autogen_InitParam("COM_RC_LOSS_T", setParam_Commander_COM_RC_LOSS_T);
    PhotonPx4_autogen_InitParam("COM_HOME_H_T", setParam_Commander_COM_HOME_H_T);
    PhotonPx4_autogen_InitParam("COM_HOME_V_T", setParam_Commander_COM_HOME_V_T);
    PhotonPx4_autogen_InitParam("COM_AUTOS_PAR", setParam_Commander_COM_AUTOS_PAR);
    PhotonPx4_autogen_InitParam("COM_RC_IN_MODE", setParam_Commander_COM_RC_IN_MODE);
    PhotonPx4_autogen_InitParam("COM_RC_ARM_HYST", setParam_Commander_COM_RC_ARM_HYST);
    PhotonPx4_autogen_InitParam("COM_DISARM_LAND", setParam_Commander_COM_DISARM_LAND);
    PhotonPx4_autogen_InitParam("COM_ARM_WO_GPS", setParam_Commander_COM_ARM_WO_GPS);
    PhotonPx4_autogen_InitParam("COM_LOW_BAT_ACT", setParam_Commander_COM_LOW_BAT_ACT);
    PhotonPx4_autogen_InitParam("COM_OF_LOSS_T", setParam_Commander_COM_OF_LOSS_T);
    PhotonPx4_autogen_InitParam("COM_ARM_EKF_POS", setParam_Commander_COM_ARM_EKF_POS);
    PhotonPx4_autogen_InitParam("COM_ARM_EKF_VEL", setParam_Commander_COM_ARM_EKF_VEL);
    PhotonPx4_autogen_InitParam("COM_ARM_EKF_HGT", setParam_Commander_COM_ARM_EKF_HGT);
    PhotonPx4_autogen_InitParam("COM_ARM_EKF_YAW", setParam_Commander_COM_ARM_EKF_YAW);
    PhotonPx4_autogen_InitParam("COM_ARM_EKF_AB", setParam_Commander_COM_ARM_EKF_AB);
    PhotonPx4_autogen_InitParam("COM_ARM_EKF_GB", setParam_Commander_COM_ARM_EKF_GB);
    PhotonPx4_autogen_InitParam("COM_ARM_IMU_ACC", setParam_Commander_COM_ARM_IMU_ACC);
    PhotonPx4_autogen_InitParam("COM_ARM_IMU_GYR", setParam_Commander_COM_ARM_IMU_GYR);
    PhotonPx4_autogen_InitParam("NAV_AH_LAT", setParam_Data_Link_Loss_NAV_AH_LAT);
    PhotonPx4_autogen_InitParam("NAV_AH_LON", setParam_Data_Link_Loss_NAV_AH_LON);
    PhotonPx4_autogen_InitParam("NAV_AH_ALT", setParam_Data_Link_Loss_NAV_AH_ALT);
    PhotonPx4_autogen_InitParam("NAV_DLL_CH_T", setParam_Data_Link_Loss_NAV_DLL_CH_T);
    PhotonPx4_autogen_InitParam("NAV_DLL_CH_LAT", setParam_Data_Link_Loss_NAV_DLL_CH_LAT);
    PhotonPx4_autogen_InitParam("NAV_DLL_CH_LON", setParam_Data_Link_Loss_NAV_DLL_CH_LON);
    PhotonPx4_autogen_InitParam("NAV_DLL_CH_ALT", setParam_Data_Link_Loss_NAV_DLL_CH_ALT);
    PhotonPx4_autogen_InitParam("NAV_DLL_AH_T", setParam_Data_Link_Loss_NAV_DLL_AH_T);
    PhotonPx4_autogen_InitParam("NAV_DLL_N", setParam_Data_Link_Loss_NAV_DLL_N);
    PhotonPx4_autogen_InitParam("NAV_DLL_CHSK", setParam_Data_Link_Loss_NAV_DLL_CHSK);
    PhotonPx4_autogen_InitParam("FW_AIRSPD_TRIM", setParam_FW_TECS_FW_AIRSPD_TRIM);
    PhotonPx4_autogen_InitParam("NAV_MIN_FT_HT", setParam_Follow_target_NAV_MIN_FT_HT);
    PhotonPx4_autogen_InitParam("NAV_FT_DST", setParam_Follow_target_NAV_FT_DST);
    PhotonPx4_autogen_InitParam("NAV_FT_FS", setParam_Follow_target_NAV_FT_FS);
    PhotonPx4_autogen_InitParam("NAV_FT_RS", setParam_Follow_target_NAV_FT_RS);
    PhotonPx4_autogen_InitParam("GPS_DUMP_COMM", setParam_GPS_GPS_DUMP_COMM);
    PhotonPx4_autogen_InitParam("NAV_GPSF_LT", setParam_GPS_Failure_Navigation_NAV_GPSF_LT);
    PhotonPx4_autogen_InitParam("NAV_GPSF_R", setParam_GPS_Failure_Navigation_NAV_GPSF_R);
    PhotonPx4_autogen_InitParam("NAV_GPSF_P", setParam_GPS_Failure_Navigation_NAV_GPSF_P);
    PhotonPx4_autogen_InitParam("NAV_GPSF_TR", setParam_GPS_Failure_Navigation_NAV_GPSF_TR);
    PhotonPx4_autogen_InitParam("GF_ACTION", setParam_Geofence_GF_ACTION);
    PhotonPx4_autogen_InitParam("GF_ALTMODE", setParam_Geofence_GF_ALTMODE);
    PhotonPx4_autogen_InitParam("GF_SOURCE", setParam_Geofence_GF_SOURCE);
    PhotonPx4_autogen_InitParam("GF_COUNT", setParam_Geofence_GF_COUNT);
    PhotonPx4_autogen_InitParam("GF_MAX_HOR_DIST", setParam_Geofence_GF_MAX_HOR_DIST);
    PhotonPx4_autogen_InitParam("GF_MAX_VER_DIST", setParam_Geofence_GF_MAX_VER_DIST);
    PhotonPx4_autogen_InitParam("LNDMC_Z_VEL_MAX", setParam_Land_Detector_LNDMC_Z_VEL_MAX);
    PhotonPx4_autogen_InitParam("LNDMC_XY_VEL_MAX", setParam_Land_Detector_LNDMC_XY_VEL_MAX);
    PhotonPx4_autogen_InitParam("LNDMC_ROT_MAX", setParam_Land_Detector_LNDMC_ROT_MAX);
    PhotonPx4_autogen_InitParam("LNDMC_FFALL_THR", setParam_Land_Detector_LNDMC_FFALL_THR);
    PhotonPx4_autogen_InitParam("LNDMC_FFALL_TTRI", setParam_Land_Detector_LNDMC_FFALL_TTRI);
    PhotonPx4_autogen_InitParam("LPE_PUB_AGL_Z", setParam_Local_Position_Estimator_LPE_PUB_AGL_Z);
    PhotonPx4_autogen_InitParam("LPE_FLW_OFF_Z", setParam_Local_Position_Estimator_LPE_FLW_OFF_Z);
    PhotonPx4_autogen_InitParam("LPE_FLW_SCALE", setParam_Local_Position_Estimator_LPE_FLW_SCALE);
    PhotonPx4_autogen_InitParam("LPE_FLW_GYRO_CMP", setParam_Local_Position_Estimator_LPE_FLW_GYRO_CMP);
    PhotonPx4_autogen_InitParam("LPE_FLW_QMIN", setParam_Local_Position_Estimator_LPE_FLW_QMIN);
    PhotonPx4_autogen_InitParam("LPE_SNR_Z", setParam_Local_Position_Estimator_LPE_SNR_Z);
    PhotonPx4_autogen_InitParam("LPE_SNR_OFF_Z", setParam_Local_Position_Estimator_LPE_SNR_OFF_Z);
    PhotonPx4_autogen_InitParam("LPE_LDR_Z", setParam_Local_Position_Estimator_LPE_LDR_Z);
    PhotonPx4_autogen_InitParam("LPE_LDR_OFF_Z", setParam_Local_Position_Estimator_LPE_LDR_OFF_Z);
    PhotonPx4_autogen_InitParam("LPE_ACC_XY", setParam_Local_Position_Estimator_LPE_ACC_XY);
    PhotonPx4_autogen_InitParam("LPE_ACC_Z", setParam_Local_Position_Estimator_LPE_ACC_Z);
    PhotonPx4_autogen_InitParam("LPE_BAR_Z", setParam_Local_Position_Estimator_LPE_BAR_Z);
    PhotonPx4_autogen_InitParam("LPE_GPS_ON", setParam_Local_Position_Estimator_LPE_GPS_ON);
    PhotonPx4_autogen_InitParam("LPE_GPS_DELAY", setParam_Local_Position_Estimator_LPE_GPS_DELAY);
    PhotonPx4_autogen_InitParam("LPE_GPS_XY", setParam_Local_Position_Estimator_LPE_GPS_XY);
    PhotonPx4_autogen_InitParam("LPE_GPS_Z", setParam_Local_Position_Estimator_LPE_GPS_Z);
    PhotonPx4_autogen_InitParam("LPE_GPS_VXY", setParam_Local_Position_Estimator_LPE_GPS_VXY);
    PhotonPx4_autogen_InitParam("LPE_GPS_VZ", setParam_Local_Position_Estimator_LPE_GPS_VZ);
    PhotonPx4_autogen_InitParam("LPE_EPH_MAX", setParam_Local_Position_Estimator_LPE_EPH_MAX);
    PhotonPx4_autogen_InitParam("LPE_EPV_MAX", setParam_Local_Position_Estimator_LPE_EPV_MAX);
    PhotonPx4_autogen_InitParam("LPE_VIS_DELAY", setParam_Local_Position_Estimator_LPE_VIS_DELAY);
    PhotonPx4_autogen_InitParam("LPE_VIS_XY", setParam_Local_Position_Estimator_LPE_VIS_XY);
    PhotonPx4_autogen_InitParam("LPE_VIS_Z", setParam_Local_Position_Estimator_LPE_VIS_Z);
    PhotonPx4_autogen_InitParam("LPE_VIS_ON", setParam_Local_Position_Estimator_LPE_VIS_ON);
    PhotonPx4_autogen_InitParam("LPE_VIC_P", setParam_Local_Position_Estimator_LPE_VIC_P);
    PhotonPx4_autogen_InitParam("LPE_PN_P", setParam_Local_Position_Estimator_LPE_PN_P);
    PhotonPx4_autogen_InitParam("LPE_PN_V", setParam_Local_Position_Estimator_LPE_PN_V);
    PhotonPx4_autogen_InitParam("LPE_PN_B", setParam_Local_Position_Estimator_LPE_PN_B);
    PhotonPx4_autogen_InitParam("LPE_PN_T", setParam_Local_Position_Estimator_LPE_PN_T);
    PhotonPx4_autogen_InitParam("LPE_T_MAX_GRADE", setParam_Local_Position_Estimator_LPE_T_MAX_GRADE);
    PhotonPx4_autogen_InitParam("LPE_FGYRO_HP", setParam_Local_Position_Estimator_LPE_FGYRO_HP);
    PhotonPx4_autogen_InitParam("LPE_LAT", setParam_Local_Position_Estimator_LPE_LAT);
    PhotonPx4_autogen_InitParam("LPE_LON", setParam_Local_Position_Estimator_LPE_LON);
    PhotonPx4_autogen_InitParam("LPE_X_LP", setParam_Local_Position_Estimator_LPE_X_LP);
    PhotonPx4_autogen_InitParam("LPE_VXY_PUB", setParam_Local_Position_Estimator_LPE_VXY_PUB);
    PhotonPx4_autogen_InitParam("LPE_Z_PUB", setParam_Local_Position_Estimator_LPE_Z_PUB);
    PhotonPx4_autogen_InitParam("LPE_LAND_Z", setParam_Local_Position_Estimator_LPE_LAND_Z);
    PhotonPx4_autogen_InitParam("MAV_SYS_ID", setParam_MAVLink_MAV_SYS_ID);
    PhotonPx4_autogen_InitParam("MAV_COMP_ID", setParam_MAVLink_MAV_COMP_ID);
    PhotonPx4_autogen_InitParam("MAV_PROTO_VER", setParam_MAVLink_MAV_PROTO_VER);
    PhotonPx4_autogen_InitParam("MAV_RADIO_ID", setParam_MAVLink_MAV_RADIO_ID);
    PhotonPx4_autogen_InitParam("MAV_TYPE", setParam_MAVLink_MAV_TYPE);
    PhotonPx4_autogen_InitParam("MAV_USEHILGPS", setParam_MAVLink_MAV_USEHILGPS);
    PhotonPx4_autogen_InitParam("MAV_FWDEXTSP", setParam_MAVLink_MAV_FWDEXTSP);
    PhotonPx4_autogen_InitParam("MAV_BROADCAST", setParam_MAVLink_MAV_BROADCAST);
    PhotonPx4_autogen_InitParam("MAV_TEST_PAR", setParam_MAVLink_MAV_TEST_PAR);
    PhotonPx4_autogen_InitParam("COM_OBL_ACT", setParam_Mission_COM_OBL_ACT);
    PhotonPx4_autogen_InitParam("COM_OBL_RC_ACT", setParam_Mission_COM_OBL_RC_ACT);
    PhotonPx4_autogen_InitParam("NAV_LOITER_RAD", setParam_Mission_NAV_LOITER_RAD);
    PhotonPx4_autogen_InitParam("NAV_ACC_RAD", setParam_Mission_NAV_ACC_RAD);
    PhotonPx4_autogen_InitParam("NAV_FW_ALT_RAD", setParam_Mission_NAV_FW_ALT_RAD);
    PhotonPx4_autogen_InitParam("NAV_MC_ALT_RAD", setParam_Mission_NAV_MC_ALT_RAD);
    PhotonPx4_autogen_InitParam("NAV_DLL_ACT", setParam_Mission_NAV_DLL_ACT);
    PhotonPx4_autogen_InitParam("NAV_RCL_ACT", setParam_Mission_NAV_RCL_ACT);
    PhotonPx4_autogen_InitParam("MIS_TAKEOFF_ALT", setParam_Mission_MIS_TAKEOFF_ALT);
    PhotonPx4_autogen_InitParam("MIS_LTRMIN_ALT", setParam_Mission_MIS_LTRMIN_ALT);
    PhotonPx4_autogen_InitParam("MIS_ONBOARD_EN", setParam_Mission_MIS_ONBOARD_EN);
    PhotonPx4_autogen_InitParam("MIS_DIST_1WP", setParam_Mission_MIS_DIST_1WP);
    PhotonPx4_autogen_InitParam("MIS_ALTMODE", setParam_Mission_MIS_ALTMODE);
    PhotonPx4_autogen_InitParam("MIS_YAWMODE", setParam_Mission_MIS_YAWMODE);
    PhotonPx4_autogen_InitParam("MIS_YAW_TMT", setParam_Mission_MIS_YAW_TMT);
    PhotonPx4_autogen_InitParam("MIS_YAW_ERR", setParam_Mission_MIS_YAW_ERR);
    PhotonPx4_autogen_InitParam("VT_WV_LND_EN", setParam_Mission_VT_WV_LND_EN);
    PhotonPx4_autogen_InitParam("VT_WV_LTR_EN", setParam_Mission_VT_WV_LTR_EN);
    PhotonPx4_autogen_InitParam("MC_ROLL_TC", setParam_Multicopter_Attitude_Control_MC_ROLL_TC);
    PhotonPx4_autogen_InitParam("MC_PITCH_TC", setParam_Multicopter_Attitude_Control_MC_PITCH_TC);
    PhotonPx4_autogen_InitParam("MC_ROLL_P", setParam_Multicopter_Attitude_Control_MC_ROLL_P);
    PhotonPx4_autogen_InitParam("MC_ROLLRATE_P", setParam_Multicopter_Attitude_Control_MC_ROLLRATE_P);
    PhotonPx4_autogen_InitParam("MC_ROLLRATE_I", setParam_Multicopter_Attitude_Control_MC_ROLLRATE_I);
    PhotonPx4_autogen_InitParam("MC_ROLLRATE_D", setParam_Multicopter_Attitude_Control_MC_ROLLRATE_D);
    PhotonPx4_autogen_InitParam("MC_ROLLRATE_FF", setParam_Multicopter_Attitude_Control_MC_ROLLRATE_FF);
    PhotonPx4_autogen_InitParam("MC_PITCH_P", setParam_Multicopter_Attitude_Control_MC_PITCH_P);
    PhotonPx4_autogen_InitParam("MC_PITCHRATE_P", setParam_Multicopter_Attitude_Control_MC_PITCHRATE_P);
    PhotonPx4_autogen_InitParam("MC_PITCHRATE_I", setParam_Multicopter_Attitude_Control_MC_PITCHRATE_I);
    PhotonPx4_autogen_InitParam("MC_PITCHRATE_D", setParam_Multicopter_Attitude_Control_MC_PITCHRATE_D);
    PhotonPx4_autogen_InitParam("MC_PITCHRATE_FF", setParam_Multicopter_Attitude_Control_MC_PITCHRATE_FF);
    PhotonPx4_autogen_InitParam("MC_YAW_P", setParam_Multicopter_Attitude_Control_MC_YAW_P);
    PhotonPx4_autogen_InitParam("MC_YAWRATE_P", setParam_Multicopter_Attitude_Control_MC_YAWRATE_P);
    PhotonPx4_autogen_InitParam("MC_YAWRATE_I", setParam_Multicopter_Attitude_Control_MC_YAWRATE_I);
    PhotonPx4_autogen_InitParam("MC_YAWRATE_D", setParam_Multicopter_Attitude_Control_MC_YAWRATE_D);
    PhotonPx4_autogen_InitParam("MC_YAWRATE_FF", setParam_Multicopter_Attitude_Control_MC_YAWRATE_FF);
    PhotonPx4_autogen_InitParam("MC_YAW_FF", setParam_Multicopter_Attitude_Control_MC_YAW_FF);
    PhotonPx4_autogen_InitParam("MC_ROLLRATE_MAX", setParam_Multicopter_Attitude_Control_MC_ROLLRATE_MAX);
    PhotonPx4_autogen_InitParam("MC_PITCHRATE_MAX", setParam_Multicopter_Attitude_Control_MC_PITCHRATE_MAX);
    PhotonPx4_autogen_InitParam("MC_YAWRATE_MAX", setParam_Multicopter_Attitude_Control_MC_YAWRATE_MAX);
    PhotonPx4_autogen_InitParam("MC_YAWRAUTO_MAX", setParam_Multicopter_Attitude_Control_MC_YAWRAUTO_MAX);
    PhotonPx4_autogen_InitParam("MC_ACRO_R_MAX", setParam_Multicopter_Attitude_Control_MC_ACRO_R_MAX);
    PhotonPx4_autogen_InitParam("MC_ACRO_P_MAX", setParam_Multicopter_Attitude_Control_MC_ACRO_P_MAX);
    PhotonPx4_autogen_InitParam("MC_ACRO_Y_MAX", setParam_Multicopter_Attitude_Control_MC_ACRO_Y_MAX);
    PhotonPx4_autogen_InitParam("MC_RATT_TH", setParam_Multicopter_Attitude_Control_MC_RATT_TH);
    PhotonPx4_autogen_InitParam("MC_TPA_BREAK", setParam_Multicopter_Attitude_Control_MC_TPA_BREAK);
    PhotonPx4_autogen_InitParam("MC_TPA_SLOPE", setParam_Multicopter_Attitude_Control_MC_TPA_SLOPE);
    PhotonPx4_autogen_InitParam("MC_BAT_SCALE_EN", setParam_Multicopter_Attitude_Control_MC_BAT_SCALE_EN);
    PhotonPx4_autogen_InitParam("MPC_THR_MIN", setParam_Multicopter_Position_Control_MPC_THR_MIN);
    PhotonPx4_autogen_InitParam("MPC_THR_HOVER", setParam_Multicopter_Position_Control_MPC_THR_HOVER);
    PhotonPx4_autogen_InitParam("MPC_ALTCTL_DZ", setParam_Multicopter_Position_Control_MPC_ALTCTL_DZ);
    PhotonPx4_autogen_InitParam("MPC_ALTCTL_DY", setParam_Multicopter_Position_Control_MPC_ALTCTL_DY);
    PhotonPx4_autogen_InitParam("MPC_THR_MAX", setParam_Multicopter_Position_Control_MPC_THR_MAX);
    PhotonPx4_autogen_InitParam("MPC_MANTHR_MIN", setParam_Multicopter_Position_Control_MPC_MANTHR_MIN);
    PhotonPx4_autogen_InitParam("MPC_MANTHR_MAX", setParam_Multicopter_Position_Control_MPC_MANTHR_MAX);
    PhotonPx4_autogen_InitParam("MPC_Z_P", setParam_Multicopter_Position_Control_MPC_Z_P);
    PhotonPx4_autogen_InitParam("MPC_Z_VEL_P", setParam_Multicopter_Position_Control_MPC_Z_VEL_P);
    PhotonPx4_autogen_InitParam("MPC_Z_VEL_I", setParam_Multicopter_Position_Control_MPC_Z_VEL_I);
    PhotonPx4_autogen_InitParam("MPC_Z_VEL_D", setParam_Multicopter_Position_Control_MPC_Z_VEL_D);
    PhotonPx4_autogen_InitParam("MPC_Z_VEL_MAX_UP", setParam_Multicopter_Position_Control_MPC_Z_VEL_MAX_UP);
    PhotonPx4_autogen_InitParam("MPC_Z_VEL_MAX", setParam_Multicopter_Position_Control_MPC_Z_VEL_MAX);
    PhotonPx4_autogen_InitParam("MPC_Z_VEL_MAX_DN", setParam_Multicopter_Position_Control_MPC_Z_VEL_MAX_DN);
    PhotonPx4_autogen_InitParam("MPC_Z_FF", setParam_Multicopter_Position_Control_MPC_Z_FF);
    PhotonPx4_autogen_InitParam("MPC_XY_P", setParam_Multicopter_Position_Control_MPC_XY_P);
    PhotonPx4_autogen_InitParam("MPC_XY_VEL_P", setParam_Multicopter_Position_Control_MPC_XY_VEL_P);
    PhotonPx4_autogen_InitParam("MPC_XY_VEL_I", setParam_Multicopter_Position_Control_MPC_XY_VEL_I);
    PhotonPx4_autogen_InitParam("MPC_XY_VEL_D", setParam_Multicopter_Position_Control_MPC_XY_VEL_D);
    PhotonPx4_autogen_InitParam("MPC_XY_CRUISE", setParam_Multicopter_Position_Control_MPC_XY_CRUISE);
    PhotonPx4_autogen_InitParam("MPC_XY_VEL_MAX", setParam_Multicopter_Position_Control_MPC_XY_VEL_MAX);
    PhotonPx4_autogen_InitParam("MPC_XY_FF", setParam_Multicopter_Position_Control_MPC_XY_FF);
    PhotonPx4_autogen_InitParam("MPC_TILTMAX_AIR", setParam_Multicopter_Position_Control_MPC_TILTMAX_AIR);
    PhotonPx4_autogen_InitParam("MPC_TILTMAX_LND", setParam_Multicopter_Position_Control_MPC_TILTMAX_LND);
    PhotonPx4_autogen_InitParam("MPC_LAND_SPEED", setParam_Multicopter_Position_Control_MPC_LAND_SPEED);
    PhotonPx4_autogen_InitParam("MPC_TKO_SPEED", setParam_Multicopter_Position_Control_MPC_TKO_SPEED);
    PhotonPx4_autogen_InitParam("MPC_MAN_R_MAX", setParam_Multicopter_Position_Control_MPC_MAN_R_MAX);
    PhotonPx4_autogen_InitParam("MPC_MAN_P_MAX", setParam_Multicopter_Position_Control_MPC_MAN_P_MAX);
    PhotonPx4_autogen_InitParam("MPC_MAN_Y_MAX", setParam_Multicopter_Position_Control_MPC_MAN_Y_MAX);
    PhotonPx4_autogen_InitParam("MPC_HOLD_XY_DZ", setParam_Multicopter_Position_Control_MPC_HOLD_XY_DZ);
    PhotonPx4_autogen_InitParam("MPC_HOLD_MAX_XY", setParam_Multicopter_Position_Control_MPC_HOLD_MAX_XY);
    PhotonPx4_autogen_InitParam("MPC_HOLD_MAX_Z", setParam_Multicopter_Position_Control_MPC_HOLD_MAX_Z);
    PhotonPx4_autogen_InitParam("MPC_VELD_LP", setParam_Multicopter_Position_Control_MPC_VELD_LP);
    PhotonPx4_autogen_InitParam("MPC_ACC_HOR_MAX", setParam_Multicopter_Position_Control_MPC_ACC_HOR_MAX);
    PhotonPx4_autogen_InitParam("MPC_ALT_MODE", setParam_Multicopter_Position_Control_MPC_ALT_MODE);
    PhotonPx4_autogen_InitParam("PWM_RATE", setParam_PWM_Outputs_PWM_RATE);
    PhotonPx4_autogen_InitParam("PWM_MIN", setParam_PWM_Outputs_PWM_MIN);
    PhotonPx4_autogen_InitParam("PWM_MAX", setParam_PWM_Outputs_PWM_MAX);
    PhotonPx4_autogen_InitParam("PWM_DISARMED", setParam_PWM_Outputs_PWM_DISARMED);
    PhotonPx4_autogen_InitParam("PWM_AUX_MIN", setParam_PWM_Outputs_PWM_AUX_MIN);
    PhotonPx4_autogen_InitParam("PWM_AUX_MAX", setParam_PWM_Outputs_PWM_AUX_MAX);
    PhotonPx4_autogen_InitParam("PWM_AUX_DISARMED", setParam_PWM_Outputs_PWM_AUX_DISARMED);
    PhotonPx4_autogen_InitParam("MOT_SLEW_MAX", setParam_PWM_Outputs_MOT_SLEW_MAX);
    PhotonPx4_autogen_InitParam("PWM_MAIN_REV1", setParam_PWM_Outputs_PWM_MAIN_REV1);
    PhotonPx4_autogen_InitParam("PWM_MAIN_REV2", setParam_PWM_Outputs_PWM_MAIN_REV2);
    PhotonPx4_autogen_InitParam("PWM_MAIN_REV3", setParam_PWM_Outputs_PWM_MAIN_REV3);
    PhotonPx4_autogen_InitParam("PWM_MAIN_REV4", setParam_PWM_Outputs_PWM_MAIN_REV4);
    PhotonPx4_autogen_InitParam("PWM_MAIN_REV5", setParam_PWM_Outputs_PWM_MAIN_REV5);
    PhotonPx4_autogen_InitParam("PWM_MAIN_REV6", setParam_PWM_Outputs_PWM_MAIN_REV6);
    PhotonPx4_autogen_InitParam("PWM_MAIN_REV7", setParam_PWM_Outputs_PWM_MAIN_REV7);
    PhotonPx4_autogen_InitParam("PWM_MAIN_REV8", setParam_PWM_Outputs_PWM_MAIN_REV8);
    PhotonPx4_autogen_InitParam("PWM_SBUS_MODE", setParam_PWM_Outputs_PWM_SBUS_MODE);
    PhotonPx4_autogen_InitParam("PWM_AUX_REV1", setParam_PWM_Outputs_PWM_AUX_REV1);
    PhotonPx4_autogen_InitParam("PWM_AUX_REV2", setParam_PWM_Outputs_PWM_AUX_REV2);
    PhotonPx4_autogen_InitParam("PWM_AUX_REV3", setParam_PWM_Outputs_PWM_AUX_REV3);
    PhotonPx4_autogen_InitParam("PWM_AUX_REV4", setParam_PWM_Outputs_PWM_AUX_REV4);
    PhotonPx4_autogen_InitParam("PWM_AUX_REV5", setParam_PWM_Outputs_PWM_AUX_REV5);
    PhotonPx4_autogen_InitParam("PWM_AUX_REV6", setParam_PWM_Outputs_PWM_AUX_REV6);
    PhotonPx4_autogen_InitParam("RC1_MIN", setParam_Radio_Calibration_RC1_MIN);
    PhotonPx4_autogen_InitParam("RC1_TRIM", setParam_Radio_Calibration_RC1_TRIM);
    PhotonPx4_autogen_InitParam("RC1_MAX", setParam_Radio_Calibration_RC1_MAX);
    PhotonPx4_autogen_InitParam("RC1_REV", setParam_Radio_Calibration_RC1_REV);
    PhotonPx4_autogen_InitParam("RC1_DZ", setParam_Radio_Calibration_RC1_DZ);
    PhotonPx4_autogen_InitParam("RC2_MIN", setParam_Radio_Calibration_RC2_MIN);
    PhotonPx4_autogen_InitParam("RC2_TRIM", setParam_Radio_Calibration_RC2_TRIM);
    PhotonPx4_autogen_InitParam("RC2_MAX", setParam_Radio_Calibration_RC2_MAX);
    PhotonPx4_autogen_InitParam("RC2_REV", setParam_Radio_Calibration_RC2_REV);
    PhotonPx4_autogen_InitParam("RC2_DZ", setParam_Radio_Calibration_RC2_DZ);
    PhotonPx4_autogen_InitParam("RC3_MIN", setParam_Radio_Calibration_RC3_MIN);
    PhotonPx4_autogen_InitParam("RC3_TRIM", setParam_Radio_Calibration_RC3_TRIM);
    PhotonPx4_autogen_InitParam("RC3_MAX", setParam_Radio_Calibration_RC3_MAX);
    PhotonPx4_autogen_InitParam("RC3_REV", setParam_Radio_Calibration_RC3_REV);
    PhotonPx4_autogen_InitParam("RC3_DZ", setParam_Radio_Calibration_RC3_DZ);
    PhotonPx4_autogen_InitParam("RC4_MIN", setParam_Radio_Calibration_RC4_MIN);
    PhotonPx4_autogen_InitParam("RC4_TRIM", setParam_Radio_Calibration_RC4_TRIM);
    PhotonPx4_autogen_InitParam("RC4_MAX", setParam_Radio_Calibration_RC4_MAX);
    PhotonPx4_autogen_InitParam("RC4_REV", setParam_Radio_Calibration_RC4_REV);
    PhotonPx4_autogen_InitParam("RC4_DZ", setParam_Radio_Calibration_RC4_DZ);
    PhotonPx4_autogen_InitParam("RC5_MIN", setParam_Radio_Calibration_RC5_MIN);
    PhotonPx4_autogen_InitParam("RC5_TRIM", setParam_Radio_Calibration_RC5_TRIM);
    PhotonPx4_autogen_InitParam("RC5_MAX", setParam_Radio_Calibration_RC5_MAX);
    PhotonPx4_autogen_InitParam("RC5_REV", setParam_Radio_Calibration_RC5_REV);
    PhotonPx4_autogen_InitParam("RC5_DZ", setParam_Radio_Calibration_RC5_DZ);
    PhotonPx4_autogen_InitParam("RC6_MIN", setParam_Radio_Calibration_RC6_MIN);
    PhotonPx4_autogen_InitParam("RC6_TRIM", setParam_Radio_Calibration_RC6_TRIM);
    PhotonPx4_autogen_InitParam("RC6_MAX", setParam_Radio_Calibration_RC6_MAX);
    PhotonPx4_autogen_InitParam("RC6_REV", setParam_Radio_Calibration_RC6_REV);
    PhotonPx4_autogen_InitParam("RC6_DZ", setParam_Radio_Calibration_RC6_DZ);
    PhotonPx4_autogen_InitParam("RC7_MIN", setParam_Radio_Calibration_RC7_MIN);
    PhotonPx4_autogen_InitParam("RC7_TRIM", setParam_Radio_Calibration_RC7_TRIM);
    PhotonPx4_autogen_InitParam("RC7_MAX", setParam_Radio_Calibration_RC7_MAX);
    PhotonPx4_autogen_InitParam("RC7_REV", setParam_Radio_Calibration_RC7_REV);
    PhotonPx4_autogen_InitParam("RC7_DZ", setParam_Radio_Calibration_RC7_DZ);
    PhotonPx4_autogen_InitParam("RC8_MIN", setParam_Radio_Calibration_RC8_MIN);
    PhotonPx4_autogen_InitParam("RC8_TRIM", setParam_Radio_Calibration_RC8_TRIM);
    PhotonPx4_autogen_InitParam("RC8_MAX", setParam_Radio_Calibration_RC8_MAX);
    PhotonPx4_autogen_InitParam("RC8_REV", setParam_Radio_Calibration_RC8_REV);
    PhotonPx4_autogen_InitParam("RC8_DZ", setParam_Radio_Calibration_RC8_DZ);
    PhotonPx4_autogen_InitParam("RC9_MIN", setParam_Radio_Calibration_RC9_MIN);
    PhotonPx4_autogen_InitParam("RC9_TRIM", setParam_Radio_Calibration_RC9_TRIM);
    PhotonPx4_autogen_InitParam("RC9_MAX", setParam_Radio_Calibration_RC9_MAX);
    PhotonPx4_autogen_InitParam("RC9_REV", setParam_Radio_Calibration_RC9_REV);
    PhotonPx4_autogen_InitParam("RC9_DZ", setParam_Radio_Calibration_RC9_DZ);
    PhotonPx4_autogen_InitParam("RC10_MIN", setParam_Radio_Calibration_RC10_MIN);
    PhotonPx4_autogen_InitParam("RC10_TRIM", setParam_Radio_Calibration_RC10_TRIM);
    PhotonPx4_autogen_InitParam("RC10_MAX", setParam_Radio_Calibration_RC10_MAX);
    PhotonPx4_autogen_InitParam("RC10_REV", setParam_Radio_Calibration_RC10_REV);
    PhotonPx4_autogen_InitParam("RC10_DZ", setParam_Radio_Calibration_RC10_DZ);
    PhotonPx4_autogen_InitParam("RC11_MIN", setParam_Radio_Calibration_RC11_MIN);
    PhotonPx4_autogen_InitParam("RC11_TRIM", setParam_Radio_Calibration_RC11_TRIM);
    PhotonPx4_autogen_InitParam("RC11_MAX", setParam_Radio_Calibration_RC11_MAX);
    PhotonPx4_autogen_InitParam("RC11_REV", setParam_Radio_Calibration_RC11_REV);
    PhotonPx4_autogen_InitParam("RC11_DZ", setParam_Radio_Calibration_RC11_DZ);
    PhotonPx4_autogen_InitParam("RC12_MIN", setParam_Radio_Calibration_RC12_MIN);
    PhotonPx4_autogen_InitParam("RC12_TRIM", setParam_Radio_Calibration_RC12_TRIM);
    PhotonPx4_autogen_InitParam("RC12_MAX", setParam_Radio_Calibration_RC12_MAX);
    PhotonPx4_autogen_InitParam("RC12_REV", setParam_Radio_Calibration_RC12_REV);
    PhotonPx4_autogen_InitParam("RC12_DZ", setParam_Radio_Calibration_RC12_DZ);
    PhotonPx4_autogen_InitParam("RC13_MIN", setParam_Radio_Calibration_RC13_MIN);
    PhotonPx4_autogen_InitParam("RC13_TRIM", setParam_Radio_Calibration_RC13_TRIM);
    PhotonPx4_autogen_InitParam("RC13_MAX", setParam_Radio_Calibration_RC13_MAX);
    PhotonPx4_autogen_InitParam("RC13_REV", setParam_Radio_Calibration_RC13_REV);
    PhotonPx4_autogen_InitParam("RC13_DZ", setParam_Radio_Calibration_RC13_DZ);
    PhotonPx4_autogen_InitParam("RC14_MIN", setParam_Radio_Calibration_RC14_MIN);
    PhotonPx4_autogen_InitParam("RC14_TRIM", setParam_Radio_Calibration_RC14_TRIM);
    PhotonPx4_autogen_InitParam("RC14_MAX", setParam_Radio_Calibration_RC14_MAX);
    PhotonPx4_autogen_InitParam("RC14_REV", setParam_Radio_Calibration_RC14_REV);
    PhotonPx4_autogen_InitParam("RC14_DZ", setParam_Radio_Calibration_RC14_DZ);
    PhotonPx4_autogen_InitParam("RC15_MIN", setParam_Radio_Calibration_RC15_MIN);
    PhotonPx4_autogen_InitParam("RC15_TRIM", setParam_Radio_Calibration_RC15_TRIM);
    PhotonPx4_autogen_InitParam("RC15_MAX", setParam_Radio_Calibration_RC15_MAX);
    PhotonPx4_autogen_InitParam("RC15_REV", setParam_Radio_Calibration_RC15_REV);
    PhotonPx4_autogen_InitParam("RC15_DZ", setParam_Radio_Calibration_RC15_DZ);
    PhotonPx4_autogen_InitParam("RC16_MIN", setParam_Radio_Calibration_RC16_MIN);
    PhotonPx4_autogen_InitParam("RC16_TRIM", setParam_Radio_Calibration_RC16_TRIM);
    PhotonPx4_autogen_InitParam("RC16_MAX", setParam_Radio_Calibration_RC16_MAX);
    PhotonPx4_autogen_InitParam("RC16_REV", setParam_Radio_Calibration_RC16_REV);
    PhotonPx4_autogen_InitParam("RC16_DZ", setParam_Radio_Calibration_RC16_DZ);
    PhotonPx4_autogen_InitParam("RC17_MIN", setParam_Radio_Calibration_RC17_MIN);
    PhotonPx4_autogen_InitParam("RC17_TRIM", setParam_Radio_Calibration_RC17_TRIM);
    PhotonPx4_autogen_InitParam("RC17_MAX", setParam_Radio_Calibration_RC17_MAX);
    PhotonPx4_autogen_InitParam("RC17_REV", setParam_Radio_Calibration_RC17_REV);
    PhotonPx4_autogen_InitParam("RC17_DZ", setParam_Radio_Calibration_RC17_DZ);
    PhotonPx4_autogen_InitParam("RC18_MIN", setParam_Radio_Calibration_RC18_MIN);
    PhotonPx4_autogen_InitParam("RC18_TRIM", setParam_Radio_Calibration_RC18_TRIM);
    PhotonPx4_autogen_InitParam("RC18_MAX", setParam_Radio_Calibration_RC18_MAX);
    PhotonPx4_autogen_InitParam("RC18_REV", setParam_Radio_Calibration_RC18_REV);
    PhotonPx4_autogen_InitParam("RC18_DZ", setParam_Radio_Calibration_RC18_DZ);
    PhotonPx4_autogen_InitParam("RC_DSM_BIND", setParam_Radio_Calibration_RC_DSM_BIND);
    PhotonPx4_autogen_InitParam("RC_CHAN_CNT", setParam_Radio_Calibration_RC_CHAN_CNT);
    PhotonPx4_autogen_InitParam("RC_TH_USER", setParam_Radio_Calibration_RC_TH_USER);
    PhotonPx4_autogen_InitParam("RC_MAP_ROLL", setParam_Radio_Calibration_RC_MAP_ROLL);
    PhotonPx4_autogen_InitParam("RC_MAP_PITCH", setParam_Radio_Calibration_RC_MAP_PITCH);
    PhotonPx4_autogen_InitParam("RC_MAP_THROTTLE", setParam_Radio_Calibration_RC_MAP_THROTTLE);
    PhotonPx4_autogen_InitParam("RC_MAP_YAW", setParam_Radio_Calibration_RC_MAP_YAW);
    PhotonPx4_autogen_InitParam("RC_MAP_AUX1", setParam_Radio_Calibration_RC_MAP_AUX1);
    PhotonPx4_autogen_InitParam("RC_MAP_AUX2", setParam_Radio_Calibration_RC_MAP_AUX2);
    PhotonPx4_autogen_InitParam("RC_MAP_AUX3", setParam_Radio_Calibration_RC_MAP_AUX3);
    PhotonPx4_autogen_InitParam("RC_MAP_AUX4", setParam_Radio_Calibration_RC_MAP_AUX4);
    PhotonPx4_autogen_InitParam("RC_MAP_AUX5", setParam_Radio_Calibration_RC_MAP_AUX5);
    PhotonPx4_autogen_InitParam("RC_MAP_PARAM1", setParam_Radio_Calibration_RC_MAP_PARAM1);
    PhotonPx4_autogen_InitParam("RC_MAP_PARAM2", setParam_Radio_Calibration_RC_MAP_PARAM2);
    PhotonPx4_autogen_InitParam("RC_MAP_PARAM3", setParam_Radio_Calibration_RC_MAP_PARAM3);
    PhotonPx4_autogen_InitParam("RC_FAILS_THR", setParam_Radio_Calibration_RC_FAILS_THR);
    PhotonPx4_autogen_InitParam("RC_RSSI_PWM_CHAN", setParam_Radio_Calibration_RC_RSSI_PWM_CHAN);
    PhotonPx4_autogen_InitParam("RC_RSSI_PWM_MAX", setParam_Radio_Calibration_RC_RSSI_PWM_MAX);
    PhotonPx4_autogen_InitParam("RC_RSSI_PWM_MIN", setParam_Radio_Calibration_RC_RSSI_PWM_MIN);
    PhotonPx4_autogen_InitParam("TRIM_ROLL", setParam_Radio_Calibration_TRIM_ROLL);
    PhotonPx4_autogen_InitParam("TRIM_PITCH", setParam_Radio_Calibration_TRIM_PITCH);
    PhotonPx4_autogen_InitParam("TRIM_YAW", setParam_Radio_Calibration_TRIM_YAW);
    PhotonPx4_autogen_InitParam("NAV_RCL_LT", setParam_Radio_Signal_Loss_NAV_RCL_LT);
    PhotonPx4_autogen_InitParam("RC_MAP_FLTMODE", setParam_Radio_Switches_RC_MAP_FLTMODE);
    PhotonPx4_autogen_InitParam("RC_MAP_MODE_SW", setParam_Radio_Switches_RC_MAP_MODE_SW);
    PhotonPx4_autogen_InitParam("RC_MAP_RETURN_SW", setParam_Radio_Switches_RC_MAP_RETURN_SW);
    PhotonPx4_autogen_InitParam("RC_MAP_RATT_SW", setParam_Radio_Switches_RC_MAP_RATT_SW);
    PhotonPx4_autogen_InitParam("RC_MAP_POSCTL_SW", setParam_Radio_Switches_RC_MAP_POSCTL_SW);
    PhotonPx4_autogen_InitParam("RC_MAP_LOITER_SW", setParam_Radio_Switches_RC_MAP_LOITER_SW);
    PhotonPx4_autogen_InitParam("RC_MAP_ACRO_SW", setParam_Radio_Switches_RC_MAP_ACRO_SW);
    PhotonPx4_autogen_InitParam("RC_MAP_OFFB_SW", setParam_Radio_Switches_RC_MAP_OFFB_SW);
    PhotonPx4_autogen_InitParam("RC_MAP_KILL_SW", setParam_Radio_Switches_RC_MAP_KILL_SW);
    PhotonPx4_autogen_InitParam("RC_MAP_FLAPS", setParam_Radio_Switches_RC_MAP_FLAPS);
    PhotonPx4_autogen_InitParam("RC_MAP_TRANS_SW", setParam_Radio_Switches_RC_MAP_TRANS_SW);
    PhotonPx4_autogen_InitParam("RC_MAP_GEAR_SW", setParam_Radio_Switches_RC_MAP_GEAR_SW);
    PhotonPx4_autogen_InitParam("RC_ASSIST_TH", setParam_Radio_Switches_RC_ASSIST_TH);
    PhotonPx4_autogen_InitParam("RC_AUTO_TH", setParam_Radio_Switches_RC_AUTO_TH);
    PhotonPx4_autogen_InitParam("RC_RATT_TH", setParam_Radio_Switches_RC_RATT_TH);
    PhotonPx4_autogen_InitParam("RC_POSCTL_TH", setParam_Radio_Switches_RC_POSCTL_TH);
    PhotonPx4_autogen_InitParam("RC_RETURN_TH", setParam_Radio_Switches_RC_RETURN_TH);
    PhotonPx4_autogen_InitParam("RC_LOITER_TH", setParam_Radio_Switches_RC_LOITER_TH);
    PhotonPx4_autogen_InitParam("RC_ACRO_TH", setParam_Radio_Switches_RC_ACRO_TH);
    PhotonPx4_autogen_InitParam("RC_OFFB_TH", setParam_Radio_Switches_RC_OFFB_TH);
    PhotonPx4_autogen_InitParam("RC_KILLSWITCH_TH", setParam_Radio_Switches_RC_KILLSWITCH_TH);
    PhotonPx4_autogen_InitParam("RC_TRANS_TH", setParam_Radio_Switches_RC_TRANS_TH);
    PhotonPx4_autogen_InitParam("RC_GEAR_TH", setParam_Radio_Switches_RC_GEAR_TH);
    PhotonPx4_autogen_InitParam("RTL_RETURN_ALT", setParam_Return_To_Land_RTL_RETURN_ALT);
    PhotonPx4_autogen_InitParam("RTL_DESCEND_ALT", setParam_Return_To_Land_RTL_DESCEND_ALT);
    PhotonPx4_autogen_InitParam("RTL_LAND_DELAY", setParam_Return_To_Land_RTL_LAND_DELAY);
    PhotonPx4_autogen_InitParam("RTL_MIN_DIST", setParam_Return_To_Land_RTL_MIN_DIST);
    PhotonPx4_autogen_InitParam("SDLOG_UTC_OFFSET", setParam_SD_Logging_SDLOG_UTC_OFFSET);
    PhotonPx4_autogen_InitParam("SDLOG_MODE", setParam_SD_Logging_SDLOG_MODE);
    PhotonPx4_autogen_InitParam("CAL_GYRO0_ID", setParam_Sensor_Calibration_CAL_GYRO0_ID);
    PhotonPx4_autogen_InitParam("CAL_GYRO0_XOFF", setParam_Sensor_Calibration_CAL_GYRO0_XOFF);
    PhotonPx4_autogen_InitParam("CAL_GYRO0_YOFF", setParam_Sensor_Calibration_CAL_GYRO0_YOFF);
    PhotonPx4_autogen_InitParam("CAL_GYRO0_ZOFF", setParam_Sensor_Calibration_CAL_GYRO0_ZOFF);
    PhotonPx4_autogen_InitParam("CAL_GYRO0_XSCALE", setParam_Sensor_Calibration_CAL_GYRO0_XSCALE);
    PhotonPx4_autogen_InitParam("CAL_GYRO0_YSCALE", setParam_Sensor_Calibration_CAL_GYRO0_YSCALE);
    PhotonPx4_autogen_InitParam("CAL_GYRO0_ZSCALE", setParam_Sensor_Calibration_CAL_GYRO0_ZSCALE);
    PhotonPx4_autogen_InitParam("CAL_MAG0_ID", setParam_Sensor_Calibration_CAL_MAG0_ID);
    PhotonPx4_autogen_InitParam("CAL_MAG0_ROT", setParam_Sensor_Calibration_CAL_MAG0_ROT);
    PhotonPx4_autogen_InitParam("CAL_MAG0_XOFF", setParam_Sensor_Calibration_CAL_MAG0_XOFF);
    PhotonPx4_autogen_InitParam("CAL_MAG0_YOFF", setParam_Sensor_Calibration_CAL_MAG0_YOFF);
    PhotonPx4_autogen_InitParam("CAL_MAG0_ZOFF", setParam_Sensor_Calibration_CAL_MAG0_ZOFF);
    PhotonPx4_autogen_InitParam("CAL_MAG0_XSCALE", setParam_Sensor_Calibration_CAL_MAG0_XSCALE);
    PhotonPx4_autogen_InitParam("CAL_MAG0_YSCALE", setParam_Sensor_Calibration_CAL_MAG0_YSCALE);
    PhotonPx4_autogen_InitParam("CAL_MAG0_ZSCALE", setParam_Sensor_Calibration_CAL_MAG0_ZSCALE);
    PhotonPx4_autogen_InitParam("CAL_ACC0_ID", setParam_Sensor_Calibration_CAL_ACC0_ID);
    PhotonPx4_autogen_InitParam("CAL_ACC0_XOFF", setParam_Sensor_Calibration_CAL_ACC0_XOFF);
    PhotonPx4_autogen_InitParam("CAL_ACC0_YOFF", setParam_Sensor_Calibration_CAL_ACC0_YOFF);
    PhotonPx4_autogen_InitParam("CAL_ACC0_ZOFF", setParam_Sensor_Calibration_CAL_ACC0_ZOFF);
    PhotonPx4_autogen_InitParam("CAL_ACC0_XSCALE", setParam_Sensor_Calibration_CAL_ACC0_XSCALE);
    PhotonPx4_autogen_InitParam("CAL_ACC0_YSCALE", setParam_Sensor_Calibration_CAL_ACC0_YSCALE);
    PhotonPx4_autogen_InitParam("CAL_ACC0_ZSCALE", setParam_Sensor_Calibration_CAL_ACC0_ZSCALE);
    PhotonPx4_autogen_InitParam("CAL_GYRO1_ID", setParam_Sensor_Calibration_CAL_GYRO1_ID);
    PhotonPx4_autogen_InitParam("CAL_GYRO1_XOFF", setParam_Sensor_Calibration_CAL_GYRO1_XOFF);
    PhotonPx4_autogen_InitParam("CAL_GYRO1_YOFF", setParam_Sensor_Calibration_CAL_GYRO1_YOFF);
    PhotonPx4_autogen_InitParam("CAL_GYRO1_ZOFF", setParam_Sensor_Calibration_CAL_GYRO1_ZOFF);
    PhotonPx4_autogen_InitParam("CAL_GYRO1_XSCALE", setParam_Sensor_Calibration_CAL_GYRO1_XSCALE);
    PhotonPx4_autogen_InitParam("CAL_GYRO1_YSCALE", setParam_Sensor_Calibration_CAL_GYRO1_YSCALE);
    PhotonPx4_autogen_InitParam("CAL_GYRO1_ZSCALE", setParam_Sensor_Calibration_CAL_GYRO1_ZSCALE);
    PhotonPx4_autogen_InitParam("CAL_MAG1_ID", setParam_Sensor_Calibration_CAL_MAG1_ID);
    PhotonPx4_autogen_InitParam("CAL_MAG1_ROT", setParam_Sensor_Calibration_CAL_MAG1_ROT);
    PhotonPx4_autogen_InitParam("CAL_MAG1_XOFF", setParam_Sensor_Calibration_CAL_MAG1_XOFF);
    PhotonPx4_autogen_InitParam("CAL_MAG1_YOFF", setParam_Sensor_Calibration_CAL_MAG1_YOFF);
    PhotonPx4_autogen_InitParam("CAL_MAG1_ZOFF", setParam_Sensor_Calibration_CAL_MAG1_ZOFF);
    PhotonPx4_autogen_InitParam("CAL_MAG1_XSCALE", setParam_Sensor_Calibration_CAL_MAG1_XSCALE);
    PhotonPx4_autogen_InitParam("CAL_MAG1_YSCALE", setParam_Sensor_Calibration_CAL_MAG1_YSCALE);
    PhotonPx4_autogen_InitParam("CAL_MAG1_ZSCALE", setParam_Sensor_Calibration_CAL_MAG1_ZSCALE);
    PhotonPx4_autogen_InitParam("CAL_ACC1_ID", setParam_Sensor_Calibration_CAL_ACC1_ID);
    PhotonPx4_autogen_InitParam("CAL_ACC1_XOFF", setParam_Sensor_Calibration_CAL_ACC1_XOFF);
    PhotonPx4_autogen_InitParam("CAL_ACC1_YOFF", setParam_Sensor_Calibration_CAL_ACC1_YOFF);
    PhotonPx4_autogen_InitParam("CAL_ACC1_ZOFF", setParam_Sensor_Calibration_CAL_ACC1_ZOFF);
    PhotonPx4_autogen_InitParam("CAL_ACC1_XSCALE", setParam_Sensor_Calibration_CAL_ACC1_XSCALE);
    PhotonPx4_autogen_InitParam("CAL_ACC1_YSCALE", setParam_Sensor_Calibration_CAL_ACC1_YSCALE);
    PhotonPx4_autogen_InitParam("CAL_ACC1_ZSCALE", setParam_Sensor_Calibration_CAL_ACC1_ZSCALE);
    PhotonPx4_autogen_InitParam("CAL_GYRO2_ID", setParam_Sensor_Calibration_CAL_GYRO2_ID);
    PhotonPx4_autogen_InitParam("CAL_GYRO2_XOFF", setParam_Sensor_Calibration_CAL_GYRO2_XOFF);
    PhotonPx4_autogen_InitParam("CAL_GYRO2_YOFF", setParam_Sensor_Calibration_CAL_GYRO2_YOFF);
    PhotonPx4_autogen_InitParam("CAL_GYRO2_ZOFF", setParam_Sensor_Calibration_CAL_GYRO2_ZOFF);
    PhotonPx4_autogen_InitParam("CAL_GYRO2_XSCALE", setParam_Sensor_Calibration_CAL_GYRO2_XSCALE);
    PhotonPx4_autogen_InitParam("CAL_GYRO2_YSCALE", setParam_Sensor_Calibration_CAL_GYRO2_YSCALE);
    PhotonPx4_autogen_InitParam("CAL_GYRO2_ZSCALE", setParam_Sensor_Calibration_CAL_GYRO2_ZSCALE);
    PhotonPx4_autogen_InitParam("CAL_MAG2_ID", setParam_Sensor_Calibration_CAL_MAG2_ID);
    PhotonPx4_autogen_InitParam("CAL_MAG2_ROT", setParam_Sensor_Calibration_CAL_MAG2_ROT);
    PhotonPx4_autogen_InitParam("CAL_MAG2_XOFF", setParam_Sensor_Calibration_CAL_MAG2_XOFF);
    PhotonPx4_autogen_InitParam("CAL_MAG2_YOFF", setParam_Sensor_Calibration_CAL_MAG2_YOFF);
    PhotonPx4_autogen_InitParam("CAL_MAG2_ZOFF", setParam_Sensor_Calibration_CAL_MAG2_ZOFF);
    PhotonPx4_autogen_InitParam("CAL_MAG2_XSCALE", setParam_Sensor_Calibration_CAL_MAG2_XSCALE);
    PhotonPx4_autogen_InitParam("CAL_MAG2_YSCALE", setParam_Sensor_Calibration_CAL_MAG2_YSCALE);
    PhotonPx4_autogen_InitParam("CAL_MAG2_ZSCALE", setParam_Sensor_Calibration_CAL_MAG2_ZSCALE);
    PhotonPx4_autogen_InitParam("CAL_ACC2_ID", setParam_Sensor_Calibration_CAL_ACC2_ID);
    PhotonPx4_autogen_InitParam("CAL_ACC2_XOFF", setParam_Sensor_Calibration_CAL_ACC2_XOFF);
    PhotonPx4_autogen_InitParam("CAL_ACC2_YOFF", setParam_Sensor_Calibration_CAL_ACC2_YOFF);
    PhotonPx4_autogen_InitParam("CAL_ACC2_ZOFF", setParam_Sensor_Calibration_CAL_ACC2_ZOFF);
    PhotonPx4_autogen_InitParam("CAL_ACC2_XSCALE", setParam_Sensor_Calibration_CAL_ACC2_XSCALE);
    PhotonPx4_autogen_InitParam("CAL_ACC2_YSCALE", setParam_Sensor_Calibration_CAL_ACC2_YSCALE);
    PhotonPx4_autogen_InitParam("CAL_ACC2_ZSCALE", setParam_Sensor_Calibration_CAL_ACC2_ZSCALE);
    PhotonPx4_autogen_InitParam("CAL_ACC_PRIME", setParam_Sensor_Calibration_CAL_ACC_PRIME);
    PhotonPx4_autogen_InitParam("CAL_GYRO_PRIME", setParam_Sensor_Calibration_CAL_GYRO_PRIME);
    PhotonPx4_autogen_InitParam("CAL_MAG_PRIME", setParam_Sensor_Calibration_CAL_MAG_PRIME);
    PhotonPx4_autogen_InitParam("CAL_MAG_SIDES", setParam_Sensor_Calibration_CAL_MAG_SIDES);
    PhotonPx4_autogen_InitParam("CAL_BARO_PRIME", setParam_Sensor_Calibration_CAL_BARO_PRIME);
    PhotonPx4_autogen_InitParam("SENS_DPRES_OFF", setParam_Sensor_Calibration_SENS_DPRES_OFF);
    PhotonPx4_autogen_InitParam("SENS_DPRES_ANSC", setParam_Sensor_Calibration_SENS_DPRES_ANSC);
    PhotonPx4_autogen_InitParam("SENS_BARO_QNH", setParam_Sensor_Calibration_SENS_BARO_QNH);
    PhotonPx4_autogen_InitParam("SENS_BOARD_ROT", setParam_Sensor_Calibration_SENS_BOARD_ROT);
    PhotonPx4_autogen_InitParam("SENS_BOARD_Y_OFF", setParam_Sensor_Calibration_SENS_BOARD_Y_OFF);
    PhotonPx4_autogen_InitParam("SENS_BOARD_X_OFF", setParam_Sensor_Calibration_SENS_BOARD_X_OFF);
    PhotonPx4_autogen_InitParam("SENS_BOARD_Z_OFF", setParam_Sensor_Calibration_SENS_BOARD_Z_OFF);
    PhotonPx4_autogen_InitParam("SENS_EN_LL40LS", setParam_Sensor_Enable_SENS_EN_LL40LS);
    PhotonPx4_autogen_InitParam("SENS_EN_SF0X", setParam_Sensor_Enable_SENS_EN_SF0X);
    PhotonPx4_autogen_InitParam("SENS_EN_MB12XX", setParam_Sensor_Enable_SENS_EN_MB12XX);
    PhotonPx4_autogen_InitParam("SENS_EN_TRONE", setParam_Sensor_Enable_SENS_EN_TRONE);
    PhotonPx4_autogen_InitParam("SENS_EN_SF1XX", setParam_Sensor_Enable_SENS_EN_SF1XX);
    PhotonPx4_autogen_InitParam("SENS_EN_THERMAL", setParam_Sensor_Enable_SENS_EN_THERMAL);
    PhotonPx4_autogen_InitParam("SYS_AUTOSTART", setParam_System_SYS_AUTOSTART);
    PhotonPx4_autogen_InitParam("SYS_AUTOCONFIG", setParam_System_SYS_AUTOCONFIG);
    PhotonPx4_autogen_InitParam("SYS_USE_IO", setParam_System_SYS_USE_IO);
    PhotonPx4_autogen_InitParam("SYS_RESTART_TYPE", setParam_System_SYS_RESTART_TYPE);
    PhotonPx4_autogen_InitParam("SYS_MC_EST_GROUP", setParam_System_SYS_MC_EST_GROUP);
    PhotonPx4_autogen_InitParam("SYS_COMPANION", setParam_System_SYS_COMPANION);
    PhotonPx4_autogen_InitParam("SYS_PARAM_VER", setParam_System_SYS_PARAM_VER);
    PhotonPx4_autogen_InitParam("SYS_LOGGER", setParam_System_SYS_LOGGER);
    PhotonPx4_autogen_InitParam("UAVCAN_ENABLE", setParam_UAVCAN_UAVCAN_ENABLE);
    PhotonPx4_autogen_InitParam("RC_MAP_FAILSAFE", setParam_Miscellaneous_RC_MAP_FAILSAFE);
    PhotonPx4_autogen_InitParam("COM_FLTMODE1", setParam_Miscellaneous_COM_FLTMODE1);
    PhotonPx4_autogen_InitParam("COM_FLTMODE2", setParam_Miscellaneous_COM_FLTMODE2);
    PhotonPx4_autogen_InitParam("COM_FLTMODE3", setParam_Miscellaneous_COM_FLTMODE3);
    PhotonPx4_autogen_InitParam("COM_FLTMODE4", setParam_Miscellaneous_COM_FLTMODE4);
    PhotonPx4_autogen_InitParam("COM_FLTMODE5", setParam_Miscellaneous_COM_FLTMODE5);
    PhotonPx4_autogen_InitParam("COM_FLTMODE6", setParam_Miscellaneous_COM_FLTMODE6);
}

