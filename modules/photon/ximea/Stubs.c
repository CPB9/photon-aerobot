#include "photongen/onboard/ximea/Ximea.Component.h"

#ifdef PHOTON_STUB

void PhotonXimea_Init(){}
void PhotonXimea_Tick(){}

/*cmd handlers*/
PhotonError PhotonXimea_ExecCmd_UpdateInfo(PhotonXimeaCameraItem cam){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Open(PhotonXimeaCameraItem cam){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Close(PhotonXimeaCameraItem cam){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Start(PhotonXimeaCameraItem cam, uint64_t number, uint64_t timeout){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Stop(PhotonXimeaCameraItem cam){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_exposure(PhotonXimeaCameraItem cam, int64_t val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_exposure_burst_count(PhotonXimeaCameraItem cam, int64_t val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_gain(PhotonXimeaCameraItem cam, float val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_gain_selector(PhotonXimeaCameraItem cam, PhotonXimeaGAIN_SELECTOR_TYPE val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_downsampling(PhotonXimeaCameraItem cam, PhotonXimeaDOWNSAMPLING_VALUE val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_downsampling_type(PhotonXimeaCameraItem cam, PhotonXimeaDOWNSAMPLING_TYPE val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_test_pattern_generator_selector(PhotonXimeaCameraItem cam, PhotonXimeaTEST_PATTERN_GENERATOR val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_test_pattern(PhotonXimeaCameraItem cam, PhotonXimeaTEST_PATTERN val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_imgdataformat(PhotonXimeaCameraItem cam, PhotonXimeaIMG_FORMAT val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_shutter_type(PhotonXimeaCameraItem cam, PhotonXimeaSHUTTER_TYPE val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_sensor_taps(PhotonXimeaCameraItem cam, PhotonXimeaSENSOR_TAP_CNT val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_aeag(PhotonXimeaCameraItem cam, bool val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_aeag_roi_offset_x(PhotonXimeaCameraItem cam, int64_t val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_aeag_roi_offset_y(PhotonXimeaCameraItem cam, int64_t val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_aeag_roi_width(PhotonXimeaCameraItem cam, int64_t val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_aeag_roi_height(PhotonXimeaCameraItem cam, int64_t val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_bpc_list_selector(PhotonXimeaCameraItem cam, PhotonXimeaSENS_DEFFECTS_CORR_LIST_SELECTOR val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_sens_defects_corr_list_content(PhotonXimeaCameraItem cam, const PhotonDynArrayOfCharMaxSize512* val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_bpc(PhotonXimeaCameraItem cam, bool val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_auto_wb(PhotonXimeaCameraItem cam, bool val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_manual_wb(PhotonXimeaCameraItem cam, int64_t val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_wb_kr(PhotonXimeaCameraItem cam, float val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_wb_kg(PhotonXimeaCameraItem cam, float val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_wb_kb(PhotonXimeaCameraItem cam, float val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_width(PhotonXimeaCameraItem cam, int64_t val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_height(PhotonXimeaCameraItem cam, int64_t val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_offsetX(PhotonXimeaCameraItem cam, int64_t val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_offsetY(PhotonXimeaCameraItem cam, int64_t val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_region_selector(PhotonXimeaCameraItem cam, int64_t val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_region_mode(PhotonXimeaCameraItem cam, int64_t val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_horizontal_flip(PhotonXimeaCameraItem cam, bool val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_vertical_flip(PhotonXimeaCameraItem cam, bool val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_ffc(PhotonXimeaCameraItem cam, bool val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_ffc_flat_field_file_name(PhotonXimeaCameraItem cam, const PhotonDynArrayOfCharMaxSize512* val){ return PhotonError_Ok; }
PhotonError PhotonXimea_ExecCmd_Set_ffc_dark_field_file_name(PhotonXimeaCameraItem cam, const PhotonDynArrayOfCharMaxSize512* val){ return PhotonError_Ok; }
#endif
