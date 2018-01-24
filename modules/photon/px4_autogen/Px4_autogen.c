#include "photongen/onboard/px4_autogen/Px4_autogen.Component.h"
#include "photongen/onboard/tm/Tm.Component.h"

static void setParam_UAVCAN_Motor_Parameters_ctl_bw(uint32_t value)
{
    _photonPx4_autogen._UAVCAN_Motor_Parameters.ctl_bw = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
    }
}

static void setParam_UAVCAN_Motor_Parameters_ctl_dir(uint32_t value)
{
    _photonPx4_autogen._UAVCAN_Motor_Parameters.ctl_dir = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
    }
}

static void setParam_UAVCAN_Motor_Parameters_ctl_gain(uint32_t value)
{
    _photonPx4_autogen._UAVCAN_Motor_Parameters.ctl_gain = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
    }
}

static void setParam_UAVCAN_Motor_Parameters_ctl_hz_idle(uint32_t value)
{
    _photonPx4_autogen._UAVCAN_Motor_Parameters.ctl_hz_idle = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
    }
}

static void setParam_UAVCAN_Motor_Parameters_ctl_start_rate(uint32_t value)
{
    _photonPx4_autogen._UAVCAN_Motor_Parameters.ctl_start_rate = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
    }
}

static void setParam_UAVCAN_Motor_Parameters_esc_index(uint32_t value)
{
    _photonPx4_autogen._UAVCAN_Motor_Parameters.esc_index = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
    }
}

static void setParam_UAVCAN_Motor_Parameters_id_ext_status(uint32_t value)
{
    _photonPx4_autogen._UAVCAN_Motor_Parameters.id_ext_status = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
    }
}

static void setParam_UAVCAN_Motor_Parameters_int_ext_status(uint32_t value)
{
    _photonPx4_autogen._UAVCAN_Motor_Parameters.int_ext_status = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
    }
}

static void setParam_UAVCAN_Motor_Parameters_int_status(uint32_t value)
{
    _photonPx4_autogen._UAVCAN_Motor_Parameters.int_status = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
    }
}

static void setParam_UAVCAN_Motor_Parameters_mot_i_max(uint32_t value)
{
    _photonPx4_autogen._UAVCAN_Motor_Parameters.mot_i_max = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
    }
}

static void setParam_UAVCAN_Motor_Parameters_mot_kv(uint32_t value)
{
    _photonPx4_autogen._UAVCAN_Motor_Parameters.mot_kv = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
    }
}

static void setParam_UAVCAN_Motor_Parameters_mot_ls(uint32_t value)
{
    _photonPx4_autogen._UAVCAN_Motor_Parameters.mot_ls = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
    }
}

static void setParam_UAVCAN_Motor_Parameters_mot_num_poles(uint32_t value)
{
    _photonPx4_autogen._UAVCAN_Motor_Parameters.mot_num_poles = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
    }
}

static void setParam_UAVCAN_Motor_Parameters_mot_rs(uint32_t value)
{
    _photonPx4_autogen._UAVCAN_Motor_Parameters.mot_rs = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
    }
}

static void setParam_UAVCAN_Motor_Parameters_mot_v_accel(uint32_t value)
{
    _photonPx4_autogen._UAVCAN_Motor_Parameters.mot_v_accel = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
    }
}

static void setParam_UAVCAN_Motor_Parameters_mot_v_max(uint32_t value)
{
    _photonPx4_autogen._UAVCAN_Motor_Parameters.mot_v_max = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
    }
}

static void setParam_Attitude_EKF_estimator_EKF_ATT_V3_Q0(uint32_t value)
{
    _photonPx4_autogen._Attitude_EKF_estimator.EKF_ATT_V3_Q0 = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
    }
}

static void setParam_Attitude_EKF_estimator_EKF_ATT_V3_Q1(uint32_t value)
{
    _photonPx4_autogen._Attitude_EKF_estimator.EKF_ATT_V3_Q1 = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
    }
}

static void setParam_Attitude_EKF_estimator_EKF_ATT_V3_Q2(uint32_t value)
{
    _photonPx4_autogen._Attitude_EKF_estimator.EKF_ATT_V3_Q2 = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
    }
}

static void setParam_Attitude_EKF_estimator_EKF_ATT_V3_Q3(uint32_t value)
{
    _photonPx4_autogen._Attitude_EKF_estimator.EKF_ATT_V3_Q3 = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
    }
}

static void setParam_Attitude_EKF_estimator_EKF_ATT_V4_R0(uint32_t value)
{
    _photonPx4_autogen._Attitude_EKF_estimator.EKF_ATT_V4_R0 = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
    }
}

static void setParam_Attitude_EKF_estimator_EKF_ATT_V4_R1(uint32_t value)
{
    _photonPx4_autogen._Attitude_EKF_estimator.EKF_ATT_V4_R1 = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
    }
}

static void setParam_Attitude_EKF_estimator_EKF_ATT_V4_R2(uint32_t value)
{
    _photonPx4_autogen._Attitude_EKF_estimator.EKF_ATT_V4_R2 = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
    }
}

static void setParam_Attitude_EKF_estimator_ATT_J11(uint32_t value)
{
    _photonPx4_autogen._Attitude_EKF_estimator.ATT_J11 = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
    }
}

static void setParam_Attitude_EKF_estimator_ATT_J22(uint32_t value)
{
    _photonPx4_autogen._Attitude_EKF_estimator.ATT_J22 = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
    }
}

static void setParam_Attitude_EKF_estimator_ATT_J33(uint32_t value)
{
    _photonPx4_autogen._Attitude_EKF_estimator.ATT_J33 = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
    }
}

static void setParam_Attitude_EKF_estimator_ATT_J_EN(uint32_t value)
{
    _photonPx4_autogen._Attitude_EKF_estimator.ATT_J_EN = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
    }
}

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

static void setParam_Camera_trigger_TRIG_INTERFACE(uint32_t value)
{
    _photonPx4_autogen._Camera_trigger.TRIG_INTERFACE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CAMERA_TRIGGER_ID);
    }
}

static void setParam_Camera_trigger_TRIG_INTERVAL(uint32_t value)
{
    _photonPx4_autogen._Camera_trigger.TRIG_INTERVAL = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CAMERA_TRIGGER_ID);
    }
}

static void setParam_Camera_trigger_TRIG_POLARITY(uint32_t value)
{
    _photonPx4_autogen._Camera_trigger.TRIG_POLARITY = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CAMERA_TRIGGER_ID);
    }
}

static void setParam_Camera_trigger_TRIG_ACT_TIME(uint32_t value)
{
    _photonPx4_autogen._Camera_trigger.TRIG_ACT_TIME = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CAMERA_TRIGGER_ID);
    }
}

static void setParam_Camera_trigger_TRIG_MODE(uint32_t value)
{
    _photonPx4_autogen._Camera_trigger.TRIG_MODE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CAMERA_TRIGGER_ID);
    }
}

static void setParam_Camera_trigger_TRIG_PINS(uint32_t value)
{
    _photonPx4_autogen._Camera_trigger.TRIG_PINS = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CAMERA_TRIGGER_ID);
    }
}

