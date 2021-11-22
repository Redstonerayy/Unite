#include <string>
#include <iostream>
#include <vector>
#include "lexer.h"
#include "parser.h"

int main(){
    std::string input;
    while(true){
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