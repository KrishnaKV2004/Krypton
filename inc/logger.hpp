/*---------------------------------------------------------------------------------------

                                    Logger Header File


        Libraries & Headers Included -->

        iostream  - For input and output operations.
        string    - For using the string class.

        Functions -->

        log_Info    - Logs an info message.
        log_Warning - Logs a warning message.
        log_Error   - Logs an error message.

---------------------------------------------------------------------------------------*/

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <string>

using namespace std;

void log_Manual();

void log_Info(const string & message);
void log_Warning(const string & message);
void log_Error(const string & message);

#endif // LOGGER_HPP