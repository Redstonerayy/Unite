#include <string>
#include <vector>
#include "nodes.h"
#include "parser.h"
#include "typedef.h"

void Parser::make_nodetree(){
    for(int i = 0; i < this->tokens.size(); i += 2){
        std::string current_token = this->tokens[i];
        if(current_token == TT_INT){
            
        }
    }
}