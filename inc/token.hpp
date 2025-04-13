/*---------------------------------------------------------------------------------------

                                    Token Header File


        Libraries & Headers Included -->

        iostream  - For input and output operations
        string    - For using the string class.

        Class -->

        TokenType - Enum class representing different types of tokens.
        Token     - Struct representing a token with its type and value.

        Functions -->

        token_Type_To_String - Converts a TokenType to its string representation.

---------------------------------------------------------------------------------------*/

#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <iostream>
#include <string>

using namespace std;

enum class TokenType
{
    Keyword,
    Identifier,
    Number,
    String,
    Operator,
    Symbol,
    Comment,
    Unknown
};

struct Token
{
    TokenType type;
    string value;
};

string token_Type_To_String(TokenType type);

#endif // TOKEN_HPP