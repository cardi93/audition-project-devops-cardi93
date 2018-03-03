if(WIN32)
    cmake_minimum_required(VERSION 3.4)
else()
    cmake_minimum_required(VERSION 3.1)
endif()

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(LibTwoUtils
        LANGUAGES CXX
        VERSION 0.0.0.0)

add_executable(LibTwoUtils
		    Main.cpp
			TwoUtils.cpp)

enable_testing()

add_executable(mytest test.cpp TwoUtils.cpp)
add_executable(mytest2 test2.cpp TwoUtils.cpp)
add_test(Mytest mytest)
add_test(Mytest2 mytest2)
