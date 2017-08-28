project(photon-aerobot)

cmake_minimum_required(VERSION 2.8.11)

enable_testing()

set(PHOTON_DIR ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/photon)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PHOTON_DIR}/cmake)

include(Photon)

photon_init_project(
    PHOTON_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/photon
    MODULE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/modules
    PROJECT ${CMAKE_CURRENT_SOURCE_DIR}/project.toml
    DEVICES model1 model2
    ENABLE_STUB
)

#photon_link_device_test(model1 lib1 lib2 lib3...)
