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

// #define YYDEBUG 1
using namespace std;
ast test;
// ast test1;
unordered_map <string,int> size_map;
node* type;
const char *s = "Hello, World!";   
int flag=1;
class test123{
	int a;
	public:
	test123(){
		a=5;
	}
	void print_func(){
		cout<<"A is "<<a<<"\n";
	}

};

// int flag = 1;


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


#line 117 "y.tab.c" /* yacc.c:339  */

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
    IDENTIFIER = 258,
    CONSTANT = 259,
    STRING_LITERAL = 260,
    SIZEOF = 261,
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
    TYPEDEF = 284,
    EXTERN = 285,
    STATIC = 286,
    AUTO = 287,
    REGISTER = 288,
    CHAR = 289,
    SHORT = 290,
    INT = 291,
    LONG = 292,
    SIGNED = 293,
    UNSIGNED = 294,
    FLOAT = 295,
    DOUBLE = 296,
    CONST = 297,
    VOLATILE = 298,
    VOID = 299,
    STRUCT = 300,
    UNION = 301,
    ENUM = 302,
    ELLIPSIS = 303,
    CASE = 304,
    DEFAULT = 305,
    IF = 306,
    ELSE = 307,
    SWITCH = 308,
    WHILE = 309,
    DO = 310,
    FOR = 311,
    GOTO = 312,
    CONTINUE = 313,
    BREAK = 314,
    RETURN = 315,
    T_printf = 316,
    T_scanf = 317,
    T_cin = 318,
    T_cout = 319,
    IFX = 320
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
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
#define TYPEDEF 284
#define EXTERN 285
#define STATIC 286
#define AUTO 287
#define REGISTER 288
#define CHAR 289
#define SHORT 290
#define INT 291
#define LONG 292
#define SIGNED 293
#define UNSIGNED 294
#define FLOAT 295
#define DOUBLE 296
#define CONST 297
#define VOLATILE 298
#define VOID 299
#define STRUCT 300
#define UNION 301
#define ENUM 302
#define ELLIPSIS 303
#define CASE 304
#define DEFAULT 305
#define IF 306
#define ELSE 307
#define SWITCH 308
#define WHILE 309
#define DO 310
#define FOR 311
#define GOTO 312
#define CONTINUE 313
#define BREAK 314
#define RETURN 315
#define T_printf 316
#define T_scanf 317
#define T_cin 318
#define T_cout 319
#define IFX 320

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 54 "sym_tab.y" /* yacc.c:355  */

	char* str;
	class node* node;

#line 292 "y.tab.c" /* yacc.c:355  */
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

#line 323 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1199

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  165
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  270

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,     2,     2,     2,    33,    36,     2,
      79,    80,    31,    29,    84,    30,    83,    32,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    88,    89,
      34,    39,    35,    87,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    81,     2,    82,    37,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,    38,    41,    85,     2,     2,     2,
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
      25,    26,    27,    28,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    89,    89,    99,   100,   101,   105,   106,   107,   108,
     109,   110,   111,   115,   116,   120,   121,   122,   123,   124,
     125,   129,   130,   131,   132,   133,   134,   140,   141,   142,
     143,   147,   148,   149,   153,   154,   155,   159,   160,   161,
     162,   163,   167,   168,   169,   173,   174,   178,   179,   183,
     184,   188,   189,   193,   194,   198,   199,   203,   204,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     230,   231,   235,   239,   240,   244,   249,   253,   261,   271,
     286,   295,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   313,   314,   318,   322,   329,   330,   331,   332,
     333,   334,   338,   339,   343,   344,   348,   349,   353,   354,
     358,   363,   364,   365,   369,   370,   374,   375,   376,   377,
     378,   379,   380,   385,   386,   387,   390,   391,   394,   394,
     414,   416,   418,   420,   422,   424,   426,   428,   435,   436,
     440,   441,   445,   446,   450,   451,   452,   457,   458,   462,
     463,   465,   464,   473,   474,   479,   480,   484,   485,   486,
     490,   491,   495,   496,   505,   506
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "'+'", "'-'", "'*'", "'/'", "'%'", "'<'", "'>'", "'&'",
  "'^'", "'|'", "'='", "'{'", "'}'", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "T_printf",
  "T_scanf", "T_cin", "T_cout", "IFX", "'('", "')'", "'['", "']'", "'.'",
  "','", "'~'", "'!'", "'?'", "':'", "';'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "type_specifier",
  "specifier_qualifier_list", "declarator", "direct_declarator",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "statement", "print_statement", "scan_statement", "compound_statement",
  "$@1", "temp1", "declaration_list", "statement_list",
  "expression_statement", "for_expression_statement",
  "selection_statement", "iteration_statement", "$@2", "temp2",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    43,
      45,    42,    47,    37,    60,    62,    38,    94,   124,    61,
     123,   125,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,    40,
      41,    91,    93,    46,    44,   126,    33,    63,    58,    59
};
# endif

