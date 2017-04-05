cmake_minimum_required(VERSION 3.6)
project(HW6_Generics)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp
        Dictionary.hpp
        KeyValue.hpp
        Menu.cpp Menu.hpp)
add_executable(GenericDictionary ${SOURCE_FILES})

set(TEST_FILES Testing/testMain.cpp
        Testing/DictionaryTester.cpp Testing/DictionaryTester.hpp
        Testing/KeyValueTester.cpp Testing/KeyValueTester.hpp)
add_executable(Test ${SOURCE_FILES} ${TEST_FILES})