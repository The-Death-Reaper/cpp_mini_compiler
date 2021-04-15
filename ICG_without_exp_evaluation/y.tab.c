/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "sym_tab.y" /* yacc.c:339  */

#include <stdio.h>
#include <iostream>
#include <string.h>
#include "node.hpp"
#include <vector>
#include <typeinfo>
#define A exp
#define B ect
// #define YYDEBUG 1
using namespace std;
st test;
// st test1;
int temp_no = 0;
int label_no = 0;
int final_no = 0;
unordered_map <string,int> size_map;
node* type;
int flag=1;
quple_list test_q;
vector<quple*> test_q_for;
vector<int> num_to_pop;
// vector<int> final_num;
int final_or = 0;
int final_and = 0;


void yyerror(const char *error_msg);

int counter = 0;
int for_scope = 0;
extern FILE *yyin;
extern FILE *yyout;
extern int yylineno;
int scope_count;
extern "C"
{       
        int yyparse(void);
        int yylex(void);  
        int yywrap()
        {
            return 1;
        }

}




vector<char*> fl_list;
vector<int> f_update;
int temp_count = 0;
int label_count = 0;

char* create_temp()
{
	char* new_temp = new char[11];
	sprintf(new_temp, "t_%d", temp_count++);
	return new_temp;
}

char* create_label()
{
	char* new_label = new char[11];
	sprintf(new_label, "L_%d", label_count++);
	return new_label;
}




#line 138 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CONSTANT = 258,
    STRING_LITERAL = 259,
    SIZEOF = 260,
    IDENTIFIER = 261,
    PTR_OP = 262,
    INC_OP = 263,
    DEC_OP = 264,
    LEFT_OP = 265,
    RIGHT_OP = 266,
    LE_OP = 267,
    GE_OP = 268,
    EQ_OP = 269,
    NE_OP = 270,
    AND_OP = 271,
    OR_OP = 272,
    MUL_ASSIGN = 273,
    DIV_ASSIGN = 274,
    MOD_ASSIGN = 275,
    ADD_ASSIGN = 276,
    SUB_ASSIGN = 277,
    LEFT_ASSIGN = 278,
    RIGHT_ASSIGN = 279,
    AND_ASSIGN = 280,
    XOR_ASSIGN = 281,
    OR_ASSIGN = 282,
    TYPE_NAME = 283,
    I_RD = 284,
    O_RD = 285,
    TYPEDEF = 286,
    EXTERN = 287,
    STATIC = 288,
    AUTO = 289,
    REGISTER = 290,
    CHAR = 291,
    SHORT = 292,
    INT = 293,
    LONG = 294,
    SIGNED = 295,
    UNSIGNED = 296,
    FLOAT = 297,
    DOUBLE = 298,
    CONST = 299,
    VOLATILE = 300,
    VOID = 301,
    CLASS = 302,
    STRUCT = 303,
    UNION = 304,
    ENUM = 305,
    ELLIPSIS = 306,
    CASE = 307,
    DEFAULT = 308,
    IF = 309,
    ELSE = 310,
    SWITCH = 311,
    WHILE = 312,
    DO = 313,
    FOR = 314,
    GOTO = 315,
    CONTINUE = 316,
    BREAK = 317,
    RETURN = 318,
    T_printf = 319,
    T_scanf = 320,
    T_cin = 321,
    T_cout = 322,
    IFX = 323
  };
#endif
/* Tokens.  */
#define CONSTANT 258
#define STRING_LITERAL 259
#define SIZEOF 260
#define IDENTIFIER 261
#define PTR_OP 262
#define INC_OP 263
#define DEC_OP 264
#define LEFT_OP 265
#define RIGHT_OP 266
#define LE_OP 267
#define GE_OP 268
#define EQ_OP 269
#define NE_OP 270
#define AND_OP 271
#define OR_OP 272
#define MUL_ASSIGN 273
#define DIV_ASSIGN 274
#define MOD_ASSIGN 275
#define ADD_ASSIGN 276
#define SUB_ASSIGN 277
#define LEFT_ASSIGN 278
#define RIGHT_ASSIGN 279
#define AND_ASSIGN 280
#define XOR_ASSIGN 281
#define OR_ASSIGN 282
#define TYPE_NAME 283
#define I_RD 284
#define O_RD 285
#define TYPEDEF 286
#define EXTERN 287
#define STATIC 288
#define AUTO 289
#define REGISTER 290
#define CHAR 291
#define SHORT 292
#define INT 293
#define LONG 294
#define SIGNED 295
#define UNSIGNED 296
#define FLOAT 297
#define DOUBLE 298
#define CONST 299
#define VOLATILE 300
#define VOID 301
#define CLASS 302
#define STRUCT 303
#define UNION 304
#define ENUM 305
#define ELLIPSIS 306
#define CASE 307
#define DEFAULT 308
#define IF 309
#define ELSE 310
#define SWITCH 311
#define WHILE 312
#define DO 313
#define FOR 314
#define GOTO 315
#define CONTINUE 316
#define BREAK 317
#define RETURN 318
#define T_printf 319
#define T_scanf 320
#define T_cin 321
#define T_cout 322
#define IFX 323

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 76 "sym_tab.y" /* yacc.c:355  */

	char* str;
	class node* node;

#line 319 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 350 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

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
# define YYCOPY_NEEDED 1
#endif


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1040

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  182
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  290

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    89,     2,     2,     2,    35,    38,     2,
      82,    83,    33,    31,    87,    32,    86,    34,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    91,    92,
      36,    41,    37,    90,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    84,     2,    85,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,    40,    43,    88,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   116,   116,   126,   130,   131,   135,   141,   142,   143,
     144,   145,   147,   152,   153,   157,   161,   163,   165,   166,
     167,   171,   172,   173,   174,   175,   176,   182,   186,   197,
     208,   222,   226,   240,   257,   261,   263,   268,   272,   287,
     300,   312,   327,   331,   343,   358,   362,   367,   371,   376,
     380,   385,   390,   389,   429,   434,   433,   466,   471,   475,
     479,   493,   494,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   507,   508,   512,   516,   520,   529,   537,   547,
     580,   604,   608,   609,   610,   611,   612,   613,   614,   615,
     616,   617,   622,   623,   627,   635,   645,   646,   653,   654,
     655,   674,   675,   679,   684,   685,   686,   690,   691,   695,
     696,   697,   698,   699,   700,   701,   706,   707,   708,   711,
     712,   713,   714,   717,   718,   721,   721,   744,   746,   748,
     750,   752,   754,   756,   758,   765,   766,   770,   771,   775,
     776,   780,   781,   782,   788,   834,   787,   855,   856,   861,
     860,   870,   869,   881,   880,   914,   918,   913,   962,   974,
     989,  1000,  1001,  1002,  1003,  1004,  1005,  1006,  1010,  1011,
    1024,  1032,  1033,  1037,  1038,  1039,  1040,  1041,  1045,  1051,
    1060,  1061,  1065
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CONSTANT", "STRING_LITERAL", "SIZEOF",
  "IDENTIFIER", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP",
  "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN",
  "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN",
  "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME",
  "I_RD", "O_RD", "'+'", "'-'", "'*'", "'/'", "'%'", "'<'", "'>'", "'&'",
  "'^'", "'|'", "'='", "'{'", "'}'", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "CLASS", "STRUCT",
  "UNION", "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH",
  "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "T_printf",
  "T_scanf", "T_cin", "T_cout", "IFX", "'('", "')'", "'['", "']'", "'.'",
  "','", "'~'", "'!'", "'?'", "':'", "';'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression", "$@1",
  "logical_or_expression", "$@2", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "type_specifier",
  "specifier_qualifier_list", "declarator", "direct_declarator",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "statement", "print_statement", "tempx", "scan_statement",
  "compound_statement", "@3", "temp1", "declaration_list",
  "statement_list", "expression_statement", "for_expression_statement",
  "selection_statement", "@4", "$@5", "else_stmt", "iteration_statement",
  "$@6", "temp2", "@7", "for_2", "@8", "$@9", "@10", "for_expression",
  "for_update", "f_postfix_expression", "f_unary_expression",
  "jump_statement", "translation_unit", "class_declaration",
  "external_declaration", "function_definition", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,    43,    45,    42,    47,    37,    60,    62,    38,    94,
     124,    61,   123,   125,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,    40,    41,    91,    93,    46,    44,   126,    33,
      63,    58,    59
};
# endif