#define YYPACT_NINF -149

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-149)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1076,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,     6,  -149,     5,   489,   406,   -33,   929,
    -149,  -149,   -40,  -149,  -149,   -54,  -149,  1120,  -149,  -149,
    -149,     5,  -149,   406,   230,    70,  -149,  -149,  -149,    14,
    -149,  1028,  -149,   406,   178,    50,  -149,  -149,  -149,  -149,
       6,   -17,    47,  -149,   -68,  -149,  -149,  -149,  1079,  1113,
    1113,  -149,  -149,  -149,  -149,  1113,  -149,  -149,  -149,  -149,
      53,  -149,  1113,   137,    26,    72,    32,   163,    62,    96,
     125,   127,    -7,  -149,    69,  -149,  1028,   606,  -149,  -149,
    -149,  -149,  -149,   109,   117,   867,  -149,   829,   126,   131,
    -149,  -149,  -149,   -31,  -149,  -149,  -149,  -149,  -149,   265,
     352,  -149,  -149,  -149,  -149,  -149,  -149,   315,  -149,   172,
     962,  -149,  -149,  -149,   -56,  -149,  -149,   136,  1113,   187,
    -149,  1113,  1113,  1113,  1113,  1113,  1113,  1113,  1113,  1113,
    1113,  1113,  1113,  1113,  1113,  1113,  1113,  1113,  1113,  1113,
    -149,  -149,   -30,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  1113,  1113,  1113,   145,   134,  -149,
     -25,   215,   218,  1113,  -149,  -149,   439,  -149,  -149,   526,
    -149,  -149,  -149,   489,  -149,   154,  -149,  -149,   -53,  -149,
      23,  -149,  -149,  -149,  -149,   137,   137,    26,    26,    72,
      72,    72,    72,    32,    32,   163,    62,    96,   125,   127,
       8,  -149,  1020,  -149,    24,    66,   157,   700,  -149,  -149,
      77,    78,  -149,  -149,   613,  -149,   729,  -149,  -149,  -149,
    1113,  -149,  1113,  -149,  -149,   867,   867,  1113,  -149,   -12,
    -149,   918,  -149,   234,  -149,   234,  -149,   816,  -149,  -149,
    -149,   173,  -149,    80,  -149,  1066,   105,   111,  -149,   867,
     150,   867,   113,  -149,  -149,  -149,  -149,  -149,   867,  -149
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   159,    95,    91,    83,    84,    85,    86,    89,    90,
      87,    88,    82,     0,   161,     0,    75,     0,    94,     0,
     157,   160,     0,    81,    73,     0,    77,    79,    76,   128,
     138,     0,   165,     0,     0,     0,     1,   158,    96,     0,
      74,     0,   163,     0,     0,    79,   139,   164,   108,   101,
     107,     0,   102,   104,     0,     2,     3,     4,     0,     0,
       0,    23,    24,    22,    21,     0,    98,    25,    26,     6,
      15,    27,     0,    31,    34,    37,    42,    45,    47,    49,
      51,    53,    55,    72,     0,    78,     0,    27,    57,   111,
      80,   162,   130,     0,     0,     0,   151,     0,     0,     0,
     125,   142,    70,     0,   140,   121,   122,   116,   129,     0,
       0,   117,   118,   119,   120,   106,    99,     0,   100,     0,
       0,    19,    16,    17,     0,    11,    12,     0,     0,     0,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,   114,     0,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    59,     0,     0,     0,     0,     0,   155,
       0,     0,     0,     0,   143,   132,     0,   131,   141,     0,
     103,   105,   109,    93,   110,     0,     5,     8,     0,    13,
       0,    10,    28,    29,    30,    32,    33,    35,    36,    40,
      41,    38,    39,    43,    44,    46,    48,    50,    52,    54,
       0,   112,     0,    58,     0,     0,     0,     0,   152,   156,
       0,     0,    71,   133,     0,   134,     0,    92,    20,     9,
       0,     7,     0,   113,   115,     0,     0,     0,   144,     0,
     146,     0,   123,     0,   126,     0,   136,     0,   135,    14,
      56,   147,   149,     0,   145,     0,     0,     0,   137,     0,
       0,     0,     0,   124,   127,   148,   150,   153,     0,   154
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,  -149,  -149,   -21,  -149,    65,    67,   -70,    59,
      97,    95,    98,   101,   102,  -149,   -34,   -36,  -149,   -63,
    -149,     0,    13,  -149,   204,  -102,    71,    10,  -149,  -149,
    -149,   132,  -148,  -149,   -83,  -149,   -88,  -149,  -149,     9,
    -149,  -149,   -23,   -89,    15,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,   240,  -149
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    69,    70,   188,    87,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    88,   102,   164,   103,
      84,    30,    31,    25,    26,    16,   184,    17,    18,    51,
      52,    53,    54,   185,    90,   152,   104,   105,   106,   107,
      44,   108,    33,   110,   111,   241,   112,   113,   168,   218,
     114,    19,    20,    21
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      14,    83,   124,   151,    43,    89,    23,   167,     2,     2,
     148,   211,   118,    15,    71,    23,   119,     2,   183,    14,
     176,   109,   178,    22,   186,    27,    32,   229,   173,    28,
      39,   230,    15,    46,   170,    40,    42,   121,   122,   123,
      38,    45,    47,    46,   138,   139,    34,    50,    35,    45,
      89,   130,    91,   173,   212,   134,   135,   124,   174,   173,
     115,   125,   126,   116,   219,   190,   140,   141,   199,   200,
     201,   202,   173,    55,    56,    57,    58,   254,    59,    60,
     149,   183,   136,   137,    13,    13,   210,   179,   178,    41,
     226,   189,   173,    13,    24,   256,   232,   257,   144,    61,
      62,    63,   214,   215,   235,   231,    64,   173,   173,    46,
     192,   193,   194,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,   213,   234,
      50,   117,   127,   145,   128,   247,   129,   222,   178,    55,
      56,    57,    58,   147,    59,    60,   236,   251,   252,    65,
     173,   150,    66,   224,   239,    67,    68,   242,   244,   178,
     260,   243,   245,   146,   173,    61,    62,    63,   131,   132,
     133,   265,    64,   267,   253,   182,    89,   142,   143,    46,
     269,    55,    56,    57,    58,   263,    59,    60,   165,   119,
     191,   264,   262,   268,   249,   119,   166,   173,   250,   195,
     196,   203,   204,   197,   198,   171,     3,    61,    62,    63,
     172,    71,   216,   217,    64,    65,   187,   240,    29,    92,
     220,    67,    68,   221,    46,     4,     5,     6,     7,     8,
       9,    10,    11,    48,   228,    12,   237,    48,   259,   266,
     206,   205,    93,    85,   207,    94,    95,    96,   208,   181,
     209,    97,    98,    99,   227,   100,   255,    65,     3,    37,
       0,     0,     0,    67,    68,     0,     0,   101,    55,    56,
      57,    58,     0,    59,    60,     0,     0,     4,     5,     6,
       7,     8,     9,    10,    11,     0,     0,    12,     0,     0,
       0,     0,     0,     3,    61,    62,    63,     0,     0,     0,
       0,    64,     0,     0,     0,    29,   175,     0,     0,     0,
      49,     0,     4,     5,     6,     7,     8,     9,    10,    11,
       0,     0,    12,     0,     0,     0,     0,     0,     0,    93,
       0,     0,    94,    95,    96,     0,     0,     0,    97,    98,
      99,     0,   100,     3,    65,     0,     0,     0,     0,     0,
      67,    68,     0,     0,   101,    55,    56,    57,    58,     0,
      59,    60,     4,     5,     6,     7,     8,     9,    10,    11,
       0,     0,    12,     0,     0,     0,   180,     0,     0,     0,
       3,    61,    62,    63,     0,     0,     0,     0,    64,     0,
       0,     0,    29,   177,     0,     0,     0,     0,     0,     4,
       5,     6,     7,     8,     9,    10,    11,     0,     0,    12,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
      95,    96,     0,     0,     0,    97,    98,    99,     0,   100,
       0,    65,     0,     0,     3,     0,     0,    67,    68,     0,
       0,   101,    55,    56,    57,    58,    29,    59,    60,     0,
       0,     0,     0,     4,     5,     6,     7,     8,     9,    10,
      11,     0,     0,    12,     0,     0,     0,     3,    61,    62,
      63,     0,     0,     0,     0,    64,     0,     0,     0,    29,
     223,     0,     0,     0,     0,     0,     4,     5,     6,     7,
       8,     9,    10,    11,     0,     0,    12,     0,     0,     0,
       0,     0,     0,    93,     0,     0,    94,    95,    96,     0,
       0,     0,    97,    98,    99,     0,   100,     3,    65,     0,
       0,     0,     0,     0,    67,    68,     0,     0,   101,    55,
      56,    57,    58,     0,    59,    60,     4,     5,     6,     7,
       8,     9,    10,    11,     0,     0,    12,     0,     0,     0,
       0,     0,     0,     0,     3,    61,    62,    63,     0,     0,
       0,     0,    64,     0,     0,     0,    29,   225,     0,     0,
       0,     0,     0,     4,     5,     6,     7,     8,     9,    10,
      11,     0,     0,    12,     0,     0,     0,     0,     0,     0,
      93,     0,     0,    94,    95,    96,     0,     0,     0,    97,
      98,    99,     0,   100,     0,    65,     0,     0,     0,     0,
       0,    67,    68,     0,     0,   101,    55,    56,    57,    58,
       0,    59,    60,     0,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,     0,     0,     0,     0,     0,     0,
       0,     3,    61,    62,    63,   163,     0,     0,     0,    64,
       0,     0,     0,    29,   246,     0,     0,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,     0,     0,
      12,     0,     0,     0,     0,     0,     0,    93,     0,     0,
      94,    95,    96,     0,     0,     0,    97,    98,    99,     0,
     100,     0,    65,     0,     0,     0,     0,     0,    67,    68,
       0,     0,   101,    55,    56,    57,    58,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,    61,
      62,    63,    55,    56,    57,    58,    64,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     5,     6,
       7,     8,     9,    10,    11,     0,     0,    12,    61,    62,
      63,     0,     0,     0,     0,    64,     0,     0,     0,    29,
     248,     0,     0,     0,     0,     0,     0,     0,     0,    65,
       0,     0,     0,     0,     0,    67,    68,     0,     0,   238,
       0,     0,     0,    93,     0,     0,    94,    95,    96,     0,
       0,     0,    97,    98,    99,     0,   100,     0,    65,     0,
       0,     0,     0,     0,    67,    68,     0,     0,   101,    55,
      56,    57,    58,     0,    59,    60,     0,     0,     0,     0,
       0,     0,    55,    56,    57,    58,     0,    59,    60,     0,
       0,     0,     0,     0,     0,    61,    62,    63,     0,     0,
       0,     0,    64,     0,     0,     0,    29,   258,    61,    62,
      63,     0,     0,     0,     0,    64,     0,     0,     0,     0,
      55,    56,    57,    58,     0,    59,    60,     0,     0,     0,
      93,     0,     0,    94,    95,    96,     0,     0,     0,    97,
      98,    99,     0,   100,     0,    65,    61,    62,    63,     0,
       0,    67,    68,    64,     0,   101,     0,    29,    65,     0,
       0,     0,     0,     0,    67,    68,     0,     0,   169,     0,
       0,    55,    56,    57,    58,     0,    59,    60,     0,    36,
       0,    93,     2,     0,    94,    95,    96,     0,     0,     0,
      97,    98,    99,     0,   100,     0,    65,    61,    62,    63,
       0,     0,    67,    68,    64,     0,   101,     3,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,     0,
      59,    60,     0,     0,     0,     0,     4,     5,     6,     7,
       8,     9,    10,    11,     0,     0,    12,     0,     0,     0,
       3,    61,    62,    63,     0,     0,     0,    65,    64,     0,
       0,     0,     0,    67,    68,     0,     0,   101,    13,     4,
       5,     6,     7,     8,     9,    10,    11,     0,     0,    12,
       0,     0,     0,    55,    56,    57,    58,     0,    59,    60,
       0,    55,    56,    57,    58,     0,    59,    60,     0,     0,
       0,    65,     0,     0,     0,     0,     0,    67,    68,    61,
      62,    63,     0,     0,     0,     0,    64,    61,    62,    63,
      86,   233,     0,     0,    64,     0,     0,     0,    86,    55,
      56,    57,    58,     0,    59,    60,     0,     1,     0,     2,
       0,     0,    55,    56,    57,    58,     0,    59,    60,     0,
       0,     0,     0,     0,     0,    61,    62,    63,     0,    65,
       0,     0,    64,     0,     3,    67,    68,    65,    61,    62,
      63,     0,     0,    67,    68,    64,    55,    56,    57,    58,
       0,    59,    60,     4,     5,     6,     7,     8,     9,    10,
      11,     0,     0,    12,     0,     0,     0,     0,     0,     0,
       0,     0,    61,    62,    63,    65,   261,     0,     3,    64,
       0,    67,    68,     0,     0,    13,     0,     0,   120,    41,
      29,     0,     0,     0,    67,    68,     0,     4,     5,     6,
       7,     8,     9,    10,    11,     0,     0,    12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,     0,     0,     0,     0,     0,    67,    68
};

