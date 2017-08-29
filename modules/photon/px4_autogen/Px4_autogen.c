#include "photon/px4_autogen/Px4_autogen.Component.h"

void PhotonPx4_autogen_Init() {
    _photonPx4_autogen.inited = false;
}

PhotonError PhotonPx4_autogen_SetParam(int8_t name[16], uint32_t value) {
    if(strcmp((const char*)name, "ctl_bw")) {
        _photonPx4_autogen._UAVCAN_Motor_Parameters.ctl_bw = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "ctl_dir")) {
        _photonPx4_autogen._UAVCAN_Motor_Parameters.ctl_dir = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "ctl_gain")) {
        _photonPx4_autogen._UAVCAN_Motor_Parameters.ctl_gain = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "ctl_hz_idle")) {
        _photonPx4_autogen._UAVCAN_Motor_Parameters.ctl_hz_idle = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "ctl_start_rate")) {
        _photonPx4_autogen._UAVCAN_Motor_Parameters.ctl_start_rate = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "esc_index")) {
        _photonPx4_autogen._UAVCAN_Motor_Parameters.esc_index = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "id_ext_status")) {
        _photonPx4_autogen._UAVCAN_Motor_Parameters.id_ext_status = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "int_ext_status")) {
        _photonPx4_autogen._UAVCAN_Motor_Parameters.int_ext_status = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "int_status")) {
        _photonPx4_autogen._UAVCAN_Motor_Parameters.int_status = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "mot_i_max")) {
        _photonPx4_autogen._UAVCAN_Motor_Parameters.mot_i_max = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "mot_kv")) {
        _photonPx4_autogen._UAVCAN_Motor_Parameters.mot_kv = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "mot_ls")) {
        _photonPx4_autogen._UAVCAN_Motor_Parameters.mot_ls = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "mot_num_poles")) {
        _photonPx4_autogen._UAVCAN_Motor_Parameters.mot_num_poles = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "mot_rs")) {
        _photonPx4_autogen._UAVCAN_Motor_Parameters.mot_rs = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "mot_v_accel")) {
        _photonPx4_autogen._UAVCAN_Motor_Parameters.mot_v_accel = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "mot_v_max")) {
        _photonPx4_autogen._UAVCAN_Motor_Parameters.mot_v_max = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_MOTOR_PARAMETERS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF_ATT_V3_Q0")) {
        _photonPx4_autogen._Attitude_EKF_estimator.EKF_ATT_V3_Q0 = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF_ATT_V3_Q1")) {
        _photonPx4_autogen._Attitude_EKF_estimator.EKF_ATT_V3_Q1 = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF_ATT_V3_Q2")) {
        _photonPx4_autogen._Attitude_EKF_estimator.EKF_ATT_V3_Q2 = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF_ATT_V3_Q3")) {
        _photonPx4_autogen._Attitude_EKF_estimator.EKF_ATT_V3_Q3 = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF_ATT_V4_R0")) {
        _photonPx4_autogen._Attitude_EKF_estimator.EKF_ATT_V4_R0 = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF_ATT_V4_R1")) {
        _photonPx4_autogen._Attitude_EKF_estimator.EKF_ATT_V4_R1 = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF_ATT_V4_R2")) {
        _photonPx4_autogen._Attitude_EKF_estimator.EKF_ATT_V4_R2 = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "ATT_J11")) {
        _photonPx4_autogen._Attitude_EKF_estimator.ATT_J11 = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "ATT_J22")) {
        _photonPx4_autogen._Attitude_EKF_estimator.ATT_J22 = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "ATT_J33")) {
        _photonPx4_autogen._Attitude_EKF_estimator.ATT_J33 = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "ATT_J_EN")) {
        _photonPx4_autogen._Attitude_EKF_estimator.ATT_J_EN = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_EKF_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "ATT_W_ACC")) {
        _photonPx4_autogen._Attitude_Q_estimator.ATT_W_ACC = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_Q_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "ATT_W_MAG")) {
        _photonPx4_autogen._Attitude_Q_estimator.ATT_W_MAG = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_Q_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "ATT_W_EXT_HDG")) {
        _photonPx4_autogen._Attitude_Q_estimator.ATT_W_EXT_HDG = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_Q_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "ATT_W_GYRO_BIAS")) {
        _photonPx4_autogen._Attitude_Q_estimator.ATT_W_GYRO_BIAS = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_Q_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "ATT_MAG_DECL")) {
        _photonPx4_autogen._Attitude_Q_estimator.ATT_MAG_DECL = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_Q_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "ATT_MAG_DECL_A")) {
        _photonPx4_autogen._Attitude_Q_estimator.ATT_MAG_DECL_A = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_Q_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "ATT_EXT_HDG_M")) {
        _photonPx4_autogen._Attitude_Q_estimator.ATT_EXT_HDG_M = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_Q_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "ATT_ACC_COMP")) {
        _photonPx4_autogen._Attitude_Q_estimator.ATT_ACC_COMP = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_Q_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "ATT_BIAS_MAX")) {
        _photonPx4_autogen._Attitude_Q_estimator.ATT_BIAS_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_Q_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "ATT_VIBE_THRESH")) {
        _photonPx4_autogen._Attitude_Q_estimator.ATT_VIBE_THRESH = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_ATTITUDE_Q_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "BAT_V_EMPTY")) {
        _photonPx4_autogen._Battery_Calibration.BAT_V_EMPTY = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "BAT_V_CHARGED")) {
        _photonPx4_autogen._Battery_Calibration.BAT_V_CHARGED = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "BAT_LOW_THR")) {
        _photonPx4_autogen._Battery_Calibration.BAT_LOW_THR = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "BAT_CRIT_THR")) {
        _photonPx4_autogen._Battery_Calibration.BAT_CRIT_THR = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "BAT_V_LOAD_DROP")) {
        _photonPx4_autogen._Battery_Calibration.BAT_V_LOAD_DROP = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "BAT_R_INTERNAL")) {
        _photonPx4_autogen._Battery_Calibration.BAT_R_INTERNAL = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "BAT_N_CELLS")) {
        _photonPx4_autogen._Battery_Calibration.BAT_N_CELLS = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "BAT_CAPACITY")) {
        _photonPx4_autogen._Battery_Calibration.BAT_CAPACITY = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "BAT_V_SCALE_IO")) {
        _photonPx4_autogen._Battery_Calibration.BAT_V_SCALE_IO = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "BAT_CNT_V_VOLT")) {
        _photonPx4_autogen._Battery_Calibration.BAT_CNT_V_VOLT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "BAT_CNT_V_CURR")) {
        _photonPx4_autogen._Battery_Calibration.BAT_CNT_V_CURR = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "BAT_V_OFFS_CURR")) {
        _photonPx4_autogen._Battery_Calibration.BAT_V_OFFS_CURR = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "BAT_V_DIV")) {
        _photonPx4_autogen._Battery_Calibration.BAT_V_DIV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "BAT_A_PER_V")) {
        _photonPx4_autogen._Battery_Calibration.BAT_A_PER_V = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "BAT_SOURCE")) {
        _photonPx4_autogen._Battery_Calibration.BAT_SOURCE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_BATTERY_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TRIG_INTERFACE")) {
        _photonPx4_autogen._Camera_trigger.TRIG_INTERFACE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CAMERA_TRIGGER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TRIG_INTERVAL")) {
        _photonPx4_autogen._Camera_trigger.TRIG_INTERVAL = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CAMERA_TRIGGER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TRIG_POLARITY")) {
        _photonPx4_autogen._Camera_trigger.TRIG_POLARITY = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CAMERA_TRIGGER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TRIG_ACT_TIME")) {
        _photonPx4_autogen._Camera_trigger.TRIG_ACT_TIME = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CAMERA_TRIGGER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TRIG_MODE")) {
        _photonPx4_autogen._Camera_trigger.TRIG_MODE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CAMERA_TRIGGER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TRIG_PINS")) {
        _photonPx4_autogen._Camera_trigger.TRIG_PINS = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CAMERA_TRIGGER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TRIG_DISTANCE")) {
        _photonPx4_autogen._Camera_trigger.TRIG_DISTANCE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CAMERA_TRIGGER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CBRK_SUPPLY_CHK")) {
        _photonPx4_autogen._Circuit_Breaker.CBRK_SUPPLY_CHK = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CIRCUIT_BREAKER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CBRK_RATE_CTRL")) {
        _photonPx4_autogen._Circuit_Breaker.CBRK_RATE_CTRL = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CIRCUIT_BREAKER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CBRK_IO_SAFETY")) {
        _photonPx4_autogen._Circuit_Breaker.CBRK_IO_SAFETY = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CIRCUIT_BREAKER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CBRK_AIRSPD_CHK")) {
        _photonPx4_autogen._Circuit_Breaker.CBRK_AIRSPD_CHK = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CIRCUIT_BREAKER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CBRK_FLIGHTTERM")) {
        _photonPx4_autogen._Circuit_Breaker.CBRK_FLIGHTTERM = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CIRCUIT_BREAKER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CBRK_ENGINEFAIL")) {
        _photonPx4_autogen._Circuit_Breaker.CBRK_ENGINEFAIL = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CIRCUIT_BREAKER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CBRK_GPSFAIL")) {
        _photonPx4_autogen._Circuit_Breaker.CBRK_GPSFAIL = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CIRCUIT_BREAKER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CBRK_BUZZER")) {
        _photonPx4_autogen._Circuit_Breaker.CBRK_BUZZER = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CIRCUIT_BREAKER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CBRK_USB_CHK")) {
        _photonPx4_autogen._Circuit_Breaker.CBRK_USB_CHK = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_CIRCUIT_BREAKER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_DL_LOSS_T")) {
        _photonPx4_autogen._Commander.COM_DL_LOSS_T = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_DL_REG_T")) {
        _photonPx4_autogen._Commander.COM_DL_REG_T = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_EF_THROT")) {
        _photonPx4_autogen._Commander.COM_EF_THROT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_EF_C2T")) {
        _photonPx4_autogen._Commander.COM_EF_C2T = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_EF_TIME")) {
        _photonPx4_autogen._Commander.COM_EF_TIME = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_RC_LOSS_T")) {
        _photonPx4_autogen._Commander.COM_RC_LOSS_T = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_HOME_H_T")) {
        _photonPx4_autogen._Commander.COM_HOME_H_T = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_HOME_V_T")) {
        _photonPx4_autogen._Commander.COM_HOME_V_T = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_AUTOS_PAR")) {
        _photonPx4_autogen._Commander.COM_AUTOS_PAR = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_RC_IN_MODE")) {
        _photonPx4_autogen._Commander.COM_RC_IN_MODE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_RC_ARM_HYST")) {
        _photonPx4_autogen._Commander.COM_RC_ARM_HYST = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_DISARM_LAND")) {
        _photonPx4_autogen._Commander.COM_DISARM_LAND = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_ARM_WO_GPS")) {
        _photonPx4_autogen._Commander.COM_ARM_WO_GPS = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_LOW_BAT_ACT")) {
        _photonPx4_autogen._Commander.COM_LOW_BAT_ACT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_OF_LOSS_T")) {
        _photonPx4_autogen._Commander.COM_OF_LOSS_T = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_ARM_EKF_POS")) {
        _photonPx4_autogen._Commander.COM_ARM_EKF_POS = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_ARM_EKF_VEL")) {
        _photonPx4_autogen._Commander.COM_ARM_EKF_VEL = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_ARM_EKF_HGT")) {
        _photonPx4_autogen._Commander.COM_ARM_EKF_HGT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_ARM_EKF_YAW")) {
        _photonPx4_autogen._Commander.COM_ARM_EKF_YAW = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_ARM_EKF_AB")) {
        _photonPx4_autogen._Commander.COM_ARM_EKF_AB = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_ARM_EKF_GB")) {
        _photonPx4_autogen._Commander.COM_ARM_EKF_GB = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_ARM_IMU_ACC")) {
        _photonPx4_autogen._Commander.COM_ARM_IMU_ACC = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_ARM_IMU_GYR")) {
        _photonPx4_autogen._Commander.COM_ARM_IMU_GYR = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_COMMANDER_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_AH_LAT")) {
        _photonPx4_autogen._Data_Link_Loss.NAV_AH_LAT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_DATA_LINK_LOSS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_AH_LON")) {
        _photonPx4_autogen._Data_Link_Loss.NAV_AH_LON = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_DATA_LINK_LOSS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_AH_ALT")) {
        _photonPx4_autogen._Data_Link_Loss.NAV_AH_ALT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_DATA_LINK_LOSS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_DLL_CH_T")) {
        _photonPx4_autogen._Data_Link_Loss.NAV_DLL_CH_T = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_DATA_LINK_LOSS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_DLL_CH_LAT")) {
        _photonPx4_autogen._Data_Link_Loss.NAV_DLL_CH_LAT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_DATA_LINK_LOSS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_DLL_CH_LON")) {
        _photonPx4_autogen._Data_Link_Loss.NAV_DLL_CH_LON = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_DATA_LINK_LOSS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_DLL_CH_ALT")) {
        _photonPx4_autogen._Data_Link_Loss.NAV_DLL_CH_ALT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_DATA_LINK_LOSS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_DLL_AH_T")) {
        _photonPx4_autogen._Data_Link_Loss.NAV_DLL_AH_T = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_DATA_LINK_LOSS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_DLL_N")) {
        _photonPx4_autogen._Data_Link_Loss.NAV_DLL_N = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_DATA_LINK_LOSS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_DLL_CHSK")) {
        _photonPx4_autogen._Data_Link_Loss.NAV_DLL_CHSK = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_DATA_LINK_LOSS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_MIN_OBS_DT")) {
        _photonPx4_autogen._EKF2.EKF2_MIN_OBS_DT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_MAG_DELAY")) {
        _photonPx4_autogen._EKF2.EKF2_MAG_DELAY = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_BARO_DELAY")) {
        _photonPx4_autogen._EKF2.EKF2_BARO_DELAY = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_GPS_DELAY")) {
        _photonPx4_autogen._EKF2.EKF2_GPS_DELAY = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_OF_DELAY")) {
        _photonPx4_autogen._EKF2.EKF2_OF_DELAY = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_RNG_DELAY")) {
        _photonPx4_autogen._EKF2.EKF2_RNG_DELAY = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_ASP_DELAY")) {
        _photonPx4_autogen._EKF2.EKF2_ASP_DELAY = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_EV_DELAY")) {
        _photonPx4_autogen._EKF2.EKF2_EV_DELAY = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_GPS_CHECK")) {
        _photonPx4_autogen._EKF2.EKF2_GPS_CHECK = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_REQ_EPH")) {
        _photonPx4_autogen._EKF2.EKF2_REQ_EPH = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_REQ_EPV")) {
        _photonPx4_autogen._EKF2.EKF2_REQ_EPV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_REQ_SACC")) {
        _photonPx4_autogen._EKF2.EKF2_REQ_SACC = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_REQ_NSATS")) {
        _photonPx4_autogen._EKF2.EKF2_REQ_NSATS = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_REQ_GDOP")) {
        _photonPx4_autogen._EKF2.EKF2_REQ_GDOP = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_REQ_HDRIFT")) {
        _photonPx4_autogen._EKF2.EKF2_REQ_HDRIFT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_REQ_VDRIFT")) {
        _photonPx4_autogen._EKF2.EKF2_REQ_VDRIFT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_GYR_NOISE")) {
        _photonPx4_autogen._EKF2.EKF2_GYR_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_ACC_NOISE")) {
        _photonPx4_autogen._EKF2.EKF2_ACC_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_GYR_B_NOISE")) {
        _photonPx4_autogen._EKF2.EKF2_GYR_B_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_ACC_B_NOISE")) {
        _photonPx4_autogen._EKF2.EKF2_ACC_B_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_MAG_B_NOISE")) {
        _photonPx4_autogen._EKF2.EKF2_MAG_B_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_MAG_E_NOISE")) {
        _photonPx4_autogen._EKF2.EKF2_MAG_E_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_WIND_NOISE")) {
        _photonPx4_autogen._EKF2.EKF2_WIND_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_GPS_V_NOISE")) {
        _photonPx4_autogen._EKF2.EKF2_GPS_V_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_GPS_P_NOISE")) {
        _photonPx4_autogen._EKF2.EKF2_GPS_P_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_NOAID_NOISE")) {
        _photonPx4_autogen._EKF2.EKF2_NOAID_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_BARO_NOISE")) {
        _photonPx4_autogen._EKF2.EKF2_BARO_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_HEAD_NOISE")) {
        _photonPx4_autogen._EKF2.EKF2_HEAD_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_MAG_NOISE")) {
        _photonPx4_autogen._EKF2.EKF2_MAG_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_EAS_NOISE")) {
        _photonPx4_autogen._EKF2.EKF2_EAS_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_BETA_NOISE")) {
        _photonPx4_autogen._EKF2.EKF2_BETA_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_MAG_DECL")) {
        _photonPx4_autogen._EKF2.EKF2_MAG_DECL = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_HDG_GATE")) {
        _photonPx4_autogen._EKF2.EKF2_HDG_GATE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_MAG_GATE")) {
        _photonPx4_autogen._EKF2.EKF2_MAG_GATE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_DECL_TYPE")) {
        _photonPx4_autogen._EKF2.EKF2_DECL_TYPE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_MAG_TYPE")) {
        _photonPx4_autogen._EKF2.EKF2_MAG_TYPE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_BARO_GATE")) {
        _photonPx4_autogen._EKF2.EKF2_BARO_GATE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_GPS_P_GATE")) {
        _photonPx4_autogen._EKF2.EKF2_GPS_P_GATE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_GPS_V_GATE")) {
        _photonPx4_autogen._EKF2.EKF2_GPS_V_GATE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_TAS_GATE")) {
        _photonPx4_autogen._EKF2.EKF2_TAS_GATE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_REC_RPL")) {
        _photonPx4_autogen._EKF2.EKF2_REC_RPL = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_AID_MASK")) {
        _photonPx4_autogen._EKF2.EKF2_AID_MASK = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_HGT_MODE")) {
        _photonPx4_autogen._EKF2.EKF2_HGT_MODE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_RNG_NOISE")) {
        _photonPx4_autogen._EKF2.EKF2_RNG_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_RNG_GATE")) {
        _photonPx4_autogen._EKF2.EKF2_RNG_GATE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_MIN_RNG")) {
        _photonPx4_autogen._EKF2.EKF2_MIN_RNG = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_EVP_NOISE")) {
        _photonPx4_autogen._EKF2.EKF2_EVP_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_EVA_NOISE")) {
        _photonPx4_autogen._EKF2.EKF2_EVA_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_EV_GATE")) {
        _photonPx4_autogen._EKF2.EKF2_EV_GATE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_MIN_EV")) {
        _photonPx4_autogen._EKF2.EKF2_MIN_EV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_OF_N_MIN")) {
        _photonPx4_autogen._EKF2.EKF2_OF_N_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_OF_N_MAX")) {
        _photonPx4_autogen._EKF2.EKF2_OF_N_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_OF_QMIN")) {
        _photonPx4_autogen._EKF2.EKF2_OF_QMIN = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_OF_GATE")) {
        _photonPx4_autogen._EKF2.EKF2_OF_GATE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_OF_RMAX")) {
        _photonPx4_autogen._EKF2.EKF2_OF_RMAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_TERR_NOISE")) {
        _photonPx4_autogen._EKF2.EKF2_TERR_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_TERR_GRAD")) {
        _photonPx4_autogen._EKF2.EKF2_TERR_GRAD = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_IMU_POS_X")) {
        _photonPx4_autogen._EKF2.EKF2_IMU_POS_X = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_IMU_POS_Y")) {
        _photonPx4_autogen._EKF2.EKF2_IMU_POS_Y = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_IMU_POS_Z")) {
        _photonPx4_autogen._EKF2.EKF2_IMU_POS_Z = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_GPS_POS_X")) {
        _photonPx4_autogen._EKF2.EKF2_GPS_POS_X = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_GPS_POS_Y")) {
        _photonPx4_autogen._EKF2.EKF2_GPS_POS_Y = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_GPS_POS_Z")) {
        _photonPx4_autogen._EKF2.EKF2_GPS_POS_Z = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_RNG_POS_X")) {
        _photonPx4_autogen._EKF2.EKF2_RNG_POS_X = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_RNG_POS_Y")) {
        _photonPx4_autogen._EKF2.EKF2_RNG_POS_Y = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_RNG_POS_Z")) {
        _photonPx4_autogen._EKF2.EKF2_RNG_POS_Z = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_OF_POS_X")) {
        _photonPx4_autogen._EKF2.EKF2_OF_POS_X = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_OF_POS_Y")) {
        _photonPx4_autogen._EKF2.EKF2_OF_POS_Y = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_OF_POS_Z")) {
        _photonPx4_autogen._EKF2.EKF2_OF_POS_Z = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_EV_POS_X")) {
        _photonPx4_autogen._EKF2.EKF2_EV_POS_X = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_EV_POS_Y")) {
        _photonPx4_autogen._EKF2.EKF2_EV_POS_Y = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_EV_POS_Z")) {
        _photonPx4_autogen._EKF2.EKF2_EV_POS_Z = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_ARSP_THR")) {
        _photonPx4_autogen._EKF2.EKF2_ARSP_THR = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_FUSE_BETA")) {
        _photonPx4_autogen._EKF2.EKF2_FUSE_BETA = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_TAU_VEL")) {
        _photonPx4_autogen._EKF2.EKF2_TAU_VEL = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_TAU_POS")) {
        _photonPx4_autogen._EKF2.EKF2_TAU_POS = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_GBIAS_INIT")) {
        _photonPx4_autogen._EKF2.EKF2_GBIAS_INIT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_ABIAS_INIT")) {
        _photonPx4_autogen._EKF2.EKF2_ABIAS_INIT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EKF2_ANGERR_INIT")) {
        _photonPx4_autogen._EKF2.EKF2_ANGERR_INIT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_EKF2_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_R_TC")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_R_TC = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_P_TC")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_P_TC = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_PR_P")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_PR_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_PR_I")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_PR_I = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_P_RMAX_POS")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_P_RMAX_POS = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_P_RMAX_NEG")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_P_RMAX_NEG = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_PR_IMAX")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_PR_IMAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_RR_P")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_RR_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_RR_I")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_RR_I = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_RR_IMAX")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_RR_IMAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_R_RMAX")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_R_RMAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_YR_P")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_YR_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_YR_I")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_YR_I = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_YR_IMAX")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_YR_IMAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_Y_RMAX")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_Y_RMAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_WR_P")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_WR_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_WR_I")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_WR_I = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_WR_IMAX")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_WR_IMAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_W_RMAX")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_W_RMAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_RR_FF")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_RR_FF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_PR_FF")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_PR_FF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_YR_FF")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_YR_FF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_WR_FF")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_WR_FF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_YCO_VMIN")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_YCO_VMIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_YCO_METHOD")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_YCO_METHOD = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_RSP_OFF")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_RSP_OFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_PSP_OFF")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_PSP_OFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_MAN_R_MAX")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_MAN_R_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_MAN_P_MAX")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_MAN_P_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_FLAPS_SCL")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_FLAPS_SCL = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_FLAPERON_SCL")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_FLAPERON_SCL = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_ARSP_MODE")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_ARSP_MODE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_MAN_R_SC")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_MAN_R_SC = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_MAN_P_SC")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_MAN_P_SC = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_MAN_Y_SC")) {
        _photonPx4_autogen._FW_Attitude_Control.FW_MAN_Y_SC = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_L1_PERIOD")) {
        _photonPx4_autogen._FW_L1_Control.FW_L1_PERIOD = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_L1_DAMPING")) {
        _photonPx4_autogen._FW_L1_Control.FW_L1_DAMPING = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_THR_CRUISE")) {
        _photonPx4_autogen._FW_L1_Control.FW_THR_CRUISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_THR_SLEW_MAX")) {
        _photonPx4_autogen._FW_L1_Control.FW_THR_SLEW_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_P_LIM_MIN")) {
        _photonPx4_autogen._FW_L1_Control.FW_P_LIM_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_P_LIM_MAX")) {
        _photonPx4_autogen._FW_L1_Control.FW_P_LIM_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_R_LIM")) {
        _photonPx4_autogen._FW_L1_Control.FW_R_LIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_THR_MAX")) {
        _photonPx4_autogen._FW_L1_Control.FW_THR_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_THR_MIN")) {
        _photonPx4_autogen._FW_L1_Control.FW_THR_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_THR_IDLE")) {
        _photonPx4_autogen._FW_L1_Control.FW_THR_IDLE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_THR_LND_MAX")) {
        _photonPx4_autogen._FW_L1_Control.FW_THR_LND_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_CLMBOUT_DIFF")) {
        _photonPx4_autogen._FW_L1_Control.FW_CLMBOUT_DIFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_LND_ANG")) {
        _photonPx4_autogen._FW_L1_Control.FW_LND_ANG = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_LND_HVIRT")) {
        _photonPx4_autogen._FW_L1_Control.FW_LND_HVIRT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_LND_FLALT")) {
        _photonPx4_autogen._FW_L1_Control.FW_LND_FLALT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_LND_TLALT")) {
        _photonPx4_autogen._FW_L1_Control.FW_LND_TLALT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_LND_HHDIST")) {
        _photonPx4_autogen._FW_L1_Control.FW_LND_HHDIST = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_LND_USETER")) {
        _photonPx4_autogen._FW_L1_Control.FW_LND_USETER = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_LND_FL_PMIN")) {
        _photonPx4_autogen._FW_L1_Control.FW_LND_FL_PMIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_LND_FL_PMAX")) {
        _photonPx4_autogen._FW_L1_Control.FW_LND_FL_PMAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_LND_AIRSPD_SC")) {
        _photonPx4_autogen._FW_L1_Control.FW_LND_AIRSPD_SC = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_L1_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_AIRSPD_MIN")) {
        _photonPx4_autogen._FW_TECS.FW_AIRSPD_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_AIRSPD_MAX")) {
        _photonPx4_autogen._FW_TECS.FW_AIRSPD_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_T_CLMB_MAX")) {
        _photonPx4_autogen._FW_TECS.FW_T_CLMB_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_T_SINK_MIN")) {
        _photonPx4_autogen._FW_TECS.FW_T_SINK_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_T_SINK_MAX")) {
        _photonPx4_autogen._FW_TECS.FW_T_SINK_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_T_TIME_CONST")) {
        _photonPx4_autogen._FW_TECS.FW_T_TIME_CONST = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_T_THRO_CONST")) {
        _photonPx4_autogen._FW_TECS.FW_T_THRO_CONST = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_T_THR_DAMP")) {
        _photonPx4_autogen._FW_TECS.FW_T_THR_DAMP = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_T_INTEG_GAIN")) {
        _photonPx4_autogen._FW_TECS.FW_T_INTEG_GAIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_T_VERT_ACC")) {
        _photonPx4_autogen._FW_TECS.FW_T_VERT_ACC = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_T_HGT_OMEGA")) {
        _photonPx4_autogen._FW_TECS.FW_T_HGT_OMEGA = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_T_SPD_OMEGA")) {
        _photonPx4_autogen._FW_TECS.FW_T_SPD_OMEGA = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_T_RLL2THR")) {
        _photonPx4_autogen._FW_TECS.FW_T_RLL2THR = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_T_SPDWEIGHT")) {
        _photonPx4_autogen._FW_TECS.FW_T_SPDWEIGHT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_T_PTCH_DAMP")) {
        _photonPx4_autogen._FW_TECS.FW_T_PTCH_DAMP = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_T_HRATE_P")) {
        _photonPx4_autogen._FW_TECS.FW_T_HRATE_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_T_HRATE_FF")) {
        _photonPx4_autogen._FW_TECS.FW_T_HRATE_FF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_T_SRATE_P")) {
        _photonPx4_autogen._FW_TECS.FW_T_SRATE_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "FW_AIRSPD_TRIM")) {
        _photonPx4_autogen._FW_TECS.FW_AIRSPD_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FW_TECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_MIN_FT_HT")) {
        _photonPx4_autogen._Follow_target.NAV_MIN_FT_HT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FOLLOW_TARGET_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_FT_DST")) {
        _photonPx4_autogen._Follow_target.NAV_FT_DST = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FOLLOW_TARGET_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_FT_FS")) {
        _photonPx4_autogen._Follow_target.NAV_FT_FS = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FOLLOW_TARGET_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_FT_RS")) {
        _photonPx4_autogen._Follow_target.NAV_FT_RS = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_FOLLOW_TARGET_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "GPS_DUMP_COMM")) {
        _photonPx4_autogen._GPS.GPS_DUMP_COMM = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GPS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_GPSF_LT")) {
        _photonPx4_autogen._GPS_Failure_Navigation.NAV_GPSF_LT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GPS_FAILURE_NAVIGATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_GPSF_R")) {
        _photonPx4_autogen._GPS_Failure_Navigation.NAV_GPSF_R = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GPS_FAILURE_NAVIGATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_GPSF_P")) {
        _photonPx4_autogen._GPS_Failure_Navigation.NAV_GPSF_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GPS_FAILURE_NAVIGATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_GPSF_TR")) {
        _photonPx4_autogen._GPS_Failure_Navigation.NAV_GPSF_TR = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GPS_FAILURE_NAVIGATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "GF_ACTION")) {
        _photonPx4_autogen._Geofence.GF_ACTION = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GEOFENCE_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "GF_ALTMODE")) {
        _photonPx4_autogen._Geofence.GF_ALTMODE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GEOFENCE_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "GF_SOURCE")) {
        _photonPx4_autogen._Geofence.GF_SOURCE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GEOFENCE_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "GF_COUNT")) {
        _photonPx4_autogen._Geofence.GF_COUNT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GEOFENCE_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "GF_MAX_HOR_DIST")) {
        _photonPx4_autogen._Geofence.GF_MAX_HOR_DIST = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GEOFENCE_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "GF_MAX_VER_DIST")) {
        _photonPx4_autogen._Geofence.GF_MAX_VER_DIST = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_GEOFENCE_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LNDMC_Z_VEL_MAX")) {
        _photonPx4_autogen._Land_Detector.LNDMC_Z_VEL_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAND_DETECTOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LNDMC_XY_VEL_MAX")) {
        _photonPx4_autogen._Land_Detector.LNDMC_XY_VEL_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAND_DETECTOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LNDMC_ROT_MAX")) {
        _photonPx4_autogen._Land_Detector.LNDMC_ROT_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAND_DETECTOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LNDMC_FFALL_THR")) {
        _photonPx4_autogen._Land_Detector.LNDMC_FFALL_THR = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAND_DETECTOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LNDMC_FFALL_TTRI")) {
        _photonPx4_autogen._Land_Detector.LNDMC_FFALL_TTRI = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAND_DETECTOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LNDFW_VEL_XY_MAX")) {
        _photonPx4_autogen._Land_Detector.LNDFW_VEL_XY_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAND_DETECTOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LNDFW_VEL_Z_MAX")) {
        _photonPx4_autogen._Land_Detector.LNDFW_VEL_Z_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAND_DETECTOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LNDFW_VELI_MAX")) {
        _photonPx4_autogen._Land_Detector.LNDFW_VELI_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAND_DETECTOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LNDFW_AIRSPD_MAX")) {
        _photonPx4_autogen._Land_Detector.LNDFW_AIRSPD_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAND_DETECTOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LAUN_ALL_ON")) {
        _photonPx4_autogen._Launch_detection.LAUN_ALL_ON = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAUNCH_DETECTION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LAUN_CAT_A")) {
        _photonPx4_autogen._Launch_detection.LAUN_CAT_A = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAUNCH_DETECTION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LAUN_CAT_T")) {
        _photonPx4_autogen._Launch_detection.LAUN_CAT_T = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAUNCH_DETECTION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LAUN_CAT_MDEL")) {
        _photonPx4_autogen._Launch_detection.LAUN_CAT_MDEL = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAUNCH_DETECTION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LAUN_CAT_PMAX")) {
        _photonPx4_autogen._Launch_detection.LAUN_CAT_PMAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LAUNCH_DETECTION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_PUB_AGL_Z")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_PUB_AGL_Z = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_FLW_OFF_Z")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_FLW_OFF_Z = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_FLW_SCALE")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_FLW_SCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_FLW_GYRO_CMP")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_FLW_GYRO_CMP = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_FLW_QMIN")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_FLW_QMIN = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_SNR_Z")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_SNR_Z = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_SNR_OFF_Z")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_SNR_OFF_Z = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_LDR_Z")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_LDR_Z = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_LDR_OFF_Z")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_LDR_OFF_Z = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_ACC_XY")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_ACC_XY = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_ACC_Z")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_ACC_Z = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_BAR_Z")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_BAR_Z = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_GPS_ON")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_GPS_ON = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_GPS_DELAY")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_GPS_DELAY = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_GPS_XY")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_GPS_XY = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_GPS_Z")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_GPS_Z = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_GPS_VXY")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_GPS_VXY = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_GPS_VZ")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_GPS_VZ = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_EPH_MAX")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_EPH_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_EPV_MAX")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_EPV_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_VIS_DELAY")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_VIS_DELAY = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_VIS_XY")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_VIS_XY = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_VIS_Z")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_VIS_Z = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_VIS_ON")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_VIS_ON = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_VIC_P")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_VIC_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_PN_P")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_PN_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_PN_V")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_PN_V = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_PN_B")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_PN_B = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_PN_T")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_PN_T = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_T_MAX_GRADE")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_T_MAX_GRADE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_FGYRO_HP")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_FGYRO_HP = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_LAT")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_LAT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_LON")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_LON = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_X_LP")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_X_LP = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_VXY_PUB")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_VXY_PUB = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_Z_PUB")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_Z_PUB = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LPE_LAND_Z")) {
        _photonPx4_autogen._Local_Position_Estimator.LPE_LAND_Z = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_LOCAL_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MAV_SYS_ID")) {
        _photonPx4_autogen._MAVLink.MAV_SYS_ID = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MAVLINK_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MAV_COMP_ID")) {
        _photonPx4_autogen._MAVLink.MAV_COMP_ID = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MAVLINK_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MAV_PROTO_VER")) {
        _photonPx4_autogen._MAVLink.MAV_PROTO_VER = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MAVLINK_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MAV_RADIO_ID")) {
        _photonPx4_autogen._MAVLink.MAV_RADIO_ID = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MAVLINK_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MAV_TYPE")) {
        _photonPx4_autogen._MAVLink.MAV_TYPE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MAVLINK_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MAV_USEHILGPS")) {
        _photonPx4_autogen._MAVLink.MAV_USEHILGPS = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MAVLINK_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MAV_FWDEXTSP")) {
        _photonPx4_autogen._MAVLink.MAV_FWDEXTSP = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MAVLINK_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MAV_BROADCAST")) {
        _photonPx4_autogen._MAVLink.MAV_BROADCAST = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MAVLINK_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MAV_TEST_PAR")) {
        _photonPx4_autogen._MAVLink.MAV_TEST_PAR = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MAVLINK_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MKBLCTRL_TEST")) {
        _photonPx4_autogen._MKBLCTRL_Testmode.MKBLCTRL_TEST = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MKBLCTRL_TESTMODE_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPU_GYRO_LPF_ENM")) {
        _photonPx4_autogen._MPU9x50_Configuration.MPU_GYRO_LPF_ENM = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MPU9X50_CONFIGURATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPU_ACC_LPF_ENM")) {
        _photonPx4_autogen._MPU9x50_Configuration.MPU_ACC_LPF_ENM = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MPU9X50_CONFIGURATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPU_SAMPLE_R_ENM")) {
        _photonPx4_autogen._MPU9x50_Configuration.MPU_SAMPLE_R_ENM = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MPU9X50_CONFIGURATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_OBL_ACT")) {
        _photonPx4_autogen._Mission.COM_OBL_ACT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_OBL_RC_ACT")) {
        _photonPx4_autogen._Mission.COM_OBL_RC_ACT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_LOITER_RAD")) {
        _photonPx4_autogen._Mission.NAV_LOITER_RAD = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_ACC_RAD")) {
        _photonPx4_autogen._Mission.NAV_ACC_RAD = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_FW_ALT_RAD")) {
        _photonPx4_autogen._Mission.NAV_FW_ALT_RAD = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_MC_ALT_RAD")) {
        _photonPx4_autogen._Mission.NAV_MC_ALT_RAD = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_DLL_ACT")) {
        _photonPx4_autogen._Mission.NAV_DLL_ACT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_RCL_ACT")) {
        _photonPx4_autogen._Mission.NAV_RCL_ACT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MIS_TAKEOFF_ALT")) {
        _photonPx4_autogen._Mission.MIS_TAKEOFF_ALT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MIS_LTRMIN_ALT")) {
        _photonPx4_autogen._Mission.MIS_LTRMIN_ALT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MIS_ONBOARD_EN")) {
        _photonPx4_autogen._Mission.MIS_ONBOARD_EN = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MIS_DIST_1WP")) {
        _photonPx4_autogen._Mission.MIS_DIST_1WP = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MIS_ALTMODE")) {
        _photonPx4_autogen._Mission.MIS_ALTMODE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MIS_YAWMODE")) {
        _photonPx4_autogen._Mission.MIS_YAWMODE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MIS_YAW_TMT")) {
        _photonPx4_autogen._Mission.MIS_YAW_TMT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MIS_YAW_ERR")) {
        _photonPx4_autogen._Mission.MIS_YAW_ERR = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_WV_LND_EN")) {
        _photonPx4_autogen._Mission.VT_WV_LND_EN = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_WV_LTR_EN")) {
        _photonPx4_autogen._Mission.VT_WV_LTR_EN = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISSION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MNT_MODE_IN")) {
        _photonPx4_autogen._Mount.MNT_MODE_IN = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MOUNT_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MNT_MODE_OUT")) {
        _photonPx4_autogen._Mount.MNT_MODE_OUT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MOUNT_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MNT_MAV_SYSID")) {
        _photonPx4_autogen._Mount.MNT_MAV_SYSID = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MOUNT_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MNT_MAV_COMPID")) {
        _photonPx4_autogen._Mount.MNT_MAV_COMPID = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MOUNT_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MNT_OB_NORM_MODE")) {
        _photonPx4_autogen._Mount.MNT_OB_NORM_MODE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MOUNT_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MNT_OB_LOCK_MODE")) {
        _photonPx4_autogen._Mount.MNT_OB_LOCK_MODE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MOUNT_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MNT_MAN_CONTROL")) {
        _photonPx4_autogen._Mount.MNT_MAN_CONTROL = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MOUNT_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MNT_MAN_ROLL")) {
        _photonPx4_autogen._Mount.MNT_MAN_ROLL = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MOUNT_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MNT_MAN_PITCH")) {
        _photonPx4_autogen._Mount.MNT_MAN_PITCH = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MOUNT_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MNT_MAN_YAW")) {
        _photonPx4_autogen._Mount.MNT_MAN_YAW = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MOUNT_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_ROLL_TC")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_ROLL_TC = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_PITCH_TC")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_PITCH_TC = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_ROLL_P")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_ROLL_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_ROLLRATE_P")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_ROLLRATE_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_ROLLRATE_I")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_ROLLRATE_I = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_ROLLRATE_D")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_ROLLRATE_D = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_ROLLRATE_FF")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_ROLLRATE_FF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_PITCH_P")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_PITCH_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_PITCHRATE_P")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_PITCHRATE_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_PITCHRATE_I")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_PITCHRATE_I = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_PITCHRATE_D")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_PITCHRATE_D = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_PITCHRATE_FF")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_PITCHRATE_FF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_YAW_P")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_YAW_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_YAWRATE_P")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_YAWRATE_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_YAWRATE_I")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_YAWRATE_I = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_YAWRATE_D")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_YAWRATE_D = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_YAWRATE_FF")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_YAWRATE_FF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_YAW_FF")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_YAW_FF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_ROLLRATE_MAX")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_ROLLRATE_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_PITCHRATE_MAX")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_PITCHRATE_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_YAWRATE_MAX")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_YAWRATE_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_YAWRAUTO_MAX")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_YAWRAUTO_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_ACRO_R_MAX")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_ACRO_R_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_ACRO_P_MAX")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_ACRO_P_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_ACRO_Y_MAX")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_ACRO_Y_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_RATT_TH")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_RATT_TH = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_TPA_BREAK")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_TPA_BREAK = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_TPA_SLOPE")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_TPA_SLOPE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MC_BAT_SCALE_EN")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MC_BAT_SCALE_EN = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPP_MAN_R_MAX")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MPP_MAN_R_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPP_MAN_P_MAX")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MPP_MAN_P_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPP_MAN_Y_MAX")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MPP_MAN_Y_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MP_ROLL_P")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MP_ROLL_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MP_ROLLRATE_P")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MP_ROLLRATE_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MP_ROLLRATE_I")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MP_ROLLRATE_I = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MP_ROLLRATE_D")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MP_ROLLRATE_D = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MP_PITCH_P")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MP_PITCH_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MP_PITCHRATE_P")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MP_PITCHRATE_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MP_PITCHRATE_I")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MP_PITCHRATE_I = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MP_PITCHRATE_D")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MP_PITCHRATE_D = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MP_YAW_P")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MP_YAW_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MP_YAWRATE_P")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MP_YAWRATE_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MP_YAWRATE_I")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MP_YAWRATE_I = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MP_YAWRATE_D")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MP_YAWRATE_D = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MP_YAW_FF")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MP_YAW_FF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MP_YAWRATE_MAX")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MP_YAWRATE_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MP_ACRO_R_MAX")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MP_ACRO_R_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MP_ACRO_P_MAX")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MP_ACRO_P_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MP_ACRO_Y_MAX")) {
        _photonPx4_autogen._Multicopter_Attitude_Control.MP_ACRO_Y_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_THR_MIN")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_THR_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_THR_HOVER")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_THR_HOVER = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_ALTCTL_DZ")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_ALTCTL_DZ = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_ALTCTL_DY")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_ALTCTL_DY = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_THR_MAX")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_THR_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_MANTHR_MIN")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_MANTHR_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_MANTHR_MAX")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_MANTHR_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_Z_P")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_Z_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_Z_VEL_P")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_Z_VEL_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_Z_VEL_I")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_Z_VEL_I = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_Z_VEL_D")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_Z_VEL_D = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_Z_VEL_MAX_UP")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_Z_VEL_MAX_UP = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_Z_VEL_MAX")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_Z_VEL_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_Z_VEL_MAX_DN")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_Z_VEL_MAX_DN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_Z_FF")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_Z_FF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_XY_P")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_XY_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_XY_VEL_P")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_XY_VEL_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_XY_VEL_I")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_XY_VEL_I = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_XY_VEL_D")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_XY_VEL_D = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_XY_CRUISE")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_XY_CRUISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_XY_VEL_MAX")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_XY_VEL_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_XY_FF")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_XY_FF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_TILTMAX_AIR")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_TILTMAX_AIR = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_TILTMAX_LND")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_TILTMAX_LND = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_LAND_SPEED")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_LAND_SPEED = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_TKO_SPEED")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_TKO_SPEED = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_MAN_R_MAX")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_MAN_R_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_MAN_P_MAX")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_MAN_P_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_MAN_Y_MAX")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_MAN_Y_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_HOLD_XY_DZ")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_HOLD_XY_DZ = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_HOLD_MAX_XY")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_HOLD_MAX_XY = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_HOLD_MAX_Z")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_HOLD_MAX_Z = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_VELD_LP")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_VELD_LP = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_ACC_HOR_MAX")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_ACC_HOR_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPC_ALT_MODE")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPC_ALT_MODE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPP_THR_MIN")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPP_THR_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPP_THR_MAX")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPP_THR_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPP_Z_P")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPP_Z_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPP_Z_VEL_P")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPP_Z_VEL_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPP_Z_VEL_I")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPP_Z_VEL_I = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPP_Z_VEL_D")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPP_Z_VEL_D = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPP_Z_VEL_MAX")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPP_Z_VEL_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPP_Z_FF")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPP_Z_FF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPP_XY_P")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPP_XY_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPP_XY_VEL_P")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPP_XY_VEL_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPP_XY_VEL_I")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPP_XY_VEL_I = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPP_XY_VEL_D")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPP_XY_VEL_D = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPP_XY_VEL_MAX")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPP_XY_VEL_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPP_XY_FF")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPP_XY_FF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPP_TILTMAX_AIR")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPP_TILTMAX_AIR = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPP_TILTMAX_LND")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPP_TILTMAX_LND = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MPP_LAND_SPEED")) {
        _photonPx4_autogen._Multicopter_Position_Control.MPP_LAND_SPEED = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MULTICOPTER_POSITION_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_RATE")) {
        _photonPx4_autogen._PWM_Outputs.PWM_RATE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_MIN")) {
        _photonPx4_autogen._PWM_Outputs.PWM_MIN = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_MAX")) {
        _photonPx4_autogen._PWM_Outputs.PWM_MAX = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_DISARMED")) {
        _photonPx4_autogen._PWM_Outputs.PWM_DISARMED = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_AUX_MIN")) {
        _photonPx4_autogen._PWM_Outputs.PWM_AUX_MIN = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_AUX_MAX")) {
        _photonPx4_autogen._PWM_Outputs.PWM_AUX_MAX = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_AUX_DISARMED")) {
        _photonPx4_autogen._PWM_Outputs.PWM_AUX_DISARMED = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MOT_SLEW_MAX")) {
        _photonPx4_autogen._PWM_Outputs.MOT_SLEW_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_MAIN_REV1")) {
        _photonPx4_autogen._PWM_Outputs.PWM_MAIN_REV1 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_MAIN_REV2")) {
        _photonPx4_autogen._PWM_Outputs.PWM_MAIN_REV2 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_MAIN_REV3")) {
        _photonPx4_autogen._PWM_Outputs.PWM_MAIN_REV3 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_MAIN_REV4")) {
        _photonPx4_autogen._PWM_Outputs.PWM_MAIN_REV4 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_MAIN_REV5")) {
        _photonPx4_autogen._PWM_Outputs.PWM_MAIN_REV5 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_MAIN_REV6")) {
        _photonPx4_autogen._PWM_Outputs.PWM_MAIN_REV6 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_MAIN_REV7")) {
        _photonPx4_autogen._PWM_Outputs.PWM_MAIN_REV7 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_MAIN_REV8")) {
        _photonPx4_autogen._PWM_Outputs.PWM_MAIN_REV8 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_SBUS_MODE")) {
        _photonPx4_autogen._PWM_Outputs.PWM_SBUS_MODE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_AUX_REV1")) {
        _photonPx4_autogen._PWM_Outputs.PWM_AUX_REV1 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_AUX_REV2")) {
        _photonPx4_autogen._PWM_Outputs.PWM_AUX_REV2 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_AUX_REV3")) {
        _photonPx4_autogen._PWM_Outputs.PWM_AUX_REV3 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_AUX_REV4")) {
        _photonPx4_autogen._PWM_Outputs.PWM_AUX_REV4 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_AUX_REV5")) {
        _photonPx4_autogen._PWM_Outputs.PWM_AUX_REV5 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PWM_AUX_REV6")) {
        _photonPx4_autogen._PWM_Outputs.PWM_AUX_REV6 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PWM_OUTPUTS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "BD_GPROPERTIES")) {
        _photonPx4_autogen._Payload_drop.BD_GPROPERTIES = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PAYLOAD_DROP_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "BD_TURNRADIUS")) {
        _photonPx4_autogen._Payload_drop.BD_TURNRADIUS = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PAYLOAD_DROP_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "BD_PRECISION")) {
        _photonPx4_autogen._Payload_drop.BD_PRECISION = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PAYLOAD_DROP_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "BD_OBJ_CD")) {
        _photonPx4_autogen._Payload_drop.BD_OBJ_CD = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PAYLOAD_DROP_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "BD_OBJ_MASS")) {
        _photonPx4_autogen._Payload_drop.BD_OBJ_MASS = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PAYLOAD_DROP_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "BD_OBJ_SURFACE")) {
        _photonPx4_autogen._Payload_drop.BD_OBJ_SURFACE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_PAYLOAD_DROP_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_VEL_DELAY_MS")) {
        _photonPx4_autogen._Position_Estimator.PE_VEL_DELAY_MS = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_POS_DELAY_MS")) {
        _photonPx4_autogen._Position_Estimator.PE_POS_DELAY_MS = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_HGT_DELAY_MS")) {
        _photonPx4_autogen._Position_Estimator.PE_HGT_DELAY_MS = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_MAG_DELAY_MS")) {
        _photonPx4_autogen._Position_Estimator.PE_MAG_DELAY_MS = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_TAS_DELAY_MS")) {
        _photonPx4_autogen._Position_Estimator.PE_TAS_DELAY_MS = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_GPS_ALT_WGT")) {
        _photonPx4_autogen._Position_Estimator.PE_GPS_ALT_WGT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_EAS_NOISE")) {
        _photonPx4_autogen._Position_Estimator.PE_EAS_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_VELNE_NOISE")) {
        _photonPx4_autogen._Position_Estimator.PE_VELNE_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_VELD_NOISE")) {
        _photonPx4_autogen._Position_Estimator.PE_VELD_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_POSNE_NOISE")) {
        _photonPx4_autogen._Position_Estimator.PE_POSNE_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_POSD_NOISE")) {
        _photonPx4_autogen._Position_Estimator.PE_POSD_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_MAG_NOISE")) {
        _photonPx4_autogen._Position_Estimator.PE_MAG_NOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_GYRO_PNOISE")) {
        _photonPx4_autogen._Position_Estimator.PE_GYRO_PNOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_ACC_PNOISE")) {
        _photonPx4_autogen._Position_Estimator.PE_ACC_PNOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_GBIAS_PNOISE")) {
        _photonPx4_autogen._Position_Estimator.PE_GBIAS_PNOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_ABIAS_PNOISE")) {
        _photonPx4_autogen._Position_Estimator.PE_ABIAS_PNOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_MAGE_PNOISE")) {
        _photonPx4_autogen._Position_Estimator.PE_MAGE_PNOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_MAGB_PNOISE")) {
        _photonPx4_autogen._Position_Estimator.PE_MAGB_PNOISE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_MAGB_X")) {
        _photonPx4_autogen._Position_Estimator.PE_MAGB_X = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_MAGB_Y")) {
        _photonPx4_autogen._Position_Estimator.PE_MAGB_Y = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_MAGB_Z")) {
        _photonPx4_autogen._Position_Estimator.PE_MAGB_Z = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "PE_POSDEV_INIT")) {
        _photonPx4_autogen._Position_Estimator.PE_POSDEV_INIT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_W_Z_BARO")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_W_Z_BARO = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_W_Z_GPS_P")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_W_Z_GPS_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_W_Z_GPS_V")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_W_Z_GPS_V = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_W_Z_VIS_P")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_W_Z_VIS_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_W_Z_LIDAR")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_W_Z_LIDAR = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_W_XY_GPS_P")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_W_XY_GPS_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_W_XY_GPS_V")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_W_XY_GPS_V = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_W_XY_VIS_P")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_W_XY_VIS_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_W_XY_VIS_V")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_W_XY_VIS_V = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_W_MOC_P")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_W_MOC_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_W_XY_FLOW")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_W_XY_FLOW = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_W_XY_RES_V")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_W_XY_RES_V = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_W_GPS_FLOW")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_W_GPS_FLOW = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_W_ACC_BIAS")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_W_ACC_BIAS = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_FLOW_K")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_FLOW_K = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_FLOW_Q_MIN")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_FLOW_Q_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_LIDAR_ERR")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_LIDAR_ERR = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_LAND_T")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_LAND_T = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_LAND_DISP")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_LAND_DISP = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_LAND_THR")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_LAND_THR = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_DELAY_GPS")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_DELAY_GPS = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_FLOW_DIST_X")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_FLOW_DIST_X = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_FLOW_DIST_Y")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_FLOW_DIST_Y = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_DISAB_MOCAP")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_DISAB_MOCAP = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_LIDAR_EST")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_LIDAR_EST = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "INAV_LIDAR_OFF")) {
        _photonPx4_autogen._Position_Estimator_INAV.INAV_LIDAR_OFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CBRK_NO_VISION")) {
        _photonPx4_autogen._Position_Estimator_INAV.CBRK_NO_VISION = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_POSITION_ESTIMATOR_INAV_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_RECEIVER_TYPE")) {
        _photonPx4_autogen._RC_Receiver_Configuration.RC_RECEIVER_TYPE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RC_RECEIVER_CONFIGURATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC1_MIN")) {
        _photonPx4_autogen._Radio_Calibration.RC1_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC1_TRIM")) {
        _photonPx4_autogen._Radio_Calibration.RC1_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC1_MAX")) {
        _photonPx4_autogen._Radio_Calibration.RC1_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC1_REV")) {
        _photonPx4_autogen._Radio_Calibration.RC1_REV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC1_DZ")) {
        _photonPx4_autogen._Radio_Calibration.RC1_DZ = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC2_MIN")) {
        _photonPx4_autogen._Radio_Calibration.RC2_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC2_TRIM")) {
        _photonPx4_autogen._Radio_Calibration.RC2_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC2_MAX")) {
        _photonPx4_autogen._Radio_Calibration.RC2_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC2_REV")) {
        _photonPx4_autogen._Radio_Calibration.RC2_REV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC2_DZ")) {
        _photonPx4_autogen._Radio_Calibration.RC2_DZ = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC3_MIN")) {
        _photonPx4_autogen._Radio_Calibration.RC3_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC3_TRIM")) {
        _photonPx4_autogen._Radio_Calibration.RC3_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC3_MAX")) {
        _photonPx4_autogen._Radio_Calibration.RC3_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC3_REV")) {
        _photonPx4_autogen._Radio_Calibration.RC3_REV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC3_DZ")) {
        _photonPx4_autogen._Radio_Calibration.RC3_DZ = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC4_MIN")) {
        _photonPx4_autogen._Radio_Calibration.RC4_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC4_TRIM")) {
        _photonPx4_autogen._Radio_Calibration.RC4_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC4_MAX")) {
        _photonPx4_autogen._Radio_Calibration.RC4_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC4_REV")) {
        _photonPx4_autogen._Radio_Calibration.RC4_REV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC4_DZ")) {
        _photonPx4_autogen._Radio_Calibration.RC4_DZ = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC5_MIN")) {
        _photonPx4_autogen._Radio_Calibration.RC5_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC5_TRIM")) {
        _photonPx4_autogen._Radio_Calibration.RC5_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC5_MAX")) {
        _photonPx4_autogen._Radio_Calibration.RC5_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC5_REV")) {
        _photonPx4_autogen._Radio_Calibration.RC5_REV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC5_DZ")) {
        _photonPx4_autogen._Radio_Calibration.RC5_DZ = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC6_MIN")) {
        _photonPx4_autogen._Radio_Calibration.RC6_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC6_TRIM")) {
        _photonPx4_autogen._Radio_Calibration.RC6_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC6_MAX")) {
        _photonPx4_autogen._Radio_Calibration.RC6_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC6_REV")) {
        _photonPx4_autogen._Radio_Calibration.RC6_REV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC6_DZ")) {
        _photonPx4_autogen._Radio_Calibration.RC6_DZ = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC7_MIN")) {
        _photonPx4_autogen._Radio_Calibration.RC7_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC7_TRIM")) {
        _photonPx4_autogen._Radio_Calibration.RC7_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC7_MAX")) {
        _photonPx4_autogen._Radio_Calibration.RC7_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC7_REV")) {
        _photonPx4_autogen._Radio_Calibration.RC7_REV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC7_DZ")) {
        _photonPx4_autogen._Radio_Calibration.RC7_DZ = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC8_MIN")) {
        _photonPx4_autogen._Radio_Calibration.RC8_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC8_TRIM")) {
        _photonPx4_autogen._Radio_Calibration.RC8_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC8_MAX")) {
        _photonPx4_autogen._Radio_Calibration.RC8_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC8_REV")) {
        _photonPx4_autogen._Radio_Calibration.RC8_REV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC8_DZ")) {
        _photonPx4_autogen._Radio_Calibration.RC8_DZ = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC9_MIN")) {
        _photonPx4_autogen._Radio_Calibration.RC9_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC9_TRIM")) {
        _photonPx4_autogen._Radio_Calibration.RC9_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC9_MAX")) {
        _photonPx4_autogen._Radio_Calibration.RC9_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC9_REV")) {
        _photonPx4_autogen._Radio_Calibration.RC9_REV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC9_DZ")) {
        _photonPx4_autogen._Radio_Calibration.RC9_DZ = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC10_MIN")) {
        _photonPx4_autogen._Radio_Calibration.RC10_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC10_TRIM")) {
        _photonPx4_autogen._Radio_Calibration.RC10_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC10_MAX")) {
        _photonPx4_autogen._Radio_Calibration.RC10_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC10_REV")) {
        _photonPx4_autogen._Radio_Calibration.RC10_REV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC10_DZ")) {
        _photonPx4_autogen._Radio_Calibration.RC10_DZ = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC11_MIN")) {
        _photonPx4_autogen._Radio_Calibration.RC11_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC11_TRIM")) {
        _photonPx4_autogen._Radio_Calibration.RC11_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC11_MAX")) {
        _photonPx4_autogen._Radio_Calibration.RC11_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC11_REV")) {
        _photonPx4_autogen._Radio_Calibration.RC11_REV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC11_DZ")) {
        _photonPx4_autogen._Radio_Calibration.RC11_DZ = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC12_MIN")) {
        _photonPx4_autogen._Radio_Calibration.RC12_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC12_TRIM")) {
        _photonPx4_autogen._Radio_Calibration.RC12_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC12_MAX")) {
        _photonPx4_autogen._Radio_Calibration.RC12_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC12_REV")) {
        _photonPx4_autogen._Radio_Calibration.RC12_REV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC12_DZ")) {
        _photonPx4_autogen._Radio_Calibration.RC12_DZ = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC13_MIN")) {
        _photonPx4_autogen._Radio_Calibration.RC13_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC13_TRIM")) {
        _photonPx4_autogen._Radio_Calibration.RC13_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC13_MAX")) {
        _photonPx4_autogen._Radio_Calibration.RC13_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC13_REV")) {
        _photonPx4_autogen._Radio_Calibration.RC13_REV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC13_DZ")) {
        _photonPx4_autogen._Radio_Calibration.RC13_DZ = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC14_MIN")) {
        _photonPx4_autogen._Radio_Calibration.RC14_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC14_TRIM")) {
        _photonPx4_autogen._Radio_Calibration.RC14_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC14_MAX")) {
        _photonPx4_autogen._Radio_Calibration.RC14_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC14_REV")) {
        _photonPx4_autogen._Radio_Calibration.RC14_REV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC14_DZ")) {
        _photonPx4_autogen._Radio_Calibration.RC14_DZ = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC15_MIN")) {
        _photonPx4_autogen._Radio_Calibration.RC15_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC15_TRIM")) {
        _photonPx4_autogen._Radio_Calibration.RC15_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC15_MAX")) {
        _photonPx4_autogen._Radio_Calibration.RC15_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC15_REV")) {
        _photonPx4_autogen._Radio_Calibration.RC15_REV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC15_DZ")) {
        _photonPx4_autogen._Radio_Calibration.RC15_DZ = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC16_MIN")) {
        _photonPx4_autogen._Radio_Calibration.RC16_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC16_TRIM")) {
        _photonPx4_autogen._Radio_Calibration.RC16_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC16_MAX")) {
        _photonPx4_autogen._Radio_Calibration.RC16_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC16_REV")) {
        _photonPx4_autogen._Radio_Calibration.RC16_REV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC16_DZ")) {
        _photonPx4_autogen._Radio_Calibration.RC16_DZ = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC17_MIN")) {
        _photonPx4_autogen._Radio_Calibration.RC17_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC17_TRIM")) {
        _photonPx4_autogen._Radio_Calibration.RC17_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC17_MAX")) {
        _photonPx4_autogen._Radio_Calibration.RC17_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC17_REV")) {
        _photonPx4_autogen._Radio_Calibration.RC17_REV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC17_DZ")) {
        _photonPx4_autogen._Radio_Calibration.RC17_DZ = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC18_MIN")) {
        _photonPx4_autogen._Radio_Calibration.RC18_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC18_TRIM")) {
        _photonPx4_autogen._Radio_Calibration.RC18_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC18_MAX")) {
        _photonPx4_autogen._Radio_Calibration.RC18_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC18_REV")) {
        _photonPx4_autogen._Radio_Calibration.RC18_REV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC18_DZ")) {
        _photonPx4_autogen._Radio_Calibration.RC18_DZ = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_RL1_DSM_VCC")) {
        _photonPx4_autogen._Radio_Calibration.RC_RL1_DSM_VCC = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_DSM_BIND")) {
        _photonPx4_autogen._Radio_Calibration.RC_DSM_BIND = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_CHAN_CNT")) {
        _photonPx4_autogen._Radio_Calibration.RC_CHAN_CNT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_TH_USER")) {
        _photonPx4_autogen._Radio_Calibration.RC_TH_USER = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_ROLL")) {
        _photonPx4_autogen._Radio_Calibration.RC_MAP_ROLL = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_PITCH")) {
        _photonPx4_autogen._Radio_Calibration.RC_MAP_PITCH = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_THROTTLE")) {
        _photonPx4_autogen._Radio_Calibration.RC_MAP_THROTTLE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_YAW")) {
        _photonPx4_autogen._Radio_Calibration.RC_MAP_YAW = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_AUX1")) {
        _photonPx4_autogen._Radio_Calibration.RC_MAP_AUX1 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_AUX2")) {
        _photonPx4_autogen._Radio_Calibration.RC_MAP_AUX2 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_AUX3")) {
        _photonPx4_autogen._Radio_Calibration.RC_MAP_AUX3 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_AUX4")) {
        _photonPx4_autogen._Radio_Calibration.RC_MAP_AUX4 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_AUX5")) {
        _photonPx4_autogen._Radio_Calibration.RC_MAP_AUX5 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_PARAM1")) {
        _photonPx4_autogen._Radio_Calibration.RC_MAP_PARAM1 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_PARAM2")) {
        _photonPx4_autogen._Radio_Calibration.RC_MAP_PARAM2 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_PARAM3")) {
        _photonPx4_autogen._Radio_Calibration.RC_MAP_PARAM3 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_FAILS_THR")) {
        _photonPx4_autogen._Radio_Calibration.RC_FAILS_THR = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_RSSI_PWM_CHAN")) {
        _photonPx4_autogen._Radio_Calibration.RC_RSSI_PWM_CHAN = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_RSSI_PWM_MAX")) {
        _photonPx4_autogen._Radio_Calibration.RC_RSSI_PWM_MAX = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_RSSI_PWM_MIN")) {
        _photonPx4_autogen._Radio_Calibration.RC_RSSI_PWM_MIN = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TRIM_ROLL")) {
        _photonPx4_autogen._Radio_Calibration.TRIM_ROLL = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TRIM_PITCH")) {
        _photonPx4_autogen._Radio_Calibration.TRIM_PITCH = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TRIM_YAW")) {
        _photonPx4_autogen._Radio_Calibration.TRIM_YAW = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "NAV_RCL_LT")) {
        _photonPx4_autogen._Radio_Signal_Loss.NAV_RCL_LT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SIGNAL_LOSS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_FLTMODE")) {
        _photonPx4_autogen._Radio_Switches.RC_MAP_FLTMODE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_MODE_SW")) {
        _photonPx4_autogen._Radio_Switches.RC_MAP_MODE_SW = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_RETURN_SW")) {
        _photonPx4_autogen._Radio_Switches.RC_MAP_RETURN_SW = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_RATT_SW")) {
        _photonPx4_autogen._Radio_Switches.RC_MAP_RATT_SW = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_POSCTL_SW")) {
        _photonPx4_autogen._Radio_Switches.RC_MAP_POSCTL_SW = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_LOITER_SW")) {
        _photonPx4_autogen._Radio_Switches.RC_MAP_LOITER_SW = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_ACRO_SW")) {
        _photonPx4_autogen._Radio_Switches.RC_MAP_ACRO_SW = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_OFFB_SW")) {
        _photonPx4_autogen._Radio_Switches.RC_MAP_OFFB_SW = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_KILL_SW")) {
        _photonPx4_autogen._Radio_Switches.RC_MAP_KILL_SW = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_FLAPS")) {
        _photonPx4_autogen._Radio_Switches.RC_MAP_FLAPS = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_TRANS_SW")) {
        _photonPx4_autogen._Radio_Switches.RC_MAP_TRANS_SW = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_GEAR_SW")) {
        _photonPx4_autogen._Radio_Switches.RC_MAP_GEAR_SW = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_ASSIST_TH")) {
        _photonPx4_autogen._Radio_Switches.RC_ASSIST_TH = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_AUTO_TH")) {
        _photonPx4_autogen._Radio_Switches.RC_AUTO_TH = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_RATT_TH")) {
        _photonPx4_autogen._Radio_Switches.RC_RATT_TH = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_POSCTL_TH")) {
        _photonPx4_autogen._Radio_Switches.RC_POSCTL_TH = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_RETURN_TH")) {
        _photonPx4_autogen._Radio_Switches.RC_RETURN_TH = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_LOITER_TH")) {
        _photonPx4_autogen._Radio_Switches.RC_LOITER_TH = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_ACRO_TH")) {
        _photonPx4_autogen._Radio_Switches.RC_ACRO_TH = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_OFFB_TH")) {
        _photonPx4_autogen._Radio_Switches.RC_OFFB_TH = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_KILLSWITCH_TH")) {
        _photonPx4_autogen._Radio_Switches.RC_KILLSWITCH_TH = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_TRANS_TH")) {
        _photonPx4_autogen._Radio_Switches.RC_TRANS_TH = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_GEAR_TH")) {
        _photonPx4_autogen._Radio_Switches.RC_GEAR_TH = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RADIO_SWITCHES_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RTL_RETURN_ALT")) {
        _photonPx4_autogen._Return_To_Land.RTL_RETURN_ALT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RETURN_TO_LAND_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RTL_DESCEND_ALT")) {
        _photonPx4_autogen._Return_To_Land.RTL_DESCEND_ALT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RETURN_TO_LAND_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RTL_LAND_DELAY")) {
        _photonPx4_autogen._Return_To_Land.RTL_LAND_DELAY = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RETURN_TO_LAND_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RTL_MIN_DIST")) {
        _photonPx4_autogen._Return_To_Land.RTL_MIN_DIST = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RETURN_TO_LAND_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RWTO_TKOFF")) {
        _photonPx4_autogen._Runway_Takeoff.RWTO_TKOFF = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RUNWAY_TAKEOFF_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RWTO_HDG")) {
        _photonPx4_autogen._Runway_Takeoff.RWTO_HDG = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RUNWAY_TAKEOFF_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RWTO_NAV_ALT")) {
        _photonPx4_autogen._Runway_Takeoff.RWTO_NAV_ALT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RUNWAY_TAKEOFF_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RWTO_MAX_THR")) {
        _photonPx4_autogen._Runway_Takeoff.RWTO_MAX_THR = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RUNWAY_TAKEOFF_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RWTO_PSP")) {
        _photonPx4_autogen._Runway_Takeoff.RWTO_PSP = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RUNWAY_TAKEOFF_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RWTO_MAX_PITCH")) {
        _photonPx4_autogen._Runway_Takeoff.RWTO_MAX_PITCH = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RUNWAY_TAKEOFF_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RWTO_MAX_ROLL")) {
        _photonPx4_autogen._Runway_Takeoff.RWTO_MAX_ROLL = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RUNWAY_TAKEOFF_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RWTO_AIRSPD_SCL")) {
        _photonPx4_autogen._Runway_Takeoff.RWTO_AIRSPD_SCL = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_RUNWAY_TAKEOFF_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SDLOG_UTC_OFFSET")) {
        _photonPx4_autogen._SD_Logging.SDLOG_UTC_OFFSET = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SD_LOGGING_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SDLOG_MODE")) {
        _photonPx4_autogen._SD_Logging.SDLOG_MODE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SD_LOGGING_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SDLOG_RATE")) {
        _photonPx4_autogen._SD_Logging.SDLOG_RATE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SD_LOGGING_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SDLOG_EXT")) {
        _photonPx4_autogen._SD_Logging.SDLOG_EXT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SD_LOGGING_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SDLOG_GPSTIME")) {
        _photonPx4_autogen._SD_Logging.SDLOG_GPSTIME = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SD_LOGGING_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SDLOG_PRIO_BOOST")) {
        _photonPx4_autogen._SD_Logging.SDLOG_PRIO_BOOST = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SD_LOGGING_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_BOARD_ID")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_BOARD_ID = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO0_ID")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO0_ID = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO0_XOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO0_XOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO0_YOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO0_YOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO0_ZOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO0_ZOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO0_XSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO0_XSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO0_YSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO0_YSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO0_ZSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO0_ZSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG0_ID")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG0_ID = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG0_ROT")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG0_ROT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG0_XOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG0_XOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG0_YOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG0_YOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG0_ZOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG0_ZOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG0_XSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG0_XSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG0_YSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG0_YSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG0_ZSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG0_ZSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC0_ID")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC0_ID = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC0_XOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC0_XOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC0_YOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC0_YOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC0_ZOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC0_ZOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC0_XSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC0_XSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC0_YSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC0_YSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC0_ZSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC0_ZSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO1_ID")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO1_ID = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO1_XOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO1_XOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO1_YOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO1_YOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO1_ZOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO1_ZOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO1_XSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO1_XSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO1_YSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO1_YSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO1_ZSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO1_ZSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG1_ID")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG1_ID = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG1_ROT")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG1_ROT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG1_XOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG1_XOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG1_YOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG1_YOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG1_ZOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG1_ZOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG1_XSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG1_XSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG1_YSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG1_YSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG1_ZSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG1_ZSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC1_ID")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC1_ID = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC1_XOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC1_XOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC1_YOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC1_YOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC1_ZOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC1_ZOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC1_XSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC1_XSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC1_YSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC1_YSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC1_ZSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC1_ZSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO2_ID")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO2_ID = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO2_XOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO2_XOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO2_YOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO2_YOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO2_ZOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO2_ZOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO2_XSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO2_XSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO2_YSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO2_YSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO2_ZSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO2_ZSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG2_ID")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG2_ID = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG2_ROT")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG2_ROT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG2_XOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG2_XOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG2_YOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG2_YOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG2_ZOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG2_ZOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG2_XSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG2_XSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG2_YSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG2_YSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG2_ZSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG2_ZSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC2_ID")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC2_ID = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC2_XOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC2_XOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC2_YOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC2_YOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC2_ZOFF")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC2_ZOFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC2_XSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC2_XSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC2_YSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC2_YSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC2_ZSCALE")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC2_ZSCALE = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_ACC_PRIME")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_ACC_PRIME = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_GYRO_PRIME")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_GYRO_PRIME = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG_PRIME")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG_PRIME = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_MAG_SIDES")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_MAG_SIDES = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "CAL_BARO_PRIME")) {
        _photonPx4_autogen._Sensor_Calibration.CAL_BARO_PRIME = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SENS_DPRES_OFF")) {
        _photonPx4_autogen._Sensor_Calibration.SENS_DPRES_OFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SENS_DPRES_ANSC")) {
        _photonPx4_autogen._Sensor_Calibration.SENS_DPRES_ANSC = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SENS_BARO_QNH")) {
        _photonPx4_autogen._Sensor_Calibration.SENS_BARO_QNH = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SENS_BOARD_ROT")) {
        _photonPx4_autogen._Sensor_Calibration.SENS_BOARD_ROT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SENS_FLOW_ROT")) {
        _photonPx4_autogen._Sensor_Calibration.SENS_FLOW_ROT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SENS_BOARD_Y_OFF")) {
        _photonPx4_autogen._Sensor_Calibration.SENS_BOARD_Y_OFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SENS_BOARD_X_OFF")) {
        _photonPx4_autogen._Sensor_Calibration.SENS_BOARD_X_OFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SENS_BOARD_Z_OFF")) {
        _photonPx4_autogen._Sensor_Calibration.SENS_BOARD_Z_OFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SENS_EXT_MAG_ROT")) {
        _photonPx4_autogen._Sensor_Calibration.SENS_EXT_MAG_ROT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SENS_EXT_MAG")) {
        _photonPx4_autogen._Sensor_Calibration.SENS_EXT_MAG = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_CALIBRATION_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SENS_EN_LL40LS")) {
        _photonPx4_autogen._Sensor_Enable.SENS_EN_LL40LS = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_ENABLE_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SENS_EN_SF0X")) {
        _photonPx4_autogen._Sensor_Enable.SENS_EN_SF0X = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_ENABLE_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SENS_EN_MB12XX")) {
        _photonPx4_autogen._Sensor_Enable.SENS_EN_MB12XX = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_ENABLE_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SENS_EN_TRONE")) {
        _photonPx4_autogen._Sensor_Enable.SENS_EN_TRONE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_ENABLE_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SENS_EN_SF1XX")) {
        _photonPx4_autogen._Sensor_Enable.SENS_EN_SF1XX = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_ENABLE_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SENS_EN_THERMAL")) {
        _photonPx4_autogen._Sensor_Enable.SENS_EN_THERMAL = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SENSOR_ENABLE_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "UART_ESC_MODEL")) {
        _photonPx4_autogen._Snapdragon_UART_ESC.UART_ESC_MODEL = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SNAPDRAGON_UART_ESC_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "UART_ESC_BAUD")) {
        _photonPx4_autogen._Snapdragon_UART_ESC.UART_ESC_BAUD = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SNAPDRAGON_UART_ESC_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "UART_ESC_MOTOR1")) {
        _photonPx4_autogen._Snapdragon_UART_ESC.UART_ESC_MOTOR1 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SNAPDRAGON_UART_ESC_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "UART_ESC_MOTOR2")) {
        _photonPx4_autogen._Snapdragon_UART_ESC.UART_ESC_MOTOR2 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SNAPDRAGON_UART_ESC_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "UART_ESC_MOTOR3")) {
        _photonPx4_autogen._Snapdragon_UART_ESC.UART_ESC_MOTOR3 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SNAPDRAGON_UART_ESC_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "UART_ESC_MOTOR4")) {
        _photonPx4_autogen._Snapdragon_UART_ESC.UART_ESC_MOTOR4 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SNAPDRAGON_UART_ESC_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SUB_INTERV")) {
        _photonPx4_autogen._Subscriber_Example.SUB_INTERV = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SUBSCRIBER_EXAMPLE_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SUB_TESTF")) {
        _photonPx4_autogen._Subscriber_Example.SUB_TESTF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SUBSCRIBER_EXAMPLE_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SLNK_RADIO_CHAN")) {
        _photonPx4_autogen._Syslink.SLNK_RADIO_CHAN = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSLINK_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SLNK_RADIO_RATE")) {
        _photonPx4_autogen._Syslink.SLNK_RADIO_RATE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSLINK_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SLNK_RADIO_ADDR1")) {
        _photonPx4_autogen._Syslink.SLNK_RADIO_ADDR1 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSLINK_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SLNK_RADIO_ADDR2")) {
        _photonPx4_autogen._Syslink.SLNK_RADIO_ADDR2 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSLINK_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SYS_AUTOSTART")) {
        _photonPx4_autogen._System.SYS_AUTOSTART = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSTEM_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SYS_AUTOCONFIG")) {
        _photonPx4_autogen._System.SYS_AUTOCONFIG = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSTEM_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SYS_USE_IO")) {
        _photonPx4_autogen._System.SYS_USE_IO = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSTEM_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SYS_RESTART_TYPE")) {
        _photonPx4_autogen._System.SYS_RESTART_TYPE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSTEM_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SYS_MC_EST_GROUP")) {
        _photonPx4_autogen._System.SYS_MC_EST_GROUP = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSTEM_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SYS_COMPANION")) {
        _photonPx4_autogen._System.SYS_COMPANION = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSTEM_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SYS_PARAM_VER")) {
        _photonPx4_autogen._System.SYS_PARAM_VER = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSTEM_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SYS_LOGGER")) {
        _photonPx4_autogen._System.SYS_LOGGER = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSTEM_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "LED_RGB_MAXBRT")) {
        _photonPx4_autogen._System.LED_RGB_MAXBRT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_SYSTEM_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TEST_MIN")) {
        _photonPx4_autogen._Testing.TEST_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TEST_MAX")) {
        _photonPx4_autogen._Testing.TEST_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TEST_TRIM")) {
        _photonPx4_autogen._Testing.TEST_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TEST_HP")) {
        _photonPx4_autogen._Testing.TEST_HP = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TEST_LP")) {
        _photonPx4_autogen._Testing.TEST_LP = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TEST_P")) {
        _photonPx4_autogen._Testing.TEST_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TEST_I")) {
        _photonPx4_autogen._Testing.TEST_I = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TEST_I_MAX")) {
        _photonPx4_autogen._Testing.TEST_I_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TEST_D")) {
        _photonPx4_autogen._Testing.TEST_D = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TEST_D_LP")) {
        _photonPx4_autogen._Testing.TEST_D_LP = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TEST_MEAN")) {
        _photonPx4_autogen._Testing.TEST_MEAN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TEST_DEV")) {
        _photonPx4_autogen._Testing.TEST_DEV = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "TEST_PARAMS")) {
        _photonPx4_autogen._Testing.TEST_PARAMS = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_TESTING_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "UAVCAN_ENABLE")) {
        _photonPx4_autogen._UAVCAN.UAVCAN_ENABLE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "UAVCAN_NODE_ID")) {
        _photonPx4_autogen._UAVCAN.UAVCAN_NODE_ID = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "UAVCAN_BITRATE")) {
        _photonPx4_autogen._UAVCAN.UAVCAN_BITRATE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "UAVCAN_ESC_IDLT")) {
        _photonPx4_autogen._UAVCAN.UAVCAN_ESC_IDLT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_UAVCAN_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_TRANS_THR")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_TRANS_THR = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_DWN_PITCH_MAX")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_DWN_PITCH_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_FWD_THRUST_SC")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_FWD_THRUST_SC = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_MOT_COUNT")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_MOT_COUNT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_IDLE_PWM_MC")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_IDLE_PWM_MC = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_MC_ARSPD_MIN")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_MC_ARSPD_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_MC_ARSPD_MAX")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_MC_ARSPD_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_MC_ARSPD_TRIM")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_MC_ARSPD_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_FW_PERM_STAB")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_FW_PERM_STAB = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_FW_PITCH_TRIM")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_FW_PITCH_TRIM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_POWER_MAX")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_POWER_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_PROP_EFF")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_PROP_EFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_ARSP_LP_GAIN")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_ARSP_LP_GAIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_TYPE")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_TYPE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_ELEV_MC_LOCK")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_ELEV_MC_LOCK = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_F_TRANS_DUR")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_F_TRANS_DUR = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_B_TRANS_DUR")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_B_TRANS_DUR = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_ARSP_BLEND")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_ARSP_BLEND = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_ARSP_TRANS")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_ARSP_TRANS = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_OPT_RECOV_EN")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_OPT_RECOV_EN = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_WV_YAWR_SCL")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_WV_YAWR_SCL = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_TRANS_TIMEOUT")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_TRANS_TIMEOUT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_TRANS_MIN_TM")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_TRANS_MIN_TM = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_NAV_FORCE_VT")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_NAV_FORCE_VT = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_FW_MIN_ALT")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_FW_MIN_ALT = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_TILT_MC")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_TILT_MC = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_TILT_TRANS")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_TILT_TRANS = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_TILT_FW")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_TILT_FW = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_TRANS_P2_DUR")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_TRANS_P2_DUR = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "VT_FW_MOT_OFFID")) {
        _photonPx4_autogen._VTOL_Attitude_Control.VT_FW_MOT_OFFID = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_VTOL_ATTITUDE_CONTROL_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_ENABLED")) {
        _photonPx4_autogen._MTECS.MT_ENABLED = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_THR_FF")) {
        _photonPx4_autogen._MTECS.MT_THR_FF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_THR_P")) {
        _photonPx4_autogen._MTECS.MT_THR_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_THR_I")) {
        _photonPx4_autogen._MTECS.MT_THR_I = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_THR_OFF")) {
        _photonPx4_autogen._MTECS.MT_THR_OFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_PIT_FF")) {
        _photonPx4_autogen._MTECS.MT_PIT_FF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_PIT_P")) {
        _photonPx4_autogen._MTECS.MT_PIT_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_PIT_I")) {
        _photonPx4_autogen._MTECS.MT_PIT_I = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_PIT_OFF")) {
        _photonPx4_autogen._MTECS.MT_PIT_OFF = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_THR_MIN")) {
        _photonPx4_autogen._MTECS.MT_THR_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_THR_MAX")) {
        _photonPx4_autogen._MTECS.MT_THR_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_PIT_MIN")) {
        _photonPx4_autogen._MTECS.MT_PIT_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_PIT_MAX")) {
        _photonPx4_autogen._MTECS.MT_PIT_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_ALT_LP")) {
        _photonPx4_autogen._MTECS.MT_ALT_LP = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_FPA_LP")) {
        _photonPx4_autogen._MTECS.MT_FPA_LP = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_FPA_P")) {
        _photonPx4_autogen._MTECS.MT_FPA_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_FPA_D")) {
        _photonPx4_autogen._MTECS.MT_FPA_D = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_FPA_D_LP")) {
        _photonPx4_autogen._MTECS.MT_FPA_D_LP = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_FPA_MIN")) {
        _photonPx4_autogen._MTECS.MT_FPA_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_FPA_MAX")) {
        _photonPx4_autogen._MTECS.MT_FPA_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_A_LP")) {
        _photonPx4_autogen._MTECS.MT_A_LP = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_AD_LP")) {
        _photonPx4_autogen._MTECS.MT_AD_LP = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_ACC_P")) {
        _photonPx4_autogen._MTECS.MT_ACC_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_ACC_D")) {
        _photonPx4_autogen._MTECS.MT_ACC_D = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_ACC_D_LP")) {
        _photonPx4_autogen._MTECS.MT_ACC_D_LP = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_ACC_MIN")) {
        _photonPx4_autogen._MTECS.MT_ACC_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_ACC_MAX")) {
        _photonPx4_autogen._MTECS.MT_ACC_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_TKF_THR_MIN")) {
        _photonPx4_autogen._MTECS.MT_TKF_THR_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_TKF_THR_MAX")) {
        _photonPx4_autogen._MTECS.MT_TKF_THR_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_TKF_PIT_MIN")) {
        _photonPx4_autogen._MTECS.MT_TKF_PIT_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_TKF_PIT_MAX")) {
        _photonPx4_autogen._MTECS.MT_TKF_PIT_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_USP_THR_MIN")) {
        _photonPx4_autogen._MTECS.MT_USP_THR_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_USP_THR_MAX")) {
        _photonPx4_autogen._MTECS.MT_USP_THR_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_USP_PIT_MIN")) {
        _photonPx4_autogen._MTECS.MT_USP_PIT_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_USP_PIT_MAX")) {
        _photonPx4_autogen._MTECS.MT_USP_PIT_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_LND_THR_MIN")) {
        _photonPx4_autogen._MTECS.MT_LND_THR_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_LND_THR_MAX")) {
        _photonPx4_autogen._MTECS.MT_LND_THR_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_LND_PIT_MIN")) {
        _photonPx4_autogen._MTECS.MT_LND_PIT_MIN = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_LND_PIT_MAX")) {
        _photonPx4_autogen._MTECS.MT_LND_PIT_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_THR_I_MAX")) {
        _photonPx4_autogen._MTECS.MT_THR_I_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "MT_PIT_I_MAX")) {
        _photonPx4_autogen._MTECS.MT_PIT_I_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MTECS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RC_MAP_FAILSAFE")) {
        _photonPx4_autogen._Miscellaneous.RC_MAP_FAILSAFE = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SEG_TH2V_P")) {
        _photonPx4_autogen._Miscellaneous.SEG_TH2V_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SEG_TH2V_I")) {
        _photonPx4_autogen._Miscellaneous.SEG_TH2V_I = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SEG_TH2V_I_MAX")) {
        _photonPx4_autogen._Miscellaneous.SEG_TH2V_I_MAX = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "SEG_Q2V")) {
        _photonPx4_autogen._Miscellaneous.SEG_Q2V = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_FLTMODE1")) {
        _photonPx4_autogen._Miscellaneous.COM_FLTMODE1 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_FLTMODE2")) {
        _photonPx4_autogen._Miscellaneous.COM_FLTMODE2 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_FLTMODE3")) {
        _photonPx4_autogen._Miscellaneous.COM_FLTMODE3 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_FLTMODE4")) {
        _photonPx4_autogen._Miscellaneous.COM_FLTMODE4 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_FLTMODE5")) {
        _photonPx4_autogen._Miscellaneous.COM_FLTMODE5 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "COM_FLTMODE6")) {
        _photonPx4_autogen._Miscellaneous.COM_FLTMODE6 = *(int32_t*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "RV_YAW_P")) {
        _photonPx4_autogen._Miscellaneous.RV_YAW_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EXFW_HDNG_P")) {
        _photonPx4_autogen._Miscellaneous.EXFW_HDNG_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EXFW_ROLL_P")) {
        _photonPx4_autogen._Miscellaneous.EXFW_ROLL_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
        return PhotonError_Ok;
    }
    if(strcmp((const char*)name, "EXFW_PITCH_P")) {
        _photonPx4_autogen._Miscellaneous.EXFW_PITCH_P = *(float*)&value;
        if(_photonPx4_autogen.inited)
            PhotonTm_RequestStatusOnce(PHOTON_PX4_AUTOGEN_COMPONENT_ID, PHOTON_PX4_AUTOGEN_STATUS_MISCELLANEOUS_ID);
        return PhotonError_Ok;
    }
    return PhotonError_InvalidValue;
}