#define YYPACT_NINF -141

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-141)))

#define YYTABLE_NINF -56

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     888,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,     6,  -141,    32,  -141,   671,  -141,  -141,  -141,
       5,  -141,  -141,    22,   -73,  -141,   131,    56,  -141,  -141,
    -141,   933,   -10,    32,  -141,   798,  -141,  -141,    19,   819,
      16,    72,  -141,  -141,    77,  -141,  -141,   891,  -141,   927,
     927,  -141,  -141,  -141,  -141,   798,   927,  -141,  -141,   209,
      55,   999,   927,   187,   194,   234,    99,   232,    91,   122,
     135,   108,    15,  -141,  -141,  -141,   160,  -141,  -141,   -42,
    -141,  -141,  -141,   104,  -141,   103,   730,  -141,  -141,  -141,
    -141,   -33,  -141,   -16,  -141,  -141,   829,   927,   172,  -141,
    -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
     927,  -141,   927,   927,   927,   927,   927,   927,   927,   927,
     927,   927,   927,   927,   927,   927,   927,   927,   181,   927,
     184,  -141,   141,  -141,    18,   153,   157,   174,  -141,   -44,
    -141,    32,  -141,  -141,  -141,  -141,  -141,   225,   290,  -141,
    -141,  -141,  -141,  -141,   235,  -141,  -141,   944,  -141,   183,
    -141,   767,  -141,   927,  -141,    38,  -141,   -76,  -141,  -141,
    -141,  -141,  -141,   187,   187,   194,   194,   234,   234,   234,
     234,    99,    99,   232,    91,   122,   927,    68,   927,   927,
     188,  -141,   -22,   265,   267,    93,   -26,  -141,  -141,  -141,
     355,  -141,  -141,   420,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,   927,  -141,   135,   927,   108,    84,   550,  -141,  -141,
      87,    97,  -141,   185,   139,  -141,  -141,   485,  -141,   581,
    -141,  -141,  -141,  -141,    30,  -141,  -141,  -141,   276,  -141,
     276,  -141,   185,  -141,   612,  -141,   677,  -141,    31,   100,
     107,  -141,  -141,   190,  -141,  -141,  -141,   215,  -141,    49,
     677,  -141,   677,    49,    49,   242,   202,   199,    67,  -141,
    -141,  -141,  -141,  -141,  -141,  -141,  -141,    49,   838,   927,
     281,   677,  -141,  -141,   113,    65,  -141,  -141,  -141,  -141
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   177,    91,    83,    84,    85,    86,    89,    90,    87,
      88,    82,     0,   181,     0,    76,     0,   175,   173,   180,
       0,    81,    95,     0,     0,    77,    79,    94,     1,   176,
     174,     0,     0,     0,    75,     0,   125,   182,     0,     0,
       0,     0,    96,    78,    79,     3,     4,     0,     2,     0,
       0,    23,    24,    22,    21,     0,     0,    25,    26,     6,
      15,    27,     0,    31,    34,    37,    42,    45,    47,    49,
      51,    54,    57,    59,   104,    80,     0,   101,   100,     0,
      98,    27,    74,     0,   179,     0,     0,    19,    16,    17,
     107,     0,    72,     0,    11,    12,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    61,
       0,    18,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   127,     0,   149,     0,     0,     0,     0,   139,     0,
     135,     0,   137,   114,   115,   109,   126,     0,     0,   110,
     111,   112,   113,    99,     0,    97,   178,    93,   103,     0,
     105,     0,     5,     0,     8,     0,    13,     0,    10,    60,
      28,    29,    30,    32,    33,    35,    36,    40,    41,    38,
      39,    43,    44,    46,    48,    50,     0,     0,     0,     0,
       0,   171,     0,     0,     0,     0,     0,   140,   129,   136,
       0,   128,   138,     0,   102,    92,    20,   106,   108,    73,
       9,     0,     7,    53,     0,    56,     0,     0,   150,   172,
       0,     0,   120,   119,     0,   118,   130,     0,   131,     0,
      14,    58,   144,   141,     0,   143,   151,   116,     0,   123,
       0,   122,   121,   133,     0,   132,     0,   142,     0,     0,
       0,   134,   145,   155,   152,   117,   124,   147,   153,     0,
       0,   146,     0,     0,     0,   161,     0,   159,   168,   160,
     148,   154,   169,   170,   166,   167,   156,     0,     0,     0,
       0,     0,   158,   163,     0,     0,   165,   157,   164,   162
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,   -78,  -141,    10,   -32,  -141,   144,   137,    86,   138,
     164,   165,   163,   114,   116,  -141,  -141,  -141,   -37,   -35,
    -141,   -55,  -141,   -70,    13,  -141,   273,   -81,   151,    45,
    -141,   -92,  -141,   -52,  -141,  -102,  -141,  -141,  -141,   283,
    -141,  -141,  -140,  -131,    62,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,    34,  -141,
    -141,     1,  -141,  -141,   296,    85,  -141
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,    60,   165,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,   128,    72,   130,    73,    92,
     110,   139,    83,    13,   141,    24,    25,    15,   158,    44,
      27,    79,   159,    75,    91,   142,   143,   196,   144,   145,
      76,   146,   147,   148,   149,   236,   150,   246,   257,   261,
     151,   190,   218,   248,   254,   262,   259,   281,   266,   267,
     268,   269,   152,    16,    17,    18,    19
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      74,    93,    82,    90,   224,   157,   140,    81,   203,   212,
     160,   163,    20,    14,    33,    87,   200,    88,    89,    34,
      74,    45,    46,    47,    48,    77,    49,    50,    22,    14,
     111,    93,   -55,    21,    45,    46,    47,    48,    22,    49,
      50,   153,   167,   163,    14,   154,   202,    31,   197,    51,
      52,    53,    45,    46,   161,    48,    54,   263,   264,    26,
     227,   166,    51,    52,    53,   163,   225,   162,    32,    54,
     219,   163,   229,    42,   187,   169,   157,   199,   140,   192,
     170,   171,   172,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,   244,   222,   202,    77,
      56,    30,    78,   223,    23,   129,    57,    58,    84,   208,
     191,   119,   120,    56,    23,    85,    41,   163,    35,    57,
      58,   210,   247,   138,   -52,   211,    74,   202,   209,   125,
     140,    56,   242,   199,   216,   121,   122,    96,    38,    97,
      39,    98,   202,   241,   252,    77,   249,   235,   250,   278,
     289,   279,   163,   280,    81,   163,    81,   199,   270,   214,
     271,   126,   234,    45,    46,    47,    48,   232,    49,    50,
     237,   163,    35,    36,   238,   127,   230,   231,   168,   287,
     239,   265,    81,   255,   240,   265,   265,   154,     2,   155,
     256,    51,    52,    53,   154,   156,   288,   186,    54,   265,
     211,   188,    36,   131,   195,   177,   178,   179,   180,     3,
       4,     5,     6,     7,     8,     9,    10,    94,    95,    11,
     112,   113,   114,   189,   285,   115,   116,   132,    45,    46,
      47,    48,   133,    49,    50,   193,   134,   135,   136,   194,
     137,   204,    56,   166,   117,   118,   123,   124,    57,    58,
     274,   275,   138,     2,   175,   176,    51,    52,    53,   173,
     174,   181,   182,    54,   272,   273,   206,    36,   198,   220,
     217,   221,   154,   258,     3,     4,     5,     6,     7,     8,
       9,    10,    77,   260,    11,   276,   277,   286,   284,   183,
     185,   184,   132,    45,    46,    47,    48,   133,    49,    50,
     213,   134,   135,   136,   215,   137,    43,    56,   205,    37,
     253,   282,    29,    57,    58,     0,     0,   138,     2,     0,
       0,    51,    52,    53,     0,     0,     0,     0,    54,     0,
       0,     0,    36,   201,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,     0,     0,    11,
       0,     0,     0,     0,     0,     0,     0,   132,    45,    46,
      47,    48,   133,    49,    50,     0,   134,   135,   136,     0,
     137,     0,    56,     0,     0,     0,     0,     0,    57,    58,
       0,     0,   138,     2,     0,     0,    51,    52,    53,     0,
       0,     0,     0,    54,     0,     0,     0,    36,   226,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,     0,     0,    11,     0,     0,     0,     0,     0,
       0,     0,   132,    45,    46,    47,    48,   133,    49,    50,
       0,   134,   135,   136,     0,   137,     0,    56,     0,     0,
       0,     0,     0,    57,    58,     0,     0,   138,     2,     0,
       0,    51,    52,    53,     0,     0,     0,     0,    54,     0,
       0,     0,    36,   228,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,     0,     0,    11,
       0,     0,     0,     0,     0,     0,     0,   132,    45,    46,
      47,    48,   133,    49,    50,     0,   134,   135,   136,     0,
     137,     0,    56,     0,     0,     0,     0,     0,    57,    58,
       0,     0,   138,     2,     0,     0,    51,    52,    53,     0,
       0,     0,     0,    54,     0,     0,     0,    36,   243,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,     0,     0,    11,     0,     0,     0,     0,     0,
       0,     0,   132,    45,    46,    47,    48,   133,    49,    50,
       0,   134,   135,   136,     0,   137,     0,    56,     0,     0,
       0,     0,     0,    57,    58,     0,     0,   138,     2,     0,
       0,    51,    52,    53,    45,    46,    47,    48,    54,    49,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,     0,     0,    11,
       0,     0,    51,    52,    53,    45,    46,    47,    48,    54,
      49,    50,     0,    36,   245,     0,     0,     0,     0,     0,
       0,     0,    56,     0,     0,     0,     0,     0,    57,    58,
       0,     0,   233,    51,    52,    53,     0,     0,   132,     0,
      54,     0,     0,   133,    36,   251,     0,   134,   135,   136,
       0,   137,     0,    56,     0,     0,     0,     0,     0,    57,
      58,    28,     0,   138,     0,     0,     0,     0,     0,   132,
      45,    46,    47,    48,   133,    49,    50,     0,   134,   135,
     136,     0,   137,     0,    56,     0,     0,     0,     0,     2,
      57,    58,     0,     0,   138,     0,     0,     0,    51,    52,
      53,     0,     0,     0,     0,    54,     0,     0,     0,    36,
       3,     4,     5,     6,     7,     8,     9,    10,     0,     0,
      11,    12,     0,    45,    46,    47,    48,     0,    49,    50,
       0,     0,     0,     0,   132,     0,     0,     0,     0,   133,
       0,     0,     0,   134,   135,   136,     0,   137,     2,    56,
       0,    51,    52,    53,     0,    57,    58,     0,    54,   138,
      45,    46,    47,    48,     0,    49,    50,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,     0,     0,    11,
       0,     0,     0,     0,     0,     0,     0,     0,    51,    52,
      53,    45,    46,    47,    48,    54,    49,    50,     0,    55,
     207,     0,    56,     0,     0,     0,     0,     0,    57,    58,
       0,     0,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    45,    46,    47,    48,    54,    49,    50,     0,
      55,    45,    46,    47,    48,     0,    49,    50,     0,    56,
      51,    52,    53,     0,     0,    57,    58,    54,     0,     0,
      51,    52,    53,     0,     0,     0,     0,    54,     0,    51,
      52,    53,     0,     0,     0,     0,    54,     0,     0,     0,
      56,     0,     0,     0,     0,     0,    57,    58,     0,     1,
       0,     0,     0,     0,    45,    46,    47,    48,     0,    49,
      50,    56,     0,     0,    80,     0,     0,    57,    58,     0,
       0,    56,   164,     0,     0,     0,     2,    57,    58,     0,
      56,   283,    51,    52,    53,     0,    57,    58,     0,    54,
      45,    46,    47,    48,     0,    49,    50,     3,     4,     5,
       6,     7,     8,     9,    10,     0,     0,    11,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,    52,
      53,     2,     0,     0,     0,    54,     0,     0,     0,     0,
       0,     0,     2,    86,     0,     0,    40,     0,     0,    57,
      58,     0,     3,     4,     5,     6,     7,     8,     9,    10,
       0,     0,    11,     3,     4,     5,     6,     7,     8,     9,
      10,     0,     0,    11,     0,     0,     0,     0,     0,    56,
       0,     0,     0,     0,     0,    57,    58,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     109
};

