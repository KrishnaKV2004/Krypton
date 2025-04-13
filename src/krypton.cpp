/*---------------------------------------------------------------------------------------

                                Krypton Main Entry Point


        Libraries & Headers Included -->

        iostream    - For input and output operations.
        string      - For using the string class.
        vector      - For using the vector container.

        command.hpp - For command classification.
        token.hpp   - For token classification.
        lexer.hpp   - For the Lexer class definition.
        logger.hpp  - For the Logger class definition.

---------------------------------------------------------------------------------------*/

#include <iostream>
#include <string>
#include <vector>

#include "../inc/command.hpp"
#include "../inc/token.hpp"
#include "../inc/lexer.hpp"
#include "../inc/logger.hpp"

using namespace std;

enum CommandType
{
    CMD_CLI,
    CMD_COMPILE,
    CMD_TOKENIZE,
    CMD_OUTPUT,
    CMD_HELP,
    CMD_VERSION,
    CMD_UNKNOWN
};

int main(int argc, char * argv[])
{
    CommandType cmd;

    if (argc < 2)
    {
        cmd = CMD_CLI;
        return 0;
    }

    string command = argv[1];
    string flag = (argc > 2) ? argv[2] : "";
    string parsed_command = parse_Command(argc, argv, command);

    if (parsed_command == "file") cmd = CMD_COMPILE;
    else if (parsed_command == "tokenize") cmd = CMD_TOKENIZE;
    else if (parsed_command == "output") cmd = CMD_OUTPUT;
    else if (parsed_command == "help") cmd = CMD_HELP;
    else if (parsed_command == "version") cmd = CMD_VERSION;
    else cmd = CMD_UNKNOWN;

    return 0;
}