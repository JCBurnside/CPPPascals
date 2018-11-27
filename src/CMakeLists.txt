#add_subdirectory("cpp")
include_directories("h")
add_executable(CppPascals
    cpp/Main.cpp
    cpp/Pascals.cpp)
install(TARGETS CppPascals DESTINATION ${ROOT_DIR}/bin)