static const yytype_int16 yycheck[] =
{
      35,    56,    39,    55,    30,    86,    76,    39,   148,    85,
      43,    87,     6,     0,    87,    47,   147,    49,    50,    92,
      55,     3,     4,     5,     6,     6,     8,     9,     6,    16,
      62,    86,    17,     1,     3,     4,     5,     6,     6,     8,
       9,    83,    97,    87,    31,    87,   148,    42,    92,    31,
      32,    33,     3,     4,    87,     6,    38,     8,     9,    14,
     200,    96,    31,    32,    33,    87,    92,    83,    23,    38,
      92,    87,   203,    83,   129,   110,   157,   147,   148,   134,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   227,     4,   200,     6,
      82,    16,    83,   195,    82,    90,    88,    89,    92,   161,
      92,    12,    13,    82,    82,    43,    31,    87,    41,    88,
      89,    83,    92,    92,    16,    87,   161,   229,   163,    38,
     200,    82,   224,   203,   189,    36,    37,    82,    82,    84,
      84,    86,   244,     4,   246,     6,   238,   217,   240,    82,
      85,    84,    87,    86,   186,    87,   188,   227,   260,    91,
     262,    39,   217,     3,     4,     5,     6,    83,     8,     9,
      83,    87,    41,    42,    87,    40,   211,   214,     6,   281,
      83,   259,   214,    83,    87,   263,   264,    87,    28,    85,
      83,    31,    32,    33,    87,    92,    83,    16,    38,   277,
      87,    17,    42,    43,    30,   119,   120,   121,   122,    49,
      50,    51,    52,    53,    54,    55,    56,     8,     9,    59,
      33,    34,    35,    82,   279,    31,    32,    67,     3,     4,
       5,     6,    72,     8,     9,    82,    76,    77,    78,    82,
      80,     6,    82,   278,    10,    11,    14,    15,    88,    89,
       8,     9,    92,    28,   117,   118,    31,    32,    33,   115,
     116,   123,   124,    38,   263,   264,    83,    42,    43,     4,
      82,     4,    87,    83,    49,    50,    51,    52,    53,    54,
      55,    56,     6,    68,    59,    83,    87,     6,   278,   125,
     127,   126,    67,     3,     4,     5,     6,    72,     8,     9,
     186,    76,    77,    78,   188,    80,    33,    82,   157,    26,
     248,   277,    16,    88,    89,    -1,    -1,    92,    28,    -1,
      -1,    31,    32,    33,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,     3,     4,
       5,     6,    72,     8,     9,    -1,    76,    77,    78,    -1,
      80,    -1,    82,    -1,    -1,    -1,    -1,    -1,    88,    89,
      -1,    -1,    92,    28,    -1,    -1,    31,    32,    33,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,     3,     4,     5,     6,    72,     8,     9,
      -1,    76,    77,    78,    -1,    80,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    88,    89,    -1,    -1,    92,    28,    -1,
      -1,    31,    32,    33,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,     3,     4,
       5,     6,    72,     8,     9,    -1,    76,    77,    78,    -1,
      80,    -1,    82,    -1,    -1,    -1,    -1,    -1,    88,    89,
      -1,    -1,    92,    28,    -1,    -1,    31,    32,    33,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,     3,     4,     5,     6,    72,     8,     9,
      -1,    76,    77,    78,    -1,    80,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    88,    89,    -1,    -1,    92,    28,    -1,
      -1,    31,    32,    33,     3,     4,     5,     6,    38,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    59,
      -1,    -1,    31,    32,    33,     3,     4,     5,     6,    38,
       8,     9,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    88,    89,
      -1,    -1,    92,    31,    32,    33,    -1,    -1,    67,    -1,
      38,    -1,    -1,    72,    42,    43,    -1,    76,    77,    78,
      -1,    80,    -1,    82,    -1,    -1,    -1,    -1,    -1,    88,
      89,     0,    -1,    92,    -1,    -1,    -1,    -1,    -1,    67,
       3,     4,     5,     6,    72,     8,     9,    -1,    76,    77,
      78,    -1,    80,    -1,    82,    -1,    -1,    -1,    -1,    28,
      88,    89,    -1,    -1,    92,    -1,    -1,    -1,    31,    32,
      33,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      59,    60,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    76,    77,    78,    -1,    80,    28,    82,
      -1,    31,    32,    33,    -1,    88,    89,    -1,    38,    92,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,     3,     4,     5,     6,    38,     8,     9,    -1,    42,
      43,    -1,    82,    -1,    -1,    -1,    -1,    -1,    88,    89,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    31,
      32,    33,     3,     4,     5,     6,    38,     8,     9,    -1,
      42,     3,     4,     5,     6,    -1,     8,     9,    -1,    82,
      31,    32,    33,    -1,    -1,    88,    89,    38,    -1,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    38,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    88,    89,    -1,     1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    82,    -1,    -1,    85,    -1,    -1,    88,    89,    -1,
      -1,    82,    83,    -1,    -1,    -1,    28,    88,    89,    -1,
      82,    83,    31,    32,    33,    -1,    88,    89,    -1,    38,
       3,     4,     5,     6,    -1,     8,     9,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    28,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    82,    -1,    -1,    43,    -1,    -1,    88,
      89,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    59,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    88,    89,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    28,    49,    50,    51,    52,    53,    54,    55,
      56,    59,    60,   116,   117,   120,   156,   157,   158,   159,
       6,     1,     6,    82,   118,   119,   122,   123,     0,   157,
     158,    42,   122,    87,    92,    41,    42,   132,    82,    84,
      43,   158,    83,   119,   122,     3,     4,     5,     6,     8,
       9,    31,    32,    33,    38,    42,    82,    88,    89,    94,
      95,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   109,   111,   112,   126,   133,     6,    83,   124,
      85,    97,   111,   115,    92,    43,    82,    97,    97,    97,
     126,   127,   112,   114,     8,     9,    82,    84,    86,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    41,
     113,    97,    33,    34,    35,    31,    32,    10,    11,    12,
      13,    36,    37,    14,    15,    38,    39,    40,   108,    90,
     110,    43,    67,    72,    76,    77,    78,    80,    92,   114,
     116,   117,   128,   129,   131,   132,   134,   135,   136,   137,
     139,   143,   155,    83,    87,    85,    92,   120,   121,   125,
      43,    87,    83,    87,    83,    96,   112,   114,     6,   112,
      97,    97,    97,    99,    99,   100,   100,   101,   101,   101,
     101,   102,   102,   103,   104,   105,    16,   114,    17,    82,
     144,    92,   114,    82,    82,    30,   130,    92,    43,   116,
     136,    43,   128,   135,     6,   121,    83,    43,   126,   112,
      83,    87,    85,   106,    91,   107,   114,    82,   145,    92,
       4,     4,     4,   124,    30,    92,    43,   135,    43,   136,
     112,   111,    83,    92,   114,   116,   138,    83,    87,    83,
      87,     4,   124,    43,   136,    43,   140,    92,   146,   124,
     124,    43,   128,   137,   147,    83,    83,   141,    83,   149,
      68,   142,   148,     8,     9,    94,   151,   152,   153,   154,
     128,   128,   154,   154,     8,     9,    83,    87,    82,    84,
      86,   150,   151,    83,    96,   114,     6,   128,    83,    85
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    94,    95,    95,    95,    95,
      95,    95,    95,    96,    96,    97,    97,    97,    97,    97,
      97,    98,    98,    98,    98,    98,    98,    99,    99,    99,
      99,   100,   100,   100,   101,   101,   101,   102,   102,   102,
     102,   102,   103,   103,   103,   104,   104,   105,   105,   106,
     106,   107,   108,   107,   109,   110,   109,   111,   111,   112,
     112,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   114,   114,   115,   116,   117,   118,   118,   119,
     119,   119,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   121,   121,   122,   123,   123,   123,   123,   123,
     123,   124,   124,   125,   126,   126,   126,   127,   127,   128,
     128,   128,   128,   128,   128,   128,   129,   129,   129,   130,
     130,   130,   130,   131,   131,   133,   132,   134,   134,   134,
     134,   134,   134,   134,   134,   135,   135,   136,   136,   137,
     137,   138,   138,   138,   140,   141,   139,   142,   142,   144,
     143,   146,   145,   148,   147,   149,   150,   147,   151,   151,
     152,   153,   153,   153,   153,   153,   153,   153,   154,   154,
     154,   155,   155,   156,   156,   156,   156,   156,   157,   157,
     158,   158,   159
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     2,     2,     1,     3,     1,     2,     2,     2,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     0,     4,     1,     0,     4,     1,     5,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     1,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     3,     4,     3,     4,
       3,     1,     3,     1,     1,     3,     4,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     4,     6,     3,     2,
       2,     3,     3,     4,     6,     0,     3,     1,     2,     2,
       3,     3,     4,     4,     5,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     0,     0,     8,     0,     2,     0,
       3,     0,     4,     0,     4,     0,     0,     6,     3,     1,
       1,     1,     4,     3,     4,     3,     2,     2,     1,     2,
       2,     2,     3,     1,     2,     1,     2,     1,     6,     5,
       1,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      YY_LAC_DISCARD ("YYBACKUP");                              \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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

/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return 1 if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYSIZE_T *yycapacity, YYSIZE_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yytype_int16 **yybottom,
                      yytype_int16 *yybottom_no_free,
                      yytype_int16 **yytop, yytype_int16 *yytop_empty)
{
  YYSIZE_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYSIZE_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYSIZE_T yyalloc = 2 * yysize_new;
      yytype_int16 *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        (yytype_int16*) YYSTACK_ALLOC (yyalloc * sizeof *yybottom_new);
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                         \
do {                                                             \
  if (!yy_lac_established)                                       \
    {                                                            \
      YYDPRINTF ((stderr,                                        \
                  "LAC: initial context established for %s\n",   \
                  yytname[yytoken]));                            \
      yy_lac_established = 1;                                    \
      {                                                          \
        int yy_lac_status =                                      \
          yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken); \
        if (yy_lac_status == 2)                                  \
          goto yyexhaustedlab;                                   \
        if (yy_lac_status == 1)                                  \
          goto yyerrlab;                                         \
      }                                                          \
    }                                                            \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      if (yydebug)                                                       \
        YYFPRINTF (stderr, "LAC: initial context discarded due to "      \
                   Event "\n");                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return 2 if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yytype_int16 *yyesa, yytype_int16 **yyes,
        YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
{
  yytype_int16 *yyes_prev = yyssp;
  yytype_int16 *yyesp = yyes_prev;
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yytname[yytoken]));
  if (yytoken == YYUNDEFTOK)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          yyrule = yydefact[*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      {
        YYSIZE_T yylen = yyr2[yyrule];
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
        if (yyesp != yyes_prev)
          {
            YYSIZE_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yylen -= yysize;
                yyesp = yyes_prev;
              }
          }
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      {
        int yystate;
        {
          int yylhs = yyr1[yyrule] - YYNTOKENS;
          yystate = yypgoto[yylhs] + *yyesp;
          if (yystate < 0 || YYLAST < yystate
              || yycheck[yystate] != *yyesp)
            yystate = yydefgoto[yylhs];
          else
            yystate = yytable[yystate];
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            *yyesp = yystate;
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return 2;
              }
            *++yyesp = yystate;
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store or if
   yy_lac returned 2.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyesa, yytype_int16 **yyes,
                YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          int yyx;

          for (yyx = 0; yyx < YYNTOKENS; ++yyx)
            if (yyx != YYTERROR && yyx != YYUNDEFTOK)
              {
                {
                  int yy_lac_status = yy_lac (yyesa, yyes, yyes_capacity,
                                              yyssp, yyx);
                  if (yy_lac_status == 2)
                    return 2;
                  if (yy_lac_status == 1)
                    continue;
                }
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
# if YYDEBUG
      else if (yydebug)
        YYFPRINTF (stderr, "No expected tokens.\n");
# endif
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

    yytype_int16 yyesa[20];
    yytype_int16 *yyes;
    YYSIZE_T yyes_capacity;

  int yy_lac_established = 0;
  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  yyes = yyesa;
  yyes_capacity = sizeof yyesa / sizeof *yyes;
  if (YYMAXDEPTH < yyes_capacity)
    yyes_capacity = YYMAXDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      YY_LAC_ESTABLISH;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  YY_LAC_DISCARD ("shift");

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
          case 2:
#line 117 "sym_tab.y" /* yacc.c:1646  */
    {
			if ( !test.declaration_exists( (yyvsp[0].node)->get_identifier(), scope_count ) )
			{
				flag = 0;
				cout << "\n" << "Identifier " << (yyvsp[0].node)->get_identifier() <<" not declared previously\n";
			}
			(yyval.str) = strdup((yyvsp[0].node)->get_identifier().c_str());
		}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 127 "sym_tab.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[0].str);
		}
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 130 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 131 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[-1].str); }
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 136 "sym_tab.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[0].str);
			// cout << "\nasdasd\n" << type->get_type();

		}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 145 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); 
	}
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 147 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); 
	}
