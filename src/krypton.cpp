/*---------------------------------------------------------------------------------------

                                Krypton Main Entry Point


        Libraries & Headers Included -->

        iostream   - For input and output operations.
        string     - For using the string class.
        vector     - For using the vector container.

        token.hpp  - For token classification.
        lexer.hpp  - For the Lexer class definition.
        logger.hpp - For the Logger class definition.

---------------------------------------------------------------------------------------*/

#include <iostream>
#include <string>
#include <vector>

#include "../inc/token.hpp"
#include "../inc/lexer.hpp"
#include "../inc/logger.hpp"

using namespace std;

int main(int argc, char * argv[])
{
    printf("\nLoading Krypton .....\n");

    if (argc < 2)
    {
        printf("\n");
        printf("UI Mode Will Be Available Soon !");
        printf("\n");
        
        return 0;
    }

    return 0;
}