%{
#include <stdio.h>
#include "TeaplAst.h"

extern A_pos pos;
extern A_program root;

extern int yylex(void);
extern "C"{
extern void yyerror(char *s); 
extern int  yywrap();
}

%}

// TODO:
// your parser

%union {
  A_pos pos;
  A_program program;
  A_programElementList programElementList;
  A_programElement programElement;
  A_arithExpr arithExpr;
  A_exprUnit exprUnit;
  A_structDef structDef;
  A_varDeclStmt varDeclStmt;
  A_fnDeclStmt fnDeclStmt;
  A_fnDef fnDef;
}

%token <pos> ADD
%token <pos> SUB
%token <pos> MUL
%token <pos> DIV
%token <pos> SEMICOLON // ;


%token <pos> STRUCT
%token <pos> LET
%token <pos> INT
%token <pos> IF
%token <pos> RET
%token <pos> ELSE
%token <pos> WHILE
%token <pos> FOR
%token <pos> BREAK
%token <pos> CONTINUE
%token <pos> FN


%token <pos> LT
%token <pos> GT
%token <pos> GE
%token <pos> LE
%token <pos> EQ
%token <pos> NE

%token <pos> AND
%token <pos> OR
%token <pos> NOT

%token <pos> LPAREN
%token <pos> RPAREN
%token <pos> ASSIGN

%token <pos> LBRACKET
%token <pos> RBRACKET
%token <pos> LBRACE
%token <pos> RBRACE
%token <pos> COMMA
%token <pos> COLON
%token <pos> ARROW
%token <pos> DOT

%token <pos> NUM
%token <pos> ID

%type <program> Program
%type <arithExpr> ArithExpr
%type <programElementList> ProgramElementList
%type <programElement> ProgramElement
%type <exprUnit> ExprUnit
%type <structDef> StructDef
%type <varDeclStmt> VarDeclStmt
%type <fnDeclStmt> FnDeclStmt
%type <fnDef> FnDef

%type <boolExpr> BoolExpr
%type <fnDecl> FnDecl
%type <type> Type

%type <paramDecl> ParamDecl
%type <boolBiOp> BoolBiOp
%type <boolBiOpExpr> BoolBiOpExpr
%type <boolUnit> BoolUnit
%type <assignStmt> AssignStmt
%type <leftVal> LeftVal
%type <rightVal> RightVal
%type <fnCall> FnCall
%type <varDecl> VarDecl
%type <varDef> VarDef

%type <codeBlockStmt> CodeBlockStmt
%type <whileStmt> WhileStmt
%type <returnStmt> ReturnStmt
%type <continueStmt> ContinueStmt
%type <breakStmt> BreakStmt
%type <ifStmt> IfStmt

%type <callStmt> CallStmt
%type <arrayExpr> ArrayExpr
%type <memberExpr> MemberExpr



%start Program

%%                   /* beginning of rules section */

Program: ProgramElementList 
{  
  root = A_Program($1);
  $$ = A_Program($1);
}
;

ProgramElementList: ProgramElement ProgramElementList
{
  $$ = A_ProgramElementList($1, $2);
}
|
{
  $$ = nullptr;
}
;

ProgramElement: VarDeclStmt
{
  $$ = A_ProgramVarDeclStmt($1->pos, $1);
}
| StructDef
{
  $$ = A_ProgramStructDef($1->pos, $1);
}
| FnDeclStmt
{
  $$ = A_ProgramFnDeclStmt($1->pos, $1);
}
| FnDef
{
  $$ = A_ProgramFnDef($1->pos, $1);
}
| SEMICOLON
{
  $$ = A_ProgramNullStmt($1);
}
;


ArithExpr: ArithExpr ADD ArithExpr
{
  $$ = A_ArithBiOp_Expr($1->pos, A_ArithBiOpExpr($1->pos, A_add, $1, $3));
}
| ArithExpr SUB ArithExpr
{
  $$ = A_ArithBiOp_Expr($1->pos, A_ArithBiOpExpr($1->pos, A_sub, $1, $3));
}
| ArithExpr MUL ArithExpr
{
  $$ = A_ArithBiOp_Expr($1->pos, A_ArithBiOpExpr($1->pos, A_mul, $1, $3));
}
| ArithExpr DIV ArithExpr
{
  $$ = A_ArithBiOp_Expr($1->pos, A_ArithBiOpExpr($1->pos, A_div, $1, $3));
}
| ExprUnit
{
  $$ = A_ExprUnit($1->pos, $1);
}
;


