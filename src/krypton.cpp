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
    string version = "Krypton v1.0.0";

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

    switch (cmd)
    {
        case CMD_CLI:
            log_Info("Krypton CLI will be available soon !");
            break;

        case CMD_COMPILE:
            log_Info("Compiling File : " + flag);
            break;

        case CMD_TOKENIZE:
            log_Info("Tokenizing File : " + flag);
            break;

        case CMD_OUTPUT:
            log_Info("Outputting File : " + flag);
            break;

        case CMD_HELP:
            log_Info("Krypton Help : ");
            log_Manual();
            break;

        case CMD_VERSION:
            log_Info("Krypton Version : " + version);
            break;
    
        default:
            log_Error("Unknown Command : " + command);
            log_Manual();
            break;
    }

    return 0;
}