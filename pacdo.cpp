///////
//////    pacdo o(≧口≦)o
/////     or more literally: shortened pacman syntax!
////      this can be useful (i swear)
///       license: Unlicense (pasted at the bottom of this file)
//

#include <iostream>
#include <cstdlib> // system(), std::string.c_str

// function prototypes
void help();

int main(int argc, char** argv) {
    if (argc > 3) {
        std::cout << ":: error/too_many_arguments";
        return -1;
    } else if (argc < 2){
        std::cout << ":: error/not_enough_arguments";
        return -1;
    }

    if (argc == 2) { // if there are 2 arguments (argv[0] and argv[1])
                     // it means that the user only set the verbal argument
        std::string verbal = argv[1]; // store verbal/command argument
                                      // because i don't like if statements that read argv directly
        if (verbal == "h" || verbal == "H" || verbal == "help") {
            help();   // show usage screen
            return 0; // 0 to signal no errors
        } else if (verbal == "syu" || verbal == "Syu") {
            int pacmanCode = system("sudo pacman -Syu");
            if (pacmanCode != 1)
                return 0;
            else return -1;
        } else if (verbal == "yolo") {
            int pacmanCode = system("sudo pacman -Syu --noconfirm");
            if (pacmanCode != 1)
                return 0;
            else return -1;
        } else if (verbal == "q" || verbal == "Q" || verbal == "query") {
            int pacmanCode = system("pacman -Q");
            if (pacmanCode != 1)
                return 0;
            else return -1;
        } else if (verbal == "ph") {
            int pacmanCode = system("pacman -h");
            if (pacmanCode != 1)
                return 0;
            else return -1;
        } else if (verbal == "contribute" || verbal == "repo") {
            std::cout << "https://github.com/jstmaxlol/pacdo/"; // todo: replace with libcurl call for default browser and actually open the link itself
        }
    } else if (argc == 3) { // likely 'pacdo S', 'pacdo R', 'pacdo U' or 'pacdo Q'
                            // because of the third argument in argv, which is user's second argument, most likely a package name
                            // and yes we are apparently gambling with the user's choices right now!
        std::string verbal  = argv[1]; // store command argument
        std::string package = argv[2]; // store package name argument
        if (verbal == "s" || verbal  == "S" || verbal == "install" || verbal == "get" || verbal == "sync") {
            std::string pacmanCommand = "sudo pacman -S " + package;
            int pacmanCode = system(pacmanCommand.c_str());
            if (pacmanCode != 1)
                return 0;
            else return -1;
        } else if (verbal == "r" || verbal == "R" || verbal == "remove") {
            std::string pacmanCommand = "sudo pacman -R " + package;
            int pacmanCode = system(pacmanCommand.c_str());
            if (pacmanCode != 1)
                return 0;
            else return -1;
        } else if (verbal == "rq" || verbal == "Rq") {
            std::string pacmanCommand = "sudo pacman -Rq " + package;
            int pacmanCode = system(pacmanCommand.c_str());
            if (pacmanCode != 1)
                return 0;
            else return -1;
        } else if (verbal == "u" || verbal == "U" || verbal == "upgrade") {
            std::string pacmanCommand = "sudo pacman -U " + package;
            int pacmanCode = system(pacmanCommand.c_str());
            if (pacmanCode != 1)
                return 0;
            else return -1;
        } else if (verbal == "q" || verbal == "Q" || verbal == "query") {
            std::string pacmanCommand = "pacman -Q " + package;
            int pacmanCode = system(pacmanCommand.c_str());
            if (pacmanCode != 1)
                return 0;
            else return -1;
        }
    }
}

void help() {
    int isFigletInstalled = system("pacman -Q figlet");
    if (isFigletInstalled != 1) { // if return code is not 1, then it may only possibly be 0 (= figlet is installed)
        system("clear && figlet \"pacdo\"");
        std::cout << "\n";
    } else {
        std::cout << "pacdo\n";
    }
    std::cout
    << "version 2025.05.1518\n\n"

    << "[ help/usage screen ]\n"
    << "pacdo base syntax:\n"
    << "\'pacdo verbal/command package\'\n\n"

    << "[ possible verbals/commands ]\n"
    << "pacdo h/H/help                        = shows usage screen\n"
    << "pacdo s/S/install/get/sync package    = installs a package (if found)\n"
    << "pacdo syu/Syu/yolo                    = runs a full-system-upgrade (same as pacman -Syu)\n"
    << "                                        ('pacdo yolo' also parses --noconfirm)\n"
    << "pacdo r/R/remove package              = removes a package\n"
    << "pacdo rq/Rq package                   = removes a package with all their dependancies\n"
    << "pacdo q/Q/query                       = queries pacman database (same as pacman -Q)\n"
    << "pacdo ph                              = shows pacman's usage screen\n"
    << "pacdo contribute/repo                 = opens pacdo's github repo\n"
    << "pacdo u/U/upgrade package             = upgrade a package (if found)\n\n"
    
    << "developer note: if anyone is interested in this shortened syntax\n"
    << "just let me know and i'll make version for other utils"
    ;
}

/*
This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

For more information, please refer to <https://unlicense.org/>
*/
