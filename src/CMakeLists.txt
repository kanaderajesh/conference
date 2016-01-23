# commented 
file(GLOB SRC_LIST
    RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    *.cpp
)
include_directories(${CMAKE_SOURCE_DIR}/include .)
add_executable(conference ${SRC_LIST})
target_link_libraries(conference ${Boost_PROGRAM_OPTIONS_LIBRARY}
${Boost_SYSTEM_LIBRARY} ${Boost_REGEX_LIBRARY} ${Boost_FILESYSTEM_LIBRARY})