#line 2198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 158 "sym_tab.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[0].str);
		}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 161 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); 
	}
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 163 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); 
	}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 165 "sym_tab.y" /* yacc.c:1646  */
    {;}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 166 "sym_tab.y" /* yacc.c:1646  */
    {;}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 167 "sym_tab.y" /* yacc.c:1646  */
    {;}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 183 "sym_tab.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[0].str);
		}
#line 2246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 187 "sym_tab.y" /* yacc.c:1646  */
    { 
			char temp[10];
			strcpy(temp,create_temp());
			quple* new_record = new quple("expression", "*", (yyvsp[-2].str), (yyvsp[0].str), temp, (yylsp[-2]).first_line, (yylsp[-2]).first_column);
			test_q.insert_quple(new_record);
			strcat((yyvsp[-2].str), "*");
			strcat((yyvsp[-2].str), (yyvsp[0].str));
			test.insert((yylsp[-2]).first_line, temp, "TEMP", (yyvsp[-2].str), 0, scope_count, (yylsp[-2]).first_column);
			(yyval.str) = temp;
		}
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 198 "sym_tab.y" /* yacc.c:1646  */
    { 	
			char temp[10];
			strcpy(temp,create_temp());
			quple* new_record = new quple("expression", "/", (yyvsp[-2].str), (yyvsp[0].str), temp, (yylsp[-2]).first_line, (yylsp[-2]).first_column);
			test_q.insert_quple(new_record);
			strcat((yyvsp[-2].str), "/");
			strcat((yyvsp[-2].str), (yyvsp[0].str));
			test.insert((yylsp[-2]).first_line, temp, "TEMP", (yyvsp[-2].str), 0, scope_count, (yylsp[-2]).first_column);
			(yyval.str) = temp;
		}
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 209 "sym_tab.y" /* yacc.c:1646  */
    { 
			char temp[10];
			strcpy(temp,create_temp());
			quple* new_record = new quple("expression", "%", (yyvsp[-2].str), (yyvsp[0].str), temp, (yylsp[-2]).first_line, (yylsp[-2]).first_column);
			test_q.insert_quple(new_record);
			strcat((yyvsp[-2].str), "%");
			strcat((yyvsp[-2].str), (yyvsp[0].str));
			test.insert((yylsp[-2]).first_line, temp, "TEMP", (yyvsp[-2].str), 0, scope_count, (yylsp[-2]).first_column);
			(yyval.str) = temp;
		}
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 223 "sym_tab.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[0].str);
		}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 227 "sym_tab.y" /* yacc.c:1646  */
    { 
			//vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1);
			char* temp = new char[10];
			strcpy(temp, create_temp());
			quple* new_record = new quple("expression", "+", (yyvsp[-2].str), (yyvsp[0].str), temp, (yylsp[-2]).first_line, (yylsp[-2]).first_column);

			test_q.insert_quple(new_record);
			strcat((yyvsp[-2].str), "+");
			strcat((yyvsp[-2].str), (yyvsp[0].str));
			// cout << temp << "\n";
			test.insert((yylsp[-2]).first_line, temp, "TEMP", (yyvsp[-2].str), 0, scope_count, (yylsp[-2]).first_column);
			(yyval.str) = temp;
		}
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 241 "sym_tab.y" /* yacc.c:1646  */
    { 
			//vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1);
			
			char* temp = new char[10];
			strcpy(temp, create_temp());
			quple* new_record = new quple("expression", "-", (yyvsp[-2].str), (yyvsp[0].str), temp, (yylsp[-2]).first_line, (yylsp[-2]).first_column);

			test_q.insert_quple(new_record);
			strcat((yyvsp[-2].str), "-");
			strcat((yyvsp[-2].str), (yyvsp[0].str));
			test.insert((yylsp[-2]).first_line, temp, "TEMP", (yyvsp[-2].str), 0, scope_count, (yylsp[-2]).first_column);
			(yyval.str) = temp;
		}
