cmake_minimum_required(VERSION 3.8)
project(StudentManagement_new_2)

set(CMAKE_CXX_STANDARD 11)
include_directories(${CMAKE_CURRENT_LIST_DIR})
message(${CMAKE_CURRENT_LIST_DIR})

set(chinese_SRC Chinese.h Chinese.cpp )
set(student_SRC Student.h Student.cpp )
set(teacher_SRC Teacher.h Teacher.cpp )
set(subject_SRC Subject.h Subject.cpp )
set(compulsory_SRC Compulsory.h Compulsory.cpp )
set(StudentManagement_SRC ${chinese_SRC} ${student_SRC} ${teacher_SRC} ${subject_SRC} ${compulsory_SRC})

add_executable(StudentManagement_new_2 main.cpp ${StudentManagement_SRC})