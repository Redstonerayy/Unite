#include <iostream>
#include <vector>
#include <string>
#include "lexer.h"

//DIGITs
const std::string DIGITS = "0123456789";
const std::string WHITESPACE = " \t\n\r";

//TOKENS
const std::string TT_INT = "INT";
const std::string TT_FLOAT = "FLOAT";
const std::string TT_PLUS = "PLUS";
const std::string TT_MINUS = "MINUS";
const std::string TT_MUL = "MUL";
const std::string TT_DIV = "DIV";
const std::string TT_LPAREN = "LPAREN";
const std::string TT_RPAREN = "RPAREN";

const std::string TT_INVALID_NUMBER = "INVALID_NUMBER_LITERAL";
    
void Lexer::advance(){
    this->position += 1;
    this->current_char = this->text[this->position];
}

void Lexer::make_digit(std::string *type, std::string *value){
    //if its number or floating point
    std::string digit = "";
    int is_float = 0;
    while(DIGITS.find(this->current_char) != std::string::npos || this->current_char == "."){
        digit += this->current_char;
        if(this->current_char == "."){
            is_float += 1;
        }
        this->advance();
    }
    *value = digit;
    if(is_float == 0){
        *type = TT_INT;
    } else if((0 < is_float) && (is_float < 2)){
        *type = TT_FLOAT;
    } else {
        *type = TT_INVALID_NUMBER;
    }
}    

std::vector<std::string> Lexer::make_tokens(){
    std::vector<std::string> tokens;
    this->advance();

    while (!(this->text.length() <= this->position))
    {
        if(WHITESPACE.find(this->current_char) != std::string::npos){
            //dont add a token
            this->advance();
        } else if(DIGITS.find(this->current_char) != std::string::npos){
            std::string type;
            std::string value;
            this->make_digit(&type, &value);
            tokens.push_back(type);
            tokens.push_back(value);
        } else if(this->current_char == "+"){
            tokens.push_back(TT_PLUS);
            tokens.push_back(this->current_char);
            this->advance();
        } else if(this->current_char == "-"){
            tokens.push_back(TT_MINUS);
            tokens.push_back(this->current_char);
            this->advance();
        } else if(this->current_char == "*"){
            tokens.push_back(TT_MUL);
            tokens.push_back(this->current_char);
            this->advance();
        } else if(this->current_char == "/"){
            tokens.push_back(TT_DIV);
            tokens.push_back(this->current_char);
            this->advance();
        } else if(this->current_char == "("){
            tokens.push_back(TT_LPAREN);
            tokens.push_back(this->current_char);
            this->advance();
        } else if(this->current_char == ")"){
            tokens.push_back(TT_RPAREN);
            tokens.push_back(this->current_char);
            this->advance();
        } else {
            //nothing
            this->advance();
        }
    }             
    return tokens;  
}