#line 2335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 258 "sym_tab.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[0].str);
		}
#line 2343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 261 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); 
	}
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 263 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); 
	}
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 269 "sym_tab.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[0].str);
		}
#line 2365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 273 "sym_tab.y" /* yacc.c:1646  */
    { 
			//vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1);

			char* temp = new char[10];
			strcpy(temp, create_temp());
			quple* new_record = new quple("expression", "<", (yyvsp[-2].str), (yyvsp[0].str), temp, (yylsp[-2]).first_line, (yylsp[-2]).first_column);

			test_q.insert_quple(new_record);
			strcat((yyvsp[-2].str), "<");
			strcat((yyvsp[-2].str), (yyvsp[0].str));
			test.insert((yylsp[-2]).first_line, temp, "TEMP", (yyvsp[-2].str), 0, scope_count, (yylsp[-2]).first_column);
			(yyval.str) = temp;

		}
#line 2384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 288 "sym_tab.y" /* yacc.c:1646  */
    { 
			//vector<string> temp1{$1, $2, $3}; $$ = conversion(temp1); 
			char* temp = new char[10];
			strcpy(temp, create_temp());
			quple* new_record = new quple("expression", ">", (yyvsp[-2].str), (yyvsp[0].str), temp, (yylsp[-2]).first_line, (yylsp[-2]).first_column);

			test_q.insert_quple(new_record);
			strcat((yyvsp[-2].str), ">");
			strcat((yyvsp[-2].str), (yyvsp[0].str));
			test.insert((yylsp[-2]).first_line, temp, "TEMP", (yyvsp[-2].str), 0, scope_count, (yylsp[-2]).first_column);
			(yyval.str) = temp;
		}
