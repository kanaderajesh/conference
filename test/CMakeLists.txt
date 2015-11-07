file(GLOB SRC_LIST
    RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    *.cpp
)
set ( target_name "FileLoad" )
set ( conference_bin "${EXECUTABLE_OUTPUT_PATH}/conference")
message (status ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY} )
set ( test_arg "${CMAKE_CURRENT_SOURCE_DIR}/testdata.txt" )
include_directories(${CMAKE_SOURCE_DIR}/include .)
add_executable(${target_name} ${SRC_LIST})
target_link_libraries(${target_name} ${Boost_PROGRAM_OPTIONS_LIBRARY}
${Boost_SYSTEM_LIBRARY} ${Boost_REGEX_LIBRARY} ${Boost_FILESYSTEM_LIBRARY} ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})

add_test(NAME ${target_name}  COMMAND $<TARGET_FILE:${target_name}>
${conference_bin} ${test_arg})
