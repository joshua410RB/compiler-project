#ifndef COMPILER_AST_INCLUDES_HPP
#define COMPILER_AST_INCLUDES_HPP

#include <iostream>
#include <string>

#include "ast/ast_program.hpp"
#include "ast/ast_branches.hpp"
#include "ast/ast_loop.hpp"
#include "ast/ast_conditions.hpp"
#include "ast/ast_primitives.hpp"
#include "ast/ast_operators.hpp"
#include "ast/ast_functions.hpp"
#include "ast/ast_declarations.hpp"
#include "ast/ast_statements.hpp"
#include "ast/variable_table.hpp"

struct varType {
    int byteSize; //number of bytes for each element
    long elementCount; //number of elements, 1 for a scalar variable
    int isPtr; // pointer
    int isUsign; //unsigned
};

union TokenValue{
    double number;
    std::string *string;
};

// extern TokenValue yylval;
extern const Program *parseAST(char* file);


#endif
/*
size of types
int: 4 bytes
char: 1 byte

*/


