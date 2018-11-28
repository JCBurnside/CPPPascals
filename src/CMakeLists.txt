#add_subdirectory("cpp")
include_directories("h")
add_executable(CppPascals
    h/Pascals.h
    cpp/Pascals.cpp
    cpp/Main.cpp
    )
install(TARGETS CppPascals DESTINATION ${ROOT_DIR}/bin)