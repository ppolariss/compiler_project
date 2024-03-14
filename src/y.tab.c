/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.yacc"

#include <stdio.h>
#include "TeaplAst.h"

extern A_pos pos;
extern A_program root;

extern int yylex(void);
extern "C"{
extern void yyerror(char *s); 
extern int  yywrap();
}


#line 86 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ADD = 258,                     /* ADD  */
    SUB = 259,                     /* SUB  */
    MUL = 260,                     /* MUL  */
    DIV = 261,                     /* DIV  */
    SEMICOLON = 262,               /* SEMICOLON  */
    STRUCT = 263,                  /* STRUCT  */
    LET = 264,                     /* LET  */
    INT = 265,                     /* INT  */
    IF = 266,                      /* IF  */
    RET = 267,                     /* RET  */
    ELSE = 268,                    /* ELSE  */
    WHILE = 269,                   /* WHILE  */
    BREAK = 270,                   /* BREAK  */
    CONTINUE = 271,                /* CONTINUE  */
    FN = 272,                      /* FN  */
    LT = 273,                      /* LT  */
    GT = 274,                      /* GT  */
    GE = 275,                      /* GE  */
    LE = 276,                      /* LE  */
    EQ = 277,                      /* EQ  */
    NE = 278,                      /* NE  */
    AND = 279,                     /* AND  */
    OR = 280,                      /* OR  */
    NOT = 281,                     /* NOT  */
    LPAREN = 282,                  /* LPAREN  */
    RPAREN = 283,                  /* RPAREN  */
    ASSIGN = 284,                  /* ASSIGN  */
    LBRACKET = 285,                /* LBRACKET  */
    RBRACKET = 286,                /* RBRACKET  */
    LBRACE = 287,                  /* LBRACE  */
    RBRACE = 288,                  /* RBRACE  */
    COMMA = 289,                   /* COMMA  */
    COLON = 290,                   /* COLON  */
    ARROW = 291,                   /* ARROW  */
    DOT = 292,                     /* DOT  */
    NUM = 293,                     /* NUM  */
    ID = 294                       /* ID  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ADD 258
#define SUB 259
#define MUL 260
#define DIV 261
#define SEMICOLON 262
#define STRUCT 263
#define LET 264
#define INT 265
#define IF 266
#define RET 267
#define ELSE 268
#define WHILE 269
#define BREAK 270
#define CONTINUE 271
#define FN 272
#define LT 273
#define GT 274
#define GE 275
#define LE 276
#define EQ 277
#define NE 278
#define AND 279
#define OR 280
#define NOT 281
#define LPAREN 282
#define RPAREN 283
#define ASSIGN 284
#define LBRACKET 285
#define RBRACKET 286
#define LBRACE 287
#define RBRACE 288
#define COMMA 289
#define COLON 290
#define ARROW 291
#define DOT 292
#define NUM 293
#define ID 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "parser.yacc"

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
  A_boolExpr boolExpr;
  A_fnDecl fnDecl;
  A_type type;
  A_paramDecl paramDecl;
  A_boolBiOpExpr boolBiOpExpr;
  A_boolUnit boolUnit;
  A_assignStmt assignStmt;
  A_leftVal leftVal;
  A_rightVal rightVal;
  A_fnCall fnCall;
  A_varDecl varDecl;
  A_varDef varDef;
  A_codeBlockStmt codeBlockStmt;
  A_whileStmt whileStmt;
  A_returnStmt returnStmt;
  // A_continueStmt continueStmt;
  // A_breakStmt breakStmt;
  A_ifStmt ifStmt;
  A_callStmt callStmt;
  A_arrayExpr arrayExpr;
  A_memberExpr memberExpr;
  A_varDeclList varDeclList;
  A_codeBlockStmtList codeBlockStmtList;
  A_rightValList rightValList;
  A_tokenId tokenId;
  A_tokenNum tokenNum;

#line 253 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ADD = 3,                        /* ADD  */
  YYSYMBOL_SUB = 4,                        /* SUB  */
  YYSYMBOL_MUL = 5,                        /* MUL  */
  YYSYMBOL_DIV = 6,                        /* DIV  */
  YYSYMBOL_SEMICOLON = 7,                  /* SEMICOLON  */
  YYSYMBOL_STRUCT = 8,                     /* STRUCT  */
  YYSYMBOL_LET = 9,                        /* LET  */
  YYSYMBOL_INT = 10,                       /* INT  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_RET = 12,                       /* RET  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_WHILE = 14,                     /* WHILE  */
  YYSYMBOL_BREAK = 15,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 16,                  /* CONTINUE  */
  YYSYMBOL_FN = 17,                        /* FN  */
  YYSYMBOL_LT = 18,                        /* LT  */
  YYSYMBOL_GT = 19,                        /* GT  */
  YYSYMBOL_GE = 20,                        /* GE  */
  YYSYMBOL_LE = 21,                        /* LE  */
  YYSYMBOL_EQ = 22,                        /* EQ  */
  YYSYMBOL_NE = 23,                        /* NE  */
  YYSYMBOL_AND = 24,                       /* AND  */
  YYSYMBOL_OR = 25,                        /* OR  */
  YYSYMBOL_NOT = 26,                       /* NOT  */
  YYSYMBOL_LPAREN = 27,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 28,                    /* RPAREN  */
  YYSYMBOL_ASSIGN = 29,                    /* ASSIGN  */
  YYSYMBOL_LBRACKET = 30,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 31,                  /* RBRACKET  */
  YYSYMBOL_LBRACE = 32,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 33,                    /* RBRACE  */
  YYSYMBOL_COMMA = 34,                     /* COMMA  */
  YYSYMBOL_COLON = 35,                     /* COLON  */
  YYSYMBOL_ARROW = 36,                     /* ARROW  */
  YYSYMBOL_DOT = 37,                       /* DOT  */
  YYSYMBOL_NUM = 38,                       /* NUM  */
  YYSYMBOL_ID = 39,                        /* ID  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_Program = 41,                   /* Program  */
  YYSYMBOL_ProgramElementList = 42,        /* ProgramElementList  */
  YYSYMBOL_ProgramElement = 43,            /* ProgramElement  */
  YYSYMBOL_ArithExpr = 44,                 /* ArithExpr  */
  YYSYMBOL_ExprUnit = 45,                  /* ExprUnit  */
  YYSYMBOL_ArrayExpr = 46,                 /* ArrayExpr  */
  YYSYMBOL_BoolExpr = 47,                  /* BoolExpr  */
  YYSYMBOL_BoolUnit = 48,                  /* BoolUnit  */
  YYSYMBOL_AssignStmt = 49,                /* AssignStmt  */
  YYSYMBOL_LeftVal = 50,                   /* LeftVal  */
  YYSYMBOL_RightVal = 51,                  /* RightVal  */
  YYSYMBOL_FnCall = 52,                    /* FnCall  */
  YYSYMBOL_RightValList = 53,              /* RightValList  */
  YYSYMBOL_VarDeclStmt = 54,               /* VarDeclStmt  */
  YYSYMBOL_VarDecl = 55,                   /* VarDecl  */
  YYSYMBOL_VarDef = 56,                    /* VarDef  */
  YYSYMBOL_Type = 57,                      /* Type  */
  YYSYMBOL_StructDef = 58,                 /* StructDef  */
  YYSYMBOL_VarDeclList = 59,               /* VarDeclList  */
  YYSYMBOL_FnDeclStmt = 60,                /* FnDeclStmt  */
  YYSYMBOL_FnDecl = 61,                    /* FnDecl  */
  YYSYMBOL_ParamDecl = 62,                 /* ParamDecl  */
  YYSYMBOL_FnDef = 63,                     /* FnDef  */
  YYSYMBOL_CodeBlockStmtList = 64,         /* CodeBlockStmtList  */
  YYSYMBOL_CodeBlockStmt = 65,             /* CodeBlockStmt  */
  YYSYMBOL_ReturnStmt = 66,                /* ReturnStmt  */
  YYSYMBOL_CallStmt = 67,                  /* CallStmt  */
  YYSYMBOL_IfStmt = 68,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 69                  /* WhileStmt  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   198

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  170

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   173,   173,   180,   185,   190,   194,   198,   202,   206,
     213,   217,   221,   225,   229,   236,   240,   244,   248,   252,
     256,   260,   266,   270,   276,   280,   284,   290,   294,   298,
     302,   306,   310,   314,   318,   324,   330,   334,   338,   344,
     348,   354,   360,   364,   370,   374,   380,   384,   388,   392,
     400,   404,   408,   412,   418,   422,   429,   435,   439,   446,
     452,   456,   462,   468,   474,   478,   484,   488,   492,   496,
     500,   504,   508,   512,   516,   522,   526,   532,   538,   542,
     548
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ADD", "SUB", "MUL",
  "DIV", "SEMICOLON", "STRUCT", "LET", "INT", "IF", "RET", "ELSE", "WHILE",
  "BREAK", "CONTINUE", "FN", "LT", "GT", "GE", "LE", "EQ", "NE", "AND",
  "OR", "NOT", "LPAREN", "RPAREN", "ASSIGN", "LBRACKET", "RBRACKET",
  "LBRACE", "RBRACE", "COMMA", "COLON", "ARROW", "DOT", "NUM", "ID",
  "$accept", "Program", "ProgramElementList", "ProgramElement",
  "ArithExpr", "ExprUnit", "ArrayExpr", "BoolExpr", "BoolUnit",
  "AssignStmt", "LeftVal", "RightVal", "FnCall", "RightValList",
  "VarDeclStmt", "VarDecl", "VarDef", "Type", "StructDef", "VarDeclList",
  "FnDeclStmt", "FnDecl", "ParamDecl", "FnDef", "CodeBlockStmtList",
  "CodeBlockStmt", "ReturnStmt", "CallStmt", "IfStmt", "WhileStmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-79)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-39)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      61,   -79,    -9,    24,    35,    17,   -79,    61,   -79,   -79,
     -79,    15,   -79,   -13,    85,    13,    78,    73,   -79,   -79,
     -79,    68,    80,    14,    83,     0,   -79,   -79,    80,   -79,
     101,     5,   102,   135,   138,   122,   -79,   -79,    36,   146,
     -79,    92,    68,   -79,   -79,   -79,   -79,    82,   120,   130,
      33,    14,    14,   -79,    -1,   153,   118,    -2,     9,   -79,
      71,   -79,   -79,   133,   -79,   -79,   136,   -79,   139,    14,
     -79,   159,    14,   -79,   -79,    14,    14,    16,   129,   -79,
     -79,   -79,   131,     0,    80,   -79,    33,   -79,   118,   -79,
      10,    99,    33,    33,    33,    33,    33,    33,    33,    33,
      33,    33,    14,    14,   132,    87,    14,   134,   119,   -79,
     127,   140,   144,   166,   145,   147,   -79,   148,   -79,   -79,
     -79,   -79,   -79,   156,    98,   169,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   152,   -79,    72,   149,     0,   -79,     0,
     150,   151,    14,   -79,   -79,   -79,   -79,   154,    14,   155,
     -79,    68,    68,   -79,     0,   157,   160,   158,   161,   -79,
     -79,    14,   167,   -79,   162,   164,   -79,    68,   165,   -79
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     9,     0,     0,     0,     0,     2,     4,     5,     6,
       7,     0,     8,     0,    48,     0,     0,     0,     1,     3,
      59,     0,     0,     0,     0,     0,    45,    44,     0,    74,
       0,     0,     0,     0,     0,    36,    37,    67,     0,     0,
      66,     0,    64,    71,    68,    69,    70,    48,    58,     0,
       0,     0,     0,    15,    16,    39,    14,    19,    40,    26,
       0,    51,    18,     0,    54,    55,    46,    62,     0,     0,
      76,     0,     0,    73,    72,     0,     0,     0,     0,    77,
      63,    65,     0,     0,     0,    56,     0,    21,     0,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,    61,     0,    75,
       0,    43,     0,     0,     0,     0,    38,     0,    46,    57,
      14,    17,    33,    10,    11,    12,    13,    27,    28,    29,
      30,    31,    32,    24,    25,    20,     0,     0,    50,     0,
       0,     0,     0,    41,    35,    22,    23,    49,     0,    47,
      60,     0,     0,    42,     0,     0,     0,     0,     0,    47,
      53,     0,    78,    80,     0,     0,    52,     0,     0,    79
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -79,   -79,   178,   -79,   -44,    -5,   -21,   -45,   137,   -79,
     -19,   -20,   -17,   -43,   106,   183,   -79,   -78,   -79,   -22,
     -79,   -79,   -79,   -79,   -41,   -79,   -79,   -79,   -79,   -79
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,    55,    56,    57,    58,    59,    37,
      60,   111,    62,   112,    40,    48,    16,    66,     9,    49,
      10,    11,    68,    12,    41,    42,    43,    44,    45,    46
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,    81,    38,    61,    39,   118,    67,    91,    90,    50,
      64,    71,    70,    92,    93,    94,    95,    18,    50,    22,
      26,    36,    20,    38,   108,    39,    75,   110,   -37,   -36,
      13,    51,    52,   102,   103,   -37,   -36,    50,   121,    65,
      51,    52,    90,    53,    54,    87,    88,    21,   123,   124,
     125,   126,    53,    54,   114,   115,   113,   133,   134,   149,
      86,   150,   119,    14,    88,    76,    77,    88,     1,     2,
       3,    53,    54,    78,    17,    29,   159,     3,     4,    30,
      31,   120,    32,    33,    34,    27,   138,   120,   120,   120,
     120,   127,   128,   129,   130,   131,   132,    88,    88,   153,
      28,    77,   -38,    94,    95,   155,     8,    35,   104,   -38,
     157,   158,    82,     8,    23,    24,   136,    83,   164,    47,
      25,    63,   137,   102,   103,    80,   168,   122,    69,    72,
      36,    36,    38,    38,    39,    39,    96,    97,    98,    99,
     100,   101,    73,   102,   103,    74,    36,   140,    38,    75,
      39,   102,   103,    79,    84,   141,    92,    93,    94,    95,
      93,    94,    95,    85,   105,   106,   109,   107,   116,   117,
     139,   135,   143,   144,   142,    95,   145,   103,   146,   147,
     165,   148,   151,   152,   156,    19,    15,     0,    89,   154,
     160,   162,   161,     0,   163,   166,   167,     0,   169
};

static const yytype_int16 yycheck[] =
{
      21,    42,    21,    23,    21,    83,    28,    52,    52,     4,
      10,    31,     7,     3,     4,     5,     6,     0,     4,    32,
       7,    42,     7,    42,    69,    42,    27,    72,    30,    30,
      39,    26,    27,    24,    25,    37,    37,     4,    28,    39,
      26,    27,    86,    38,    39,    50,    51,    32,    92,    93,
      94,    95,    38,    39,    38,    39,    76,   102,   103,   137,
      27,   139,    84,    39,    69,    29,    30,    72,     7,     8,
       9,    38,    39,    37,    39,     7,   154,     9,    17,    11,
      12,    86,    14,    15,    16,     7,   106,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   142,
      27,    30,    30,     5,     6,   148,     0,    39,    37,    37,
     151,   152,    30,     7,    29,    30,    29,    35,   161,    39,
      35,    38,    35,    24,    25,    33,   167,    28,    27,    27,
     151,   152,   151,   152,   151,   152,    18,    19,    20,    21,
      22,    23,     7,    24,    25,     7,   167,    28,   167,    27,
     167,    24,    25,     7,    34,    28,     3,     4,     5,     6,
       4,     5,     6,    33,    31,    29,     7,    28,    39,    38,
      36,    39,    28,     7,    34,     6,    31,    25,    31,    31,
      13,    32,    32,    32,    29,     7,     3,    -1,    51,    35,
      33,    33,    32,    -1,    33,    33,    32,    -1,    33
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,     8,     9,    17,    41,    42,    43,    54,    58,
      60,    61,    63,    39,    39,    55,    56,    39,     0,    42,
       7,    32,    32,    29,    30,    35,     7,     7,    27,     7,
      11,    12,    14,    15,    16,    39,    46,    49,    50,    52,
      54,    64,    65,    66,    67,    68,    69,    39,    55,    59,
       4,    26,    27,    38,    39,    44,    45,    46,    47,    48,
      50,    51,    52,    38,    10,    39,    57,    59,    62,    27,
       7,    51,    27,     7,     7,    27,    29,    30,    37,     7,
      33,    64,    30,    35,    34,    33,    27,    45,    45,    48,
      44,    47,     3,     4,     5,     6,    18,    19,    20,    21,
      22,    23,    24,    25,    37,    31,    29,    28,    47,     7,
      47,    51,    53,    51,    38,    39,    39,    38,    57,    59,
      45,    28,    28,    44,    44,    44,    44,    45,    45,    45,
      45,    45,    45,    47,    47,    39,    29,    35,    51,    36,
      28,    28,    34,    28,     7,    31,    31,    31,    32,    57,
      57,    32,    32,    53,    35,    53,    29,    64,    64,    57,
      33,    32,    33,    33,    53,    13,    33,    32,    64,    33
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    43,    43,    43,
      44,    44,    44,    44,    44,    45,    45,    45,    45,    45,
      45,    45,    46,    46,    47,    47,    47,    48,    48,    48,
      48,    48,    48,    48,    48,    49,    50,    50,    50,    51,
      51,    52,    53,    53,    54,    54,    55,    55,    55,    55,
      56,    56,    56,    56,    57,    57,    58,    59,    59,    60,
      61,    61,    62,    63,    64,    64,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    66,    66,    67,    68,    68,
      69
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     1,     1,     1,     3,     1,     1,
       3,     2,     4,     4,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     2,     4,     1,     1,     3,     1,
       1,     4,     3,     1,     3,     3,     3,     6,     1,     4,
       5,     3,    10,     8,     1,     1,     5,     3,     1,     2,
       7,     5,     1,     4,     1,     2,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     3,     2,     2,     7,    11,
       7
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Program: ProgramElementList  */
#line 174 "parser.yacc"
{  
  root = A_Program((yyvsp[0].programElementList));
  (yyval.program) = A_Program((yyvsp[0].programElementList));
}
#line 1417 "y.tab.c"
    break;

  case 3: /* ProgramElementList: ProgramElement ProgramElementList  */