static const yytype_int16 yycheck[] =
{
       0,    35,    65,    86,    27,    41,     1,    95,     3,     3,
      17,    41,    80,     0,    35,     1,    84,     3,   120,    19,
     109,    44,   110,    13,    80,    15,    17,    80,    84,    16,
      84,    84,    19,    33,    97,    89,    27,    58,    59,    60,
      80,    31,    33,    43,    12,    13,    79,    34,    81,    39,
      86,    72,    43,    84,    84,    29,    30,   120,    89,    84,
      50,     8,     9,    80,    89,   128,    34,    35,   138,   139,
     140,   141,    84,     3,     4,     5,     6,    89,     8,     9,
      87,   183,    10,    11,    79,    79,   149,   110,   176,    39,
     179,   127,    84,    79,    89,   243,    88,   245,    36,    29,
      30,    31,   165,   166,    80,    82,    36,    84,    84,   109,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   164,   212,
     117,    84,    79,    37,    81,   224,    83,   173,   226,     3,
       4,     5,     6,    16,     8,     9,    80,   235,   236,    79,
      84,    82,    82,   176,   217,    85,    86,    80,    80,   247,
      80,    84,    84,    38,    84,    29,    30,    31,    31,    32,
      33,   259,    36,   261,   237,     3,   212,    14,    15,   179,
     268,     3,     4,     5,     6,    80,     8,     9,    79,    84,
       3,    80,   255,    80,   230,    84,    79,    84,   232,   134,
     135,   142,   143,   136,   137,    79,    28,    29,    30,    31,
      79,   232,    67,    79,    36,    79,    80,   217,    40,    41,
       5,    85,    86,     5,   224,    47,    48,    49,    50,    51,
      52,    53,    54,     3,    80,    57,    79,     3,    65,    89,
     145,   144,    64,    39,   146,    67,    68,    69,   147,   117,
     148,    73,    74,    75,   183,    77,   241,    79,    28,    19,
      -1,    -1,    -1,    85,    86,    -1,    -1,    89,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,
      80,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    67,    68,    69,    -1,    -1,    -1,    73,    74,
      75,    -1,    77,    28,    79,    -1,    -1,    -1,    -1,    -1,
      85,    86,    -1,    -1,    89,     3,     4,     5,     6,    -1,
       8,     9,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    57,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,
      68,    69,    -1,    -1,    -1,    73,    74,    75,    -1,    77,
      -1,    79,    -1,    -1,    28,    -1,    -1,    85,    86,    -1,
      -1,    89,     3,     4,     5,     6,    40,     8,     9,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    57,    -1,    -1,    -1,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    40,
      41,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    67,    68,    69,    -1,
      -1,    -1,    73,    74,    75,    -1,    77,    28,    79,    -1,
      -1,    -1,    -1,    -1,    85,    86,    -1,    -1,    89,     3,
       4,     5,     6,    -1,     8,     9,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,    73,
      74,    75,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    85,    86,    -1,    -1,    89,     3,     4,     5,     6,
      -1,     8,     9,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    39,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      67,    68,    69,    -1,    -1,    -1,    73,    74,    75,    -1,
      77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    85,    86,
      -1,    -1,    89,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,     3,     4,     5,     6,    36,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    57,    29,    30,
      31,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    85,    86,    -1,    -1,    89,
      -1,    -1,    -1,    64,    -1,    -1,    67,    68,    69,    -1,
      -1,    -1,    73,    74,    75,    -1,    77,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    85,    86,    -1,    -1,    89,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    40,    41,    29,    30,
      31,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      64,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,    73,
      74,    75,    -1,    77,    -1,    79,    29,    30,    31,    -1,
      -1,    85,    86,    36,    -1,    89,    -1,    40,    79,    -1,
      -1,    -1,    -1,    -1,    85,    86,    -1,    -1,    89,    -1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,     0,
      -1,    64,     3,    -1,    67,    68,    69,    -1,    -1,    -1,
      73,    74,    75,    -1,    77,    -1,    79,    29,    30,    31,
      -1,    -1,    85,    86,    36,    -1,    89,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    57,    -1,    -1,    -1,
      28,    29,    30,    31,    -1,    -1,    -1,    79,    36,    -1,
      -1,    -1,    -1,    85,    86,    -1,    -1,    89,    79,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    57,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    85,    86,    29,
      30,    31,    -1,    -1,    -1,    -1,    36,    29,    30,    31,
      40,    41,    -1,    -1,    36,    -1,    -1,    -1,    40,     3,
       4,     5,     6,    -1,     8,     9,    -1,     1,    -1,     3,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    -1,    79,
      -1,    -1,    36,    -1,    28,    85,    86,    79,    29,    30,
      31,    -1,    -1,    85,    86,    36,     3,     4,     5,     6,
      -1,     8,     9,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,    79,    80,    -1,    28,    36,
      -1,    85,    86,    -1,    -1,    79,    -1,    -1,    79,    39,
      40,    -1,    -1,    -1,    85,    86,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    85,    86
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    28,    47,    48,    49,    50,    51,    52,
      53,    54,    57,    79,   111,   112,   115,   117,   118,   141,
     142,   143,   117,     1,    89,   113,   114,   117,   112,    40,
     111,   112,   129,   132,    79,    81,     0,   142,    80,    84,
      89,    39,   129,   132,   130,   117,   111,   129,     3,    80,
     112,   119,   120,   121,   122,     3,     4,     5,     6,     8,
       9,    29,    30,    31,    36,    79,    82,    85,    86,    91,
      92,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   110,   114,    40,    94,   106,   107,
     124,   129,    41,    64,    67,    68,    69,    73,    74,    75,
      77,    89,   107,   109,   126,   127,   128,   129,   131,   132,
     133,   134,   136,   137,   140,   117,    80,    84,    80,    84,
      79,    94,    94,    94,   109,     8,     9,    79,    81,    83,
      94,    31,    32,    33,    29,    30,    10,    11,    12,    13,
      34,    35,    14,    15,    36,    37,    38,    16,    17,    87,
      82,   124,   125,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    39,   108,    79,    79,   126,   138,    89,
     109,    79,    79,    84,    89,    41,   133,    41,   126,   132,
      61,   121,     3,   115,   116,   123,    80,    80,    93,   107,
     109,     3,    94,    94,    94,    96,    96,    97,    97,    98,
      98,    98,    98,    99,    99,   100,   101,   102,   103,   104,
     109,    41,    84,   107,   109,   109,    67,    79,   139,    89,
       5,     5,   107,    41,   132,    41,   133,   116,    80,    80,
      84,    82,    88,    41,   124,    80,    80,    79,    89,   109,
     111,   135,    80,    84,    80,    84,    41,   133,    41,   107,
     106,   126,   126,   109,    89,   134,   122,   122,    41,    65,
      80,    80,   109,    80,    80,   126,    89,   126,    80,   126
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    91,    91,    92,    92,    92,    92,
      92,    92,    92,    93,    93,    94,    94,    94,    94,    94,
      94,    95,    95,    95,    95,    95,    95,    96,    96,    96,
      96,    97,    97,    97,    98,    98,    98,    99,    99,    99,
      99,    99,   100,   100,   100,   101,   101,   102,   102,   103,
     103,   104,   104,   105,   105,   106,   106,   107,   107,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     109,   109,   110,   111,   111,   112,   112,   113,   113,   114,
     114,   114,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   116,   116,   117,   118,   118,   118,   118,   118,
     118,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     123,   124,   124,   124,   125,   125,   126,   126,   126,   126,
     126,   126,   126,   127,   127,   127,   128,   128,   130,   129,
     131,   131,   131,   131,   131,   131,   131,   131,   132,   132,
     133,   133,   134,   134,   135,   135,   135,   136,   136,   137,
     137,   138,   137,   139,   139,   140,   140,   141,   141,   141,
     142,   142,   143,   143,   143,   143
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     2,     2,     1,     3,     1,     2,     2,     2,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     3,     1,     2,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     3,     4,     3,     4,
       4,     3,     1,     3,     1,     3,     2,     1,     1,     3,
       1,     1,     3,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     4,     6,     1,     4,     6,     0,     3,
       1,     2,     2,     3,     3,     4,     4,     5,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     5,     7,     5,
       7,     0,     3,     5,     6,     2,     3,     1,     2,     1,
       1,     1,     4,     3,     3,     2
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
#line 90 "sym_tab.y" /* yacc.c:1646  */
    {
			if ( !test.declaration_exists( (yyvsp[0].str), scope_count ) )
			{
				flag = 0;
				cout << "\n" << "Identifier " << (yyvsp[0].str) <<" not declared previously\n";
			}
			(yyval.str) = (yyvsp[0].str);
		}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 99 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str);}
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 100 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str);}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 101 "sym_tab.y" /* yacc.c:1646  */
    {;}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 105 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 110 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 111 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 120 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 121 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 122 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 123 "sym_tab.y" /* yacc.c:1646  */
    {;}
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 140 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 141 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 142 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 143 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 147 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 148 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 149 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 153 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 154 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 155 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 159 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 160 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 161 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 162 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 163 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 167 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 168 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 169 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 173 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 174 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 178 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 179 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 183 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 184 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 188 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 189 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 193 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 194 "sym_tab.y" /* yacc.c:1646  */
    { vector<string> temp1{(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)}; (yyval.str) = conversion(temp1); }
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 198 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 203 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 205 "sym_tab.y" /* yacc.c:1646  */
    {
		// cout<<"HERE!\n";
		// cout<<$1<<"\n"<<$3<<"\n";
		if( !test.update_identifier((yyvsp[-2].str), scope_count, (yyvsp[0].str)) )
		{
			cout<<"Failure\n";
		}
	}