ExprUnit: NUM
{
  $$ = A_NumExprUnit($1->pos, $1);
}
| ID
{
  $$ = A_IdExprUnit($1->pos, $1);
}
| LPAREN A_ArithExprUnit RPAREN
{
  $$ = $2;
}
| FnCall
{
  $$ = A_CallExprUnit($1->pos, $1);
} arrayExpr
{
  $$ = A_ArrayExprUnit($1->pos, $1, $2);
} memberExpr
{
  $$ = A_MemberExprUnit($1->pos, $1, $2);
} SUB ExprUnit
{
  $$ = A_ArithUExprUnit($1->pos, $2);
}

BoolExpr: BoolExpr AND BoolExpr
{
  $$ = A_BoolBiOp_Expr($1->pos, A_BoolBiOpExpr($1->pos, A_and, $1, $3));
}
| BoolExpr OR BoolExpr
{
  $$ = A_BoolBiOp_Expr($1->pos, A_BoolBiOpExpr($1->pos, A_or, $1, $3));
} BoolUnit
{
  $$ = A_BoolExpr($1->pos, $1);
}
;

BoolUnit: ExprUnit LT ExprUnit
{
  $$ = A_ComExprUnit($1->pos, A_ComExpr($1->pos, A_lt, $1, $3));
}
| ExprUnit GT ExprUnit
{
  $$ = A_ComExprUnit($1->pos, A_ComExpr($1->pos, A_gt, $1, $3));
}
| ExprUnit GE ExprUnit
{
  $$ = A_ComExprUnit($1->pos, A_ComExpr($1->pos, A_ge, $1, $3));
}
| ExprUnit LE ExprUnit
{
  $$ = A_ComExprUnit($1->pos, A_ComExpr($1->pos, A_le, $1, $3));
}
| ExprUnit EQ ExprUnit
{
  $$ = A_ComExprUnit($1->pos, A_ComExpr($1->pos, A_eq, $1, $3));
}
| ExprUnit NE ExprUnit
{
  $$ = A_ComExprUnit($1->pos, A_ComExpr($1->pos, A_ne, $1, $3));
}
| LPAREN BoolExpr RPAREN
{
  $$ = $2;
}
| NOT BoolUnit
{
  $$ = A_BoolUOpExprUnit($1->pos, A_BoolUOpExpr($1->pos, A_not, $2));
}
;

AssignStmt: LeftVal ASSIGN RightVal
{
  $$ = A_AssignStmt($1->pos, $1, $3);
}
;

LeftVal: ID
{
  $$ = A_IdExprLVal($1->pos, $1);
}
| LeftVal LBRACKET ID RBRACKET
{
  $$ = A_ArrExprLVal($1->pos, A_ArrayExpr($1->pos, $1, $3));
} 
| LeftVal LBRACKET NUM RBRACKET
{
  $$ = A_ArrExprLVal($1->pos, A_ArrayExpr($1->pos, $1, $3));
}
| LeftVal DOT ID
{
  $$ = A_MemberExprLVal($1->pos, A_MemberExpr($1->pos, $1, $3));
}
;

RightVal: ArithExpr
{
  $$ = A_ArithExprRVal($1->pos, $1);
}
| BoolExpr
{
  $$ = A_BoolExprRVal($1->pos, $1);
}
;

FnCall: ID LPAREN RightVal RPAREN
{
  $$ = A_FnCall($1->pos, $1, $3);
}
;

VarDeclStmt: LET VarDecl SEMICOLON
{
  $$ = A_VarDeclStmt($1->pos, $2);
}
| LET VarDef SEMICOLON
{
  $$ = A_VarDefStmt($1->pos, $2);
}
;

VarDecl: ID COLON Type
{
  $$ = A_VarDecl_Scalar($1->pos, A_VarDeclScalar($1->pos, $1, $3));
}
| ID LBRACKET NUM RBRACKET COLON Type
{
  $$ = A_VarDecl_Array($1->pos, A_VarDeclArray($1->pos, $1, $3, $6));
}
| ID
{
  $$ = A_VarDecl_Scalar($1->pos, A_VarDeclScalar($1->pos, $1, nullptr));
}
| ID LBRACKET NUM RBRACKET
{
  $$ = A_VarDecl_Array($1->pos, A_VarDeclArray($1->pos, $1, $3, nullptr));
}
;