#line 181 "parser.yacc"
{
  (yyval.programElementList) = A_ProgramElementList((yyvsp[-1].programElement), (yyvsp[0].programElementList));
}
#line 1425 "y.tab.c"
    break;

  case 4: /* ProgramElementList: %empty  */
#line 185 "parser.yacc"
{
  (yyval.programElementList) = nullptr;
}
#line 1433 "y.tab.c"
    break;

  case 5: /* ProgramElement: VarDeclStmt  */
#line 191 "parser.yacc"
{
  (yyval.programElement) = A_ProgramVarDeclStmt((yyvsp[0].varDeclStmt)->pos, (yyvsp[0].varDeclStmt));
}
#line 1441 "y.tab.c"
    break;

  case 6: /* ProgramElement: StructDef  */
#line 195 "parser.yacc"
{
  (yyval.programElement) = A_ProgramStructDef((yyvsp[0].structDef)->pos, (yyvsp[0].structDef));
}
#line 1449 "y.tab.c"
    break;

  case 7: /* ProgramElement: FnDeclStmt  */
#line 199 "parser.yacc"
{
  (yyval.programElement) = A_ProgramFnDeclStmt((yyvsp[0].fnDeclStmt)->pos, (yyvsp[0].fnDeclStmt));
}
#line 1457 "y.tab.c"
    break;

  case 8: /* ProgramElement: FnDef  */
