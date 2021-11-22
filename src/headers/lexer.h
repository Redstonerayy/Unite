#ifndef __LEXER_H_INCLUDED_
#define __LEXER_H_INCLUDED_

class Lexer { 
    public:
        std::string text;
        int position = -1;
        std::string current_char;
        void advance();
        void make_digit(std::string *type, std::string *value);
        std::vector<std::string> make_tokens();
};

#endif