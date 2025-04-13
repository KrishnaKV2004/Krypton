/*---------------------------------------------------------------------------------------

                                    Command Header File


        Libraries & Headers Included -->

        iostream    - For input and output operations.
        string      - For using the string class.
        
        command.hpp - For command classification.

        Functions -->

        parse_Command - Converts a command string to lowercase for uniformity.

---------------------------------------------------------------------------------------*/

#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <iostream>
#include <string>

using namespace std;

string parse_Command(int argc, char * argv[], string command);

#endif // COMMAND_HPP