#line 2394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 216 "sym_tab.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 235 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.str)=(yyvsp[0].str); }
#line 2406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 244 "sym_tab.y" /* yacc.c:1646  */
    { 
					   (yyvsp[0].node)->set_size(size_map[(yyvsp[0].node)->get_type()]); 					   
					   type = (yyvsp[0].node);
					   (yyval.node) = (yyvsp[0].node);
				     }
#line 2416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 254 "sym_tab.y" /* yacc.c:1646  */
    {
		// if(for_scope)
		// {
		// 	--for_scope;
		// }
	}
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 262 "sym_tab.y" /* yacc.c:1646  */
    {
		// if(for_scope)
		// {
		// 	--for_scope;
		// }
	}
#line 2438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 272 "sym_tab.y" /* yacc.c:1646  */
    {
			string temp = (yyvsp[0].node)->get_identifier();
			int temp_size = (yyvsp[0].node)->get_size();

			(yyvsp[0].node) = new node(*type); 
			
			(yyvsp[0].node)->set_identifier(temp); 
			(yyvsp[0].node)->set_col_no((yylsp[0]).first_column);
			if(temp_size!=0)
			{
				(yyvsp[0].node)->set_size((yyvsp[0].node)->get_size()*temp_size);
			}
			test.insert(*(yyvsp[0].node));
		}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 287 "sym_tab.y" /* yacc.c:1646  */
    {
			string temp = (yyvsp[-2].node)->get_identifier();
			(yyvsp[-2].node) = new node(*type);
			(yyvsp[-2].node)->set_identifier(temp); 
			(yyvsp[-2].node)->set_value((yyvsp[0].str));
			(yyvsp[-2].node)->set_col_no((yylsp[-2]).first_column);
			test.insert(*(yyvsp[-2].node));
		}