#line 2401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 301 "sym_tab.y" /* yacc.c:1646  */
    { 
			char* temp = new char[10];
			strcpy(temp, create_temp());
			quple* new_record = new quple("expression", "<=", (yyvsp[-2].str), (yyvsp[0].str), temp, (yylsp[-2]).first_line, (yylsp[-2]).first_column);

			test_q.insert_quple(new_record);
			strcat((yyvsp[-2].str), "<=");
			strcat((yyvsp[-2].str), (yyvsp[0].str));
			test.insert((yylsp[-2]).first_line, temp, "TEMP", (yyvsp[-2].str), 0, scope_count, (yylsp[-2]).first_column);
			(yyval.str) = temp;
		}
#line 2417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 313 "sym_tab.y" /* yacc.c:1646  */
    { 
			char* temp = new char[10];
			strcpy(temp, create_temp());
			quple* new_record = new quple("expression", ">=", (yyvsp[-2].str), (yyvsp[0].str), temp, (yylsp[-2]).first_line, (yylsp[-2]).first_column);

			test_q.insert_quple(new_record);
			strcat((yyvsp[-2].str), ">=");
			strcat((yyvsp[-2].str), (yyvsp[0].str));
			test.insert((yylsp[-2]).first_line, temp, "TEMP", (yyvsp[-2].str), 0, scope_count, (yylsp[-2]).first_column);
			(yyval.str) = temp;
		}
#line 2433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 328 "sym_tab.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[0].str);
		}
#line 2441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 332 "sym_tab.y" /* yacc.c:1646  */
    { 
			char* temp = new char[10];
			strcpy(temp, create_temp());
			quple* new_record = new quple("expression", "==", (yyvsp[-2].str), (yyvsp[0].str), temp, (yylsp[-2]).first_line, (yylsp[-2]).first_column);

			test_q.insert_quple(new_record);
			strcat((yyvsp[-2].str), "==");
			strcat((yyvsp[-2].str), (yyvsp[0].str));
			test.insert((yylsp[-2]).first_line, temp, "TEMP", (yyvsp[-2].str), 0, scope_count, (yylsp[-2]).first_column);
			(yyval.str) = temp;
		}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 344 "sym_tab.y" /* yacc.c:1646  */
    { 
			char* temp = new char[10];
			strcpy(temp, create_temp());
			quple* new_record = new quple("expression", "!=", (yyvsp[-2].str), (yyvsp[0].str), temp, (yylsp[-2]).first_line, (yylsp[-2]).first_column);

			test_q.insert_quple(new_record);
			strcat((yyvsp[-2].str), "!=");
			strcat((yyvsp[-2].str), (yyvsp[0].str));
			test.insert((yylsp[-2]).first_line, temp, "TEMP", (yyvsp[-2].str), 0, scope_count, (yylsp[-2]).first_column);
			(yyval.str) = temp;
		}
#line 2473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 359 "sym_tab.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[0].str);
		}
#line 2481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 362 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); 
	}
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 368 "sym_tab.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[0].str);
		}
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 371 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); 
	}
#line 2503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 377 "sym_tab.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[0].str);
		}
#line 2511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 380 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); 
	}
#line 2518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 386 "sym_tab.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[0].str);
		}
#line 2526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 390 "sym_tab.y" /* yacc.c:1646  */
    {
			// if($1[0]!='x')
			{
				quple* new_record;
				char* t_label = new char[10];
				strcpy(t_label, create_label());
				label_count;

			if((yyvsp[0].str)[0]!='x')
				{
					new_record = new quple("conditional_goto", (yyvsp[0].str), "", "", t_label, (yylsp[0]).first_line, (yylsp[0]).first_column);
					test_q.insert_quple(new_record);
				}
				
				new_record = new quple("label", (yyvsp[0].str), "", "", t_label, (yylsp[0]).first_line, (yylsp[0]).first_column);
				test_q.insert_quple(new_record);
			}
		}
#line 2549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 409 "sym_tab.y" /* yacc.c:1646  */
    { 
			quple* new_record;
			char* t_label = new char[10];
			strcpy(t_label, create_label());
			label_count--;

			if((yyvsp[0].str)[0]!='x')
			{
				new_record = new quple("conditional_goto", (yyvsp[0].str), "", "", t_label, (yylsp[-3]).first_line, (yylsp[-3]).first_column);
				test_q.insert_quple(new_record);
			}


			char* flag_f = new char[10];
			strcpy(flag_f, "x");
			(yyval.str) = flag_f;
		}
#line 2571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 430 "sym_tab.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[0].str);
		}
#line 2579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 434 "sym_tab.y" /* yacc.c:1646  */
    {
			if((yyvsp[0].str)[0]!='x')
			{
				quple* new_record;
				char* t_label = new char[10];
				strcpy(t_label, create_label());
				label_count--;

				new_record = new quple("conditional_goto", (yyvsp[0].str), "", "", t_label, (yylsp[0]).first_line, (yylsp[0]).first_column);
				test_q.insert_quple(new_record);
			}
		}
#line 2596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 447 "sym_tab.y" /* yacc.c:1646  */
    { 
			quple* new_record;
			char* t_label = new char[10];
			strcpy(t_label, create_label());
			label_count--;

			if((yyvsp[0].str)[0]!='x')
			{
				new_record = new quple("conditional_goto", (yyvsp[0].str), "", "", t_label, (yylsp[-3]).first_line, (yylsp[-3]).first_column);
				test_q.insert_quple(new_record);
			}

			char* flag_f = new char[10];
			strcpy(flag_f, "x");
			(yyval.str) = flag_f;
		}
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 467 "sym_tab.y" /* yacc.c:1646  */
    { 
			final_or;
			(yyval.str) = (yyvsp[0].str);
		}
#line 2626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 476 "sym_tab.y" /* yacc.c:1646  */
    { 
			(yyval.str) = (yyvsp[0].str);
		}
#line 2634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 480 "sym_tab.y" /* yacc.c:1646  */
    {
		// cout<<"HERE!\n";
		// cout<<$1<<"\n"<<$3<<"\n";
		if( !test.update_identifier((yyvsp[-2].str), scope_count, (yyvsp[0].str)) )
		{
			cout<<"Failure\n";
		}
		quple* new_record = new quple("assignment", "", (yyvsp[0].str), "", (yyvsp[-2].str), (yylsp[-2]).first_line, (yylsp[-2]).first_column);
		test_q.insert_quple(new_record);
	}
#line 2649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 493 "sym_tab.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 2655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 512 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str)=(yyvsp[0].str); }
#line 2661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 521 "sym_tab.y" /* yacc.c:1646  */
    { 
			(yyvsp[0].node)->set_size(size_map[(yyvsp[0].node)->get_type()]); 					   
			type = (yyvsp[0].node);
			(yyval.node) = (yyvsp[0].node);
		}
#line 2671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 530 "sym_tab.y" /* yacc.c:1646  */
    {
		// if(for_scope)
		// {
		// 	--for_scope;
		// }
	}
#line 2682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 538 "sym_tab.y" /* yacc.c:1646  */
    {
		// if(for_scope)
		// {
		// 	--for_scope;
		// }
	}
#line 2693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 548 "sym_tab.y" /* yacc.c:1646  */
    {
			// string temp = $1->get_identifier();
			// int temp_size = $1->get_size();

			// $1 = new node(*type); 
			
			// $1->set_identifier(temp); 
			// $1->set_col_no(@1.first_column);
			// if(temp_size!=0)
			// {
			// 	$1->set_size($1->get_size()*temp_size);
			// }
			// test.insert(*$1);

			int temp_size = (yyvsp[0].node)->get_size();
			// printf("\nSIZE: %d\n", type->get_size());
			if(temp_size!=0)
			{
				(yyvsp[0].node)->set_size(type->get_size()*temp_size);
			}
			else
			{
				// printf("\nSIZE: %d\n", $1->get_size());
				
				(yyvsp[0].node)->set_size(type->get_size());
				// printf("\nSIZE: %d\n", $1->get_size());
				// cout<<*$1;
			}
			// test.insert(*$1);
			(yyvsp[0].node)->set_type( type->get_type() );
			test.insert((yyvsp[0].node));
		}
