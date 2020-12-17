cmake_minimum_required(VERSION 3.5)



set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -pthread")


set(RPC_LIB ${CMAKE_BINARY_DIR}/libs/rpclib/librpc.a)
set(RPC_INC ${SRC_DIRECTORY}/libs/rpclib/include)

find_package(Qt5Core)
include_directories(
    ${RPC_INC}
)
add_executable(rpclibClient
  main.cpp
)
target_link_libraries(rpclibClient Qt5::Core ${RPC_LIB})