#line 2470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 299 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.node) = new node((yylsp[0]).first_line, "", (yyvsp[0].str), "", 0, scope_count, (yylsp[0]).first_column); }
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 300 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.node) = new node((yylsp[0]).first_line, "", (yyvsp[0].str), "", 0, scope_count, (yylsp[0]).first_column); }
#line 2482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 301 "sym_tab.y" /* yacc.c:1646  */
    {;}
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 302 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.node) = new node((yylsp[0]).first_line, "", (yyvsp[0].str), "", 0, scope_count, (yylsp[0]).first_column); }
#line 2494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 303 "sym_tab.y" /* yacc.c:1646  */
    {;}
#line 2500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 304 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.node) = new node((yylsp[0]).first_line, "", (yyvsp[0].str), "", 0, scope_count, (yylsp[0]).first_column); }
#line 2506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 305 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.node) = new node((yylsp[0]).first_line, "", (yyvsp[0].str), "", 0, scope_count, (yylsp[0]).first_column); }
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 306 "sym_tab.y" /* yacc.c:1646  */
    {;}
#line 2518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 307 "sym_tab.y" /* yacc.c:1646  */
    {;}
#line 2524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 308 "sym_tab.y" /* yacc.c:1646  */
    {;}
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 318 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 2536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 323 "sym_tab.y" /* yacc.c:1646  */
    {
			if(test.declaration_exists_scope((yyvsp[0].str),scope_count)){
			flag=0;
			cout << "\n" <<"Identifier " << (yyvsp[0].str) << " already declared previously\n";
		}
		(yyval.node) = new node((yylsp[0]).first_line, (yyvsp[0].str), "", "", 0, scope_count, (yylsp[0]).first_column); }
