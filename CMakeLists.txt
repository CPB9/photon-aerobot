project(photon-aerobot)

cmake_minimum_required(VERSION 2.8.11)

enable_testing()

set(PHOTON_DIR ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/photon)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PHOTON_DIR}/cmake)
include(Photon)

photon_init(${PHOTON_DIR})
photon_add_mod_dir(${CMAKE_CURRENT_SOURCE_DIR}/modules)
photon_add_mod_dir(${PHOTON_DIR}/modules)
photon_add_device(cvm)
photon_add_device(esc)
photon_generate_sources(${CMAKE_CURRENT_SOURCE_DIR}/project.toml)

