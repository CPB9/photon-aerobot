project(photon-aerobot)

cmake_minimum_required(VERSION 2.8.11)

enable_testing()

set(PHOTON_DIR ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/photon)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PHOTON_DIR}/cmake)
include(Photon)

macro(enable_sanitizer)
    add_definitions(
        -fsanitize=address
        -fsanitize=undefined
        -ggdb
    )
    SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} -fsanitize=address -fsanitize=undefined")
endmacro()

if(ASAN)
    enable_sanitizer()
endif()

set(IMPL_DIR ${CMAKE_CURRENT_SOURCE_DIR}/modules)
file(GLOB_RECURSE AEROBOT_SOURCES "${IMPL_DIR}/*.c" "${IMPL_DIR}/*.h" "${IMPL_DIR}/*.toml" "${IMPL_DIR}/*.decode")
file(GLOB_RECURSE PHOTON_SOURCES "${PHOTON_DIR}/modules/*.c" "${IMPL_DIR}/modules/*.h" "${IMPL_DIR}/modules/*.toml" "${IMPL_DIR}/modules/*.decode")

photon_init(${PHOTON_DIR})
photon_add_device(cvm)
photon_add_device(esc)
photon_generate_sources(${CMAKE_CURRENT_SOURCE_DIR}/project.toml ${AEROBOT_SOURCES} ${PHOTON_SOURCES})