#line 2547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 329 "sym_tab.y" /* yacc.c:1646  */
    {;}
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 330 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.node) = new node((yylsp[-3]).first_line, (yyvsp[-3].node)->get_identifier(), "", "", atoi((yyvsp[-1].str)), scope_count, (yylsp[-3]).first_column); }
#line 2559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 334 "sym_tab.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); }
#line 2565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 394 "sym_tab.y" /* yacc.c:1646  */
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
#line 2586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 415 "sym_tab.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 417 "sym_tab.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 419 "sym_tab.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 421 "sym_tab.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 423 "sym_tab.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 425 "sym_tab.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 427 "sym_tab.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 429 "sym_tab.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 465 "sym_tab.y" /* yacc.c:1646  */
    {
			++for_scope;
			test.create_map(++scope_count);
		// cout<<"For scope is "<<for_scope<<"\n";
		}
#line 2644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 497 "sym_tab.y" /* yacc.c:1646  */
    {
		// string temp = $2->get_identifier();
		// $2 = new node(*$1);
		// $2->set_identifier(temp);
		// cout<<*$2<<temp; 
		(yyvsp[-1].node)->set_type("proc");
		test.insert(*(yyvsp[-1].node));
	}
#line 2657 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2661 "y.tab.c" /* yacc.c:1646  */
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
#line 509 "sym_tab.y" /* yacc.c:1906  */


void yyerror(const char *error_msg) {
	// printf("\nSyntax Error: line no: \n", error_msg);
	printf("\n%s at line %d, column %d \n", error_msg, yylloc.first_line, yylloc.first_column);
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
	cout << test;
	// test.display();

//	fclose(yyout);
	return 0;
}
