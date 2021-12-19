#include <string>
#include <iostream>
#include <vector>
#include "typedef.h"
#include "lexer.h"
#include "nodes.h"
#include "parser.h"

void shell(){
    std::string input;
    while(true){//use getline state -> STO
        std::getline(std::cin, input);
        Lexer mylexer;
        mylexer.text = input;
        int x = 0;
        std::vector<std::string> output = mylexer.make_tokens();
        for (int i = 0; i < output.size(); i += 2){
            std::cout << output.at(i) << ":" << output.at(i + 1) << std::endl;
        }
        std::cout << "\n";
    }
};

int main(){
    Lexer mylexer;
    mylexer.text = "2 + 1";
    int x = 0;
    std::vector<std::string> output = mylexer.make_tokens();
};