#line 203 "parser.yacc"
{
  (yyval.programElement) = A_ProgramFnDef((yyvsp[0].fnDef)->pos, (yyvsp[0].fnDef));
}
#line 1465 "y.tab.c"
    break;

  case 9: /* ProgramElement: SEMICOLON  */
#line 207 "parser.yacc"
{
  (yyval.programElement) = A_ProgramNullStmt((yyvsp[0].pos));
}
#line 1473 "y.tab.c"
    break;

  case 10: /* ArithExpr: ArithExpr ADD ArithExpr  */
#line 214 "parser.yacc"
{
  (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[-2].arithExpr)->pos, A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos, A_add, (yyvsp[-2].arithExpr), (yyvsp[0].arithExpr)));
}
#line 1481 "y.tab.c"
    break;

  case 11: /* ArithExpr: ArithExpr SUB ArithExpr  */
#line 218 "parser.yacc"
{
  (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[-2].arithExpr)->pos, A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos, A_sub, (yyvsp[-2].arithExpr), (yyvsp[0].arithExpr)));
}
#line 1489 "y.tab.c"
    break;

  case 12: /* ArithExpr: ArithExpr MUL ArithExpr  */
#line 222 "parser.yacc"
{
  (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[-2].arithExpr)->pos, A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos, A_mul, (yyvsp[-2].arithExpr), (yyvsp[0].arithExpr)));
}
#line 1497 "y.tab.c"
    break;

  case 13: /* ArithExpr: ArithExpr DIV ArithExpr  */
