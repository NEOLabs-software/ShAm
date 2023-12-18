// main.cpp
#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>
#include "sham.h"


int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "ShAm: no shell script specified" << std::endl;
        return 1;
    }

    std::string arg1 = argv[1];
    int argn = argc;
    std::string arg2, arg3, arg4;

    if (argn == 3) {
        arg2 = argv[2];
    } else if (argn == 4) {
        arg2 = argv[2];
        arg3 = argv[3];
    } else if (argn == 5) {
        arg2 = argv[2];
        arg3 = argv[3];
        arg4 = argv[4];
    }


  if (arg1 == "--help" || arg1 == "-h" || arg1 == "-H") {
    std::cout << R"(ShAm - shell script app maker under the neolabs software umbrella
    Usage: sham [options] file...
    Options:
        --help/-h/-H                           show this dialogue
        -v/--version/-V                        print out the current version of sham
        -B <directory>                         add <directory> to the compiler's search paths
        -E                                     preprocess only; do not compile, assemble or link
        -S                                     compile only; do not assemble or link
        -c                                     compile and assemble, but do not link
        -o <file>                              output executable into <file>)";
    return 0;
  } else if(arg1 == "-v" || arg1 == "-V" || arg1 == "--version") {
    std::cout << R"(sham (ShAm) 3.0.0
    Copyright (C) 2023 NEOLabs software neolabs-software@proton.me
    This is free software; see the source for copying conditions.  There is NO
    warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
)";
    return 0;
  }
    if (!std::filesystem::exists(arg1)) {
        std::cerr << "ShAm: error: shell script does not exist\nterminating" << std::endl;
        return 128;
    }
    std::ifstream file(arg1);

    if (!file.is_open()) {
        std::cerr << "ShAm: error: could not open shell script" << std::endl;
        return 1;
    }
    
    std::string firstLine;
    std::getline(file, firstLine);
    if (firstLine != "#!/bin/bash") {
        std::cerr << "ShAm: error: this file is not a shell script\nhint: add the line \"#!/bin/bash\" to the begining of the file" << std::endl;
        return 1;
    } 
    std::string parameters;
    if(argn == 3) {
        parameters = arg2;
    } else if(argn == 4) {
      parameters = arg2 + " " + arg3;
    } else if(argn == 4) {
      parameters = arg2 + " " + arg3 + " " + arg4;
    } else {
      std::cout << "ShAm: debug: no parameters" << std::endl;
    }
    std::string name = arg1;
    if (name.size() >= 3 && name.substr(name.size() - 3) == ".sh") {
        name = name.substr(0, name.size() - 3);
    }
   int constructrt = construct(arg1, name); 
   if(constructrt != 0) {
     return 1;
   }
   
   int compilert = compile(parameters, name);
   if(compilert != 0) {
     return 1;
   }
}
