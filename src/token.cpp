/*---------------------------------------------------------------------------------------

                                    Token Source File


        Libraries & Headers Included -->

        iostream  - For input and output operations
        string    - For using the string class.
        token.hpp - For token classification

        Functions -->

        token_Type_To_String - Converts a TokenType to its string representation.

---------------------------------------------------------------------------------------*/

#include <iostream>
#include <string>

#include "../inc/token.hpp"

using namespace std;

string token_Type_To_String(TokenType type)
{
        switch(type)
        {
                case TokenType::Keyword : return "Keyword";
                case TokenType::Identifier : return "Identifier";
                case TokenType::Number : return "Number";
                case TokenType::String : return "String";
                case TokenType::Operator : return "Operator";
                case TokenType::Symbol : return "Symbol";
                case TokenType::Comment : return "Comment";
                
                default : return "Unknown";
        }
}