#line 226 "parser.yacc"
{
  (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[-2].arithExpr)->pos, A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos, A_div, (yyvsp[-2].arithExpr), (yyvsp[0].arithExpr)));
}
#line 1505 "y.tab.c"
    break;

  case 14: /* ArithExpr: ExprUnit  */
#line 230 "parser.yacc"
{
  (yyval.arithExpr) = A_ExprUnit((yyvsp[0].exprUnit)->pos, (yyvsp[0].exprUnit));
}
#line 1513 "y.tab.c"
    break;

  case 15: /* ExprUnit: NUM  */
#line 237 "parser.yacc"
{
  (yyval.exprUnit) = A_NumExprUnit((yyvsp[0].tokenNum)->pos, (yyvsp[0].tokenNum)->num);
}
#line 1521 "y.tab.c"
    break;

  case 16: /* ExprUnit: ID  */
#line 241 "parser.yacc"
{
  (yyval.exprUnit) = A_IdExprUnit((yyvsp[0].tokenId)->pos, (yyvsp[0].tokenId)->id);
}
#line 1529 "y.tab.c"
    break;

  case 17: /* ExprUnit: LPAREN ArithExpr RPAREN  */
#line 245 "parser.yacc"
{
  (yyval.exprUnit) = A_ArithExprUnit((yyvsp[-2].pos), (yyvsp[-1].arithExpr));
}
#line 1537 "y.tab.c"
    break;

  case 18: /* ExprUnit: FnCall  */