static void setParam_Camera_trigger_TRIG_DISTANCE(uint32_t value)
{
    _photonPx4_autogen._Camera_trigger.TRIG_DISTANCE = *(float*)&value;
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

static void setParam_EKF2_EKF2_MIN_OBS_DT(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_MIN_OBS_DT = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_MAG_DELAY(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_MAG_DELAY = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_BARO_DELAY(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_BARO_DELAY = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_GPS_DELAY(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_GPS_DELAY = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_OF_DELAY(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_OF_DELAY = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_RNG_DELAY(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_RNG_DELAY = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_ASP_DELAY(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_ASP_DELAY = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_EV_DELAY(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_EV_DELAY = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_GPS_CHECK(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_GPS_CHECK = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_REQ_EPH(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_REQ_EPH = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_REQ_EPV(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_REQ_EPV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_REQ_SACC(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_REQ_SACC = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_REQ_NSATS(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_REQ_NSATS = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_REQ_GDOP(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_REQ_GDOP = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_REQ_HDRIFT(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_REQ_HDRIFT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_REQ_VDRIFT(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_REQ_VDRIFT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_GYR_NOISE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_GYR_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_ACC_NOISE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_ACC_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_GYR_B_NOISE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_GYR_B_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_ACC_B_NOISE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_ACC_B_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_MAG_B_NOISE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_MAG_B_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_MAG_E_NOISE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_MAG_E_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_WIND_NOISE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_WIND_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_GPS_V_NOISE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_GPS_V_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_GPS_P_NOISE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_GPS_P_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_NOAID_NOISE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_NOAID_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_BARO_NOISE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_BARO_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_HEAD_NOISE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_HEAD_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_MAG_NOISE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_MAG_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_EAS_NOISE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_EAS_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_BETA_NOISE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_BETA_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_MAG_DECL(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_MAG_DECL = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_HDG_GATE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_HDG_GATE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_MAG_GATE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_MAG_GATE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_DECL_TYPE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_DECL_TYPE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_MAG_TYPE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_MAG_TYPE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_BARO_GATE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_BARO_GATE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_GPS_P_GATE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_GPS_P_GATE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_GPS_V_GATE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_GPS_V_GATE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_TAS_GATE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_TAS_GATE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_REC_RPL(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_REC_RPL = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_AID_MASK(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_AID_MASK = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_HGT_MODE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_HGT_MODE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_RNG_NOISE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_RNG_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_RNG_GATE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_RNG_GATE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_MIN_RNG(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_MIN_RNG = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_EVP_NOISE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_EVP_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_EVA_NOISE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_EVA_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_EV_GATE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_EV_GATE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_MIN_EV(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_MIN_EV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_OF_N_MIN(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_OF_N_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_OF_N_MAX(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_OF_N_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_OF_QMIN(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_OF_QMIN = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_OF_GATE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_OF_GATE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_OF_RMAX(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_OF_RMAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_TERR_NOISE(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_TERR_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_TERR_GRAD(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_TERR_GRAD = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_IMU_POS_X(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_IMU_POS_X = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_IMU_POS_Y(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_IMU_POS_Y = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_IMU_POS_Z(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_IMU_POS_Z = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_GPS_POS_X(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_GPS_POS_X = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_GPS_POS_Y(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_GPS_POS_Y = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_GPS_POS_Z(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_GPS_POS_Z = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_RNG_POS_X(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_RNG_POS_X = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_RNG_POS_Y(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_RNG_POS_Y = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_RNG_POS_Z(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_RNG_POS_Z = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_OF_POS_X(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_OF_POS_X = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_OF_POS_Y(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_OF_POS_Y = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_OF_POS_Z(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_OF_POS_Z = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_EV_POS_X(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_EV_POS_X = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_EV_POS_Y(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_EV_POS_Y = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_EV_POS_Z(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_EV_POS_Z = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_ARSP_THR(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_ARSP_THR = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_FUSE_BETA(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_FUSE_BETA = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_TAU_VEL(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_TAU_VEL = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_TAU_POS(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_TAU_POS = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_GBIAS_INIT(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_GBIAS_INIT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_ABIAS_INIT(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_ABIAS_INIT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_EKF2_EKF2_ANGERR_INIT(uint32_t value)
{
    _photonPx4_autogen._EKF2.EKF2_ANGERR_INIT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_R_TC(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_R_TC = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_P_TC(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_P_TC = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_PR_P(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_PR_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_PR_I(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_PR_I = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_P_RMAX_POS(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_P_RMAX_POS = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_P_RMAX_NEG(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_P_RMAX_NEG = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_PR_IMAX(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_PR_IMAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_RR_P(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_RR_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_RR_I(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_RR_I = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_RR_IMAX(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_RR_IMAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_R_RMAX(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_R_RMAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_YR_P(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_YR_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_YR_I(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_YR_I = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_YR_IMAX(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_YR_IMAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_Y_RMAX(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_Y_RMAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_WR_P(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_WR_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_WR_I(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_WR_I = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_WR_IMAX(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_WR_IMAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_W_RMAX(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_W_RMAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_RR_FF(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_RR_FF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_PR_FF(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_PR_FF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_YR_FF(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_YR_FF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_WR_FF(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_WR_FF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_YCO_VMIN(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_YCO_VMIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_YCO_METHOD(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_YCO_METHOD = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_RSP_OFF(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_RSP_OFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_PSP_OFF(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_PSP_OFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_MAN_R_MAX(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_MAN_R_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_MAN_P_MAX(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_MAN_P_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_FLAPS_SCL(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_FLAPS_SCL = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_FLAPERON_SCL(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_FLAPERON_SCL = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_ARSP_MODE(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_ARSP_MODE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_MAN_R_SC(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_MAN_R_SC = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_MAN_P_SC(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_MAN_P_SC = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_Attitude_Control_FW_MAN_Y_SC(uint32_t value)
{
    _photonPx4_autogen._FW_Attitude_Control.FW_MAN_Y_SC = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_FW_L1_Control_FW_L1_PERIOD(uint32_t value)
{
    _photonPx4_autogen._FW_L1_Control.FW_L1_PERIOD = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
    }
}

static void setParam_FW_L1_Control_FW_L1_DAMPING(uint32_t value)
{
    _photonPx4_autogen._FW_L1_Control.FW_L1_DAMPING = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
    }
}

static void setParam_FW_L1_Control_FW_THR_CRUISE(uint32_t value)
{
    _photonPx4_autogen._FW_L1_Control.FW_THR_CRUISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
    }
}

static void setParam_FW_L1_Control_FW_THR_SLEW_MAX(uint32_t value)
{
    _photonPx4_autogen._FW_L1_Control.FW_THR_SLEW_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
    }
}

static void setParam_FW_L1_Control_FW_P_LIM_MIN(uint32_t value)
{
    _photonPx4_autogen._FW_L1_Control.FW_P_LIM_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
    }
}

static void setParam_FW_L1_Control_FW_P_LIM_MAX(uint32_t value)
{
    _photonPx4_autogen._FW_L1_Control.FW_P_LIM_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
    }
}

static void setParam_FW_L1_Control_FW_R_LIM(uint32_t value)
{
    _photonPx4_autogen._FW_L1_Control.FW_R_LIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
    }
}

static void setParam_FW_L1_Control_FW_THR_MAX(uint32_t value)
{
    _photonPx4_autogen._FW_L1_Control.FW_THR_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
    }
}

static void setParam_FW_L1_Control_FW_THR_MIN(uint32_t value)
{
    _photonPx4_autogen._FW_L1_Control.FW_THR_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
    }
}

static void setParam_FW_L1_Control_FW_THR_IDLE(uint32_t value)
{
    _photonPx4_autogen._FW_L1_Control.FW_THR_IDLE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
    }
}

static void setParam_FW_L1_Control_FW_THR_LND_MAX(uint32_t value)
{
    _photonPx4_autogen._FW_L1_Control.FW_THR_LND_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
    }
}

static void setParam_FW_L1_Control_FW_CLMBOUT_DIFF(uint32_t value)
{
    _photonPx4_autogen._FW_L1_Control.FW_CLMBOUT_DIFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
    }
}

static void setParam_FW_L1_Control_FW_LND_ANG(uint32_t value)
{
    _photonPx4_autogen._FW_L1_Control.FW_LND_ANG = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
    }
}

static void setParam_FW_L1_Control_FW_LND_HVIRT(uint32_t value)
{
    _photonPx4_autogen._FW_L1_Control.FW_LND_HVIRT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
    }
}

static void setParam_FW_L1_Control_FW_LND_FLALT(uint32_t value)
{
    _photonPx4_autogen._FW_L1_Control.FW_LND_FLALT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
    }
}

static void setParam_FW_L1_Control_FW_LND_TLALT(uint32_t value)
{
    _photonPx4_autogen._FW_L1_Control.FW_LND_TLALT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
    }
}

static void setParam_FW_L1_Control_FW_LND_HHDIST(uint32_t value)
{
    _photonPx4_autogen._FW_L1_Control.FW_LND_HHDIST = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
    }
}

static void setParam_FW_L1_Control_FW_LND_USETER(uint32_t value)
{
    _photonPx4_autogen._FW_L1_Control.FW_LND_USETER = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
    }
}

static void setParam_FW_L1_Control_FW_LND_FL_PMIN(uint32_t value)
{
    _photonPx4_autogen._FW_L1_Control.FW_LND_FL_PMIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
    }
}

static void setParam_FW_L1_Control_FW_LND_FL_PMAX(uint32_t value)
{
    _photonPx4_autogen._FW_L1_Control.FW_LND_FL_PMAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
    }
}

static void setParam_FW_L1_Control_FW_LND_AIRSPD_SC(uint32_t value)
{
    _photonPx4_autogen._FW_L1_Control.FW_LND_AIRSPD_SC = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
    }
}

static void setParam_FW_TECS_FW_AIRSPD_MIN(uint32_t value)
{
    _photonPx4_autogen._FW_TECS.FW_AIRSPD_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
    }
}

static void setParam_FW_TECS_FW_AIRSPD_MAX(uint32_t value)
{
    _photonPx4_autogen._FW_TECS.FW_AIRSPD_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
    }
}

static void setParam_FW_TECS_FW_T_CLMB_MAX(uint32_t value)
{
    _photonPx4_autogen._FW_TECS.FW_T_CLMB_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
    }
}

static void setParam_FW_TECS_FW_T_SINK_MIN(uint32_t value)
{
    _photonPx4_autogen._FW_TECS.FW_T_SINK_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
    }
}

static void setParam_FW_TECS_FW_T_SINK_MAX(uint32_t value)
{
    _photonPx4_autogen._FW_TECS.FW_T_SINK_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
    }
}

static void setParam_FW_TECS_FW_T_TIME_CONST(uint32_t value)
{
    _photonPx4_autogen._FW_TECS.FW_T_TIME_CONST = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
    }
}

static void setParam_FW_TECS_FW_T_THRO_CONST(uint32_t value)
{
    _photonPx4_autogen._FW_TECS.FW_T_THRO_CONST = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
    }
}

static void setParam_FW_TECS_FW_T_THR_DAMP(uint32_t value)
{
    _photonPx4_autogen._FW_TECS.FW_T_THR_DAMP = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
    }
}

static void setParam_FW_TECS_FW_T_INTEG_GAIN(uint32_t value)
{
    _photonPx4_autogen._FW_TECS.FW_T_INTEG_GAIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
    }
}

static void setParam_FW_TECS_FW_T_VERT_ACC(uint32_t value)
{
    _photonPx4_autogen._FW_TECS.FW_T_VERT_ACC = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
    }
}

static void setParam_FW_TECS_FW_T_HGT_OMEGA(uint32_t value)
{
    _photonPx4_autogen._FW_TECS.FW_T_HGT_OMEGA = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
    }
}

static void setParam_FW_TECS_FW_T_SPD_OMEGA(uint32_t value)
{
    _photonPx4_autogen._FW_TECS.FW_T_SPD_OMEGA = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
    }
}

static void setParam_FW_TECS_FW_T_RLL2THR(uint32_t value)
{
    _photonPx4_autogen._FW_TECS.FW_T_RLL2THR = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
    }
}

static void setParam_FW_TECS_FW_T_SPDWEIGHT(uint32_t value)
{
    _photonPx4_autogen._FW_TECS.FW_T_SPDWEIGHT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
    }
}

static void setParam_FW_TECS_FW_T_PTCH_DAMP(uint32_t value)
{
    _photonPx4_autogen._FW_TECS.FW_T_PTCH_DAMP = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
    }
}

static void setParam_FW_TECS_FW_T_HRATE_P(uint32_t value)
{
    _photonPx4_autogen._FW_TECS.FW_T_HRATE_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
    }
}

static void setParam_FW_TECS_FW_T_HRATE_FF(uint32_t value)
{
    _photonPx4_autogen._FW_TECS.FW_T_HRATE_FF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
    }
}

static void setParam_FW_TECS_FW_T_SRATE_P(uint32_t value)
{
    _photonPx4_autogen._FW_TECS.FW_T_SRATE_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
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

static void setParam_Land_Detector_LNDFW_VEL_XY_MAX(uint32_t value)
{
    _photonPx4_autogen._Land_Detector.LNDFW_VEL_XY_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAND_DETECTOR_ID);
    }
}

static void setParam_Land_Detector_LNDFW_VEL_Z_MAX(uint32_t value)
{
    _photonPx4_autogen._Land_Detector.LNDFW_VEL_Z_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAND_DETECTOR_ID);
    }
}

static void setParam_Land_Detector_LNDFW_VELI_MAX(uint32_t value)
{
    _photonPx4_autogen._Land_Detector.LNDFW_VELI_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAND_DETECTOR_ID);
    }
}

static void setParam_Land_Detector_LNDFW_AIRSPD_MAX(uint32_t value)
{
    _photonPx4_autogen._Land_Detector.LNDFW_AIRSPD_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAND_DETECTOR_ID);
    }
}

static void setParam_Launch_detection_LAUN_ALL_ON(uint32_t value)
{
    _photonPx4_autogen._Launch_detection.LAUN_ALL_ON = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAUNCH_DETECTION_ID);
    }
}

static void setParam_Launch_detection_LAUN_CAT_A(uint32_t value)
{
    _photonPx4_autogen._Launch_detection.LAUN_CAT_A = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAUNCH_DETECTION_ID);
    }
}

static void setParam_Launch_detection_LAUN_CAT_T(uint32_t value)
{
    _photonPx4_autogen._Launch_detection.LAUN_CAT_T = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAUNCH_DETECTION_ID);
    }
}

static void setParam_Launch_detection_LAUN_CAT_MDEL(uint32_t value)
{
    _photonPx4_autogen._Launch_detection.LAUN_CAT_MDEL = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAUNCH_DETECTION_ID);
    }
}

static void setParam_Launch_detection_LAUN_CAT_PMAX(uint32_t value)
{
    _photonPx4_autogen._Launch_detection.LAUN_CAT_PMAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAUNCH_DETECTION_ID);
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

static void setParam_MKBLCTRL_Testmode_MKBLCTRL_TEST(uint32_t value)
{
    _photonPx4_autogen._MKBLCTRL_Testmode.MKBLCTRL_TEST = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MKBLCTRL_TESTMODE_ID);
    }
}

static void setParam_MPU9x50_Configuration_MPU_GYRO_LPF_ENM(uint32_t value)
{
    _photonPx4_autogen._MPU9x50_Configuration.MPU_GYRO_LPF_ENM = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MPU9X50_CONFIGURATION_ID);
    }
}

static void setParam_MPU9x50_Configuration_MPU_ACC_LPF_ENM(uint32_t value)
{
    _photonPx4_autogen._MPU9x50_Configuration.MPU_ACC_LPF_ENM = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MPU9X50_CONFIGURATION_ID);
    }
}

static void setParam_MPU9x50_Configuration_MPU_SAMPLE_R_ENM(uint32_t value)
{
    _photonPx4_autogen._MPU9x50_Configuration.MPU_SAMPLE_R_ENM = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MPU9X50_CONFIGURATION_ID);
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

static void setParam_Mount_MNT_MODE_IN(uint32_t value)
{
    _photonPx4_autogen._Mount.MNT_MODE_IN = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MOUNT_ID);
    }
}

static void setParam_Mount_MNT_MODE_OUT(uint32_t value)
{
    _photonPx4_autogen._Mount.MNT_MODE_OUT = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MOUNT_ID);
    }
}

static void setParam_Mount_MNT_MAV_SYSID(uint32_t value)
{
    _photonPx4_autogen._Mount.MNT_MAV_SYSID = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MOUNT_ID);
    }
}

static void setParam_Mount_MNT_MAV_COMPID(uint32_t value)
{
    _photonPx4_autogen._Mount.MNT_MAV_COMPID = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MOUNT_ID);
    }
}

static void setParam_Mount_MNT_OB_NORM_MODE(uint32_t value)
{
    _photonPx4_autogen._Mount.MNT_OB_NORM_MODE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MOUNT_ID);
    }
}

static void setParam_Mount_MNT_OB_LOCK_MODE(uint32_t value)
{
    _photonPx4_autogen._Mount.MNT_OB_LOCK_MODE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MOUNT_ID);
    }
}

static void setParam_Mount_MNT_MAN_CONTROL(uint32_t value)
{
    _photonPx4_autogen._Mount.MNT_MAN_CONTROL = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MOUNT_ID);
    }
}

static void setParam_Mount_MNT_MAN_ROLL(uint32_t value)
{
    _photonPx4_autogen._Mount.MNT_MAN_ROLL = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MOUNT_ID);
    }
}

static void setParam_Mount_MNT_MAN_PITCH(uint32_t value)
{
    _photonPx4_autogen._Mount.MNT_MAN_PITCH = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MOUNT_ID);
    }
}

static void setParam_Mount_MNT_MAN_YAW(uint32_t value)
{
    _photonPx4_autogen._Mount.MNT_MAN_YAW = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MOUNT_ID);
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

static void setParam_Multicopter_Attitude_Control_MPP_MAN_R_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MPP_MAN_R_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MPP_MAN_P_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MPP_MAN_P_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MPP_MAN_Y_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MPP_MAN_Y_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MP_ROLL_P(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MP_ROLL_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MP_ROLLRATE_P(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MP_ROLLRATE_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MP_ROLLRATE_I(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MP_ROLLRATE_I = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MP_ROLLRATE_D(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MP_ROLLRATE_D = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MP_PITCH_P(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MP_PITCH_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MP_PITCHRATE_P(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MP_PITCHRATE_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MP_PITCHRATE_I(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MP_PITCHRATE_I = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MP_PITCHRATE_D(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MP_PITCHRATE_D = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MP_YAW_P(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MP_YAW_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MP_YAWRATE_P(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MP_YAWRATE_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MP_YAWRATE_I(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MP_YAWRATE_I = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MP_YAWRATE_D(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MP_YAWRATE_D = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MP_YAW_FF(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MP_YAW_FF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MP_YAWRATE_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MP_YAWRATE_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MP_ACRO_R_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MP_ACRO_R_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MP_ACRO_P_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MP_ACRO_P_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_Multicopter_Attitude_Control_MP_ACRO_Y_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Attitude_Control.MP_ACRO_Y_MAX = *(float*)&value;
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

static void setParam_Multicopter_Position_Control_MPP_THR_MIN(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPP_THR_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPP_THR_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPP_THR_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPP_Z_P(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPP_Z_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPP_Z_VEL_P(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPP_Z_VEL_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPP_Z_VEL_I(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPP_Z_VEL_I = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPP_Z_VEL_D(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPP_Z_VEL_D = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPP_Z_VEL_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPP_Z_VEL_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPP_Z_FF(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPP_Z_FF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPP_XY_P(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPP_XY_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPP_XY_VEL_P(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPP_XY_VEL_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPP_XY_VEL_I(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPP_XY_VEL_I = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPP_XY_VEL_D(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPP_XY_VEL_D = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPP_XY_VEL_MAX(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPP_XY_VEL_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPP_XY_FF(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPP_XY_FF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPP_TILTMAX_AIR(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPP_TILTMAX_AIR = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPP_TILTMAX_LND(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPP_TILTMAX_LND = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
    }
}

static void setParam_Multicopter_Position_Control_MPP_LAND_SPEED(uint32_t value)
{
    _photonPx4_autogen._Multicopter_Position_Control.MPP_LAND_SPEED = *(float*)&value;
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

static void setParam_Payload_drop_BD_GPROPERTIES(uint32_t value)
{
    _photonPx4_autogen._Payload_drop.BD_GPROPERTIES = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PAYLOAD_DROP_ID);
    }
}

static void setParam_Payload_drop_BD_TURNRADIUS(uint32_t value)
{
    _photonPx4_autogen._Payload_drop.BD_TURNRADIUS = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PAYLOAD_DROP_ID);
    }
}

static void setParam_Payload_drop_BD_PRECISION(uint32_t value)
{
    _photonPx4_autogen._Payload_drop.BD_PRECISION = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PAYLOAD_DROP_ID);
    }
}

static void setParam_Payload_drop_BD_OBJ_CD(uint32_t value)
{
    _photonPx4_autogen._Payload_drop.BD_OBJ_CD = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PAYLOAD_DROP_ID);
    }
}

static void setParam_Payload_drop_BD_OBJ_MASS(uint32_t value)
{
    _photonPx4_autogen._Payload_drop.BD_OBJ_MASS = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PAYLOAD_DROP_ID);
    }
}

static void setParam_Payload_drop_BD_OBJ_SURFACE(uint32_t value)
{
    _photonPx4_autogen._Payload_drop.BD_OBJ_SURFACE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PAYLOAD_DROP_ID);
    }
}

static void setParam_Position_Estimator_PE_VEL_DELAY_MS(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_VEL_DELAY_MS = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_PE_POS_DELAY_MS(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_POS_DELAY_MS = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_PE_HGT_DELAY_MS(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_HGT_DELAY_MS = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_PE_MAG_DELAY_MS(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_MAG_DELAY_MS = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_PE_TAS_DELAY_MS(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_TAS_DELAY_MS = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_PE_GPS_ALT_WGT(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_GPS_ALT_WGT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_PE_EAS_NOISE(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_EAS_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_PE_VELNE_NOISE(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_VELNE_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_PE_VELD_NOISE(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_VELD_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_PE_POSNE_NOISE(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_POSNE_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_PE_POSD_NOISE(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_POSD_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_PE_MAG_NOISE(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_MAG_NOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_PE_GYRO_PNOISE(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_GYRO_PNOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_PE_ACC_PNOISE(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_ACC_PNOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_PE_GBIAS_PNOISE(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_GBIAS_PNOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_PE_ABIAS_PNOISE(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_ABIAS_PNOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_PE_MAGE_PNOISE(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_MAGE_PNOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_PE_MAGB_PNOISE(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_MAGB_PNOISE = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_PE_MAGB_X(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_MAGB_X = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_PE_MAGB_Y(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_MAGB_Y = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_PE_MAGB_Z(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_MAGB_Z = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_PE_POSDEV_INIT(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator.PE_POSDEV_INIT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_W_Z_BARO(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_W_Z_BARO = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_W_Z_GPS_P(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_W_Z_GPS_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_W_Z_GPS_V(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_W_Z_GPS_V = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_W_Z_VIS_P(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_W_Z_VIS_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_W_Z_LIDAR(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_W_Z_LIDAR = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_W_XY_GPS_P(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_W_XY_GPS_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_W_XY_GPS_V(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_W_XY_GPS_V = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_W_XY_VIS_P(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_W_XY_VIS_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_W_XY_VIS_V(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_W_XY_VIS_V = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_W_MOC_P(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_W_MOC_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_W_XY_FLOW(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_W_XY_FLOW = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_W_XY_RES_V(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_W_XY_RES_V = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_W_GPS_FLOW(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_W_GPS_FLOW = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_W_ACC_BIAS(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_W_ACC_BIAS = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_FLOW_K(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_FLOW_K = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_FLOW_Q_MIN(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_FLOW_Q_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_LIDAR_ERR(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_LIDAR_ERR = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_LAND_T(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_LAND_T = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_LAND_DISP(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_LAND_DISP = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_LAND_THR(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_LAND_THR = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_DELAY_GPS(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_DELAY_GPS = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_FLOW_DIST_X(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_FLOW_DIST_X = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_FLOW_DIST_Y(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_FLOW_DIST_Y = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_DISAB_MOCAP(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_DISAB_MOCAP = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_LIDAR_EST(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_LIDAR_EST = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_INAV_LIDAR_OFF(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.INAV_LIDAR_OFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_Position_Estimator_INAV_CBRK_NO_VISION(uint32_t value)
{
    _photonPx4_autogen._Position_Estimator_INAV.CBRK_NO_VISION = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
    }
}

static void setParam_RC_Receiver_Configuration_RC_RECEIVER_TYPE(uint32_t value)
{
    _photonPx4_autogen._RC_Receiver_Configuration.RC_RECEIVER_TYPE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RC_RECEIVER_CONFIGURATION_ID);
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

static void setParam_Radio_Calibration_RC_RL1_DSM_VCC(uint32_t value)
{
    _photonPx4_autogen._Radio_Calibration.RC_RL1_DSM_VCC = *(int32_t*)&value;
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

static void setParam_Runway_Takeoff_RWTO_TKOFF(uint32_t value)
{
    _photonPx4_autogen._Runway_Takeoff.RWTO_TKOFF = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RUNWAY_TAKEOFF_ID);
    }
}

static void setParam_Runway_Takeoff_RWTO_HDG(uint32_t value)
{
    _photonPx4_autogen._Runway_Takeoff.RWTO_HDG = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RUNWAY_TAKEOFF_ID);
    }
}

static void setParam_Runway_Takeoff_RWTO_NAV_ALT(uint32_t value)
{
    _photonPx4_autogen._Runway_Takeoff.RWTO_NAV_ALT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RUNWAY_TAKEOFF_ID);
    }
}

static void setParam_Runway_Takeoff_RWTO_MAX_THR(uint32_t value)
{
    _photonPx4_autogen._Runway_Takeoff.RWTO_MAX_THR = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RUNWAY_TAKEOFF_ID);
    }
}

static void setParam_Runway_Takeoff_RWTO_PSP(uint32_t value)
{
    _photonPx4_autogen._Runway_Takeoff.RWTO_PSP = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RUNWAY_TAKEOFF_ID);
    }
}

static void setParam_Runway_Takeoff_RWTO_MAX_PITCH(uint32_t value)
{
    _photonPx4_autogen._Runway_Takeoff.RWTO_MAX_PITCH = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RUNWAY_TAKEOFF_ID);
    }
}

static void setParam_Runway_Takeoff_RWTO_MAX_ROLL(uint32_t value)
{
    _photonPx4_autogen._Runway_Takeoff.RWTO_MAX_ROLL = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RUNWAY_TAKEOFF_ID);
    }
}

static void setParam_Runway_Takeoff_RWTO_AIRSPD_SCL(uint32_t value)
{
    _photonPx4_autogen._Runway_Takeoff.RWTO_AIRSPD_SCL = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RUNWAY_TAKEOFF_ID);
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

static void setParam_SD_Logging_SDLOG_RATE(uint32_t value)
{
    _photonPx4_autogen._SD_Logging.SDLOG_RATE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SD_LOGGING_ID);
    }
}

static void setParam_SD_Logging_SDLOG_EXT(uint32_t value)
{
    _photonPx4_autogen._SD_Logging.SDLOG_EXT = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SD_LOGGING_ID);
    }
}

static void setParam_SD_Logging_SDLOG_GPSTIME(uint32_t value)
{
    _photonPx4_autogen._SD_Logging.SDLOG_GPSTIME = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SD_LOGGING_ID);
    }
}

static void setParam_SD_Logging_SDLOG_PRIO_BOOST(uint32_t value)
{
    _photonPx4_autogen._SD_Logging.SDLOG_PRIO_BOOST = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SD_LOGGING_ID);
    }
}

static void setParam_Sensor_Calibration_CAL_BOARD_ID(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.CAL_BOARD_ID = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
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

static void setParam_Sensor_Calibration_SENS_FLOW_ROT(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.SENS_FLOW_ROT = *(int32_t*)&value;
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

static void setParam_Sensor_Calibration_SENS_EXT_MAG_ROT(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.SENS_EXT_MAG_ROT = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
    }
}

static void setParam_Sensor_Calibration_SENS_EXT_MAG(uint32_t value)
{
    _photonPx4_autogen._Sensor_Calibration.SENS_EXT_MAG = *(int32_t*)&value;
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

static void setParam_Snapdragon_UART_ESC_UART_ESC_MODEL(uint32_t value)
{
    _photonPx4_autogen._Snapdragon_UART_ESC.UART_ESC_MODEL = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SNAPDRAGON_UART_ESC_ID);
    }
}

static void setParam_Snapdragon_UART_ESC_UART_ESC_BAUD(uint32_t value)
{
    _photonPx4_autogen._Snapdragon_UART_ESC.UART_ESC_BAUD = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SNAPDRAGON_UART_ESC_ID);
    }
}

static void setParam_Snapdragon_UART_ESC_UART_ESC_MOTOR1(uint32_t value)
{
    _photonPx4_autogen._Snapdragon_UART_ESC.UART_ESC_MOTOR1 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SNAPDRAGON_UART_ESC_ID);
    }
}

static void setParam_Snapdragon_UART_ESC_UART_ESC_MOTOR2(uint32_t value)
{
    _photonPx4_autogen._Snapdragon_UART_ESC.UART_ESC_MOTOR2 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SNAPDRAGON_UART_ESC_ID);
    }
}

static void setParam_Snapdragon_UART_ESC_UART_ESC_MOTOR3(uint32_t value)
{
    _photonPx4_autogen._Snapdragon_UART_ESC.UART_ESC_MOTOR3 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SNAPDRAGON_UART_ESC_ID);
    }
}

static void setParam_Snapdragon_UART_ESC_UART_ESC_MOTOR4(uint32_t value)
{
    _photonPx4_autogen._Snapdragon_UART_ESC.UART_ESC_MOTOR4 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SNAPDRAGON_UART_ESC_ID);
    }
}

static void setParam_Subscriber_Example_SUB_INTERV(uint32_t value)
{
    _photonPx4_autogen._Subscriber_Example.SUB_INTERV = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SUBSCRIBER_EXAMPLE_ID);
    }
}

static void setParam_Subscriber_Example_SUB_TESTF(uint32_t value)
{
    _photonPx4_autogen._Subscriber_Example.SUB_TESTF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SUBSCRIBER_EXAMPLE_ID);
    }
}

static void setParam_Syslink_SLNK_RADIO_CHAN(uint32_t value)
{
    _photonPx4_autogen._Syslink.SLNK_RADIO_CHAN = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSLINK_ID);
    }
}

static void setParam_Syslink_SLNK_RADIO_RATE(uint32_t value)
{
    _photonPx4_autogen._Syslink.SLNK_RADIO_RATE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSLINK_ID);
    }
}

static void setParam_Syslink_SLNK_RADIO_ADDR1(uint32_t value)
{
    _photonPx4_autogen._Syslink.SLNK_RADIO_ADDR1 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSLINK_ID);
    }
}

static void setParam_Syslink_SLNK_RADIO_ADDR2(uint32_t value)
{
    _photonPx4_autogen._Syslink.SLNK_RADIO_ADDR2 = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSLINK_ID);
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

static void setParam_System_LED_RGB_MAXBRT(uint32_t value)
{
    _photonPx4_autogen._System.LED_RGB_MAXBRT = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSTEM_ID);
    }
}

static void setParam_Testing_TEST_MIN(uint32_t value)
{
    _photonPx4_autogen._Testing.TEST_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
    }
}

static void setParam_Testing_TEST_MAX(uint32_t value)
{
    _photonPx4_autogen._Testing.TEST_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
    }
}

static void setParam_Testing_TEST_TRIM(uint32_t value)
{
    _photonPx4_autogen._Testing.TEST_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
    }
}

static void setParam_Testing_TEST_HP(uint32_t value)
{
    _photonPx4_autogen._Testing.TEST_HP = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
    }
}

static void setParam_Testing_TEST_LP(uint32_t value)
{
    _photonPx4_autogen._Testing.TEST_LP = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
    }
}

static void setParam_Testing_TEST_P(uint32_t value)
{
    _photonPx4_autogen._Testing.TEST_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
    }
}

static void setParam_Testing_TEST_I(uint32_t value)
{
    _photonPx4_autogen._Testing.TEST_I = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
    }
}

static void setParam_Testing_TEST_I_MAX(uint32_t value)
{
    _photonPx4_autogen._Testing.TEST_I_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
    }
}

static void setParam_Testing_TEST_D(uint32_t value)
{
    _photonPx4_autogen._Testing.TEST_D = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
    }
}

static void setParam_Testing_TEST_D_LP(uint32_t value)
{
    _photonPx4_autogen._Testing.TEST_D_LP = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
    }
}

static void setParam_Testing_TEST_MEAN(uint32_t value)
{
    _photonPx4_autogen._Testing.TEST_MEAN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
    }
}

static void setParam_Testing_TEST_DEV(uint32_t value)
{
    _photonPx4_autogen._Testing.TEST_DEV = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
    }
}

static void setParam_Testing_TEST_PARAMS(uint32_t value)
{
    _photonPx4_autogen._Testing.TEST_PARAMS = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
    }
}

static void setParam_UAVCAN_UAVCAN_ENABLE(uint32_t value)
{
    _photonPx4_autogen._UAVCAN.UAVCAN_ENABLE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_ID);
    }
}

static void setParam_UAVCAN_UAVCAN_NODE_ID(uint32_t value)
{
    _photonPx4_autogen._UAVCAN.UAVCAN_NODE_ID = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_ID);
    }
}

static void setParam_UAVCAN_UAVCAN_BITRATE(uint32_t value)
{
    _photonPx4_autogen._UAVCAN.UAVCAN_BITRATE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_ID);
    }
}

static void setParam_UAVCAN_UAVCAN_ESC_IDLT(uint32_t value)
{
    _photonPx4_autogen._UAVCAN.UAVCAN_ESC_IDLT = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_TRANS_THR(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_TRANS_THR = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_DWN_PITCH_MAX(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_DWN_PITCH_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_FWD_THRUST_SC(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_FWD_THRUST_SC = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_MOT_COUNT(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_MOT_COUNT = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_IDLE_PWM_MC(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_IDLE_PWM_MC = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_MC_ARSPD_MIN(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_MC_ARSPD_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_MC_ARSPD_MAX(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_MC_ARSPD_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_MC_ARSPD_TRIM(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_MC_ARSPD_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_FW_PERM_STAB(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_FW_PERM_STAB = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_FW_PITCH_TRIM(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_FW_PITCH_TRIM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_POWER_MAX(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_POWER_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_PROP_EFF(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_PROP_EFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_ARSP_LP_GAIN(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_ARSP_LP_GAIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_TYPE(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_TYPE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_ELEV_MC_LOCK(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_ELEV_MC_LOCK = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_F_TRANS_DUR(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_F_TRANS_DUR = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_B_TRANS_DUR(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_B_TRANS_DUR = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_ARSP_BLEND(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_ARSP_BLEND = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_ARSP_TRANS(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_ARSP_TRANS = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_OPT_RECOV_EN(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_OPT_RECOV_EN = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_WV_YAWR_SCL(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_WV_YAWR_SCL = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_TRANS_TIMEOUT(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_TRANS_TIMEOUT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_TRANS_MIN_TM(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_TRANS_MIN_TM = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_NAV_FORCE_VT(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_NAV_FORCE_VT = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_FW_MIN_ALT(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_FW_MIN_ALT = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_TILT_MC(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_TILT_MC = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_TILT_TRANS(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_TILT_TRANS = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_TILT_FW(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_TILT_FW = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_TRANS_P2_DUR(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_TRANS_P2_DUR = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_VTOL_Attitude_Control_VT_FW_MOT_OFFID(uint32_t value)
{
    _photonPx4_autogen._VTOL_Attitude_Control.VT_FW_MOT_OFFID = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
    }
}

static void setParam_MTECS_MT_ENABLED(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_ENABLED = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_THR_FF(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_THR_FF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_THR_P(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_THR_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_THR_I(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_THR_I = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_THR_OFF(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_THR_OFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_PIT_FF(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_PIT_FF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_PIT_P(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_PIT_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_PIT_I(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_PIT_I = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_PIT_OFF(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_PIT_OFF = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_THR_MIN(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_THR_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_THR_MAX(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_THR_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_PIT_MIN(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_PIT_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_PIT_MAX(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_PIT_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_ALT_LP(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_ALT_LP = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_FPA_LP(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_FPA_LP = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_FPA_P(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_FPA_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_FPA_D(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_FPA_D = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_FPA_D_LP(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_FPA_D_LP = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_FPA_MIN(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_FPA_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_FPA_MAX(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_FPA_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_A_LP(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_A_LP = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_AD_LP(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_AD_LP = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_ACC_P(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_ACC_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_ACC_D(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_ACC_D = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_ACC_D_LP(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_ACC_D_LP = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_ACC_MIN(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_ACC_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_ACC_MAX(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_ACC_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_TKF_THR_MIN(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_TKF_THR_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_TKF_THR_MAX(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_TKF_THR_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_TKF_PIT_MIN(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_TKF_PIT_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_TKF_PIT_MAX(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_TKF_PIT_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_USP_THR_MIN(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_USP_THR_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_USP_THR_MAX(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_USP_THR_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_USP_PIT_MIN(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_USP_PIT_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_USP_PIT_MAX(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_USP_PIT_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_LND_THR_MIN(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_LND_THR_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_LND_THR_MAX(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_LND_THR_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_LND_PIT_MIN(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_LND_PIT_MIN = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_LND_PIT_MAX(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_LND_PIT_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_THR_I_MAX(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_THR_I_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_MTECS_MT_PIT_I_MAX(uint32_t value)
{
    _photonPx4_autogen._MTECS.MT_PIT_I_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
    }
}

static void setParam_Miscellaneous_RC_MAP_FAILSAFE(uint32_t value)
{
    _photonPx4_autogen._Miscellaneous.RC_MAP_FAILSAFE = *(int32_t*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
    }
}

static void setParam_Miscellaneous_SEG_TH2V_P(uint32_t value)
{
    _photonPx4_autogen._Miscellaneous.SEG_TH2V_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
    }
}

static void setParam_Miscellaneous_SEG_TH2V_I(uint32_t value)
{
    _photonPx4_autogen._Miscellaneous.SEG_TH2V_I = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
    }
}

static void setParam_Miscellaneous_SEG_TH2V_I_MAX(uint32_t value)
{
    _photonPx4_autogen._Miscellaneous.SEG_TH2V_I_MAX = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
    }
}

static void setParam_Miscellaneous_SEG_Q2V(uint32_t value)
{
    _photonPx4_autogen._Miscellaneous.SEG_Q2V = *(float*)&value;
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

static void setParam_Miscellaneous_RV_YAW_P(uint32_t value)
{
    _photonPx4_autogen._Miscellaneous.RV_YAW_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
    }
}

static void setParam_Miscellaneous_EXFW_HDNG_P(uint32_t value)
{
    _photonPx4_autogen._Miscellaneous.EXFW_HDNG_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
    }
}

static void setParam_Miscellaneous_EXFW_ROLL_P(uint32_t value)
{
    _photonPx4_autogen._Miscellaneous.EXFW_ROLL_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
    }
}

static void setParam_Miscellaneous_EXFW_PITCH_P(uint32_t value)
{
    _photonPx4_autogen._Miscellaneous.EXFW_PITCH_P = *(float*)&value;
    if(_photonPx4_autogen.inited) {
        PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
    }
}

void PhotonPx4_autogen_Init()
{
    _photonPx4_autogen.inited = false;
    PhotonPx4_autogen_InitParam("ctl_bw", setParam_UAVCAN_Motor_Parameters_ctl_bw);
    PhotonPx4_autogen_InitParam("ctl_dir", setParam_UAVCAN_Motor_Parameters_ctl_dir);
    PhotonPx4_autogen_InitParam("ctl_gain", setParam_UAVCAN_Motor_Parameters_ctl_gain);
    PhotonPx4_autogen_InitParam("ctl_hz_idle", setParam_UAVCAN_Motor_Parameters_ctl_hz_idle);
    PhotonPx4_autogen_InitParam("ctl_start_rate", setParam_UAVCAN_Motor_Parameters_ctl_start_rate);
    PhotonPx4_autogen_InitParam("esc_index", setParam_UAVCAN_Motor_Parameters_esc_index);
    PhotonPx4_autogen_InitParam("id_ext_status", setParam_UAVCAN_Motor_Parameters_id_ext_status);
    PhotonPx4_autogen_InitParam("int_ext_status", setParam_UAVCAN_Motor_Parameters_int_ext_status);
    PhotonPx4_autogen_InitParam("int_status", setParam_UAVCAN_Motor_Parameters_int_status);
    PhotonPx4_autogen_InitParam("mot_i_max", setParam_UAVCAN_Motor_Parameters_mot_i_max);
    PhotonPx4_autogen_InitParam("mot_kv", setParam_UAVCAN_Motor_Parameters_mot_kv);
    PhotonPx4_autogen_InitParam("mot_ls", setParam_UAVCAN_Motor_Parameters_mot_ls);
    PhotonPx4_autogen_InitParam("mot_num_poles", setParam_UAVCAN_Motor_Parameters_mot_num_poles);
    PhotonPx4_autogen_InitParam("mot_rs", setParam_UAVCAN_Motor_Parameters_mot_rs);
    PhotonPx4_autogen_InitParam("mot_v_accel", setParam_UAVCAN_Motor_Parameters_mot_v_accel);
    PhotonPx4_autogen_InitParam("mot_v_max", setParam_UAVCAN_Motor_Parameters_mot_v_max);
    PhotonPx4_autogen_InitParam("EKF_ATT_V3_Q0", setParam_Attitude_EKF_estimator_EKF_ATT_V3_Q0);
    PhotonPx4_autogen_InitParam("EKF_ATT_V3_Q1", setParam_Attitude_EKF_estimator_EKF_ATT_V3_Q1);
    PhotonPx4_autogen_InitParam("EKF_ATT_V3_Q2", setParam_Attitude_EKF_estimator_EKF_ATT_V3_Q2);
    PhotonPx4_autogen_InitParam("EKF_ATT_V3_Q3", setParam_Attitude_EKF_estimator_EKF_ATT_V3_Q3);
    PhotonPx4_autogen_InitParam("EKF_ATT_V4_R0", setParam_Attitude_EKF_estimator_EKF_ATT_V4_R0);
    PhotonPx4_autogen_InitParam("EKF_ATT_V4_R1", setParam_Attitude_EKF_estimator_EKF_ATT_V4_R1);
    PhotonPx4_autogen_InitParam("EKF_ATT_V4_R2", setParam_Attitude_EKF_estimator_EKF_ATT_V4_R2);
    PhotonPx4_autogen_InitParam("ATT_J11", setParam_Attitude_EKF_estimator_ATT_J11);
    PhotonPx4_autogen_InitParam("ATT_J22", setParam_Attitude_EKF_estimator_ATT_J22);
    PhotonPx4_autogen_InitParam("ATT_J33", setParam_Attitude_EKF_estimator_ATT_J33);
    PhotonPx4_autogen_InitParam("ATT_J_EN", setParam_Attitude_EKF_estimator_ATT_J_EN);
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
    PhotonPx4_autogen_InitParam("TRIG_INTERFACE", setParam_Camera_trigger_TRIG_INTERFACE);
    PhotonPx4_autogen_InitParam("TRIG_INTERVAL", setParam_Camera_trigger_TRIG_INTERVAL);
    PhotonPx4_autogen_InitParam("TRIG_POLARITY", setParam_Camera_trigger_TRIG_POLARITY);
    PhotonPx4_autogen_InitParam("TRIG_ACT_TIME", setParam_Camera_trigger_TRIG_ACT_TIME);
    PhotonPx4_autogen_InitParam("TRIG_MODE", setParam_Camera_trigger_TRIG_MODE);
    PhotonPx4_autogen_InitParam("TRIG_PINS", setParam_Camera_trigger_TRIG_PINS);
    PhotonPx4_autogen_InitParam("TRIG_DISTANCE", setParam_Camera_trigger_TRIG_DISTANCE);
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
    PhotonPx4_autogen_InitParam("EKF2_MIN_OBS_DT", setParam_EKF2_EKF2_MIN_OBS_DT);
    PhotonPx4_autogen_InitParam("EKF2_MAG_DELAY", setParam_EKF2_EKF2_MAG_DELAY);
    PhotonPx4_autogen_InitParam("EKF2_BARO_DELAY", setParam_EKF2_EKF2_BARO_DELAY);
    PhotonPx4_autogen_InitParam("EKF2_GPS_DELAY", setParam_EKF2_EKF2_GPS_DELAY);
    PhotonPx4_autogen_InitParam("EKF2_OF_DELAY", setParam_EKF2_EKF2_OF_DELAY);
    PhotonPx4_autogen_InitParam("EKF2_RNG_DELAY", setParam_EKF2_EKF2_RNG_DELAY);
    PhotonPx4_autogen_InitParam("EKF2_ASP_DELAY", setParam_EKF2_EKF2_ASP_DELAY);
    PhotonPx4_autogen_InitParam("EKF2_EV_DELAY", setParam_EKF2_EKF2_EV_DELAY);
    PhotonPx4_autogen_InitParam("EKF2_GPS_CHECK", setParam_EKF2_EKF2_GPS_CHECK);
    PhotonPx4_autogen_InitParam("EKF2_REQ_EPH", setParam_EKF2_EKF2_REQ_EPH);
    PhotonPx4_autogen_InitParam("EKF2_REQ_EPV", setParam_EKF2_EKF2_REQ_EPV);
    PhotonPx4_autogen_InitParam("EKF2_REQ_SACC", setParam_EKF2_EKF2_REQ_SACC);
    PhotonPx4_autogen_InitParam("EKF2_REQ_NSATS", setParam_EKF2_EKF2_REQ_NSATS);
    PhotonPx4_autogen_InitParam("EKF2_REQ_GDOP", setParam_EKF2_EKF2_REQ_GDOP);
    PhotonPx4_autogen_InitParam("EKF2_REQ_HDRIFT", setParam_EKF2_EKF2_REQ_HDRIFT);
    PhotonPx4_autogen_InitParam("EKF2_REQ_VDRIFT", setParam_EKF2_EKF2_REQ_VDRIFT);
    PhotonPx4_autogen_InitParam("EKF2_GYR_NOISE", setParam_EKF2_EKF2_GYR_NOISE);
    PhotonPx4_autogen_InitParam("EKF2_ACC_NOISE", setParam_EKF2_EKF2_ACC_NOISE);
    PhotonPx4_autogen_InitParam("EKF2_GYR_B_NOISE", setParam_EKF2_EKF2_GYR_B_NOISE);
    PhotonPx4_autogen_InitParam("EKF2_ACC_B_NOISE", setParam_EKF2_EKF2_ACC_B_NOISE);
    PhotonPx4_autogen_InitParam("EKF2_MAG_B_NOISE", setParam_EKF2_EKF2_MAG_B_NOISE);
    PhotonPx4_autogen_InitParam("EKF2_MAG_E_NOISE", setParam_EKF2_EKF2_MAG_E_NOISE);
    PhotonPx4_autogen_InitParam("EKF2_WIND_NOISE", setParam_EKF2_EKF2_WIND_NOISE);
    PhotonPx4_autogen_InitParam("EKF2_GPS_V_NOISE", setParam_EKF2_EKF2_GPS_V_NOISE);
    PhotonPx4_autogen_InitParam("EKF2_GPS_P_NOISE", setParam_EKF2_EKF2_GPS_P_NOISE);
    PhotonPx4_autogen_InitParam("EKF2_NOAID_NOISE", setParam_EKF2_EKF2_NOAID_NOISE);
    PhotonPx4_autogen_InitParam("EKF2_BARO_NOISE", setParam_EKF2_EKF2_BARO_NOISE);
    PhotonPx4_autogen_InitParam("EKF2_HEAD_NOISE", setParam_EKF2_EKF2_HEAD_NOISE);
    PhotonPx4_autogen_InitParam("EKF2_MAG_NOISE", setParam_EKF2_EKF2_MAG_NOISE);
    PhotonPx4_autogen_InitParam("EKF2_EAS_NOISE", setParam_EKF2_EKF2_EAS_NOISE);
    PhotonPx4_autogen_InitParam("EKF2_BETA_NOISE", setParam_EKF2_EKF2_BETA_NOISE);
    PhotonPx4_autogen_InitParam("EKF2_MAG_DECL", setParam_EKF2_EKF2_MAG_DECL);
    PhotonPx4_autogen_InitParam("EKF2_HDG_GATE", setParam_EKF2_EKF2_HDG_GATE);
    PhotonPx4_autogen_InitParam("EKF2_MAG_GATE", setParam_EKF2_EKF2_MAG_GATE);
    PhotonPx4_autogen_InitParam("EKF2_DECL_TYPE", setParam_EKF2_EKF2_DECL_TYPE);
    PhotonPx4_autogen_InitParam("EKF2_MAG_TYPE", setParam_EKF2_EKF2_MAG_TYPE);
    PhotonPx4_autogen_InitParam("EKF2_BARO_GATE", setParam_EKF2_EKF2_BARO_GATE);
    PhotonPx4_autogen_InitParam("EKF2_GPS_P_GATE", setParam_EKF2_EKF2_GPS_P_GATE);
    PhotonPx4_autogen_InitParam("EKF2_GPS_V_GATE", setParam_EKF2_EKF2_GPS_V_GATE);
    PhotonPx4_autogen_InitParam("EKF2_TAS_GATE", setParam_EKF2_EKF2_TAS_GATE);
    PhotonPx4_autogen_InitParam("EKF2_REC_RPL", setParam_EKF2_EKF2_REC_RPL);
    PhotonPx4_autogen_InitParam("EKF2_AID_MASK", setParam_EKF2_EKF2_AID_MASK);
    PhotonPx4_autogen_InitParam("EKF2_HGT_MODE", setParam_EKF2_EKF2_HGT_MODE);
    PhotonPx4_autogen_InitParam("EKF2_RNG_NOISE", setParam_EKF2_EKF2_RNG_NOISE);
    PhotonPx4_autogen_InitParam("EKF2_RNG_GATE", setParam_EKF2_EKF2_RNG_GATE);
    PhotonPx4_autogen_InitParam("EKF2_MIN_RNG", setParam_EKF2_EKF2_MIN_RNG);
    PhotonPx4_autogen_InitParam("EKF2_EVP_NOISE", setParam_EKF2_EKF2_EVP_NOISE);
    PhotonPx4_autogen_InitParam("EKF2_EVA_NOISE", setParam_EKF2_EKF2_EVA_NOISE);
    PhotonPx4_autogen_InitParam("EKF2_EV_GATE", setParam_EKF2_EKF2_EV_GATE);
    PhotonPx4_autogen_InitParam("EKF2_MIN_EV", setParam_EKF2_EKF2_MIN_EV);
    PhotonPx4_autogen_InitParam("EKF2_OF_N_MIN", setParam_EKF2_EKF2_OF_N_MIN);
    PhotonPx4_autogen_InitParam("EKF2_OF_N_MAX", setParam_EKF2_EKF2_OF_N_MAX);
    PhotonPx4_autogen_InitParam("EKF2_OF_QMIN", setParam_EKF2_EKF2_OF_QMIN);
    PhotonPx4_autogen_InitParam("EKF2_OF_GATE", setParam_EKF2_EKF2_OF_GATE);
    PhotonPx4_autogen_InitParam("EKF2_OF_RMAX", setParam_EKF2_EKF2_OF_RMAX);
    PhotonPx4_autogen_InitParam("EKF2_TERR_NOISE", setParam_EKF2_EKF2_TERR_NOISE);
    PhotonPx4_autogen_InitParam("EKF2_TERR_GRAD", setParam_EKF2_EKF2_TERR_GRAD);
    PhotonPx4_autogen_InitParam("EKF2_IMU_POS_X", setParam_EKF2_EKF2_IMU_POS_X);
    PhotonPx4_autogen_InitParam("EKF2_IMU_POS_Y", setParam_EKF2_EKF2_IMU_POS_Y);
    PhotonPx4_autogen_InitParam("EKF2_IMU_POS_Z", setParam_EKF2_EKF2_IMU_POS_Z);
    PhotonPx4_autogen_InitParam("EKF2_GPS_POS_X", setParam_EKF2_EKF2_GPS_POS_X);
    PhotonPx4_autogen_InitParam("EKF2_GPS_POS_Y", setParam_EKF2_EKF2_GPS_POS_Y);
    PhotonPx4_autogen_InitParam("EKF2_GPS_POS_Z", setParam_EKF2_EKF2_GPS_POS_Z);
    PhotonPx4_autogen_InitParam("EKF2_RNG_POS_X", setParam_EKF2_EKF2_RNG_POS_X);
    PhotonPx4_autogen_InitParam("EKF2_RNG_POS_Y", setParam_EKF2_EKF2_RNG_POS_Y);
    PhotonPx4_autogen_InitParam("EKF2_RNG_POS_Z", setParam_EKF2_EKF2_RNG_POS_Z);
    PhotonPx4_autogen_InitParam("EKF2_OF_POS_X", setParam_EKF2_EKF2_OF_POS_X);
    PhotonPx4_autogen_InitParam("EKF2_OF_POS_Y", setParam_EKF2_EKF2_OF_POS_Y);
    PhotonPx4_autogen_InitParam("EKF2_OF_POS_Z", setParam_EKF2_EKF2_OF_POS_Z);
    PhotonPx4_autogen_InitParam("EKF2_EV_POS_X", setParam_EKF2_EKF2_EV_POS_X);
    PhotonPx4_autogen_InitParam("EKF2_EV_POS_Y", setParam_EKF2_EKF2_EV_POS_Y);
    PhotonPx4_autogen_InitParam("EKF2_EV_POS_Z", setParam_EKF2_EKF2_EV_POS_Z);
    PhotonPx4_autogen_InitParam("EKF2_ARSP_THR", setParam_EKF2_EKF2_ARSP_THR);
    PhotonPx4_autogen_InitParam("EKF2_FUSE_BETA", setParam_EKF2_EKF2_FUSE_BETA);
    PhotonPx4_autogen_InitParam("EKF2_TAU_VEL", setParam_EKF2_EKF2_TAU_VEL);
    PhotonPx4_autogen_InitParam("EKF2_TAU_POS", setParam_EKF2_EKF2_TAU_POS);
    PhotonPx4_autogen_InitParam("EKF2_GBIAS_INIT", setParam_EKF2_EKF2_GBIAS_INIT);
    PhotonPx4_autogen_InitParam("EKF2_ABIAS_INIT", setParam_EKF2_EKF2_ABIAS_INIT);
    PhotonPx4_autogen_InitParam("EKF2_ANGERR_INIT", setParam_EKF2_EKF2_ANGERR_INIT);
    PhotonPx4_autogen_InitParam("FW_R_TC", setParam_FW_Attitude_Control_FW_R_TC);
    PhotonPx4_autogen_InitParam("FW_P_TC", setParam_FW_Attitude_Control_FW_P_TC);
    PhotonPx4_autogen_InitParam("FW_PR_P", setParam_FW_Attitude_Control_FW_PR_P);
    PhotonPx4_autogen_InitParam("FW_PR_I", setParam_FW_Attitude_Control_FW_PR_I);
    PhotonPx4_autogen_InitParam("FW_P_RMAX_POS", setParam_FW_Attitude_Control_FW_P_RMAX_POS);
    PhotonPx4_autogen_InitParam("FW_P_RMAX_NEG", setParam_FW_Attitude_Control_FW_P_RMAX_NEG);
    PhotonPx4_autogen_InitParam("FW_PR_IMAX", setParam_FW_Attitude_Control_FW_PR_IMAX);
    PhotonPx4_autogen_InitParam("FW_RR_P", setParam_FW_Attitude_Control_FW_RR_P);
    PhotonPx4_autogen_InitParam("FW_RR_I", setParam_FW_Attitude_Control_FW_RR_I);
    PhotonPx4_autogen_InitParam("FW_RR_IMAX", setParam_FW_Attitude_Control_FW_RR_IMAX);
    PhotonPx4_autogen_InitParam("FW_R_RMAX", setParam_FW_Attitude_Control_FW_R_RMAX);
    PhotonPx4_autogen_InitParam("FW_YR_P", setParam_FW_Attitude_Control_FW_YR_P);
    PhotonPx4_autogen_InitParam("FW_YR_I", setParam_FW_Attitude_Control_FW_YR_I);
    PhotonPx4_autogen_InitParam("FW_YR_IMAX", setParam_FW_Attitude_Control_FW_YR_IMAX);
    PhotonPx4_autogen_InitParam("FW_Y_RMAX", setParam_FW_Attitude_Control_FW_Y_RMAX);
    PhotonPx4_autogen_InitParam("FW_WR_P", setParam_FW_Attitude_Control_FW_WR_P);
    PhotonPx4_autogen_InitParam("FW_WR_I", setParam_FW_Attitude_Control_FW_WR_I);
    PhotonPx4_autogen_InitParam("FW_WR_IMAX", setParam_FW_Attitude_Control_FW_WR_IMAX);
    PhotonPx4_autogen_InitParam("FW_W_RMAX", setParam_FW_Attitude_Control_FW_W_RMAX);
    PhotonPx4_autogen_InitParam("FW_RR_FF", setParam_FW_Attitude_Control_FW_RR_FF);
    PhotonPx4_autogen_InitParam("FW_PR_FF", setParam_FW_Attitude_Control_FW_PR_FF);
    PhotonPx4_autogen_InitParam("FW_YR_FF", setParam_FW_Attitude_Control_FW_YR_FF);
    PhotonPx4_autogen_InitParam("FW_WR_FF", setParam_FW_Attitude_Control_FW_WR_FF);
    PhotonPx4_autogen_InitParam("FW_YCO_VMIN", setParam_FW_Attitude_Control_FW_YCO_VMIN);
    PhotonPx4_autogen_InitParam("FW_YCO_METHOD", setParam_FW_Attitude_Control_FW_YCO_METHOD);
    PhotonPx4_autogen_InitParam("FW_RSP_OFF", setParam_FW_Attitude_Control_FW_RSP_OFF);
    PhotonPx4_autogen_InitParam("FW_PSP_OFF", setParam_FW_Attitude_Control_FW_PSP_OFF);
    PhotonPx4_autogen_InitParam("FW_MAN_R_MAX", setParam_FW_Attitude_Control_FW_MAN_R_MAX);
    PhotonPx4_autogen_InitParam("FW_MAN_P_MAX", setParam_FW_Attitude_Control_FW_MAN_P_MAX);
    PhotonPx4_autogen_InitParam("FW_FLAPS_SCL", setParam_FW_Attitude_Control_FW_FLAPS_SCL);
    PhotonPx4_autogen_InitParam("FW_FLAPERON_SCL", setParam_FW_Attitude_Control_FW_FLAPERON_SCL);
    PhotonPx4_autogen_InitParam("FW_ARSP_MODE", setParam_FW_Attitude_Control_FW_ARSP_MODE);
    PhotonPx4_autogen_InitParam("FW_MAN_R_SC", setParam_FW_Attitude_Control_FW_MAN_R_SC);
    PhotonPx4_autogen_InitParam("FW_MAN_P_SC", setParam_FW_Attitude_Control_FW_MAN_P_SC);
    PhotonPx4_autogen_InitParam("FW_MAN_Y_SC", setParam_FW_Attitude_Control_FW_MAN_Y_SC);
    PhotonPx4_autogen_InitParam("FW_L1_PERIOD", setParam_FW_L1_Control_FW_L1_PERIOD);
    PhotonPx4_autogen_InitParam("FW_L1_DAMPING", setParam_FW_L1_Control_FW_L1_DAMPING);
    PhotonPx4_autogen_InitParam("FW_THR_CRUISE", setParam_FW_L1_Control_FW_THR_CRUISE);
    PhotonPx4_autogen_InitParam("FW_THR_SLEW_MAX", setParam_FW_L1_Control_FW_THR_SLEW_MAX);
    PhotonPx4_autogen_InitParam("FW_P_LIM_MIN", setParam_FW_L1_Control_FW_P_LIM_MIN);
    PhotonPx4_autogen_InitParam("FW_P_LIM_MAX", setParam_FW_L1_Control_FW_P_LIM_MAX);
    PhotonPx4_autogen_InitParam("FW_R_LIM", setParam_FW_L1_Control_FW_R_LIM);
    PhotonPx4_autogen_InitParam("FW_THR_MAX", setParam_FW_L1_Control_FW_THR_MAX);
    PhotonPx4_autogen_InitParam("FW_THR_MIN", setParam_FW_L1_Control_FW_THR_MIN);
    PhotonPx4_autogen_InitParam("FW_THR_IDLE", setParam_FW_L1_Control_FW_THR_IDLE);
    PhotonPx4_autogen_InitParam("FW_THR_LND_MAX", setParam_FW_L1_Control_FW_THR_LND_MAX);
    PhotonPx4_autogen_InitParam("FW_CLMBOUT_DIFF", setParam_FW_L1_Control_FW_CLMBOUT_DIFF);
    PhotonPx4_autogen_InitParam("FW_LND_ANG", setParam_FW_L1_Control_FW_LND_ANG);
    PhotonPx4_autogen_InitParam("FW_LND_HVIRT", setParam_FW_L1_Control_FW_LND_HVIRT);
    PhotonPx4_autogen_InitParam("FW_LND_FLALT", setParam_FW_L1_Control_FW_LND_FLALT);
    PhotonPx4_autogen_InitParam("FW_LND_TLALT", setParam_FW_L1_Control_FW_LND_TLALT);
    PhotonPx4_autogen_InitParam("FW_LND_HHDIST", setParam_FW_L1_Control_FW_LND_HHDIST);
    PhotonPx4_autogen_InitParam("FW_LND_USETER", setParam_FW_L1_Control_FW_LND_USETER);
    PhotonPx4_autogen_InitParam("FW_LND_FL_PMIN", setParam_FW_L1_Control_FW_LND_FL_PMIN);
    PhotonPx4_autogen_InitParam("FW_LND_FL_PMAX", setParam_FW_L1_Control_FW_LND_FL_PMAX);
    PhotonPx4_autogen_InitParam("FW_LND_AIRSPD_SC", setParam_FW_L1_Control_FW_LND_AIRSPD_SC);
    PhotonPx4_autogen_InitParam("FW_AIRSPD_MIN", setParam_FW_TECS_FW_AIRSPD_MIN);
    PhotonPx4_autogen_InitParam("FW_AIRSPD_MAX", setParam_FW_TECS_FW_AIRSPD_MAX);
    PhotonPx4_autogen_InitParam("FW_T_CLMB_MAX", setParam_FW_TECS_FW_T_CLMB_MAX);
    PhotonPx4_autogen_InitParam("FW_T_SINK_MIN", setParam_FW_TECS_FW_T_SINK_MIN);
    PhotonPx4_autogen_InitParam("FW_T_SINK_MAX", setParam_FW_TECS_FW_T_SINK_MAX);
    PhotonPx4_autogen_InitParam("FW_T_TIME_CONST", setParam_FW_TECS_FW_T_TIME_CONST);
    PhotonPx4_autogen_InitParam("FW_T_THRO_CONST", setParam_FW_TECS_FW_T_THRO_CONST);
    PhotonPx4_autogen_InitParam("FW_T_THR_DAMP", setParam_FW_TECS_FW_T_THR_DAMP);
    PhotonPx4_autogen_InitParam("FW_T_INTEG_GAIN", setParam_FW_TECS_FW_T_INTEG_GAIN);
    PhotonPx4_autogen_InitParam("FW_T_VERT_ACC", setParam_FW_TECS_FW_T_VERT_ACC);
    PhotonPx4_autogen_InitParam("FW_T_HGT_OMEGA", setParam_FW_TECS_FW_T_HGT_OMEGA);
    PhotonPx4_autogen_InitParam("FW_T_SPD_OMEGA", setParam_FW_TECS_FW_T_SPD_OMEGA);
    PhotonPx4_autogen_InitParam("FW_T_RLL2THR", setParam_FW_TECS_FW_T_RLL2THR);
    PhotonPx4_autogen_InitParam("FW_T_SPDWEIGHT", setParam_FW_TECS_FW_T_SPDWEIGHT);
    PhotonPx4_autogen_InitParam("FW_T_PTCH_DAMP", setParam_FW_TECS_FW_T_PTCH_DAMP);
    PhotonPx4_autogen_InitParam("FW_T_HRATE_P", setParam_FW_TECS_FW_T_HRATE_P);
    PhotonPx4_autogen_InitParam("FW_T_HRATE_FF", setParam_FW_TECS_FW_T_HRATE_FF);
    PhotonPx4_autogen_InitParam("FW_T_SRATE_P", setParam_FW_TECS_FW_T_SRATE_P);
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
    PhotonPx4_autogen_InitParam("LNDFW_VEL_XY_MAX", setParam_Land_Detector_LNDFW_VEL_XY_MAX);
    PhotonPx4_autogen_InitParam("LNDFW_VEL_Z_MAX", setParam_Land_Detector_LNDFW_VEL_Z_MAX);
    PhotonPx4_autogen_InitParam("LNDFW_VELI_MAX", setParam_Land_Detector_LNDFW_VELI_MAX);
    PhotonPx4_autogen_InitParam("LNDFW_AIRSPD_MAX", setParam_Land_Detector_LNDFW_AIRSPD_MAX);
    PhotonPx4_autogen_InitParam("LAUN_ALL_ON", setParam_Launch_detection_LAUN_ALL_ON);
    PhotonPx4_autogen_InitParam("LAUN_CAT_A", setParam_Launch_detection_LAUN_CAT_A);
    PhotonPx4_autogen_InitParam("LAUN_CAT_T", setParam_Launch_detection_LAUN_CAT_T);
    PhotonPx4_autogen_InitParam("LAUN_CAT_MDEL", setParam_Launch_detection_LAUN_CAT_MDEL);
    PhotonPx4_autogen_InitParam("LAUN_CAT_PMAX", setParam_Launch_detection_LAUN_CAT_PMAX);
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
    PhotonPx4_autogen_InitParam("MKBLCTRL_TEST", setParam_MKBLCTRL_Testmode_MKBLCTRL_TEST);
    PhotonPx4_autogen_InitParam("MPU_GYRO_LPF_ENM", setParam_MPU9x50_Configuration_MPU_GYRO_LPF_ENM);
    PhotonPx4_autogen_InitParam("MPU_ACC_LPF_ENM", setParam_MPU9x50_Configuration_MPU_ACC_LPF_ENM);
    PhotonPx4_autogen_InitParam("MPU_SAMPLE_R_ENM", setParam_MPU9x50_Configuration_MPU_SAMPLE_R_ENM);
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
    PhotonPx4_autogen_InitParam("MNT_MODE_IN", setParam_Mount_MNT_MODE_IN);
    PhotonPx4_autogen_InitParam("MNT_MODE_OUT", setParam_Mount_MNT_MODE_OUT);
    PhotonPx4_autogen_InitParam("MNT_MAV_SYSID", setParam_Mount_MNT_MAV_SYSID);
    PhotonPx4_autogen_InitParam("MNT_MAV_COMPID", setParam_Mount_MNT_MAV_COMPID);
    PhotonPx4_autogen_InitParam("MNT_OB_NORM_MODE", setParam_Mount_MNT_OB_NORM_MODE);
    PhotonPx4_autogen_InitParam("MNT_OB_LOCK_MODE", setParam_Mount_MNT_OB_LOCK_MODE);
    PhotonPx4_autogen_InitParam("MNT_MAN_CONTROL", setParam_Mount_MNT_MAN_CONTROL);
    PhotonPx4_autogen_InitParam("MNT_MAN_ROLL", setParam_Mount_MNT_MAN_ROLL);
    PhotonPx4_autogen_InitParam("MNT_MAN_PITCH", setParam_Mount_MNT_MAN_PITCH);
    PhotonPx4_autogen_InitParam("MNT_MAN_YAW", setParam_Mount_MNT_MAN_YAW);
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
    PhotonPx4_autogen_InitParam("MPP_MAN_R_MAX", setParam_Multicopter_Attitude_Control_MPP_MAN_R_MAX);
    PhotonPx4_autogen_InitParam("MPP_MAN_P_MAX", setParam_Multicopter_Attitude_Control_MPP_MAN_P_MAX);
    PhotonPx4_autogen_InitParam("MPP_MAN_Y_MAX", setParam_Multicopter_Attitude_Control_MPP_MAN_Y_MAX);
    PhotonPx4_autogen_InitParam("MP_ROLL_P", setParam_Multicopter_Attitude_Control_MP_ROLL_P);
    PhotonPx4_autogen_InitParam("MP_ROLLRATE_P", setParam_Multicopter_Attitude_Control_MP_ROLLRATE_P);
    PhotonPx4_autogen_InitParam("MP_ROLLRATE_I", setParam_Multicopter_Attitude_Control_MP_ROLLRATE_I);
    PhotonPx4_autogen_InitParam("MP_ROLLRATE_D", setParam_Multicopter_Attitude_Control_MP_ROLLRATE_D);
    PhotonPx4_autogen_InitParam("MP_PITCH_P", setParam_Multicopter_Attitude_Control_MP_PITCH_P);
    PhotonPx4_autogen_InitParam("MP_PITCHRATE_P", setParam_Multicopter_Attitude_Control_MP_PITCHRATE_P);
    PhotonPx4_autogen_InitParam("MP_PITCHRATE_I", setParam_Multicopter_Attitude_Control_MP_PITCHRATE_I);
    PhotonPx4_autogen_InitParam("MP_PITCHRATE_D", setParam_Multicopter_Attitude_Control_MP_PITCHRATE_D);
    PhotonPx4_autogen_InitParam("MP_YAW_P", setParam_Multicopter_Attitude_Control_MP_YAW_P);
    PhotonPx4_autogen_InitParam("MP_YAWRATE_P", setParam_Multicopter_Attitude_Control_MP_YAWRATE_P);
    PhotonPx4_autogen_InitParam("MP_YAWRATE_I", setParam_Multicopter_Attitude_Control_MP_YAWRATE_I);
    PhotonPx4_autogen_InitParam("MP_YAWRATE_D", setParam_Multicopter_Attitude_Control_MP_YAWRATE_D);
    PhotonPx4_autogen_InitParam("MP_YAW_FF", setParam_Multicopter_Attitude_Control_MP_YAW_FF);
    PhotonPx4_autogen_InitParam("MP_YAWRATE_MAX", setParam_Multicopter_Attitude_Control_MP_YAWRATE_MAX);
    PhotonPx4_autogen_InitParam("MP_ACRO_R_MAX", setParam_Multicopter_Attitude_Control_MP_ACRO_R_MAX);
    PhotonPx4_autogen_InitParam("MP_ACRO_P_MAX", setParam_Multicopter_Attitude_Control_MP_ACRO_P_MAX);
    PhotonPx4_autogen_InitParam("MP_ACRO_Y_MAX", setParam_Multicopter_Attitude_Control_MP_ACRO_Y_MAX);
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
    PhotonPx4_autogen_InitParam("MPP_THR_MIN", setParam_Multicopter_Position_Control_MPP_THR_MIN);
    PhotonPx4_autogen_InitParam("MPP_THR_MAX", setParam_Multicopter_Position_Control_MPP_THR_MAX);
    PhotonPx4_autogen_InitParam("MPP_Z_P", setParam_Multicopter_Position_Control_MPP_Z_P);
    PhotonPx4_autogen_InitParam("MPP_Z_VEL_P", setParam_Multicopter_Position_Control_MPP_Z_VEL_P);
    PhotonPx4_autogen_InitParam("MPP_Z_VEL_I", setParam_Multicopter_Position_Control_MPP_Z_VEL_I);
    PhotonPx4_autogen_InitParam("MPP_Z_VEL_D", setParam_Multicopter_Position_Control_MPP_Z_VEL_D);
    PhotonPx4_autogen_InitParam("MPP_Z_VEL_MAX", setParam_Multicopter_Position_Control_MPP_Z_VEL_MAX);
    PhotonPx4_autogen_InitParam("MPP_Z_FF", setParam_Multicopter_Position_Control_MPP_Z_FF);
    PhotonPx4_autogen_InitParam("MPP_XY_P", setParam_Multicopter_Position_Control_MPP_XY_P);
    PhotonPx4_autogen_InitParam("MPP_XY_VEL_P", setParam_Multicopter_Position_Control_MPP_XY_VEL_P);
    PhotonPx4_autogen_InitParam("MPP_XY_VEL_I", setParam_Multicopter_Position_Control_MPP_XY_VEL_I);
    PhotonPx4_autogen_InitParam("MPP_XY_VEL_D", setParam_Multicopter_Position_Control_MPP_XY_VEL_D);
    PhotonPx4_autogen_InitParam("MPP_XY_VEL_MAX", setParam_Multicopter_Position_Control_MPP_XY_VEL_MAX);
    PhotonPx4_autogen_InitParam("MPP_XY_FF", setParam_Multicopter_Position_Control_MPP_XY_FF);
    PhotonPx4_autogen_InitParam("MPP_TILTMAX_AIR", setParam_Multicopter_Position_Control_MPP_TILTMAX_AIR);
    PhotonPx4_autogen_InitParam("MPP_TILTMAX_LND", setParam_Multicopter_Position_Control_MPP_TILTMAX_LND);
    PhotonPx4_autogen_InitParam("MPP_LAND_SPEED", setParam_Multicopter_Position_Control_MPP_LAND_SPEED);
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
    PhotonPx4_autogen_InitParam("BD_GPROPERTIES", setParam_Payload_drop_BD_GPROPERTIES);
    PhotonPx4_autogen_InitParam("BD_TURNRADIUS", setParam_Payload_drop_BD_TURNRADIUS);
    PhotonPx4_autogen_InitParam("BD_PRECISION", setParam_Payload_drop_BD_PRECISION);
    PhotonPx4_autogen_InitParam("BD_OBJ_CD", setParam_Payload_drop_BD_OBJ_CD);
    PhotonPx4_autogen_InitParam("BD_OBJ_MASS", setParam_Payload_drop_BD_OBJ_MASS);
    PhotonPx4_autogen_InitParam("BD_OBJ_SURFACE", setParam_Payload_drop_BD_OBJ_SURFACE);
    PhotonPx4_autogen_InitParam("PE_VEL_DELAY_MS", setParam_Position_Estimator_PE_VEL_DELAY_MS);
    PhotonPx4_autogen_InitParam("PE_POS_DELAY_MS", setParam_Position_Estimator_PE_POS_DELAY_MS);
    PhotonPx4_autogen_InitParam("PE_HGT_DELAY_MS", setParam_Position_Estimator_PE_HGT_DELAY_MS);
    PhotonPx4_autogen_InitParam("PE_MAG_DELAY_MS", setParam_Position_Estimator_PE_MAG_DELAY_MS);
    PhotonPx4_autogen_InitParam("PE_TAS_DELAY_MS", setParam_Position_Estimator_PE_TAS_DELAY_MS);
    PhotonPx4_autogen_InitParam("PE_GPS_ALT_WGT", setParam_Position_Estimator_PE_GPS_ALT_WGT);
    PhotonPx4_autogen_InitParam("PE_EAS_NOISE", setParam_Position_Estimator_PE_EAS_NOISE);
    PhotonPx4_autogen_InitParam("PE_VELNE_NOISE", setParam_Position_Estimator_PE_VELNE_NOISE);
    PhotonPx4_autogen_InitParam("PE_VELD_NOISE", setParam_Position_Estimator_PE_VELD_NOISE);
    PhotonPx4_autogen_InitParam("PE_POSNE_NOISE", setParam_Position_Estimator_PE_POSNE_NOISE);
    PhotonPx4_autogen_InitParam("PE_POSD_NOISE", setParam_Position_Estimator_PE_POSD_NOISE);
    PhotonPx4_autogen_InitParam("PE_MAG_NOISE", setParam_Position_Estimator_PE_MAG_NOISE);
    PhotonPx4_autogen_InitParam("PE_GYRO_PNOISE", setParam_Position_Estimator_PE_GYRO_PNOISE);
    PhotonPx4_autogen_InitParam("PE_ACC_PNOISE", setParam_Position_Estimator_PE_ACC_PNOISE);
    PhotonPx4_autogen_InitParam("PE_GBIAS_PNOISE", setParam_Position_Estimator_PE_GBIAS_PNOISE);
    PhotonPx4_autogen_InitParam("PE_ABIAS_PNOISE", setParam_Position_Estimator_PE_ABIAS_PNOISE);
    PhotonPx4_autogen_InitParam("PE_MAGE_PNOISE", setParam_Position_Estimator_PE_MAGE_PNOISE);
    PhotonPx4_autogen_InitParam("PE_MAGB_PNOISE", setParam_Position_Estimator_PE_MAGB_PNOISE);
    PhotonPx4_autogen_InitParam("PE_MAGB_X", setParam_Position_Estimator_PE_MAGB_X);
    PhotonPx4_autogen_InitParam("PE_MAGB_Y", setParam_Position_Estimator_PE_MAGB_Y);
    PhotonPx4_autogen_InitParam("PE_MAGB_Z", setParam_Position_Estimator_PE_MAGB_Z);
    PhotonPx4_autogen_InitParam("PE_POSDEV_INIT", setParam_Position_Estimator_PE_POSDEV_INIT);
    PhotonPx4_autogen_InitParam("INAV_W_Z_BARO", setParam_Position_Estimator_INAV_INAV_W_Z_BARO);
    PhotonPx4_autogen_InitParam("INAV_W_Z_GPS_P", setParam_Position_Estimator_INAV_INAV_W_Z_GPS_P);
    PhotonPx4_autogen_InitParam("INAV_W_Z_GPS_V", setParam_Position_Estimator_INAV_INAV_W_Z_GPS_V);
    PhotonPx4_autogen_InitParam("INAV_W_Z_VIS_P", setParam_Position_Estimator_INAV_INAV_W_Z_VIS_P);
    PhotonPx4_autogen_InitParam("INAV_W_Z_LIDAR", setParam_Position_Estimator_INAV_INAV_W_Z_LIDAR);
    PhotonPx4_autogen_InitParam("INAV_W_XY_GPS_P", setParam_Position_Estimator_INAV_INAV_W_XY_GPS_P);
    PhotonPx4_autogen_InitParam("INAV_W_XY_GPS_V", setParam_Position_Estimator_INAV_INAV_W_XY_GPS_V);
    PhotonPx4_autogen_InitParam("INAV_W_XY_VIS_P", setParam_Position_Estimator_INAV_INAV_W_XY_VIS_P);
    PhotonPx4_autogen_InitParam("INAV_W_XY_VIS_V", setParam_Position_Estimator_INAV_INAV_W_XY_VIS_V);
    PhotonPx4_autogen_InitParam("INAV_W_MOC_P", setParam_Position_Estimator_INAV_INAV_W_MOC_P);
    PhotonPx4_autogen_InitParam("INAV_W_XY_FLOW", setParam_Position_Estimator_INAV_INAV_W_XY_FLOW);
    PhotonPx4_autogen_InitParam("INAV_W_XY_RES_V", setParam_Position_Estimator_INAV_INAV_W_XY_RES_V);
    PhotonPx4_autogen_InitParam("INAV_W_GPS_FLOW", setParam_Position_Estimator_INAV_INAV_W_GPS_FLOW);
    PhotonPx4_autogen_InitParam("INAV_W_ACC_BIAS", setParam_Position_Estimator_INAV_INAV_W_ACC_BIAS);
    PhotonPx4_autogen_InitParam("INAV_FLOW_K", setParam_Position_Estimator_INAV_INAV_FLOW_K);
    PhotonPx4_autogen_InitParam("INAV_FLOW_Q_MIN", setParam_Position_Estimator_INAV_INAV_FLOW_Q_MIN);
    PhotonPx4_autogen_InitParam("INAV_LIDAR_ERR", setParam_Position_Estimator_INAV_INAV_LIDAR_ERR);
    PhotonPx4_autogen_InitParam("INAV_LAND_T", setParam_Position_Estimator_INAV_INAV_LAND_T);
    PhotonPx4_autogen_InitParam("INAV_LAND_DISP", setParam_Position_Estimator_INAV_INAV_LAND_DISP);
    PhotonPx4_autogen_InitParam("INAV_LAND_THR", setParam_Position_Estimator_INAV_INAV_LAND_THR);
    PhotonPx4_autogen_InitParam("INAV_DELAY_GPS", setParam_Position_Estimator_INAV_INAV_DELAY_GPS);
    PhotonPx4_autogen_InitParam("INAV_FLOW_DIST_X", setParam_Position_Estimator_INAV_INAV_FLOW_DIST_X);
    PhotonPx4_autogen_InitParam("INAV_FLOW_DIST_Y", setParam_Position_Estimator_INAV_INAV_FLOW_DIST_Y);
    PhotonPx4_autogen_InitParam("INAV_DISAB_MOCAP", setParam_Position_Estimator_INAV_INAV_DISAB_MOCAP);
    PhotonPx4_autogen_InitParam("INAV_LIDAR_EST", setParam_Position_Estimator_INAV_INAV_LIDAR_EST);
    PhotonPx4_autogen_InitParam("INAV_LIDAR_OFF", setParam_Position_Estimator_INAV_INAV_LIDAR_OFF);
    PhotonPx4_autogen_InitParam("CBRK_NO_VISION", setParam_Position_Estimator_INAV_CBRK_NO_VISION);
    PhotonPx4_autogen_InitParam("RC_RECEIVER_TYPE", setParam_RC_Receiver_Configuration_RC_RECEIVER_TYPE);
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
    PhotonPx4_autogen_InitParam("RC_RL1_DSM_VCC", setParam_Radio_Calibration_RC_RL1_DSM_VCC);
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
    PhotonPx4_autogen_InitParam("RWTO_TKOFF", setParam_Runway_Takeoff_RWTO_TKOFF);
    PhotonPx4_autogen_InitParam("RWTO_HDG", setParam_Runway_Takeoff_RWTO_HDG);
    PhotonPx4_autogen_InitParam("RWTO_NAV_ALT", setParam_Runway_Takeoff_RWTO_NAV_ALT);
    PhotonPx4_autogen_InitParam("RWTO_MAX_THR", setParam_Runway_Takeoff_RWTO_MAX_THR);
    PhotonPx4_autogen_InitParam("RWTO_PSP", setParam_Runway_Takeoff_RWTO_PSP);
    PhotonPx4_autogen_InitParam("RWTO_MAX_PITCH", setParam_Runway_Takeoff_RWTO_MAX_PITCH);
    PhotonPx4_autogen_InitParam("RWTO_MAX_ROLL", setParam_Runway_Takeoff_RWTO_MAX_ROLL);
    PhotonPx4_autogen_InitParam("RWTO_AIRSPD_SCL", setParam_Runway_Takeoff_RWTO_AIRSPD_SCL);
    PhotonPx4_autogen_InitParam("SDLOG_UTC_OFFSET", setParam_SD_Logging_SDLOG_UTC_OFFSET);
    PhotonPx4_autogen_InitParam("SDLOG_MODE", setParam_SD_Logging_SDLOG_MODE);
    PhotonPx4_autogen_InitParam("SDLOG_RATE", setParam_SD_Logging_SDLOG_RATE);
    PhotonPx4_autogen_InitParam("SDLOG_EXT", setParam_SD_Logging_SDLOG_EXT);
    PhotonPx4_autogen_InitParam("SDLOG_GPSTIME", setParam_SD_Logging_SDLOG_GPSTIME);
    PhotonPx4_autogen_InitParam("SDLOG_PRIO_BOOST", setParam_SD_Logging_SDLOG_PRIO_BOOST);
    PhotonPx4_autogen_InitParam("CAL_BOARD_ID", setParam_Sensor_Calibration_CAL_BOARD_ID);
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
    PhotonPx4_autogen_InitParam("SENS_FLOW_ROT", setParam_Sensor_Calibration_SENS_FLOW_ROT);
    PhotonPx4_autogen_InitParam("SENS_BOARD_Y_OFF", setParam_Sensor_Calibration_SENS_BOARD_Y_OFF);
    PhotonPx4_autogen_InitParam("SENS_BOARD_X_OFF", setParam_Sensor_Calibration_SENS_BOARD_X_OFF);
    PhotonPx4_autogen_InitParam("SENS_BOARD_Z_OFF", setParam_Sensor_Calibration_SENS_BOARD_Z_OFF);
    PhotonPx4_autogen_InitParam("SENS_EXT_MAG_ROT", setParam_Sensor_Calibration_SENS_EXT_MAG_ROT);
    PhotonPx4_autogen_InitParam("SENS_EXT_MAG", setParam_Sensor_Calibration_SENS_EXT_MAG);
    PhotonPx4_autogen_InitParam("SENS_EN_LL40LS", setParam_Sensor_Enable_SENS_EN_LL40LS);
    PhotonPx4_autogen_InitParam("SENS_EN_SF0X", setParam_Sensor_Enable_SENS_EN_SF0X);
    PhotonPx4_autogen_InitParam("SENS_EN_MB12XX", setParam_Sensor_Enable_SENS_EN_MB12XX);
    PhotonPx4_autogen_InitParam("SENS_EN_TRONE", setParam_Sensor_Enable_SENS_EN_TRONE);
    PhotonPx4_autogen_InitParam("SENS_EN_SF1XX", setParam_Sensor_Enable_SENS_EN_SF1XX);
    PhotonPx4_autogen_InitParam("SENS_EN_THERMAL", setParam_Sensor_Enable_SENS_EN_THERMAL);
    PhotonPx4_autogen_InitParam("UART_ESC_MODEL", setParam_Snapdragon_UART_ESC_UART_ESC_MODEL);
    PhotonPx4_autogen_InitParam("UART_ESC_BAUD", setParam_Snapdragon_UART_ESC_UART_ESC_BAUD);
    PhotonPx4_autogen_InitParam("UART_ESC_MOTOR1", setParam_Snapdragon_UART_ESC_UART_ESC_MOTOR1);
    PhotonPx4_autogen_InitParam("UART_ESC_MOTOR2", setParam_Snapdragon_UART_ESC_UART_ESC_MOTOR2);
    PhotonPx4_autogen_InitParam("UART_ESC_MOTOR3", setParam_Snapdragon_UART_ESC_UART_ESC_MOTOR3);
    PhotonPx4_autogen_InitParam("UART_ESC_MOTOR4", setParam_Snapdragon_UART_ESC_UART_ESC_MOTOR4);
    PhotonPx4_autogen_InitParam("SUB_INTERV", setParam_Subscriber_Example_SUB_INTERV);
    PhotonPx4_autogen_InitParam("SUB_TESTF", setParam_Subscriber_Example_SUB_TESTF);
    PhotonPx4_autogen_InitParam("SLNK_RADIO_CHAN", setParam_Syslink_SLNK_RADIO_CHAN);
    PhotonPx4_autogen_InitParam("SLNK_RADIO_RATE", setParam_Syslink_SLNK_RADIO_RATE);
    PhotonPx4_autogen_InitParam("SLNK_RADIO_ADDR1", setParam_Syslink_SLNK_RADIO_ADDR1);
    PhotonPx4_autogen_InitParam("SLNK_RADIO_ADDR2", setParam_Syslink_SLNK_RADIO_ADDR2);
    PhotonPx4_autogen_InitParam("SYS_AUTOSTART", setParam_System_SYS_AUTOSTART);
    PhotonPx4_autogen_InitParam("SYS_AUTOCONFIG", setParam_System_SYS_AUTOCONFIG);
    PhotonPx4_autogen_InitParam("SYS_USE_IO", setParam_System_SYS_USE_IO);
    PhotonPx4_autogen_InitParam("SYS_RESTART_TYPE", setParam_System_SYS_RESTART_TYPE);
    PhotonPx4_autogen_InitParam("SYS_MC_EST_GROUP", setParam_System_SYS_MC_EST_GROUP);
    PhotonPx4_autogen_InitParam("SYS_COMPANION", setParam_System_SYS_COMPANION);
    PhotonPx4_autogen_InitParam("SYS_PARAM_VER", setParam_System_SYS_PARAM_VER);
    PhotonPx4_autogen_InitParam("SYS_LOGGER", setParam_System_SYS_LOGGER);
    PhotonPx4_autogen_InitParam("LED_RGB_MAXBRT", setParam_System_LED_RGB_MAXBRT);
    PhotonPx4_autogen_InitParam("TEST_MIN", setParam_Testing_TEST_MIN);
    PhotonPx4_autogen_InitParam("TEST_MAX", setParam_Testing_TEST_MAX);
    PhotonPx4_autogen_InitParam("TEST_TRIM", setParam_Testing_TEST_TRIM);
    PhotonPx4_autogen_InitParam("TEST_HP", setParam_Testing_TEST_HP);
    PhotonPx4_autogen_InitParam("TEST_LP", setParam_Testing_TEST_LP);
    PhotonPx4_autogen_InitParam("TEST_P", setParam_Testing_TEST_P);
    PhotonPx4_autogen_InitParam("TEST_I", setParam_Testing_TEST_I);
    PhotonPx4_autogen_InitParam("TEST_I_MAX", setParam_Testing_TEST_I_MAX);
    PhotonPx4_autogen_InitParam("TEST_D", setParam_Testing_TEST_D);
    PhotonPx4_autogen_InitParam("TEST_D_LP", setParam_Testing_TEST_D_LP);
    PhotonPx4_autogen_InitParam("TEST_MEAN", setParam_Testing_TEST_MEAN);
    PhotonPx4_autogen_InitParam("TEST_DEV", setParam_Testing_TEST_DEV);
    PhotonPx4_autogen_InitParam("TEST_PARAMS", setParam_Testing_TEST_PARAMS);
    PhotonPx4_autogen_InitParam("UAVCAN_ENABLE", setParam_UAVCAN_UAVCAN_ENABLE);
    PhotonPx4_autogen_InitParam("UAVCAN_NODE_ID", setParam_UAVCAN_UAVCAN_NODE_ID);
    PhotonPx4_autogen_InitParam("UAVCAN_BITRATE", setParam_UAVCAN_UAVCAN_BITRATE);
    PhotonPx4_autogen_InitParam("UAVCAN_ESC_IDLT", setParam_UAVCAN_UAVCAN_ESC_IDLT);
    PhotonPx4_autogen_InitParam("VT_TRANS_THR", setParam_VTOL_Attitude_Control_VT_TRANS_THR);
    PhotonPx4_autogen_InitParam("VT_DWN_PITCH_MAX", setParam_VTOL_Attitude_Control_VT_DWN_PITCH_MAX);
    PhotonPx4_autogen_InitParam("VT_FWD_THRUST_SC", setParam_VTOL_Attitude_Control_VT_FWD_THRUST_SC);
    PhotonPx4_autogen_InitParam("VT_MOT_COUNT", setParam_VTOL_Attitude_Control_VT_MOT_COUNT);
    PhotonPx4_autogen_InitParam("VT_IDLE_PWM_MC", setParam_VTOL_Attitude_Control_VT_IDLE_PWM_MC);
    PhotonPx4_autogen_InitParam("VT_MC_ARSPD_MIN", setParam_VTOL_Attitude_Control_VT_MC_ARSPD_MIN);
    PhotonPx4_autogen_InitParam("VT_MC_ARSPD_MAX", setParam_VTOL_Attitude_Control_VT_MC_ARSPD_MAX);
    PhotonPx4_autogen_InitParam("VT_MC_ARSPD_TRIM", setParam_VTOL_Attitude_Control_VT_MC_ARSPD_TRIM);
    PhotonPx4_autogen_InitParam("VT_FW_PERM_STAB", setParam_VTOL_Attitude_Control_VT_FW_PERM_STAB);
    PhotonPx4_autogen_InitParam("VT_FW_PITCH_TRIM", setParam_VTOL_Attitude_Control_VT_FW_PITCH_TRIM);
    PhotonPx4_autogen_InitParam("VT_POWER_MAX", setParam_VTOL_Attitude_Control_VT_POWER_MAX);
    PhotonPx4_autogen_InitParam("VT_PROP_EFF", setParam_VTOL_Attitude_Control_VT_PROP_EFF);
    PhotonPx4_autogen_InitParam("VT_ARSP_LP_GAIN", setParam_VTOL_Attitude_Control_VT_ARSP_LP_GAIN);
    PhotonPx4_autogen_InitParam("VT_TYPE", setParam_VTOL_Attitude_Control_VT_TYPE);
    PhotonPx4_autogen_InitParam("VT_ELEV_MC_LOCK", setParam_VTOL_Attitude_Control_VT_ELEV_MC_LOCK);
    PhotonPx4_autogen_InitParam("VT_F_TRANS_DUR", setParam_VTOL_Attitude_Control_VT_F_TRANS_DUR);
    PhotonPx4_autogen_InitParam("VT_B_TRANS_DUR", setParam_VTOL_Attitude_Control_VT_B_TRANS_DUR);
    PhotonPx4_autogen_InitParam("VT_ARSP_BLEND", setParam_VTOL_Attitude_Control_VT_ARSP_BLEND);
    PhotonPx4_autogen_InitParam("VT_ARSP_TRANS", setParam_VTOL_Attitude_Control_VT_ARSP_TRANS);
    PhotonPx4_autogen_InitParam("VT_OPT_RECOV_EN", setParam_VTOL_Attitude_Control_VT_OPT_RECOV_EN);
    PhotonPx4_autogen_InitParam("VT_WV_YAWR_SCL", setParam_VTOL_Attitude_Control_VT_WV_YAWR_SCL);
    PhotonPx4_autogen_InitParam("VT_TRANS_TIMEOUT", setParam_VTOL_Attitude_Control_VT_TRANS_TIMEOUT);
    PhotonPx4_autogen_InitParam("VT_TRANS_MIN_TM", setParam_VTOL_Attitude_Control_VT_TRANS_MIN_TM);
    PhotonPx4_autogen_InitParam("VT_NAV_FORCE_VT", setParam_VTOL_Attitude_Control_VT_NAV_FORCE_VT);
    PhotonPx4_autogen_InitParam("VT_FW_MIN_ALT", setParam_VTOL_Attitude_Control_VT_FW_MIN_ALT);
    PhotonPx4_autogen_InitParam("VT_TILT_MC", setParam_VTOL_Attitude_Control_VT_TILT_MC);
    PhotonPx4_autogen_InitParam("VT_TILT_TRANS", setParam_VTOL_Attitude_Control_VT_TILT_TRANS);
    PhotonPx4_autogen_InitParam("VT_TILT_FW", setParam_VTOL_Attitude_Control_VT_TILT_FW);
    PhotonPx4_autogen_InitParam("VT_TRANS_P2_DUR", setParam_VTOL_Attitude_Control_VT_TRANS_P2_DUR);
    PhotonPx4_autogen_InitParam("VT_FW_MOT_OFFID", setParam_VTOL_Attitude_Control_VT_FW_MOT_OFFID);
    PhotonPx4_autogen_InitParam("MT_ENABLED", setParam_MTECS_MT_ENABLED);
    PhotonPx4_autogen_InitParam("MT_THR_FF", setParam_MTECS_MT_THR_FF);
    PhotonPx4_autogen_InitParam("MT_THR_P", setParam_MTECS_MT_THR_P);
    PhotonPx4_autogen_InitParam("MT_THR_I", setParam_MTECS_MT_THR_I);
    PhotonPx4_autogen_InitParam("MT_THR_OFF", setParam_MTECS_MT_THR_OFF);
    PhotonPx4_autogen_InitParam("MT_PIT_FF", setParam_MTECS_MT_PIT_FF);
    PhotonPx4_autogen_InitParam("MT_PIT_P", setParam_MTECS_MT_PIT_P);
    PhotonPx4_autogen_InitParam("MT_PIT_I", setParam_MTECS_MT_PIT_I);
    PhotonPx4_autogen_InitParam("MT_PIT_OFF", setParam_MTECS_MT_PIT_OFF);
    PhotonPx4_autogen_InitParam("MT_THR_MIN", setParam_MTECS_MT_THR_MIN);
    PhotonPx4_autogen_InitParam("MT_THR_MAX", setParam_MTECS_MT_THR_MAX);
    PhotonPx4_autogen_InitParam("MT_PIT_MIN", setParam_MTECS_MT_PIT_MIN);
    PhotonPx4_autogen_InitParam("MT_PIT_MAX", setParam_MTECS_MT_PIT_MAX);
    PhotonPx4_autogen_InitParam("MT_ALT_LP", setParam_MTECS_MT_ALT_LP);
    PhotonPx4_autogen_InitParam("MT_FPA_LP", setParam_MTECS_MT_FPA_LP);
    PhotonPx4_autogen_InitParam("MT_FPA_P", setParam_MTECS_MT_FPA_P);
    PhotonPx4_autogen_InitParam("MT_FPA_D", setParam_MTECS_MT_FPA_D);
    PhotonPx4_autogen_InitParam("MT_FPA_D_LP", setParam_MTECS_MT_FPA_D_LP);
    PhotonPx4_autogen_InitParam("MT_FPA_MIN", setParam_MTECS_MT_FPA_MIN);
    PhotonPx4_autogen_InitParam("MT_FPA_MAX", setParam_MTECS_MT_FPA_MAX);
    PhotonPx4_autogen_InitParam("MT_A_LP", setParam_MTECS_MT_A_LP);
    PhotonPx4_autogen_InitParam("MT_AD_LP", setParam_MTECS_MT_AD_LP);
    PhotonPx4_autogen_InitParam("MT_ACC_P", setParam_MTECS_MT_ACC_P);
    PhotonPx4_autogen_InitParam("MT_ACC_D", setParam_MTECS_MT_ACC_D);
    PhotonPx4_autogen_InitParam("MT_ACC_D_LP", setParam_MTECS_MT_ACC_D_LP);
    PhotonPx4_autogen_InitParam("MT_ACC_MIN", setParam_MTECS_MT_ACC_MIN);
    PhotonPx4_autogen_InitParam("MT_ACC_MAX", setParam_MTECS_MT_ACC_MAX);
    PhotonPx4_autogen_InitParam("MT_TKF_THR_MIN", setParam_MTECS_MT_TKF_THR_MIN);
    PhotonPx4_autogen_InitParam("MT_TKF_THR_MAX", setParam_MTECS_MT_TKF_THR_MAX);
    PhotonPx4_autogen_InitParam("MT_TKF_PIT_MIN", setParam_MTECS_MT_TKF_PIT_MIN);
    PhotonPx4_autogen_InitParam("MT_TKF_PIT_MAX", setParam_MTECS_MT_TKF_PIT_MAX);
    PhotonPx4_autogen_InitParam("MT_USP_THR_MIN", setParam_MTECS_MT_USP_THR_MIN);
    PhotonPx4_autogen_InitParam("MT_USP_THR_MAX", setParam_MTECS_MT_USP_THR_MAX);
    PhotonPx4_autogen_InitParam("MT_USP_PIT_MIN", setParam_MTECS_MT_USP_PIT_MIN);
    PhotonPx4_autogen_InitParam("MT_USP_PIT_MAX", setParam_MTECS_MT_USP_PIT_MAX);
    PhotonPx4_autogen_InitParam("MT_LND_THR_MIN", setParam_MTECS_MT_LND_THR_MIN);
    PhotonPx4_autogen_InitParam("MT_LND_THR_MAX", setParam_MTECS_MT_LND_THR_MAX);
    PhotonPx4_autogen_InitParam("MT_LND_PIT_MIN", setParam_MTECS_MT_LND_PIT_MIN);
    PhotonPx4_autogen_InitParam("MT_LND_PIT_MAX", setParam_MTECS_MT_LND_PIT_MAX);
    PhotonPx4_autogen_InitParam("MT_THR_I_MAX", setParam_MTECS_MT_THR_I_MAX);
    PhotonPx4_autogen_InitParam("MT_PIT_I_MAX", setParam_MTECS_MT_PIT_I_MAX);
    PhotonPx4_autogen_InitParam("RC_MAP_FAILSAFE", setParam_Miscellaneous_RC_MAP_FAILSAFE);
    PhotonPx4_autogen_InitParam("SEG_TH2V_P", setParam_Miscellaneous_SEG_TH2V_P);
    PhotonPx4_autogen_InitParam("SEG_TH2V_I", setParam_Miscellaneous_SEG_TH2V_I);
    PhotonPx4_autogen_InitParam("SEG_TH2V_I_MAX", setParam_Miscellaneous_SEG_TH2V_I_MAX);
    PhotonPx4_autogen_InitParam("SEG_Q2V", setParam_Miscellaneous_SEG_Q2V);
    PhotonPx4_autogen_InitParam("COM_FLTMODE1", setParam_Miscellaneous_COM_FLTMODE1);
    PhotonPx4_autogen_InitParam("COM_FLTMODE2", setParam_Miscellaneous_COM_FLTMODE2);
    PhotonPx4_autogen_InitParam("COM_FLTMODE3", setParam_Miscellaneous_COM_FLTMODE3);
    PhotonPx4_autogen_InitParam("COM_FLTMODE4", setParam_Miscellaneous_COM_FLTMODE4);
    PhotonPx4_autogen_InitParam("COM_FLTMODE5", setParam_Miscellaneous_COM_FLTMODE5);
    PhotonPx4_autogen_InitParam("COM_FLTMODE6", setParam_Miscellaneous_COM_FLTMODE6);
    PhotonPx4_autogen_InitParam("RV_YAW_P", setParam_Miscellaneous_RV_YAW_P);
    PhotonPx4_autogen_InitParam("EXFW_HDNG_P", setParam_Miscellaneous_EXFW_HDNG_P);
    PhotonPx4_autogen_InitParam("EXFW_ROLL_P", setParam_Miscellaneous_EXFW_ROLL_P);
    PhotonPx4_autogen_InitParam("EXFW_PITCH_P", setParam_Miscellaneous_EXFW_PITCH_P);
}

