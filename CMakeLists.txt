cmake_minimum_required(VERSION 2.8)

project(vagrind-test)

set(valgrind_test_source_files
    tutorial01.c
    tutorial02.c
    tutorial03.c
    tutorial04.c
    tutorial05.cc
    tutorial06.c
    )

foreach(tutorial ${valgrind_test_source_files})
    #string(REPLACE ".c" "" exec ${tutorial})
    string(REGEX REPLACE "\\.[a-zA-Z]+" "" exec ${tutorial})
    add_executable(${exec} ${tutorial})
endforeach()
