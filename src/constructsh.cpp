#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include "sham.h"

int construct(const std::string& shfile, const std::string& name) {
    

    //open the sh file
    std::ifstream scriptFile(shfile);
    if (!scriptFile.is_open()) {
        std::cerr << "ShAm: error:  Could not open the script file." << std::endl;
        return 1;
    }

    
    // reads the contents and asigns it into a variable
    std::ostringstream scriptContentStream;
    scriptContentStream << scriptFile.rdbuf();
    std::string scriptContent = scriptContentStream.str();


    // uses layout to generate a custom cpp file
    std::string cppCodePrefix = R"(
#include <cstdlib>
#include <iostream>

int main() {
    std::string script = R"(
)";

    std::string cppCodeSuffix1 = ")\";";
    std::string cppCodeSuffix2 = R"(

    std::system(script.c_str());
    return 0;
}
)";


    // outputs cpp code and outputs in into a file
    std::string cppname = name + ".cpp";
    std::string cppCode = cppCodePrefix + scriptContent + cppCodeSuffix1 + cppCodeSuffix2;

    std::ofstream outputFile(cppname);


    // checks if file is still open(if so, it closes it)
    if (outputFile.is_open()) {
        outputFile << cppCode;

        outputFile.close();

        std::cout << "ShAm: debug: c++ code has been written to " << name << std::endl;
    } else {
        std::cerr << "ShAm: error: could not write c++ file" << std::endl;
        return 1;
    }

    return 0;
    
}