#line 249 "parser.yacc"
{
  (yyval.exprUnit) = A_CallExprUnit((yyvsp[0].fnCall)->pos, (yyvsp[0].fnCall));
}
#line 1545 "y.tab.c"
    break;

  case 19: /* ExprUnit: ArrayExpr  */
#line 253 "parser.yacc"
{
  (yyval.exprUnit) = A_ArrayExprUnit((yyvsp[0].arrayExpr)->pos, (yyvsp[0].arrayExpr));
}
#line 1553 "y.tab.c"
    break;

  case 20: /* ExprUnit: LeftVal DOT ID  */
#line 257 "parser.yacc"
{
  (yyval.exprUnit) = A_MemberExprUnit((yyvsp[-2].leftVal)->pos, A_MemberExpr((yyvsp[-2].leftVal)->pos, (yyvsp[-2].leftVal), (yyvsp[0].tokenId)->id));
}
#line 1561 "y.tab.c"
    break;

  case 21: /* ExprUnit: SUB ExprUnit  */
#line 261 "parser.yacc"
{
  (yyval.exprUnit) = A_ArithUExprUnit((yyvsp[-1].pos), A_ArithUExpr((yyvsp[-1].pos), A_neg, (yyvsp[0].exprUnit)));
}
#line 1569 "y.tab.c"
    break;

  case 22: /* ArrayExpr: LeftVal LBRACKET NUM RBRACKET  */
#line 267 "parser.yacc"
{
  (yyval.arrayExpr) = A_ArrayExpr((yyvsp[-3].leftVal)->pos, (yyvsp[-3].leftVal), A_NumIndexExpr((yyvsp[-1].tokenNum)->pos, (yyvsp[-1].tokenNum)->num));
}
#line 1577 "y.tab.c"
    break;

  case 23: /* ArrayExpr: LeftVal LBRACKET ID RBRACKET  */
#line 271 "parser.yacc"
{
  (yyval.arrayExpr) = A_ArrayExpr((yyvsp[-3].leftVal)->pos, (yyvsp[-3].leftVal), A_IdIndexExpr((yyvsp[-1].tokenId)->pos, (yyvsp[-1].tokenId)->id));
}
#line 1585 "y.tab.c"
    break;

  case 24: /* BoolExpr: BoolExpr AND BoolExpr  */
#line 277 "parser.yacc"
{
  (yyval.boolExpr) = A_BoolBiOp_Expr((yyvsp[-2].boolExpr)->pos, A_BoolBiOpExpr((yyvsp[-2].boolExpr)->pos, A_and, (yyvsp[-2].boolExpr), (yyvsp[0].boolExpr)));
}
#line 1593 "y.tab.c"
    break;

  case 25: /* BoolExpr: BoolExpr OR BoolExpr  */
#line 281 "parser.yacc"
{
  (yyval.boolExpr) = A_BoolBiOp_Expr((yyvsp[-2].boolExpr)->pos, A_BoolBiOpExpr((yyvsp[-2].boolExpr)->pos, A_or, (yyvsp[-2].boolExpr), (yyvsp[0].boolExpr)));
}
#line 1601 "y.tab.c"
    break;

  case 26: /* BoolExpr: BoolUnit  */
#line 285 "parser.yacc"
{
  (yyval.boolExpr) = A_BoolExpr((yyvsp[0].boolUnit)->pos, (yyvsp[0].boolUnit));
}
#line 1609 "y.tab.c"
    break;

  case 27: /* BoolUnit: ExprUnit LT ExprUnit  */
#line 291 "parser.yacc"
{
  (yyval.boolUnit) = A_ComExprUnit((yyvsp[-2].exprUnit)->pos, A_ComExpr((yyvsp[-2].exprUnit)->pos, A_lt, (yyvsp[-2].exprUnit), (yyvsp[0].exprUnit)));
}
#line 1617 "y.tab.c"
    break;

  case 28: /* BoolUnit: ExprUnit GT ExprUnit  */
#line 295 "parser.yacc"
{
  (yyval.boolUnit) = A_ComExprUnit((yyvsp[-2].exprUnit)->pos, A_ComExpr((yyvsp[-2].exprUnit)->pos, A_gt, (yyvsp[-2].exprUnit), (yyvsp[0].exprUnit)));
}
#line 1625 "y.tab.c"
    break;

  case 29: /* BoolUnit: ExprUnit GE ExprUnit  */
#line 299 "parser.yacc"
{
  (yyval.boolUnit) = A_ComExprUnit((yyvsp[-2].exprUnit)->pos, A_ComExpr((yyvsp[-2].exprUnit)->pos, A_ge, (yyvsp[-2].exprUnit), (yyvsp[0].exprUnit)));
}
#line 1633 "y.tab.c"
    break;

  case 30: /* BoolUnit: ExprUnit LE ExprUnit  */
#line 303 "parser.yacc"
{
  (yyval.boolUnit) = A_ComExprUnit((yyvsp[-2].exprUnit)->pos, A_ComExpr((yyvsp[-2].exprUnit)->pos, A_le, (yyvsp[-2].exprUnit), (yyvsp[0].exprUnit)));
}
#line 1641 "y.tab.c"
    break;

  case 31: /* BoolUnit: ExprUnit EQ ExprUnit  */
