add_library(radar_app STATIC
  radar.c
)

target_include_directories(radar_app PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(radar_app PUBLIC
  radar_devices
  radar_platform
)