#line 2730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 581 "sym_tab.y" /* yacc.c:1646  */
    {
			// string temp = $1->get_identifier();
			// $1 = new node(*type);
			// $1->set_identifier(temp); 
			// $1->set_value($3);
			// $1->set_col_no(@1.first_column);
			// test.insert(*$1);
			(yyvsp[-2].node)->set_value((yyvsp[0].str));
			int temp_size = (yyvsp[-2].node)->get_size();
			if( temp_size!=0 )
			{
				(yyvsp[-2].node)->set_size( type->get_size() * temp_size );
			}
			else
			{
				(yyvsp[-2].node)->set_size( type->get_size() );
			}
			(yyvsp[-2].node)->set_type( type->get_type() );
			test.insert((yyvsp[-2].node));

			quple* new_record = new quple("assignment","",(yyvsp[0].str),"",(yyvsp[-2].node)->get_identifier(), (yylsp[-2]).first_line, (yylsp[-2]).first_column);
			test_q.insert_quple(new_record); 
		}
#line 2758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 608 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.node) = new node((yylsp[0]).first_line, "", (yyvsp[0].str), "", 0, scope_count, (yylsp[0]).first_column); }
#line 2764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 609 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.node) = new node((yylsp[0]).first_line, "", (yyvsp[0].str), "", 0, scope_count, (yylsp[0]).first_column); }
#line 2770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 610 "sym_tab.y" /* yacc.c:1646  */
    {;}
#line 2776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 611 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.node) = new node((yylsp[0]).first_line, "", (yyvsp[0].str), "", 0, scope_count, (yylsp[0]).first_column); }
#line 2782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 612 "sym_tab.y" /* yacc.c:1646  */
    {;}
#line 2788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 613 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.node) = new node((yylsp[0]).first_line, "", (yyvsp[0].str), "", 0, scope_count, (yylsp[0]).first_column); }
#line 2794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 614 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.node) = new node((yylsp[0]).first_line, "", (yyvsp[0].str), "", 0, scope_count, (yylsp[0]).first_column); }
#line 2800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 615 "sym_tab.y" /* yacc.c:1646  */
    {;}
#line 2806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 616 "sym_tab.y" /* yacc.c:1646  */
    {;}
#line 2812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 617 "sym_tab.y" /* yacc.c:1646  */
    {;}
#line 2818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 627 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 2824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 636 "sym_tab.y" /* yacc.c:1646  */
    { 	
			if(test.declaration_exists_scope( (yyvsp[0].node)->get_identifier(), scope_count))
			{
				flag=0;
				cout << "\n" <<"Identifier " << (yyvsp[0].node)->get_identifier() << " already declared previously\n";
			}
			(yyval.node) = (yyvsp[0].node); 
		}
#line 2837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 645 "sym_tab.y" /* yacc.c:1646  */
    {;}
#line 2843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 647 "sym_tab.y" /* yacc.c:1646  */
    { 
		int temp = (yyvsp[-3].node)->get_size()?(yyvsp[-3].node)->get_size():1; 
		// $$ = new node(@1.first_line, $1->get_identifier(), "", "", temp * atoi($3), scope_count, @1.first_column);
		(yyvsp[-3].node)->set_size( temp * atoi((yyvsp[-1].str)) );
		(yyval.node) = (yyvsp[-3].node);
	}
#line 2854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 655 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[-2].node); }
#line 2860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 695 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 696 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 697 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 698 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 699 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 700 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 701 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 721 "sym_tab.y" /* yacc.c:1646  */
    {
		// cout<<"HERE\n";
		// cout<<"Value of for scope is "<<for_scope<<"\n";
			if(for_scope)
			{
				for_scope--;
				// cout<<"For scope value is "<<scope_count<<"\n";
			}
			else
			{
				test.create_map(++scope_count);
			}
		// cout<<"DISPLAY \n";
		// test.display();
		// cout<<"SCope count is "<<scope_count<<"\n";
		}
#line 2923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 738 "sym_tab.y" /* yacc.c:1646  */
    {
			(yyval.str) = (yyvsp[-1].str);
		}
#line 2931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 745 "sym_tab.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 747 "sym_tab.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 749 "sym_tab.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 751 "sym_tab.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 753 "sym_tab.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 755 "sym_tab.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 757 "sym_tab.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 759 "sym_tab.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 770 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 771 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[-1].str); }
#line 2991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 788 "sym_tab.y" /* yacc.c:1646  */
    {
			// cout<<"\n\nDEBUG\n\n";
			quple* new_record;
			if((yyvsp[-1].str)[0]!='x')
			{
				char* true_label = new char[10];
				strcpy(true_label,create_label());
				new_record = new quple("conditional_goto", (yyvsp[-1].str), "", "", true_label, (yylsp[-3]).first_line, (yylsp[-3]).first_column);
				test_q.insert_quple(new_record);
				


				char* false_label = new char[10];
				strcpy(false_label,create_label());
				new_record = new quple("goto","","","",false_label, (yylsp[-3]).first_line, (yylsp[-3]).first_column); 
				test_q.insert_quple(new_record);



				new_record = new quple("label","","","",true_label, (yylsp[-3]).first_line, (yylsp[-3]).first_column);
				test_q.insert_quple(new_record);
				(yyval.str) = false_label;


				
			}
			else
			{
				char* true_label = new char[10];
				strcpy(true_label,create_label());

				char* false_label = new char[10];
				strcpy(false_label,create_label());
				new_record = new quple("goto","","","",false_label, (yylsp[-3]).first_line, (yylsp[-3]).first_column); 
				test_q.insert_quple(new_record);



				new_record = new quple("label","","","",true_label, (yylsp[-3]).first_line, (yylsp[-3]).first_column);
				test_q.insert_quple(new_record);
				(yyval.str) = false_label;
			}

		}
#line 3040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 834 "sym_tab.y" /* yacc.c:1646  */
    {
			// cout<<"\n\nDEBUG\n\n";
			char final_label[10];
			sprintf(final_label, "final_%d", final_no);
			quple* new_record = new quple("goto","","","",final_label , (yylsp[-5]).first_line, (yylsp[-5]).first_column);
        	test_q.insert_quple(new_record);


			new_record = new quple("label","","","",(yyvsp[-1].str), (yylsp[-5]).first_line, (yylsp[-5]).first_column);
        	test_q.insert_quple(new_record);
		}
#line 3056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 846 "sym_tab.y" /* yacc.c:1646  */
    {
			char final_label[10];
			sprintf(final_label, "final_%d", final_no++);
			quple* new_record = new quple("label","","","",final_label, (yylsp[-7]).first_line, (yylsp[-7]).first_column);
        	test_q.insert_quple(new_record);
		}
#line 3067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 861 "sym_tab.y" /* yacc.c:1646  */
    {
			++for_scope;
			test.create_map(++scope_count);
		// cout<<"For scope is "<<for_scope<<"\n";
		}
#line 3077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 870 "sym_tab.y" /* yacc.c:1646  */
    {
			char* for_label = new char[10];
			strcpy(for_label,create_label());
			quple* new_record = new quple("label", "", "", "", for_label, (yylsp[-1]).first_line, (yylsp[-1]).first_column);
			test_q.insert_quple(new_record);
			(yyval.str) = for_label;
			fl_list.push_back(for_label);
		}
