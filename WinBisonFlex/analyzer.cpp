/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

#line 67 "analyzer.cpp" /* yacc.c:339  */

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "analyzer.h".  */
#ifndef YY_YY_ANALYZER_H_INCLUDED
# define YY_YY_ANALYZER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 35 "analyzer.y" /* yacc.c:355  */

	//code requires can show the error messages
	#pragma warning (disable: 4005)

	#include <iostream>
	#include <cstdio>
	#include <string>

	#include "ScannerParserCL.h"
	using namespace std;

	typedef void* yyscan_t;

#line 111 "analyzer.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM = 258,
    IDENTIFIER = 259,
    HELLO = 260,
    INT_TYPE = 261,
    FLOAT_TYPE = 262,
    DOUBLE_TYPE = 263,
    BOOL_TYPE = 264,
    STRING_TYPE = 265,
    DQ_MARK = 266,
    EXC_MARK = 267,
    INCREASE = 268,
    DECREASE = 269,
    STR_VAL = 270,
    PRINT_T = 271,
    COMMENT = 272,
    FUNCTION = 273,
    IF = 274,
    ELSE = 275,
    ELSIF = 276,
    WHILE = 277,
    FOR = 278,
    RETURN_T = 279,
    BREAK = 280,
    CONTINUE = 281,
    NULL_T = 282,
    LC = 283,
    RC = 284,
    SEMICOLON = 285,
    COMMA = 286,
    ASSIGN = 287,
    LOGICAL_AND = 288,
    LOGICAL_OR = 289,
    EQ = 290,
    NE = 291,
    GT = 292,
    GE = 293,
    LT = 294,
    LE = 295,
    MOD = 296,
    TRUE_T = 297,
    FALSE_T = 298,
    GLOBAL_T = 299,
    SUB = 300,
    ADD = 301,
    MUL = 302,
    DIV = 303,
    LP = 304,
    RP = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 74 "analyzer.y" /* yacc.c:355  */
	int int_value;
	double double_value;
	bool bool_value;
	char* cstr;
	Node* node;
	assign_statement* assign_ptr;

#line 182 "analyzer.cpp" /* yacc.c:355  */
};
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



int yyparse (yyscan_t scanner, ScannerParserCL* pParseTree);

#endif /* !YY_YY_ANALYZER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 210 "analyzer.cpp" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 51 "analyzer.y" /* yacc.c:359  */


	// flex's data type
	typedef void* yyscan_t;

	extern int yylex(YYSTYPE*, YYLTYPE*, yyscan_t);

	void yyerror (YYLTYPE*, yyscan_t yyscanner, ScannerParserCL* pParseTree, const char*);

#line 222 "analyzer.cpp" /* yacc.c:359  */

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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   282

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      51,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   126,   126,   127,   128,   129,   132,   133,   138,   141,
     144,   147,   150,   153,   156,   157,   158,   161,   162,   165,
     169,   170,   171,   185,   203,   207,   214,   215,   216,   217,
     218,   224,   225,   228,   231,   234,   240,   246,   252,   258,
     264,   273,   274,   275,   276,   277,   282,   287,   293,   294,
     298,   299,   303,   304,   305,   306,   310,   311,   319,   327,
     333,   340,   341,   342,   345,   349
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "IDENTIFIER", "\"hello msg\"",
  "INT_TYPE", "FLOAT_TYPE", "DOUBLE_TYPE", "BOOL_TYPE", "STRING_TYPE",
  "DQ_MARK", "EXC_MARK", "INCREASE", "DECREASE", "STR_VAL", "PRINT_T",
  "COMMENT", "FUNCTION", "IF", "ELSE", "ELSIF", "WHILE", "FOR", "RETURN_T",
  "BREAK", "CONTINUE", "NULL_T", "LC", "RC", "SEMICOLON", "COMMA",
  "ASSIGN", "LOGICAL_AND", "LOGICAL_OR", "EQ", "NE", "GT", "GE", "LT",
  "LE", "MOD", "TRUE_T", "FALSE_T", "GLOBAL_T", "SUB", "ADD", "MUL", "DIV",
  "LP", "RP", "'\\n'", "$accept", "program", "line", "lines",
  "assign_statement", "math_statement", "bool_statement", "TypeForParam",
  "function_definition", "function_employ", "return_statement",
  "if_statement", "elsif_list", "elsif", "while_statement",
  "for_statement", "switchLines", "block", YY_NULL
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,    10
};
# endif