// unknown

VarDef: ID COLON Type ASSIGN RightVal
{
  $$ = A_VarDef_Scalar($1->pos, A_VarDefScalar($1->pos, $1, $3, $5));
}
| ID ASSIGN RightVal
{
  $$ = A_VarDef_Scalar($1->pos, A_VarDefScalar($1->pos, $1, nullptr, $3));
}
| ID LBRACKET NUM RBRACKET COLON Type ASSIGN LBRACE RightVal RBRACE
{
  $$ = A_VarDef_Array($1->pos, A_VarDefArray($1->pos, $1, $3, $6));
}
| ID LBRACKET NUM RBRACKET ASSIGN LBRACE RightVal RBRACE
{
  $$ = A_VarDef_Array($1->pos, A_VarDefArray($1->pos, $1, $3, $7));
}
;

Type: INT
{
  $$ = A_NativeType($1->pos, A_intTypeKind);
}
| ID
{
  $$ = A_StructType($1->pos, $1);
}
;

// TODO
StructDef: STRUCT ID LBRACE VarDeclList RBRACE
{
  $$ = A_StructDef($1->pos, $2, $4);
}
;

VarDeclList: VarDecl COMMA VarDeclList
{
  $$ = A_VarDeclList($1->pos, $2);
}
| VarDecl
{
  $$ = A_VarDeclList($1->pos, nullptr);
}
;


FnDeclStmt: FnDecl SEMICOLON
{
  $$ = A_FnDeclStmt($1->pos, $1);
}
;

FnDecl: FN ID LPAREN ParamDecl RPAREN ARROW Type
{
  $$ = A_FnDecl($1->pos, $2, $4, $7);
}
| FN ID LPAREN ParamDecl RPAREN
{
  $$ = A_FnDecl($1->pos, $2, $4, nullptr);
}
;

ParamDecl: VarDeclList
{
  $$ = A_ParamDecl($1);
}
;

FnDef: FnDecl LBRACE CodeBlockStmtList RBRACE
{
  $$ = A_FnDef($1->pos, $1, $3);
}
;

CodeBlockStmtList:  CodeBlockStmt 
{
  $$ = A_CodeBlockStmtList($1, nullptr);
}
| CodeBlockStmt CodeBlockStmtList
{
  $$ = A_CodeBlockStmtList($1, $2);
}
;

CodeBlockStmt: VarDeclStmt
{
  $$ = A_BlockVarDeclStmt($1->pos, $1);
}
| AssignStmt
{
  $$ = A_BlockAssignStmt($1->pos, $1);
}
| CallStmt
{
  $$ = A_BlockCallStmt($1->pos, $1);
}
| IfStmt
{
  $$ = A_BlockIfStmt($1->pos, $1);
}
| WhileStmt
{
  $$ = A_BlockWhileStmt($1->pos, $1);
}
| ReturnStmt
{
  $$ = A_BlockReturnStmt($1->pos, $1);
}
| CONTINUE SEMICOLON
{
  $$ = A_BlockContinueStmt($1->pos);
}
| BREAK SEMICOLON
{
  $$ = A_BlockBreakStmt($1->pos);
}
| SEMICOLON
{
  $$ = A_BlockNullStmt($1);
}
;

ReturnStmt: RET RightVal SEMICOLON
{
  $$ = A_ReturnStmt($1->pos, $2);
}
| RET SEMICOLON
{
  $$ = A_ReturnStmt($1->pos, nullptr);
}
;

CallStmt: FnCall SEMICOLON
{
  $$ = A_CallStmt($1->pos, $1);
}
;

IfStmt: IF LPAREN BoolExpr RPAREN CodeBlockStmtList
{
  $$ = A_IfStmt($1->pos, $3, $5, nullptr);
}
| IF LPAREN BoolExpr RPAREN CodeBlockStmtList ELSE CodeBlockStmtList
{
  $$ = A_IfStmt($1->pos, $3, $5, $7);
}
;

WhileStmt: WHILE LPAREN BoolExpr RPAREN CodeBlockStmtList
{
  $$ = A_WhileStmt($1->pos, $3, $5);
}
;

%%

extern "C"{
void yyerror(char * s)
{
  fprintf(stderr, "%s\n",s);
}
int yywrap()
{
  return(1);
}
}