#line 3090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 881 "sym_tab.y" /* yacc.c:1646  */
    {
			quple* new_record;
			char* body_label = new char[10];
			char* break_label = new char[10];
			strcpy(body_label,create_label());
			strcpy(break_label,create_label());
			if((yyvsp[-1].str)[0]!=';')
				new_record = new quple("conditional_goto",(yyvsp[-1].str),"","",body_label, (yylsp[-1]).first_line, (yylsp[-1]).first_column);
			else
				new_record = new quple("conditional_goto","1","","",body_label, (yylsp[-1]).first_line, (yylsp[-1]).first_column);
			test_q.insert_quple(new_record);
			new_record = new quple("goto","","","",break_label, (yylsp[-1]).first_line, (yylsp[-1]).first_column);
			test_q.insert_quple(new_record);
			new_record = new quple("label","","","",body_label, (yylsp[-1]).first_line, (yylsp[-1]).first_column);
			test_q.insert_quple(new_record);
        	(yyval.str)=break_label;
		}
#line 3112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 899 "sym_tab.y" /* yacc.c:1646  */
    {
			char* for_label = new char[10];
			strcpy(for_label,fl_list.back());
			fl_list.pop_back();
			quple* new_record = new quple("goto","","","",for_label, (yylsp[-3]).first_line, (yylsp[-3]).first_column);
			test_q.insert_quple(new_record);


			char* break_label = new char[10];
			strcpy(break_label,(yyvsp[-1].str));
			new_record = new quple("label","","","",break_label, (yylsp[-3]).first_line, (yylsp[-3]).first_column);
			test_q.insert_quple(new_record);

		}
#line 3131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 914 "sym_tab.y" /* yacc.c:1646  */
    {
			num_to_pop.push_back(1);
		}
#line 3139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 918 "sym_tab.y" /* yacc.c:1646  */
    {
			quple* new_record;
			char* body_label = new char[10];
			char* break_label = new char[10];
			strcpy(body_label,create_label());
			strcpy(break_label,create_label());
			if((yyvsp[-3].str)[0]!=';')
				new_record = new quple("conditional_goto",(yyvsp[-3].str),"","",body_label, (yylsp[-3]).first_line, (yylsp[-3]).first_column);
			else
				new_record = new quple("conditional_goto","1","","",body_label, (yylsp[-3]).first_line, (yylsp[-3]).first_column);
			test_q.insert_quple(new_record);
			new_record = new quple("goto","","","",break_label, (yylsp[-3]).first_line, (yylsp[-3]).first_column);
			test_q.insert_quple(new_record);
			new_record = new quple("label","","","",body_label, (yylsp[-3]).first_line, (yylsp[-3]).first_column);
			test_q.insert_quple(new_record);
        	(yyval.str)=break_label;
		}
#line 3161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 936 "sym_tab.y" /* yacc.c:1646  */
    {
			int n = num_to_pop.back();
			num_to_pop.pop_back();
			while(n)
			{
				--n;
				quple* iter = test_q_for.back();
				test_q_for.pop_back();
				test_q.insert_quple(iter);
			}

			char* for_label = new char[10];
			strcpy(for_label,fl_list.back());
			fl_list.pop_back();
			quple* new_record = new quple("goto","","","",for_label, (yylsp[-5]).first_line, (yylsp[-5]).first_column);
			test_q.insert_quple(new_record);


			char* break_label = new char[10];
			strcpy(break_label,(yyvsp[-1].str));
			new_record = new quple("label","","","",break_label, (yylsp[-5]).first_line, (yylsp[-5]).first_column);
			test_q.insert_quple(new_record);
		}
#line 3189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 963 "sym_tab.y" /* yacc.c:1646  */
    {
			++num_to_pop.back();
			quple* new_record;
			int inc = f_update.back();
			f_update.pop_back();
			if(inc>=0)
				new_record = new quple("expression", "+", (yyvsp[-2].str), to_string(inc), (yyvsp[-2].str), (yylsp[-2]).first_line, (yylsp[-2]).first_column);
			else
				new_record = new quple("expression", "-", (yyvsp[-2].str), to_string(-1*inc), (yyvsp[-2].str), (yylsp[-2]).first_line, (yylsp[-2]).first_column);
			test_q_for.push_back(new_record);
		}
#line 3205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 975 "sym_tab.y" /* yacc.c:1646  */
    {
			//++num_to_pop.back();
			quple* new_record;
			int inc = f_update.back();
			f_update.pop_back();
			if(inc>=0)
				new_record = new quple("expression", "+", (yyvsp[0].str), to_string(inc), (yyvsp[0].str), (yylsp[0]).first_line, (yylsp[0]).first_column);
			else
				new_record = new quple("expression", "-", (yyvsp[0].str), to_string(-1*inc), (yyvsp[0].str), (yylsp[0]).first_line, (yylsp[0]).first_column);
			test_q_for.push_back(new_record);
			(yyval.str) = (yyvsp[0].str);
		}
#line 3222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 990 "sym_tab.y" /* yacc.c:1646  */
    {
			// if( !test.declaration_exists($1, scope_count) )
			// {
			// 	flag = 0;
			// 	cout << "\n" << "Identifier " << $1 <<" not declared previously\n";
			// }
			(yyval.str) = (yyvsp[0].str);
		}
#line 3235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1000 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); f_update.push_back(0); }
#line 3241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1005 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[-1].str); f_update.push_back(1); }
#line 3247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1006 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[-1].str); f_update.push_back(-1); }
#line 3253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1010 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 3259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1012 "sym_tab.y" /* yacc.c:1646  */
    { 
			// if( !test.declaration_exists($2, scope_count) )
			// {
			// 	flag = 0;
			// 	cout << "\n" << "Identifier " << $1->get_identifier() <<" not declared previously\n";
			// }
			// quple* new_record;
			// new_record = new quple("expression", "+")
			++f_update.back();
			(yyval.str) = (yyvsp[0].str);

		}
#line 3276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1025 "sym_tab.y" /* yacc.c:1646  */
    { 
			--f_update.back();
			(yyval.str) = (yyvsp[0].str);
		}
#line 3285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1046 "sym_tab.y" /* yacc.c:1646  */
    {
			(yyvsp[-4].node)->set_type("class");
			(yyvsp[-4].node)->set_value("class");
			test.insert((yyvsp[-4].node));
		}
#line 3295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1052 "sym_tab.y" /* yacc.c:1646  */
    {
			(yyvsp[-3].node)->set_type("class");
			(yyvsp[-3].node)->set_value("class");
			test.insert((yyvsp[-3].node));
		}
#line 3305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1066 "sym_tab.y" /* yacc.c:1646  */
    {
			// string temp = $2->get_identifier();
			// $2 = new node(*$1);
			// $2->set_identifier(temp);
			// cout<<*$2<<temp; 
			(yyvsp[-1].node)->set_type("proc");
			(yyvsp[-1].node)->set_size(size_map["int"]);
			test.insert((yyvsp[-1].node));
		}
#line 3319 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3323 "y.tab.c" /* yacc.c:1646  */
        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyesa, &yyes, &yyes_capacity, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1077 "sym_tab.y" /* yacc.c:1906  */


void yyerror(const char *error_msg) {
	// printf("\nSyntax Error: line no: \n", error_msg);
	printf("\n%s at line %d, column %d \n", error_msg, yylloc.first_line, yylloc.first_column);
	flag = 0;
	// yyerrok;
	// yyclearin;
}

#include <stdio.h>
extern char yytext[];
extern int column;
int main(int argc, char *argv[]) 
{


	scope_count = 0;
    size_map["char"]=1;
	size_map["int"]=4;
	size_map["float"]=4;
	size_map["double"]=8;
	size_map["void"]=0;



	// #if YYDEBUG
	// 	yydebug = 1;
	// #endif





	// if (!yyparse() && flag) 
	if (!yyparse() && flag) 
		printf("\n\n\nParsing is successful\n\n\n");
	else
		printf("\nParsing Unsuccessful.\n");

	cout<<"Displaying the Symbol Tables: \n";
	cout << test << "\n\n";
	test_q.disp_three_addr();
	// test_q.disp();
	// test.display();

//	fclose(yyout);
	return 0;
}