#line 307 "parser.yacc"
{
  (yyval.boolUnit) = A_ComExprUnit((yyvsp[-2].exprUnit)->pos, A_ComExpr((yyvsp[-2].exprUnit)->pos, A_eq, (yyvsp[-2].exprUnit), (yyvsp[0].exprUnit)));
}
#line 1649 "y.tab.c"
    break;

  case 32: /* BoolUnit: ExprUnit NE ExprUnit  */
#line 311 "parser.yacc"
{
  (yyval.boolUnit) = A_ComExprUnit((yyvsp[-2].exprUnit)->pos, A_ComExpr((yyvsp[-2].exprUnit)->pos, A_ne, (yyvsp[-2].exprUnit), (yyvsp[0].exprUnit)));
}
#line 1657 "y.tab.c"
    break;

  case 33: /* BoolUnit: LPAREN BoolExpr RPAREN  */
#line 315 "parser.yacc"
{
  (yyval.boolUnit) = A_BoolExprUnit((yyvsp[-2].pos), (yyvsp[-1].boolExpr));
}
#line 1665 "y.tab.c"
    break;

  case 34: /* BoolUnit: NOT BoolUnit  */
#line 319 "parser.yacc"
{
  (yyval.boolUnit) = A_BoolUOpExprUnit((yyvsp[-1].pos), A_BoolUOpExpr((yyvsp[-1].pos), A_not, (yyvsp[0].boolUnit)));
}
#line 1673 "y.tab.c"
    break;

  case 35: /* AssignStmt: LeftVal ASSIGN RightVal SEMICOLON  */
#line 325 "parser.yacc"
{
  (yyval.assignStmt) = A_AssignStmt((yyvsp[-3].leftVal)->pos, (yyvsp[-3].leftVal), (yyvsp[-1].rightVal));
}
#line 1681 "y.tab.c"
    break;

  case 36: /* LeftVal: ID  */
#line 331 "parser.yacc"
{
  (yyval.leftVal) = A_IdExprLVal((yyvsp[0].tokenId)->pos, (yyvsp[0].tokenId)->id);
}
#line 1689 "y.tab.c"
    break;

  case 37: /* LeftVal: ArrayExpr  */
#line 335 "parser.yacc"
{
  (yyval.leftVal) = A_ArrExprLVal((yyvsp[0].arrayExpr)->pos, (yyvsp[0].arrayExpr));
}
#line 1697 "y.tab.c"
    break;

  case 38: /* LeftVal: LeftVal DOT ID  */
#line 339 "parser.yacc"
{
  (yyval.leftVal) = A_MemberExprLVal((yyvsp[-2].leftVal)->pos, A_MemberExpr((yyvsp[-2].leftVal)->pos, (yyvsp[-2].leftVal), (yyvsp[0].tokenId)->id));
}
#line 1705 "y.tab.c"
    break;

  case 39: /* RightVal: ArithExpr  */
#line 345 "parser.yacc"
{
  (yyval.rightVal) = A_ArithExprRVal((yyvsp[0].arithExpr)->pos, (yyvsp[0].arithExpr));
}
#line 1713 "y.tab.c"
    break;

  case 40: /* RightVal: BoolExpr  */
#line 349 "parser.yacc"
{
  (yyval.rightVal) = A_BoolExprRVal((yyvsp[0].boolExpr)->pos, (yyvsp[0].boolExpr));
}
#line 1721 "y.tab.c"
    break;

  case 41: /* FnCall: ID LPAREN RightValList RPAREN  */
#line 355 "parser.yacc"
{
  (yyval.fnCall) = A_FnCall((yyvsp[-3].tokenId)->pos, (yyvsp[-3].tokenId)->id, (yyvsp[-1].rightValList));
}
#line 1729 "y.tab.c"
    break;

  case 42: /* RightValList: RightVal COMMA RightValList  */
#line 361 "parser.yacc"
{
  (yyval.rightValList) = A_RightValList((yyvsp[-2].rightVal), (yyvsp[0].rightValList));
}
#line 1737 "y.tab.c"
    break;

  case 43: /* RightValList: RightVal  */
#line 365 "parser.yacc"
{
  (yyval.rightValList) = A_RightValList((yyvsp[0].rightVal), nullptr);
}
#line 1745 "y.tab.c"
    break;

  case 44: /* VarDeclStmt: LET VarDef SEMICOLON  */
#line 371 "parser.yacc"
{
  (yyval.varDeclStmt) = A_VarDefStmt((yyvsp[-2].pos), (yyvsp[-1].varDef));
}
#line 1753 "y.tab.c"
    break;

  case 45: /* VarDeclStmt: LET VarDecl SEMICOLON  */
#line 375 "parser.yacc"
{
  (yyval.varDeclStmt) = A_VarDeclStmt((yyvsp[-2].pos), (yyvsp[-1].varDecl));
}
#line 1761 "y.tab.c"
    break;

  case 46: /* VarDecl: ID COLON Type  */
#line 381 "parser.yacc"
{
  (yyval.varDecl) = A_VarDecl_Scalar((yyvsp[-2].tokenId)->pos, A_VarDeclScalar((yyvsp[-2].tokenId)->pos, (yyvsp[-2].tokenId)->id, (yyvsp[0].type)));
}
#line 1769 "y.tab.c"
    break;

  case 47: /* VarDecl: ID LBRACKET NUM RBRACKET COLON Type  */
#line 385 "parser.yacc"
{
  (yyval.varDecl) = A_VarDecl_Array((yyvsp[-5].tokenId)->pos, A_VarDeclArray((yyvsp[-5].tokenId)->pos, (yyvsp[-5].tokenId)->id, (yyvsp[-3].tokenNum)->num, (yyvsp[0].type)));
}
#line 1777 "y.tab.c"
    break;

  case 48: /* VarDecl: ID  */
