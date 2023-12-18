#include <cstdlib>
#include "sham.h"
#include <iostream>
#include <string>


int compile(const std::string& params, const std::string& name) {
    // create the compile command and the cpp file name
    std::string cppname = name + ".cpp";
    std::string command = "g++ " + cppname + " " + params;
    // Execute the compile command
    int result = std::system(command.c_str());

    // Check the result
    if (result == 0) {
        // Compilation successful
        return 0;
    } else {
        // Compilation failed
      std::cerr << "ShAm: error: compilation of cpp code failed";
        return 1;
    }
}
