//
// Created by Freeman on 21/03/2016.
//
#include <stdio.h>
#include "y.tab.h"
#include "grammar.tab.h"
#include "lex.yy.h"

extern FILE *yyin;
int yyparse(void);
ScriptBody *root;

int main(int argc, char* argv[])
{
    yyin = fopen(argv[1], "r");
    yyparse();
}