#line 389 "parser.yacc"
{
  (yyval.varDecl) = A_VarDecl_Scalar((yyvsp[0].tokenId)->pos, A_VarDeclScalar((yyvsp[0].tokenId)->pos, (yyvsp[0].tokenId)->id, nullptr));
}
#line 1785 "y.tab.c"
    break;

  case 49: /* VarDecl: ID LBRACKET NUM RBRACKET  */
#line 393 "parser.yacc"
{
  (yyval.varDecl) = A_VarDecl_Array((yyvsp[-3].tokenId)->pos, A_VarDeclArray((yyvsp[-3].tokenId)->pos, (yyvsp[-3].tokenId)->id, (yyvsp[-1].tokenNum)->num, nullptr));
}
#line 1793 "y.tab.c"
    break;

  case 50: /* VarDef: ID COLON Type ASSIGN RightVal  */
#line 401 "parser.yacc"
{
  (yyval.varDef) = A_VarDef_Scalar((yyvsp[-4].tokenId)->pos, A_VarDefScalar((yyvsp[-4].tokenId)->pos, (yyvsp[-4].tokenId)->id, (yyvsp[-2].type), (yyvsp[0].rightVal)));
}
#line 1801 "y.tab.c"
    break;

  case 51: /* VarDef: ID ASSIGN RightVal  */
#line 405 "parser.yacc"
{
  (yyval.varDef) = A_VarDef_Scalar((yyvsp[-2].tokenId)->pos, A_VarDefScalar((yyvsp[-2].tokenId)->pos, (yyvsp[-2].tokenId)->id, nullptr, (yyvsp[0].rightVal)));
}
#line 1809 "y.tab.c"
    break;

  case 52: /* VarDef: ID LBRACKET NUM RBRACKET COLON Type ASSIGN LBRACE RightValList RBRACE  */
#line 409 "parser.yacc"
{
  (yyval.varDef) = A_VarDef_Array((yyvsp[-9].tokenId)->pos, A_VarDefArray((yyvsp[-9].tokenId)->pos, (yyvsp[-9].tokenId)->id, (yyvsp[-7].tokenNum)->num, (yyvsp[-4].type), (yyvsp[-1].rightValList)));
}
#line 1817 "y.tab.c"
    break;

  case 53: /* VarDef: ID LBRACKET NUM RBRACKET ASSIGN LBRACE RightValList RBRACE  */
#line 413 "parser.yacc"
{
  (yyval.varDef) = A_VarDef_Array((yyvsp[-7].tokenId)->pos, A_VarDefArray((yyvsp[-7].tokenId)->pos, (yyvsp[-7].tokenId)->id, (yyvsp[-5].tokenNum)->num, nullptr, (yyvsp[-1].rightValList)));
}
#line 1825 "y.tab.c"
    break;

  case 54: /* Type: INT  */
#line 419 "parser.yacc"
{
  (yyval.type) = A_NativeType((yyvsp[0].pos), A_intTypeKind);
}
#line 1833 "y.tab.c"
    break;

  case 55: /* Type: ID  */
#line 423 "parser.yacc"
{
  (yyval.type) = A_StructType((yyvsp[0].tokenId)->pos, (yyvsp[0].tokenId)->id);
}
#line 1841 "y.tab.c"
    break;

  case 56: /* StructDef: STRUCT ID LBRACE VarDeclList RBRACE  */
#line 430 "parser.yacc"
{
  (yyval.structDef) = A_StructDef((yyvsp[-4].pos), (yyvsp[-3].tokenId)->id, (yyvsp[-1].varDeclList));
}
#line 1849 "y.tab.c"
    break;

  case 57: /* VarDeclList: VarDecl COMMA VarDeclList  */
#line 436 "parser.yacc"
{
  (yyval.varDeclList) = A_VarDeclList((yyvsp[-2].varDecl), (yyvsp[0].varDeclList));
}
#line 1857 "y.tab.c"
    break;

  case 58: /* VarDeclList: VarDecl  */
#line 440 "parser.yacc"
{
  (yyval.varDeclList) = A_VarDeclList((yyvsp[0].varDecl), nullptr);
}
#line 1865 "y.tab.c"
    break;

  case 59: /* FnDeclStmt: FnDecl SEMICOLON  */
#line 447 "parser.yacc"
{
  (yyval.fnDeclStmt) = A_FnDeclStmt((yyvsp[-1].fnDecl)->pos, (yyvsp[-1].fnDecl));
}
#line 1873 "y.tab.c"
    break;

  case 60: /* FnDecl: FN ID LPAREN ParamDecl RPAREN ARROW Type  */
#line 453 "parser.yacc"
{
  (yyval.fnDecl) = A_FnDecl((yyvsp[-6].pos), (yyvsp[-5].tokenId)->id, (yyvsp[-3].paramDecl), (yyvsp[0].type));
}
#line 1881 "y.tab.c"
    break;

  case 61: /* FnDecl: FN ID LPAREN ParamDecl RPAREN  */
#line 457 "parser.yacc"
{
  (yyval.fnDecl) = A_FnDecl((yyvsp[-4].pos), (yyvsp[-3].tokenId)->id, (yyvsp[-1].paramDecl), nullptr);
}
#line 1889 "y.tab.c"
    break;

  case 62: /* ParamDecl: VarDeclList  */
#line 463 "parser.yacc"
{
  (yyval.paramDecl) = A_ParamDecl((yyvsp[0].varDeclList));
}
#line 1897 "y.tab.c"
    break;

  case 63: /* FnDef: FnDecl LBRACE CodeBlockStmtList RBRACE  */
#line 469 "parser.yacc"
{
  (yyval.fnDef) = A_FnDef((yyvsp[-3].fnDecl)->pos, (yyvsp[-3].fnDecl), (yyvsp[-1].codeBlockStmtList));
}
#line 1905 "y.tab.c"
    break;

  case 64: /* CodeBlockStmtList: CodeBlockStmt  */
