%{
#include <stdio.h>
%}

%%
^[a-zA-Z]+$   { printf("No character other than alphabets\n"); }
.*            { printf("Character other than alphabets present\n"); }
%%

int yywrap() {
    return 1;
}

int main() {
    yylex();
    return 0;
}
