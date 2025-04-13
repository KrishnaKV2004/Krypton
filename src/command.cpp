/*---------------------------------------------------------------------------------------

                                    Command Source File


        Libraries & Headers Included -->

        iostream    - For input and output operations.
        string      - For using the string class.
        
        command.hpp - For command classification.

        Functions -->

        parse_Command - Converts a command string to lowercase for uniformity.

---------------------------------------------------------------------------------------*/

#include <iostream>
#include <string>

#include "../inc/command.hpp"

using namespace std;

string parse_Command(int argc, char * argv[], string command)
{
    if (command == "-h" || command == "--help") return "help";
    if (command == "-v" || command == "--version") return "version";

    if (command.size() >= 3 && command.substr(command.size() - 3) == ".kr")
    {
        if (argc == 2) return "file";

        else if (argc > 2)
        {
            if (argv[2] == string("-t") || argv[2] == string("--tokenize")) return "tokenize";
            if (argv[2] == string("-o") || argv[2] == string("--output"))
            {
                if (argc > 3 && string(argv[3]).size() > 0) return "output";
                else return "invalid_output"; 
            }
        }

        return "unknown";
    }

    return "unknown";
}