#line 475 "parser.yacc"
{
  (yyval.codeBlockStmtList) = A_CodeBlockStmtList((yyvsp[0].codeBlockStmt), nullptr);
}
#line 1913 "y.tab.c"
    break;

  case 65: /* CodeBlockStmtList: CodeBlockStmt CodeBlockStmtList  */
#line 479 "parser.yacc"
{
  (yyval.codeBlockStmtList) = A_CodeBlockStmtList((yyvsp[-1].codeBlockStmt), (yyvsp[0].codeBlockStmtList));
}
#line 1921 "y.tab.c"
    break;

  case 66: /* CodeBlockStmt: VarDeclStmt  */
#line 485 "parser.yacc"
{
  (yyval.codeBlockStmt) = A_BlockVarDeclStmt((yyvsp[0].varDeclStmt)->pos, (yyvsp[0].varDeclStmt));
}
#line 1929 "y.tab.c"
    break;

  case 67: /* CodeBlockStmt: AssignStmt  */
#line 489 "parser.yacc"
{
  (yyval.codeBlockStmt) = A_BlockAssignStmt((yyvsp[0].assignStmt)->pos, (yyvsp[0].assignStmt));
}
#line 1937 "y.tab.c"
    break;

  case 68: /* CodeBlockStmt: CallStmt  */
#line 493 "parser.yacc"
{
  (yyval.codeBlockStmt) = A_BlockCallStmt((yyvsp[0].callStmt)->pos, (yyvsp[0].callStmt));
}
#line 1945 "y.tab.c"
    break;

  case 69: /* CodeBlockStmt: IfStmt  */
#line 497 "parser.yacc"
{
  (yyval.codeBlockStmt) = A_BlockIfStmt((yyvsp[0].ifStmt)->pos, (yyvsp[0].ifStmt));
}
#line 1953 "y.tab.c"
    break;

  case 70: /* CodeBlockStmt: WhileStmt  */
#line 501 "parser.yacc"
{
  (yyval.codeBlockStmt) = A_BlockWhileStmt((yyvsp[0].whileStmt)->pos, (yyvsp[0].whileStmt));
}
#line 1961 "y.tab.c"
    break;

  case 71: /* CodeBlockStmt: ReturnStmt  */
#line 505 "parser.yacc"
{
  (yyval.codeBlockStmt) = A_BlockReturnStmt((yyvsp[0].returnStmt)->pos, (yyvsp[0].returnStmt));
}
#line 1969 "y.tab.c"
    break;

  case 72: /* CodeBlockStmt: CONTINUE SEMICOLON  */
#line 509 "parser.yacc"
{
  (yyval.codeBlockStmt) = A_BlockContinueStmt((yyvsp[-1].pos));
}
#line 1977 "y.tab.c"
    break;

  case 73: /* CodeBlockStmt: BREAK SEMICOLON  */
#line 513 "parser.yacc"
{
  (yyval.codeBlockStmt) = A_BlockBreakStmt((yyvsp[-1].pos));
}
#line 1985 "y.tab.c"
    break;

  case 74: /* CodeBlockStmt: SEMICOLON  */
#line 517 "parser.yacc"
{
  (yyval.codeBlockStmt) = A_BlockNullStmt((yyvsp[0].pos));
}
#line 1993 "y.tab.c"
    break;

  case 75: /* ReturnStmt: RET RightVal SEMICOLON  */
#line 523 "parser.yacc"
{
  (yyval.returnStmt) = A_ReturnStmt((yyvsp[-2].pos), (yyvsp[-1].rightVal));
}
#line 2001 "y.tab.c"
    break;

  case 76: /* ReturnStmt: RET SEMICOLON  */
#line 527 "parser.yacc"
{
  (yyval.returnStmt) = A_ReturnStmt((yyvsp[-1].pos), nullptr);
}
#line 2009 "y.tab.c"
    break;

  case 77: /* CallStmt: FnCall SEMICOLON  */
#line 533 "parser.yacc"
{
  (yyval.callStmt) = A_CallStmt((yyvsp[-1].fnCall)->pos, (yyvsp[-1].fnCall));
}
#line 2017 "y.tab.c"
    break;

  case 78: /* IfStmt: IF LPAREN BoolExpr RPAREN LBRACE CodeBlockStmtList RBRACE  */
#line 539 "parser.yacc"
{
  (yyval.ifStmt) = A_IfStmt((yyvsp[-6].pos), (yyvsp[-4].boolExpr), (yyvsp[-1].codeBlockStmtList), nullptr);
}
#line 2025 "y.tab.c"
    break;

  case 79: /* IfStmt: IF LPAREN BoolExpr RPAREN LBRACE CodeBlockStmtList RBRACE ELSE LBRACE CodeBlockStmtList RBRACE  */
#line 543 "parser.yacc"
{
  (yyval.ifStmt) = A_IfStmt((yyvsp[-10].pos), (yyvsp[-8].boolExpr), (yyvsp[-5].codeBlockStmtList), (yyvsp[-1].codeBlockStmtList));
}
#line 2033 "y.tab.c"
    break;

  case 80: /* WhileStmt: WHILE LPAREN BoolExpr RPAREN LBRACE CodeBlockStmtList RBRACE  */
#line 549 "parser.yacc"
{
  (yyval.whileStmt) = A_WhileStmt((yyvsp[-6].pos), (yyvsp[-4].boolExpr), (yyvsp[-1].codeBlockStmtList));
}
#line 2041 "y.tab.c"
    break;


#line 2045 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 554 "parser.yacc"


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


