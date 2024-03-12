%{
#include <stdio.h>
#include <string.h>
#include "TeaplAst.h"
#include "y.tab.hpp"
extern int line, col;
int c;
int calc(char *s, int len);
%}

// TODO:
// your lexer

%%
<INITIAL>"let" { col+=3; return LET; }
<INITIAL>"fn" { col+=2; return FN; }
<INITIAL>"struct" { col+=6; return STRUCT; }
<INITIAL>"return" { col+=6; return RET; }
<INITIAL>"if" { col+=2; return IF; }
<INITIAL>"else" { col+=4; return ELSE; }
<INITIAL>"while" { col+=5; return WHILE; }
<INITIAL>"break" { col+=5; return BREAK; }
<INITIAL>"continue" { col+=8; return CONTINUE; }
<INITIAL>"int" { col+=3; return INT; }

<INITIAL>"\t" { col+=4; }
<INITIAL>"\n" { ++line; col=1; }
<INITIAL>" " { ++col; }

<INITIAL>"+" { ++col; return ADD; }
<INITIAL>"-" { ++col; return SUB; }
<INITIAL>"*" { ++col; return MUL; }
<INITIAL>"/" { ++col; return DIV; }

<INITIAL>"<" { ++col; return LT; }
<INITIAL>">" { ++col; return GT; }
<INITIAL>">=" { col+=2; return GE; }
<INITIAL>"<=" { col+=2; return LE; }
<INITIAL>"==" { col+=2; return EQ; }
<INITIAL>"!=" { col+=2; return NE; }

<INITIAL>"&&" { col+=2; return AND; }
<INITIAL>"||" { col+=2; return OR; }
<INITIAL>"!" { ++col; return NOT; }

<INITIAL>"(" { ++col; return LPAREN; }
<INITIAL>")" { ++col; return RPAREN; }
<INITIAL>"=" { ++col; return ASSIGN; }

// <INITIAL>"void" { col+=4; return VOID; }
// <INITIAL>"for" { col+=3; return FOR; }
// <INITIAL>"bool" { col+=4; return BOOL; }
// <INITIAL>"true" { col+=4; return TRUE; }
// <INITIAL>"false" { col+=5; return FALSE; }
// <INITIAL>"main" { col+=4; return MAIN; }
// <INITIAL>"include" { col+=7; return INCLUDE; }
// <INITIAL>"define" { col+=6; return DEFINE; }
// <INITIAL>"elif" { col+=4; return ELIF; }
// <INITIAL>"^" { ++col; return POWER; }
// <INITIAL>"%" { ++col; return MOD; }
// <INITIAL>"&" { ++col; return AND; }
// <INITIAL>"|" { ++col; return OR; }
// <INITIAL>"~" { ++col; return NOT; }
// <INITIAL>. { ++col; return yytext[0]; }

<INITIAL>"[" { ++col; return LBRACKET; }
<INITIAL>"]" { ++col; return RBRACKET; }
<INITIAL>"{" { ++col; return LBRACE; }
<INITIAL>"}" { ++col; return RBRACE; }
<INITIAL>"," { ++col; return COMMA; }
<INITIAL>"." { ++col; return DOT; }
<INITIAL>":" { ++col; return COLON; }
<INITIAL>";" { ++col; return SEMICOLON; }
<INITIAL>"->" { col+=2; return ARROW; }

<INITIAL>"#.*" { col+=yyleng; return PREPROCESSOR; }
<INITIAL>"//.*" { col+=yyleng; return COMMENT; }
<INITIAL>"/\*.*\*/" { col+=yyleng; return COMMENT; }



<INITIAL>[1-9][0-9]* {
    yylval.tokenNum = A_TokenNum(A_Pos(line, col), calc(yytext, yyleng));
    col+=yyleng;
    return NUM;
}
<INITIAL>0 {
    yylval.tokenNum = A_TokenNum(A_Pos(line, col), 0);
    ++col;
    return NUM;
}
<INITIAL>[a-zA-Z_][a-zA-Z0-9_]* {
    yylval.tokenId = A_TokenId(A_Pos(line, col), strdup(yytext));
    col+=yyleng;
    return ID;
}

// <INITIAL><<EOF>> { return 0; }
. { printf("Error: Unrecognized character '%c' at line %d, column %d\n", yytext[0], line, col); ++col; }
%%

// This function takes a string of digits and its length as input, and returns the integer value of the string.
int calc(char *s, int len) {
    int ret = 0;
    for(int i = 0; i < len; i++)
        ret = ret * 10 + (s[i] - '0');
    return ret;
}