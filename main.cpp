#include "lexer.h"
#include "parser.h"
#include <iostream>

int main() {
    std::cout << "hello" << std::endl;

    InitBinopPrecedence();

    fprintf(stderr, "ready> ");
    getNextToken();

    // The module holds all the code.
    InitializeModule();

    // Interpreter loop.
    MainLoop();
    
    // Print all of the generated code.
    TheModule->print(errs(), nullptr);
    
    return 0;
}