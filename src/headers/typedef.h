#ifndef __TYPEDEF_H_
#define __TYPEDEF_H_

//DIGITs
const std::string DIGITS = "0123456789";
const std::string WHITESPACE = " \t\n\r";

//TOKENS
//LITERALS
const std::string TT_INT = "INT";
const std::string TT_FLOAT = "FLOAT";
//OPERATORS
//ARITHMETIC
const std::string TT_PLUS = "PLUS";
const std::string TT_MINUS = "MINUS";
const std::string TT_MUL = "MUL";
const std::string TT_DIV = "DIV";
const std::string TT_LPAREN = "LPAREN";
const std::string TT_RPAREN = "RPAREN";
//RELATIONAL
const std::string TT_EQUAL = "EQUAL";
const std::string TT_NOTEQUAL = "NOTEQUAL";
const std::string TT_BIGGERAS = "BIGGERAS";
const std::string TT_SMALLERAS = "SMALLERAS";
const std::string TT_BIGGEREQUAL = "BIGGEREQUAL";
const std::string TT_SMALLEREQUAL = "SMALLEREQUAL";
//---
const std::string TT_DECLARATION = "DECLARATION";
//IDENTIFIERS

//SEPARATORS
const std::string TT_COMMA = "COMMA";
const std::string TT_SEMICOLON = "SEMICOLON";

//LOGICAL
const std::string TT_AND = "AND";
const std::string TT_OR = "OR";
const std::string TT_NOT = "NOT";
const std::string TT_XOR = "XOR";
//KEYWORDS
const std::string TT_IF = "IF";
const std::string TT_ELSE = "ELSE";
const std::string TT_FOR = "FOR";
const std::string TT_WHILE = "WHILE";
const std::string TT_BREAK = "BREAK";
const std::string TT_CONTINUE = "CONTINUE";
const std::string TT_CLASS = "CLASS";
const std::string TT_FUNCTION = "FUNCTION";
const std::string TT_RETURN = "RETURN";
const std::string TT_TRY = "TRY";
const std::string TT_CATCH = "CATCH";
const std::string TT_NONE = "NONE";

const std::string TT_INVALID_STRING = "INVALID_STRING_LITERAL";
const std::string TT_INVALID_NUMBER = "INVALID_NUMBER_LITERAL";

#endif