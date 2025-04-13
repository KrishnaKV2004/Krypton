/*---------------------------------------------------------------------------------------

                                    Logger Source File


        Libraries & Headers Included -->

        iostream   - For input and output operations.
        string     - For using the string class.

        logger.hpp - For the Logger class definition.

        Functions -->

        log_Info    - Logs an info message.
        log_Warning - Logs a warning message.
        log_Error   - Logs an error message.

---------------------------------------------------------------------------------------*/

#include <iostream>
#include <string>

#include "../inc/logger.hpp"

using namespace std;

void log_Manual()
{
    cout << "Krypton Manual -->\n" << endl;
    cout << "Krypton -> Starts CLI Mode For The Krypton Compiler !" << endl;
    cout << "Krypton <Filename.kr> --> Compiles The Krypton File And Generates Executable !" << endl;
    cout << "Krypton <Filename.kr> -o <Output-File> --> Compiles The Krypton File With Custom Executable Name !" << endl;
    cout << "Krypton <Filename.kr> -t --> Prints The Tokens Of The Krypton File !" << endl;
    cout << "Krypton <Filename.kr> -h --> Prints The Help Menu For The Krypton Compiler !" << endl;
    cout << "Krypton <Filename.kr> -v --> Prints The Version Of The Krypton Compiler !" << endl;
}

void log_Info(const string & message) { cout << "[ INFO ] " << message << endl; }
void log_Warning(const string & message) { cout << "[ WARNING ] " << message << endl;}
void log_Error(const string & message) { cout << "[ ERROR ] " << message << endl; }