#define YYPACT_NINF -46

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-46)))

#define YYTABLE_NINF -64

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      32,   -45,   -46,    48,   -42,   -29,    21,    14,    27,    29,
      15,   -46,   -46,     4,     4,   -46,   105,   -46,    49,   201,
      34,   -46,   -46,    56,    36,    37,    40,    42,   -46,   -46,
     -46,    15,    15,   -46,    91,    58,    15,    15,    99,    65,
     234,   -46,   -46,    54,   -46,   -46,   -46,    64,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,   -46,   -46,
      66,   -46,   -46,   -46,   -46,   234,   -46,   -20,   218,    68,
      69,    61,   234,    76,    80,    -1,    86,   -46,   -46,   -31,
     -31,   -31,   -31,   -31,   -31,    25,    25,   -46,   -46,   -46,
     -46,   -46,   101,   -46,   -46,   -46,   -46,   -46,   104,   129,
      84,    84,    15,    85,   136,   -46,    92,   -17,   -17,   113,
     -46,   -46,   -46,   167,    84,    84,   -46,    99,   -46,   -46,
     -17,    45,    96,   -46,    84,   100,    31,   -46,    84,   -17,
      15,   -46,    39,   -17,   -46,   103,    84,   -46,    84,   -17,
     -17,   -46,    84,    42
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,    33,    34,     0,     0,    62,     0,     2,     0,     0,
       0,     3,    26,     0,     0,     0,     0,     6,    16,    22,
      23,     0,     0,    15,     0,     0,     0,     0,     0,    25,
      50,    51,    32,     0,     1,     4,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     9,
       0,    11,    10,    12,    61,    19,    21,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     8,    37,
      40,    35,    38,    36,    39,    28,    27,    29,    30,    13,
      48,    49,     0,    41,    42,    43,    44,    45,     0,     0,
      63,    63,     0,     0,     0,    47,     0,     0,     0,     0,
      14,    65,    17,     0,    63,    63,    59,     0,    64,    18,
       0,     0,     0,    46,    63,     0,    63,    56,    63,     0,
       0,    57,     0,     0,    53,     0,    63,    60,    63,     0,
       0,    55,    63,    58
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -46,   -46,   -15,   -46,   -33,   -10,    -8,   -46,   135,   126,
     -46,   -46,   -46,    35,   -46,   -46,    93,     5
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    16,    17,   113,    18,    19,    20,    99,    21,    22,
      23,    24,   126,   127,    25,    26,    27,   105
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    45,    41,    42,    43,    76,    28,     2,    39,    33,
     -20,   104,    29,    30,    54,    55,    56,    57,     2,    39,
      34,    65,    68,    66,    69,    35,    72,    72,    73,    74,
     -20,    31,   -63,     1,    64,     2,     3,     4,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,     5,    13,
       6,     7,   125,    14,     8,     9,    10,    11,    12,   136,
      13,    29,    30,    36,    14,   124,   125,    93,    94,    95,
      96,    97,    56,    57,    11,    12,    37,    13,    38,    47,
      31,    14,    15,    15,   122,    59,    60,    61,    62,   112,
      64,    63,    72,    64,   109,    70,    64,    32,   119,    54,
      55,    56,    57,    75,    77,    44,     1,    71,     2,     3,
       4,    98,   115,   116,    32,    78,   102,    89,    91,    92,
      72,     5,   135,     6,     7,   123,   100,     8,     9,    10,
     101,   103,   104,   106,   134,    15,   110,     1,   137,     2,
       3,     4,   114,   117,   141,   142,   128,    11,    12,   130,
      13,    46,     5,   138,    14,     7,    15,    67,     8,     9,
      10,   131,     0,     0,     0,   111,     0,     0,     1,     0,
       2,     3,     4,     0,     0,     0,     0,     0,    11,    12,
       0,    13,     0,     5,     0,    14,     7,    15,     0,     8,
       9,    10,     0,   107,   108,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   120,   121,    11,
      12,     0,    13,     0,     0,     0,    14,   129,    15,   132,
       0,   133,     0,     0,     0,     0,     0,     0,     0,   139,
       0,   140,     0,     0,     0,   143,    48,    49,    50,    51,
      52,    53,     0,     0,     0,     0,    54,    55,    56,    57,
       0,     0,    58,    48,    49,    50,    51,    52,    53,     0,
       0,     0,     0,    54,    55,    56,    57,     0,    90,    48,
      49,    50,    51,    52,    53,     0,     0,     0,     0,    54,
      55,    56,    57
};

