cmake_minimum_required(VERSION 3.10)
project(Karasu_IA)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-O3 -march=native")

find_package(SQLite3 REQUIRED)

add_executable(Assistant 
    src/main.cpp 
    src/core/assistant.cpp 
    src/db/database.cpp 
    src/nlp/nlp.cpp 
    src/scheduler/scheduler.cpp
)

target_include_directories(Assistant PRIVATE ${CMAKE_SOURCE_DIR}/src)

target_link_libraries(Assistant sqlite3)
