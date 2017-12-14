set(WORK_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../..)

link_directories(${WORK_DIR}/GVal/build)

set(SOURCES GValOperations.cpp)

set(HEADER_FILES GValOperations.h)

INCLUDE_DIRECTORIES(. ${WORK_DIR}/GVal)

if(CMAKE_BUILD_TYPE STREQUAL "Release")
    message("Release mode.")
    add_library(GValOperations STATIC ${SOURCES} ${HEADER_FILES})
    add_executable(GValOperationsTest GValOperationsTest.cpp ${HEADER_FILES})
    target_link_libraries(GValOperationsTest GValOperations GVal)
endif(CMAKE_BUILD_TYPE STREQUAL "Release")
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    message("Debug mode.")
    add_library(GValOperationsd STATIC ${SOURCES} ${HEADER_FILES})
    add_executable(GValOperationsTestd GValOperationsTest.cpp ${HEADER_FILES})
    target_link_libraries(GValOperationsTestd GValOperationsd GVald)
endif(CMAKE_BUILD_TYPE STREQUAL "Debug")