static const yytype_int16 yycheck[] =
{
      10,    16,    10,    13,    14,    38,    51,     3,     4,    51,
      30,    28,    13,    14,    45,    46,    47,    48,     3,     4,
      49,    31,    32,    31,    32,     4,    36,    37,    36,    37,
      50,    32,     0,     1,    51,     3,     4,     5,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    16,    45,
      18,    19,    21,    49,    22,    23,    24,    42,    43,    20,
      45,    13,    14,    49,    49,    20,    21,     6,     7,     8,
       9,    10,    47,    48,    42,    43,    49,    45,    49,    30,
      32,    49,    51,    51,   117,    51,    30,    51,    51,   104,
      51,    51,   102,    51,   102,     4,    51,    49,   113,    45,
      46,    47,    48,     4,    50,     0,     1,    49,     3,     4,
       5,    50,   107,   108,    49,    51,    30,    51,    50,    50,
     130,    16,   130,    18,    19,   120,    50,    22,    23,    24,
      50,    30,    28,     4,   129,    51,    51,     1,   133,     3,
       4,     5,    50,    30,   139,   140,    50,    42,    43,    49,
      45,    16,    16,    50,    49,    19,    51,    31,    22,    23,
      24,   126,    -1,    -1,    -1,    29,    -1,    -1,     1,    -1,
       3,     4,     5,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    45,    -1,    16,    -1,    49,    19,    51,    -1,    22,
      23,    24,    -1,   100,   101,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,    42,
      43,    -1,    45,    -1,    -1,    -1,    49,   124,    51,   126,
      -1,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,   138,    -1,    -1,    -1,   142,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      -1,    -1,    51,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    -1,    50,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    45,
      46,    47,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,    16,    18,    19,    22,    23,
      24,    42,    43,    45,    49,    51,    53,    54,    56,    57,
      58,    60,    61,    62,    63,    66,    67,    68,    51,    13,
      14,    32,    49,    51,    49,     4,    49,    49,    49,     4,
      57,    58,    57,    57,     0,    54,    60,    30,    35,    36,
      37,    38,    39,    40,    45,    46,    47,    48,    51,    51,
      30,    51,    51,    51,    51,    57,    58,    61,    57,    58,
       4,    49,    57,    58,    58,     4,    56,    50,    51,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    51,
      50,    50,    50,     6,     7,     8,     9,    10,    50,    59,
      50,    50,    30,    30,    28,    69,     4,    68,    68,    58,
      51,    29,    54,    55,    50,    69,    69,    30,    29,    54,
      68,    68,    56,    69,    20,    21,    64,    65,    50,    68,
      49,    65,    68,    68,    69,    58,    20,    69,    50,    68,
      68,    69,    69,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    53,    53,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    55,    55,    56,
      56,    56,    56,    56,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    58,    58,    58,    58,    58,    58,    58,
      58,    59,    59,    59,    59,    59,    60,    60,    61,    61,
      62,    62,    63,    63,    63,    63,    64,    64,    65,    66,
      67,    68,    68,    68,    69,    69
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     1,     2,     3,     2,
       2,     2,     2,     3,     6,     2,     2,     1,     2,     3,
       3,     3,     2,     2,     1,     1,     1,     3,     3,     3,
       3,     3,     2,     1,     1,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     8,     5,     4,     4,
       2,     2,     6,    10,     8,    12,     1,     2,     7,     6,
      10,     2,     1,     0,     3,     2
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
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (&yylloc, scanner, pParseTree, YY_("syntax error: cannot back up")); \
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

__attribute__((__unused__))
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
                  Type, Value, Location, scanner, pParseTree); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, ScannerParserCL* pParseTree)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (pParseTree);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, ScannerParserCL* pParseTree)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, scanner, pParseTree);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, yyscan_t scanner, ScannerParserCL* pParseTree)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , scanner, pParseTree);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, pParseTree); \
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
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
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
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, ScannerParserCL* pParseTree)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (pParseTree);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, ScannerParserCL* pParseTree)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

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

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 62 "analyzer.y" /* yacc.c:1429  */
{
	/* code for initialization before parsing 
		code in this block is executed each time yyparse is called. */

		// for runtime debugging
		// yydebug = 1;
}

#line 1334 "analyzer.cpp" /* yacc.c:1429  */
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
      yychar = yylex (&yylval, &yylloc, scanner);
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

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
  switch (yyn)
    {
        case 7:
#line 133 "analyzer.y" /* yacc.c:1646  */
    { 
		pParseTree->makeTreeHead((yyvsp[-1].node));
		cout << "Parsed: "<<(yyvsp[-1].node)->nodeType<<"="<<(yyvsp[-1].node)->value<<endl;
		pParseTree->printTree(pParseTree->getTreeHead());
}
#line 1527 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 138 "analyzer.y" /* yacc.c:1646  */
    {   
		pParseTree->storeAssign((yyvsp[-2].assign_ptr));
}
#line 1535 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 141 "analyzer.y" /* yacc.c:1646  */
    {
	cout << "Bool Value: "<<(yyvsp[-1].bool_value)<<endl;
	}
#line 1543 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 144 "analyzer.y" /* yacc.c:1646  */
    {
	cout<<"�﷨�ṹ: whileѭ��"<<endl;
	}
#line 1551 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 147 "analyzer.y" /* yacc.c:1646  */
    {
	cout<<"�﷨�ṹ: if�ж�"<<endl;
	}
#line 1559 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 150 "analyzer.y" /* yacc.c:1646  */
    {
	cout<<"�﷨�ṹ: forѭ��"<<endl;
	}
#line 1567 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 153 "analyzer.y" /* yacc.c:1646  */
    {
	cout<<"return"<<endl;
	}
#line 1575 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 156 "analyzer.y" /* yacc.c:1646  */
    { pParseTree->printIdentifier((yyvsp[-3].cstr)); }
#line 1581 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 157 "analyzer.y" /* yacc.c:1646  */
    { pParseTree->SayHello("I am a parser!");}
#line 1587 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 158 "analyzer.y" /* yacc.c:1646  */
    { yyerrok; }
#line 1593 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 165 "analyzer.y" /* yacc.c:1646  */
    { 
		auto pAssign = pParseTree->getPAssign();
		(yyval.assign_ptr) = pAssign->makeAssign((yyvsp[-2].cstr), (yyvsp[0].node)->value);
}
#line 1602 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 169 "analyzer.y" /* yacc.c:1646  */
    {auto pAssign = pParseTree->getPAssign();(yyval.assign_ptr) = pAssign->makeAssign((yyvsp[-2].cstr), false); }
#line 1608 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 170 "analyzer.y" /* yacc.c:1646  */
    {auto pAssign = pParseTree->getPAssign();(yyval.assign_ptr) =pAssign->makeAssign((yyvsp[-2].cstr), (yyvsp[0].bool_value));}
#line 1614 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 171 "analyzer.y" /* yacc.c:1646  */
    {

	    auto pMath = pParseTree->getPMath();
		auto pVariableMap = pParseTree->getPVariableMap();	
		DiyValue result = pVariableMap->getIdentifier((yyvsp[-1].cstr));
		if(result.type != DOUBLE){ cout<<"Type error: "<< result.type <<endl; YYERROR; }
		else{ 
		double value = 0; 
		result.getValue(&value);
		auto pAssign = pParseTree->getPAssign();
	    (yyval.assign_ptr) = pAssign->makeAssign((yyvsp[-1].cstr), value+1);
		} 

	   }
#line 1633 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 185 "analyzer.y" /* yacc.c:1646  */
    {

	    auto pMath = pParseTree->getPMath();
		auto pVariableMap = pParseTree->getPVariableMap();	
		DiyValue result = pVariableMap->getIdentifier((yyvsp[-1].cstr));
		if(result.type != DOUBLE){ cout<<"Type error: "<< result.type <<endl; YYERROR; }
		else{ 
		double value = 0; 
		result.getValue(&value);
		auto pAssign = pParseTree->getPAssign();
	    (yyval.assign_ptr) = pAssign->makeAssign((yyvsp[-1].cstr), value-1); 
		}
	   
	   }
#line 1652 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 203 "analyzer.y" /* yacc.c:1646  */
    { 
		auto pMath = pParseTree->getPMath();
		(yyval.node) = pMath->makeNode( "number",(yyvsp[0].double_value));
}
#line 1661 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 207 "analyzer.y" /* yacc.c:1646  */
    {
		auto pMath = pParseTree->getPMath();
		auto pVariableMap = pParseTree->getPVariableMap();	
		DiyValue result = pVariableMap->getIdentifier((yyvsp[0].cstr));
		if(result.type != DOUBLE){ cout<<"Type error: "<< result.type <<endl; YYERROR; }
		else{ double value = 0; result.getValue(&value); (yyval.node) = pMath->makeNode( (yyvsp[0].cstr), value); }
}
#line 1673 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 214 "analyzer.y" /* yacc.c:1646  */
    { (yyval.node) = 0;}
#line 1679 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 215 "analyzer.y" /* yacc.c:1646  */
    {auto pMath = pParseTree->getPMath(); (yyval.node) = pMath->makeNode((yyvsp[-2].node)->value+(yyvsp[0].node)->value, (yyvsp[-2].node), (yyvsp[0].node), "+");}
#line 1685 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 216 "analyzer.y" /* yacc.c:1646  */
    {auto pMath = pParseTree->getPMath(); (yyval.node) = pMath->makeNode((yyvsp[-2].node)->value-(yyvsp[0].node)->value, (yyvsp[-2].node), (yyvsp[0].node), "-");}
#line 1691 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 217 "analyzer.y" /* yacc.c:1646  */
    {auto pMath = pParseTree->getPMath(); (yyval.node) = pMath->makeNode((yyvsp[-2].node)->value*(yyvsp[0].node)->value, (yyvsp[-2].node), (yyvsp[0].node), "*");}
#line 1697 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 218 "analyzer.y" /* yacc.c:1646  */
    {
		auto pMath = pParseTree->getPMath();
		double num = (yyvsp[0].node)->value;
		if(num >=(-1e-6)&& num<=(1e-6)){ printf("Division by zero\n"); YYERROR; }
		else{ (yyval.node) = pMath->makeNode((yyvsp[-2].node)->value/(yyvsp[0].node)->value, (yyvsp[-2].node), (yyvsp[0].node), "/"); }
}
#line 1708 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 224 "analyzer.y" /* yacc.c:1646  */
    { auto pMath = pParseTree->getPMath(); (yyval.node) = pMath->makeNode((yyvsp[-1].node)->value, (yyvsp[-1].node), "()"); }
#line 1714 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 225 "analyzer.y" /* yacc.c:1646  */
    {auto pMath = pParseTree->getPMath(); (yyval.node) = pMath->makeNode(-(yyvsp[0].node)->value, (yyvsp[0].node), "-");}
#line 1720 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 228 "analyzer.y" /* yacc.c:1646  */
    {
	    (yyval.bool_value) = true;
	}
#line 1728 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 231 "analyzer.y" /* yacc.c:1646  */
    {
	    (yyval.bool_value) = false; 
	}
#line 1736 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 234 "analyzer.y" /* yacc.c:1646  */
    {

		(yyval.bool_value) = (yyvsp[-2].node) > (yyvsp[0].node);

}
#line 1746 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 240 "analyzer.y" /* yacc.c:1646  */
    {

	    (yyval.bool_value) = (yyvsp[-2].node) < (yyvsp[0].node);

	 }
#line 1756 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 246 "analyzer.y" /* yacc.c:1646  */
    {

	    (yyval.bool_value) = (yyvsp[-2].node) == (yyvsp[0].node);

 	 }
#line 1766 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 252 "analyzer.y" /* yacc.c:1646  */
    {

	    (yyval.bool_value) = (yyvsp[-2].node) >= (yyvsp[0].node);

	 }
#line 1776 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 258 "analyzer.y" /* yacc.c:1646  */
    {

	    (yyval.bool_value) = (yyvsp[-2].node) <= (yyvsp[0].node);

	 }
#line 1786 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 264 "analyzer.y" /* yacc.c:1646  */
    {

	    (yyval.bool_value) = (yyvsp[-2].node) != (yyvsp[0].node);

	 }
#line 1796 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 283 "analyzer.y" /* yacc.c:1646  */
    {
	 
	 cout<<"�﷨�ṹ: ��������--"<<(yyvsp[-6].cstr)<<endl;
	 }
#line 1805 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 288 "analyzer.y" /* yacc.c:1646  */
    {
	 
	 }
#line 1813 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 312 "analyzer.y" /* yacc.c:1646  */
    {
           
        }
#line 1821 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 320 "analyzer.y" /* yacc.c:1646  */
    {
           
        }
#line 1829 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 328 "analyzer.y" /* yacc.c:1646  */
    {
	 }
#line 1836 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 334 "analyzer.y" /* yacc.c:1646  */
    {
	 
	 }
#line 1844 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 346 "analyzer.y" /* yacc.c:1646  */
    {
           
        }
#line 1852 "analyzer.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 350 "analyzer.y" /* yacc.c:1646  */
    {
           
        }
#line 1860 "analyzer.cpp" /* yacc.c:1646  */
    break;


#line 1864 "analyzer.cpp" /* yacc.c:1646  */
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
      yyerror (&yylloc, scanner, pParseTree, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
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
        yyerror (&yylloc, scanner, pParseTree, yymsgp);
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
                      yytoken, &yylval, &yylloc, scanner, pParseTree);
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
                  yystos[yystate], yyvsp, yylsp, scanner, pParseTree);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, pParseTree, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, scanner, pParseTree);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, scanner, pParseTree);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 355 "analyzer.y" /* yacc.c:1906  */


// newer yyerror() function definition
// for use with reentant scanner and parser
// with location tracking
void yyerror (YYLTYPE *yylloc, yyscan_t yyscanner,
	 ScannerParserCL* pParseTree, const char* msg)
{
	std::cout<<"Error - "<<msg<<std::endl;
}
