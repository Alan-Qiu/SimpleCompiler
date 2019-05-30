/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "Compiler.y"

#define YYSTYPE attributes
#include <cstdio>
#include <map>
#include "tree.h"
#include "table.h"
using namespace std;

extern char *yytext;
extern int column;
extern FILE * yyin;
extern int yylineno;

treeNode *root;//the root node of the syntax tree
SymbolTable symTable;// the symbol table
int resState;//the buffer to show the state of the symbol in table (found or not found)
vector<string> funcPaTypes;// buffer of the parameters of the function, used to insert paras into tables when function declaration
vector<string> funcPaNames;// buffer of the parameters of the function, used to insert paras into tables when function declaration
int isFuncStatement = 0;//to show if a compound statement belongs to a function delaration, which compiler need to add the parameters into the symbol table 
map<string,bool> funcDefined;//to show a function is defined or not

int yylex(void);
void yyerror(const char*); 


/* Line 371 of yacc.c  */
#line 94 "Compiler.tab.c"

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "Compiler.tab.h".  */
#ifndef YY_YY_COMPILER_TAB_H_INCLUDED
# define YY_YY_COMPILER_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     CONSTANT_INT = 259,
     CONSTANT_DOUBLE = 260,
     CONSTANT_BOOL = 261,
     ADD_OP = 262,
     MUL_OP = 263,
     REL_OP = 264,
     BOOL = 265,
     INT = 266,
     DOUBLE = 267,
     VOID = 268,
     IF = 269,
     ELSE = 270,
     WHILE = 271,
     RETURN = 272,
     LOWER_THAN_ELSE = 273
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_COMPILER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 178 "Compiler.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   118

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  28
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNRULES -- Number of states.  */
#define YYNSTATES  104

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   273

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      25,    26,     2,     2,    19,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    18,
       2,    20,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    21,     2,    22,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    23,     2,    24,     2,     2,     2,     2,
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
      15,    16,    17,    27
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    20,
      26,    33,    35,    37,    39,    41,    49,    57,    58,    60,
      62,    66,    68,    71,    76,    81,    83,    85,    86,    89,
      90,    93,    95,    97,    99,   101,   103,   106,   108,   114,
     122,   128,   131,   135,   139,   141,   143,   148,   152,   154,
     158,   160,   164,   166,   170,   172,   174,   176,   178,   180,
     185,   186,   188,   192
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      29,     0,    -1,    30,    -1,    30,    31,    -1,    31,    -1,
      32,    -1,    35,    -1,    34,    -1,    33,     3,    18,    -1,
      33,     3,    20,    52,    18,    -1,    33,     3,    21,     4,
      22,    18,    -1,    11,    -1,    13,    -1,    10,    -1,    12,
      -1,    33,     3,    25,    36,    37,    26,    18,    -1,    33,
       3,    25,    36,    37,    26,    40,    -1,    -1,    38,    -1,
      13,    -1,    38,    19,    39,    -1,    39,    -1,    33,     3,
      -1,    33,     3,    21,    22,    -1,    41,    43,    44,    42,
      -1,    23,    -1,    24,    -1,    -1,    43,    32,    -1,    -1,
      44,    45,    -1,    46,    -1,    40,    -1,    47,    -1,    48,
      -1,    49,    -1,    50,    18,    -1,    18,    -1,    14,    25,
      50,    26,    45,    -1,    14,    25,    50,    26,    45,    15,
      45,    -1,    16,    25,    50,    26,    45,    -1,    17,    18,
      -1,    17,    50,    18,    -1,    51,    20,    50,    -1,    52,
      -1,     3,    -1,     3,    21,    50,    22,    -1,    53,     9,
      53,    -1,    53,    -1,    53,     7,    54,    -1,    54,    -1,
      54,     8,    55,    -1,    55,    -1,    25,    50,    26,    -1,
      51,    -1,    56,    -1,     4,    -1,     5,    -1,     6,    -1,
       3,    25,    57,    26,    -1,    -1,    58,    -1,    58,    19,
      50,    -1,    50,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    39,    39,    44,    48,    54,    58,    62,    69,    79,
      96,   107,   111,   115,   119,   125,   141,   159,   168,   174,
     182,   188,   196,   204,   214,   222,   236,   240,   243,   248,
     253,   278,   284,   290,   296,   302,   310,   314,   317,   326,
     355,   367,   373,   381,   393,   401,   415,   445,   457,   465,
     477,   485,   497,   505,   511,   517,   523,   528,   533,   540,
     578,   582,   590,   596
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT_INT",
  "CONSTANT_DOUBLE", "CONSTANT_BOOL", "ADD_OP", "MUL_OP", "REL_OP", "BOOL",
  "INT", "DOUBLE", "VOID", "IF", "ELSE", "WHILE", "RETURN", "';'", "','",
  "'='", "'['", "']'", "'{'", "'}'", "'('", "')'", "LOWER_THAN_ELSE",
  "$accept", "Program", "declaration_list", "declaration",
  "var_declaration", "type_specifier", "fun_declaration", "fun_definition",
  "para_starts", "params", "params_list", "param", "compound_stmt",
  "compound_stmt_start", "compound_stmt_end", "local_declarations",
  "statement_list", "statement", "expression_stmt", "selection_stmt",
  "iteration_stmt", "return_stmt", "expression", "var",
  "simple_expression", "additive_expression", "term", "factor", "call",
  "args", "arg_list", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    59,    44,
      61,    91,    93,   123,   125,    40,    41,   273
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    28,    29,    30,    30,    31,    31,    31,    32,    32,
      32,    33,    33,    33,    33,    34,    35,    36,    37,    37,
      38,    38,    39,    39,    40,    41,    42,    43,    43,    44,
      44,    45,    45,    45,    45,    45,    46,    46,    47,    47,
      48,    49,    49,    50,    50,    51,    51,    52,    52,    53,
      53,    54,    54,    55,    55,    55,    55,    55,    55,    56,
      57,    57,    58,    58
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     5,
       6,     1,     1,     1,     1,     7,     7,     0,     1,     1,
       3,     1,     2,     4,     4,     1,     1,     0,     2,     0,
       2,     1,     1,     1,     1,     1,     2,     1,     5,     7,
       5,     2,     3,     3,     1,     1,     4,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     4,
       0,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    13,    11,    14,    12,     0,     2,     4,     5,     0,
       7,     6,     1,     3,     0,     8,     0,     0,    17,    45,
      56,    57,    58,     0,    54,     0,    48,    50,    52,    55,
       0,     0,     0,    60,     0,    54,    44,     9,     0,     0,
       0,     0,    12,     0,     0,    18,    21,     0,    63,     0,
      61,    53,     0,    49,    47,    51,    10,    22,     0,     0,
      46,    59,     0,    43,     0,    15,    25,    16,    27,    20,
      62,    23,    29,    28,     0,     0,     0,     0,     0,     0,
      37,    26,    32,    24,    30,    31,    33,    34,    35,     0,
       0,     0,    41,     0,    36,     0,     0,    42,     0,     0,
      38,    40,     0,    39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    10,    11,    31,    44,
      45,    46,    82,    68,    83,    72,    75,    84,    85,    86,
      87,    88,    89,    35,    36,    26,    27,    28,    29,    49,
      50
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -63
static const yytype_int8 yypact[] =
{
      52,   -63,   -63,   -63,   -63,     3,    52,   -63,   -63,     5,
     -63,   -63,   -63,   -63,    29,   -63,    10,     7,   -63,    -3,
     -63,   -63,   -63,    10,   -63,     2,    48,    13,   -63,   -63,
       6,    64,    10,    10,    12,    21,   -63,   -63,    10,    10,
      10,     9,    22,    63,    44,    65,   -63,    66,   -63,    57,
      67,   -63,    10,    13,    78,   -63,   -63,    68,    -6,    52,
     -63,   -63,    10,   -63,    69,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,    52,   -63,    84,    28,    61,    70,    71,     1,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,    72,
      10,    10,   -63,    74,   -63,    73,    75,   -63,    55,    55,
      79,   -63,    55,   -63
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -63,   -63,   -63,    87,    25,   -29,   -63,   -63,   -63,   -63,
     -63,    39,    42,   -63,   -63,   -63,   -63,   -62,   -63,   -63,
     -63,   -63,   -23,   -15,    86,    76,    80,    77,   -63,   -63,
     -63
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -20
static const yytype_int8 yytable[] =
{
      34,    24,    43,    12,    19,    20,    21,    22,    14,    47,
      48,    30,    65,    19,    20,    21,    22,    66,    32,    92,
      37,    40,    33,    24,    24,    24,    23,    56,    41,    63,
      43,    19,    20,    21,    22,    23,   100,   101,    51,    70,
     103,    52,    77,    74,    78,    79,    80,    15,   -19,    16,
      17,    66,    81,    23,    18,    38,    93,    39,    19,    20,
      21,    22,     1,     2,     3,     4,    57,    95,    96,    77,
      58,    78,    79,    80,     1,     2,     3,    42,    66,    15,
      23,    16,    17,    61,    59,    38,    62,    76,    60,    64,
      94,    71,    97,    13,   102,    90,    91,    73,    69,    98,
      67,    99,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,     0,    55,    53
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-63)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
      23,    16,    31,     0,     3,     4,     5,     6,     3,    32,
      33,     4,    18,     3,     4,     5,     6,    23,    21,    18,
      18,     8,    25,    38,    39,    40,    25,    18,    22,    52,
      59,     3,     4,     5,     6,    25,    98,    99,    26,    62,
     102,    20,    14,    72,    16,    17,    18,    18,    26,    20,
      21,    23,    24,    25,    25,     7,    79,     9,     3,     4,
       5,     6,    10,    11,    12,    13,     3,    90,    91,    14,
      26,    16,    17,    18,    10,    11,    12,    13,    23,    18,
      25,    20,    21,    26,    19,     7,    19,     3,    22,    21,
      18,    22,    18,     6,    15,    25,    25,    72,    59,    26,
      58,    26,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    40,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    11,    12,    13,    29,    30,    31,    32,    33,
      34,    35,     0,    31,     3,    18,    20,    21,    25,     3,
       4,     5,     6,    25,    51,    52,    53,    54,    55,    56,
       4,    36,    21,    25,    50,    51,    52,    18,     7,     9,
       8,    22,    13,    33,    37,    38,    39,    50,    50,    57,
      58,    26,    20,    54,    53,    55,    18,     3,    26,    19,
      22,    26,    19,    50,    21,    18,    23,    40,    41,    39,
      50,    22,    43,    32,    33,    44,     3,    14,    16,    17,
      18,    24,    40,    42,    45,    46,    47,    48,    49,    50,
      25,    25,    18,    50,    18,    50,    50,    18,    26,    26,
      45,    45,    15,    45
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

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
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
      yychar = YYLEX;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1792 of yacc.c  */
#line 39 "Compiler.y"
    { 
		root = create_tree("Program", 1, -1, (yyvsp[(1) - (1)]).st);
	}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 44 "Compiler.y"
    {
		(yyval).st = create_tree("declaration_list", 2, -1, (yyvsp[(1) - (2)]).st, (yyvsp[(2) - (2)]).st);
		(yyval).lineNo = (yyvsp[(1) - (2)]).lineNo;
	}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 48 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
	}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 54 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
	}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 58 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
	}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 62 "Compiler.y"
    {
		//TODO
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
	}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 69 "Compiler.y"
    {
		(yyval).st = create_tree("var_declaration", 2, -1, (yyvsp[(1) - (3)]).st, (yyvsp[(2) - (3)]).st);
		(yyval).lineNo = (yyvsp[(1) - (3)]).lineNo;
		
		//insert into symbol table
		resState = symTable.insertSymbol((yyvsp[(2) - (3)]).st->nodeName, (yyvsp[(1) - (3)]).st->nodeName);
		if(resState == -1){
			cout << "[Compile Error] Line:" << (yyval).lineNo << " variable " << (yyvsp[(2) - (3)]).st->nodeName << " has been defined." << endl; 
		}
	}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 79 "Compiler.y"
    {
		//TODO
		(yyval).st = create_tree("var_declaration", 3, -1, (yyvsp[(1) - (5)]).st, (yyvsp[(2) - (5)]).st, (yyvsp[(4) - (5)]).st);
		(yyval).lineNo = (yyvsp[(1) - (5)]).lineNo;
		
		//insert into symbol table
		resState = symTable.insertSymbol((yyvsp[(2) - (5)]).st->nodeName, (yyvsp[(1) - (5)]).st->nodeName);
		if(resState == -1){
			cout << "[Compile Error] Line:" << (yyval).lineNo << " variable " << (yyvsp[(2) - (5)]).st->nodeName << " has been defined." << endl; 
		}
		else{
			//check type
			if((yyvsp[(1) - (5)]).st->nodeName != (yyvsp[(4) - (5)]).type){
				cout << "[Compile Error] Line:" << (yyval).lineNo << " initializer should be type " << (yyvsp[(1) - (5)]).st->nodeName << " but not " << (yyvsp[(4) - (5)]).type << endl; 
			}
		}	
	}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 96 "Compiler.y"
    {
		(yyval).st = create_tree("var_declaration", 3, -1, (yyvsp[(1) - (6)]).st, (yyvsp[(2) - (6)]).st, (yyvsp[(4) - (6)]).st);
		(yyval).lineNo = (yyvsp[(1) - (6)]).lineNo;
		
		resState = symTable.insertSymbol((yyvsp[(2) - (6)]).st->nodeName, (yyvsp[(1) - (6)]).st->nodeName+"*");
		if(resState == -1){
			cout << "[Compile Error] Line:" << (yyval).lineNo << " variable " << (yyvsp[(2) - (6)]).st->nodeName << " has been defined." << endl; 
		}
	}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 107 "Compiler.y"
    {
		(yyval).st = create_tree("INT", 0, -1);
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
	}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 111 "Compiler.y"
    {
		(yyval).st = create_tree("VOID", 0, -1);
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
	}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 115 "Compiler.y"
    {
		(yyval).st = create_tree("BOOL", 0, -1);
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
	}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 119 "Compiler.y"
    {
		(yyval).st = create_tree("DOUBLE", 0, -1);
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
	}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 125 "Compiler.y"
    {
		//TODO
		(yyval).st = create_tree("fun_declaration", 4, -1, (yyvsp[(1) - (7)]).st, (yyvsp[(2) - (7)]).st, (yyvsp[(4) - (7)]).st, (yyvsp[(6) - (7)]).st);
		(yyval).lineNo = (yyvsp[(1) - (7)]).lineNo;
		
		resState = symTable.insertSymbol((yyvsp[(2) - (7)]).st->nodeName, (yyvsp[(1) - (7)]).st->nodeName + " " + (yyvsp[(5) - (7)]).funcParas);
		if(resState == -1){
			cout << "[Compile Error] Line:" << (yyval).lineNo << " function " << (yyvsp[(2) - (7)]).st->nodeName << " has been declared." << endl; 
		}
		else{
			funcDefined[(yyvsp[(2) - (7)]).st->nodeName]=false;
		}
		
	}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 141 "Compiler.y"
    {
		(yyval).st = create_tree("fun_definition", 4, -1, (yyvsp[(1) - (7)]).st, (yyvsp[(2) - (7)]).st, (yyvsp[(4) - (7)]).st, (yyvsp[(6) - (7)]).st);
		(yyval).lineNo = (yyvsp[(1) - (7)]).lineNo;
		
		resState = symTable.insertSymbol((yyvsp[(2) - (7)]).st->nodeName, (yyvsp[(1) - (7)]).st->nodeName + " " + (yyvsp[(5) - (7)]).funcParas);
		if(resState == -1 && funcDefined[(yyvsp[(2) - (7)]).st->nodeName] == true){
			cout << "[Compile Error] Line:" << (yyval).lineNo << " function " << (yyvsp[(2) - (7)]).st->nodeName << " has been defined." << endl; 
		}
		
		funcDefined[(yyvsp[(2) - (7)]).st->nodeName]=true;
		
		if((yyvsp[(7) - (7)]).type != (yyvsp[(1) - (7)]).st->nodeName){
			cout << "[Compile Error] Line:" << (yyval).lineNo << " return value type in statement is not " << (yyvsp[(1) - (7)]).st->nodeName << endl; 
		}
	}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 159 "Compiler.y"
    {
		for(int i = 0; i < funcPaTypes.size(); i++){
			funcPaTypes.pop_back();
			funcPaNames.pop_back();
		}
		isFuncStatement = 1;
	}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 168 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
		
		(yyval).funcParas = (yyvsp[(1) - (1)]).funcParas;
	}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 174 "Compiler.y"
    {
		(yyval).st = create_tree("VOID", 0, -1);
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
		
		(yyval).funcParas = "VOID";
	}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 182 "Compiler.y"
    {
		(yyval).st = create_tree("params_list", 2, -1, (yyvsp[(1) - (3)]).st, (yyvsp[(3) - (3)]).st);
		(yyval).lineNo = (yyvsp[(1) - (3)]).lineNo;
		
		(yyval).funcParas = (yyvsp[(1) - (3)]).funcParas + " " + (yyvsp[(3) - (3)]).funcParas;
	}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 188 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
		
		(yyval).funcParas = (yyvsp[(1) - (1)]).funcParas;
	}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 196 "Compiler.y"
    {
		(yyval).st = create_tree("param", 2, -1, (yyvsp[(1) - (2)]).st, (yyvsp[(2) - (2)]).st);
		(yyval).lineNo = (yyvsp[(1) - (2)]).lineNo;
		
		(yyval).funcParas = (yyvsp[(1) - (2)]).st->nodeName;
		funcPaTypes.push_back((yyvsp[(1) - (2)]).st->nodeName);
		funcPaNames.push_back((yyvsp[(2) - (2)]).st->nodeName);	
	}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 204 "Compiler.y"
    {
		(yyval).st = create_tree("param_array", 2, -1, (yyvsp[(1) - (4)]).st, (yyvsp[(2) - (4)]).st);
		(yyval).lineNo = (yyvsp[(1) - (4)]).lineNo;
		
		(yyval).funcParas = (yyvsp[(1) - (4)]).st->nodeName + "*";
		funcPaTypes.push_back((yyvsp[(1) - (4)]).st->nodeName+"*");
		funcPaNames.push_back((yyvsp[(2) - (4)]).st->nodeName);	
	}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 214 "Compiler.y"
    {
		(yyval).st = create_tree("compound_stmt",2,-1,(yyvsp[(2) - (4)]).st,(yyvsp[(3) - (4)]).st);
		(yyval).lineNo = (yyvsp[(1) - (4)]).lineNo;	 
		
		(yyval).type = (yyvsp[(3) - (4)]).type; 
	}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 222 "Compiler.y"
    {
		symTable.createTable();
		
		if(isFuncStatement == 1){
			for(int i = 0; i < funcPaTypes.size(); i++){
				resState = symTable.insertSymbol(funcPaNames[i], funcPaTypes[i]);
				if(resState == -1){
					cout << "[Compile Error] Line:" << (yyvsp[(1) - (1)]).lineNo << " function parameters name should be different." << endl; 
				}
			}
		}
	}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 236 "Compiler.y"
    {
		symTable.deleteTable();
	}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 240 "Compiler.y"
    {
		(yyval).st = NULL;
	}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 243 "Compiler.y"
    {
		(yyval).st = create_tree("local_declarations",2,-1,(yyvsp[(1) - (2)]).st,(yyvsp[(2) - (2)]).st);
		(yyval).lineNo = (yyvsp[(1) - (2)]).lineNo;
	}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 248 "Compiler.y"
    {
		(yyval).st = NULL;
		
		(yyval).type = "STATEMENT";
	}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 253 "Compiler.y"
    {
		(yyval).st = create_tree("statement_list",2,-1,(yyvsp[(1) - (2)]).st,(yyvsp[(2) - (2)]).st);
		(yyval).lineNo = (yyvsp[(1) - (2)]).lineNo;
		
		if((yyvsp[(1) - (2)]).type != "STATEMENT" && (yyvsp[(2) - (2)]).type != "STATEMENT"){
			if((yyvsp[(1) - (2)]).type != (yyvsp[(2) - (2)]).type){
				cout << "[Compile Error] Line:" << (yyvsp[(2) - (2)]).lineNo << " there exist two return statement with different value." << endl; 
				(yyval).type = (yyvsp[(1) - (2)]).type; 
			}
			else{
				(yyval).type = (yyvsp[(1) - (2)]).type; 
			}
		}
		else if((yyvsp[(1) - (2)]).type == "STATEMENT" && (yyvsp[(2) - (2)]).type == "STATEMENT"){
			(yyval).type = "STATEMENT";
		}
		else if((yyvsp[(1) - (2)]).type == "STATEMENT" && (yyvsp[(2) - (2)]).type != "STATEMENT"){
			(yyval).type = (yyvsp[(2) - (2)]).type;
		}
		else{
			(yyval).type = (yyvsp[(1) - (2)]).type;
		}
	}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 278 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
		
		(yyval).type = "STATEMENT";
	}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 284 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
		
		(yyval).type = (yyvsp[(1) - (1)]).type;
	}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 290 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
		
		(yyval).type = (yyvsp[(1) - (1)]).type;
	}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 296 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
		
		(yyval).type = (yyvsp[(1) - (1)]).type;
	}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 302 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
		
		(yyval).type = (yyvsp[(1) - (1)]).type;
	}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 310 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (2)]).st;
		(yyval).lineNo = (yyvsp[(1) - (2)]).lineNo;
	}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 314 "Compiler.y"
    {(yyval).st = NULL;(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 317 "Compiler.y"
    {
		(yyval).st = create_tree("IF", 2, -1, (yyvsp[(3) - (5)]).st, (yyvsp[(5) - (5)]).st);
		(yyval).lineNo = (yyvsp[(1) - (5)]).lineNo;
		
		if((yyvsp[(3) - (5)]).type != "BOOL"){
			cout << "[Compile Error] Line:" << (yyvsp[(3) - (5)]).lineNo << " the value of the branch condition should be a bool" << endl; 
		}
		(yyval).type = (yyvsp[(5) - (5)]).type;
	}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 326 "Compiler.y"
    {
		(yyval).st = create_tree("IF_ELSE", 3, -1, (yyvsp[(3) - (7)]).st, (yyvsp[(5) - (7)]).st, (yyvsp[(7) - (7)]).st);
		(yyval).lineNo = (yyvsp[(1) - (7)]).lineNo;
		
		if((yyvsp[(3) - (7)]).type != "BOOL"){
			cout << "[Compile Error] Line:" << (yyvsp[(3) - (7)]).lineNo << " the value of the branch condition should be a bool" << endl; 
		}
		
		if((yyvsp[(5) - (7)]).type != "STATEMENT" && (yyvsp[(7) - (7)]).type != "STATEMENT"){
			if((yyvsp[(5) - (7)]).type != (yyvsp[(7) - (7)]).type){
				cout << "[Compile Error] Line:" << (yyvsp[(5) - (7)]).lineNo << " there exist two return statement with different value." << endl; 
				(yyval).type = (yyvsp[(5) - (7)]).type; 
			}
			else{
				(yyval).type = (yyvsp[(5) - (7)]).type; 
			}
		}
		else if((yyvsp[(5) - (7)]).type == "STATEMENT" && (yyvsp[(7) - (7)]).type == "STATEMENT"){
			(yyval).type = "STATEMENT";
		}
		else if((yyvsp[(5) - (7)]).type == "STATEMENT" && (yyvsp[(7) - (7)]).type != "STATEMENT"){
			(yyval).type = (yyvsp[(7) - (7)]).type;
		}
		else{
			(yyval).type = (yyvsp[(5) - (7)]).type;
		}
	}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 355 "Compiler.y"
    {
		(yyval).st = create_tree("WHILE", 2, -1, (yyvsp[(3) - (5)]).st, (yyvsp[(5) - (5)]).st);
		(yyval).lineNo = (yyvsp[(1) - (5)]).lineNo;
		
		if((yyvsp[(3) - (5)]).type != "BOOL"){
			cout << "[Compile Error] Line:" << (yyvsp[(3) - (5)]).lineNo << " the value of the branch condition should be a bool" << endl; 
		}
		
		(yyval).type = (yyvsp[(5) - (5)]).type;
	}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 367 "Compiler.y"
    {
		(yyval).st = create_tree("RETURN", 0, -1);
		(yyval).lineNo = (yyvsp[(1) - (2)]).lineNo;
		
		(yyval).type = "VOID";
	}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 373 "Compiler.y"
    {
		(yyval).st = create_tree("RETURN", 1, -1, (yyvsp[(2) - (3)]).st);
		(yyval).lineNo = (yyvsp[(1) - (3)]).lineNo;
		
		(yyval).type = (yyvsp[(2) - (3)]).type;
	}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 381 "Compiler.y"
    {
		(yyval).st = create_tree("=", 2, -1, (yyvsp[(1) - (3)]).st, (yyvsp[(3) - (3)]).st);
		(yyval).lineNo = (yyvsp[(1) - (3)]).lineNo;
		
		if((yyvsp[(1) - (3)]).type != (yyvsp[(3) - (3)]).type){
			cout << "[Compile Error] Line:" << (yyval).lineNo << " type " << (yyvsp[(3) - (3)]).type << " cannot assigned to variable " << (yyvsp[(1) - (3)]).st->nodeName << endl; 
			(yyval).type = "UNDEFINED";
		}
		else{
			(yyval).type = (yyvsp[(1) - (3)]).type;		
		}
	}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 393 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
		
		(yyval).type = (yyvsp[(1) - (1)]).type;
	}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 401 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
		
		//check symbol defined and get type
		resState = symTable.findSymbol((yyvsp[(1) - (1)]).st->nodeName);
		if(resState == 0){
			cout << "[Compile Error] Line:" << (yyval).lineNo << " variable " << (yyvsp[(1) - (1)]).st->nodeName << " is not defined." << endl; 
			(yyval).type = "UNDEFINED";
		}
		else{
			(yyval).type = symTable.getSymbolType((yyvsp[(1) - (1)]).st->nodeName);
		} 
	}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 415 "Compiler.y"
    {
		(yyval).st = create_tree((yyvsp[(1) - (4)]).st->nodeName, 1, -1, (yyvsp[(3) - (4)]).st);
		(yyval).lineNo = (yyvsp[(1) - (4)]).lineNo;
		
		string buff;
		//check symbol defined 
		resState = symTable.findSymbol((yyvsp[(1) - (4)]).st->nodeName);
		if(resState == 0){
			cout << "[Compile Error] Line:" << (yyval).lineNo << " variable " << (yyvsp[(1) - (4)]).st->nodeName << " is not defined." << endl; 
			(yyval).type = "UNDEFINED";
		}
		else{
			buff = symTable.getSymbolType((yyvsp[(1) - (4)]).st->nodeName);
			//check if type is array and get type
			
			if(buff[buff.size()-1] != '*'){
				cout << "[Compile Error] Line:" << (yyval).lineNo << " variable " << (yyvsp[(1) - (4)]).st->nodeName << " is not array type." << endl; 
				(yyval).type = buff;
			}
			else{
				(yyval).type = buff.substr(0,buff.size()-1);
			} 
		}
		
		if((yyvsp[(3) - (4)]).type != "INT"){
				cout << "[Compile Error] Line:" << (yyval).lineNo << " array index tyoe should be int but not " << (yyvsp[(3) - (4)]).type << endl; 
		}
	}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 445 "Compiler.y"
    {
		(yyval).st = create_tree((yyvsp[(2) - (3)]).tokenContent, 2, -1, (yyvsp[(1) - (3)]).st, (yyvsp[(3) - (3)]).st);
		(yyval).lineNo = (yyvsp[(1) - (3)]).lineNo;
		
		if((yyvsp[(1) - (3)]).type != (yyvsp[(3) - (3)]).type){
			cout << "[Compile Error] Line:" << (yyval).lineNo << " REL_OP cannot operate on type " << (yyvsp[(1) - (3)]).type << " and type " << (yyvsp[(3) - (3)]).type << endl;
			(yyval).type = "UNDEFINED"; 
		}
		else{
			(yyval).type = "BOOL";		
		}
	}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 457 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
		
		(yyval).type = (yyvsp[(1) - (1)]).type;
	}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 465 "Compiler.y"
    {
		(yyval).st = create_tree((yyvsp[(2) - (3)]).tokenContent, 2, -1, (yyvsp[(1) - (3)]).st, (yyvsp[(3) - (3)]).st);
		(yyval).lineNo = (yyvsp[(1) - (3)]).lineNo;
		
		if((yyvsp[(1) - (3)]).type != (yyvsp[(3) - (3)]).type){
			cout << "[Compile Error] Line:" << (yyval).lineNo << " ADD_OP cannot operate on type " << (yyvsp[(1) - (3)]).type << " and type " << (yyvsp[(3) - (3)]).type << endl;
			(yyval).type = "UNDEFINED"; 
		}
		else{
			(yyval).type = (yyvsp[(1) - (3)]).type;		
		}		
	}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 477 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
		
		(yyval).type = (yyvsp[(1) - (1)]).type;
	}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 485 "Compiler.y"
    {
		(yyval).st = create_tree((yyvsp[(2) - (3)]).tokenContent, 2, -1, (yyvsp[(1) - (3)]).st, (yyvsp[(3) - (3)]).st);
		(yyval).lineNo = (yyvsp[(1) - (3)]).lineNo;
		
		if((yyvsp[(1) - (3)]).type != (yyvsp[(3) - (3)]).type){
			cout << "[Compile Error] Line:" << (yyval).lineNo << " MUL_OP cannot operate on type " << (yyvsp[(1) - (3)]).type << " and type " << (yyvsp[(3) - (3)]).type << endl;
			(yyval).type = "UNDEFINED"; 
		}
		else{
			(yyval).type = (yyvsp[(1) - (3)]).type;		
		}
	}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 497 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
		
		(yyval).type = (yyvsp[(1) - (1)]).type;
	}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 505 "Compiler.y"
    {
		(yyval).st = (yyvsp[(2) - (3)]).st;
		(yyval).lineNo = (yyvsp[(1) - (3)]).lineNo;
		
		(yyval).type = (yyvsp[(2) - (3)]).type;
	}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 511 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;

		(yyval).type = (yyvsp[(1) - (1)]).type;		
	}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 517 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
		
		(yyval).type = (yyvsp[(1) - (1)]).type; 
	}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 523 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;	
		(yyval).type = "INT";
	}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 528 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;	
		(yyval).type = "DOUBLE";
	}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 533 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;	
		(yyval).type = "BOOL";
	}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 540 "Compiler.y"
    {
		(yyval).st = create_tree("call", 2, -1, (yyvsp[(1) - (4)]).st, (yyvsp[(3) - (4)]).st);
		(yyval).lineNo = (yyvsp[(1) - (4)]).lineNo;
		
		resState = symTable.findSymbol((yyvsp[(1) - (4)]).st->nodeName);
		if(resState == 0){
			cout << "[Compile Error] Line:" << (yyval).lineNo << " function " << (yyvsp[(1) - (4)]).st->nodeName << " is not declared." << endl; 
			(yyval).type = "UNDEFINED"; 
		}
		else{
			string resType = symTable.getSymbolType((yyvsp[(1) - (4)]).st->nodeName);
			
			if(funcDefined[(yyvsp[(1) - (4)]).st->nodeName] == false){
				cout << "[Compile Error] Line:" << (yyval).lineNo << " function " << (yyvsp[(1) - (4)]).st->nodeName << " is declared but not defined." << endl; 
			}
			
			vector<string> splitType;
			SplitString(resType,splitType," ");
			(yyval).type = splitType[0];
			
			vector<string> splitArgs;
			SplitString((yyvsp[(3) - (4)]).type,splitArgs," ");
			if(splitArgs.size() != splitType.size() - 1){
				cout << "[Debug Message] Line:" << (yyval).lineNo << " " << resType << " || " << (yyvsp[(3) - (4)]).type << endl; 
				cout << "[Compile Error] Line:" << (yyval).lineNo << " the number of the parameters does not match the defination of the " << (yyvsp[(1) - (4)]).st->nodeName << endl; 
			}
			else{
				for(int i = 0;i < splitArgs.size(); i++){
					if(splitArgs[i] != splitType[i+1]){
						cout << "[Compile Error] Line:" << (yyval).lineNo << " the " << i << "th parameter should be " << splitType[i+1] << " but not " << splitArgs[i] << endl; 
						break;
					}
				}
			}
		} 
		
	}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 578 "Compiler.y"
    {
		(yyval).st = create_tree("NO_ARGS", 0, -1);
		(yyval).type = "VOID";
	}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 582 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
		
		(yyval).type = (yyvsp[(1) - (1)]).type;
	}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 590 "Compiler.y"
    {
		(yyval).st = create_tree("arg_list", 2, -1, (yyvsp[(1) - (3)]).st, (yyvsp[(2) - (3)]).st);
		(yyval).lineNo = (yyvsp[(1) - (3)]).lineNo;
		
		(yyval).type = (yyvsp[(1) - (3)]).type + " " + (yyvsp[(3) - (3)]).type;
	}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 596 "Compiler.y"
    {
		(yyval).st = (yyvsp[(1) - (1)]).st;
		(yyval).lineNo = (yyvsp[(1) - (1)]).lineNo;
		
		(yyval).type = (yyvsp[(1) - (1)]).type;
	}
    break;


/* Line 1792 of yacc.c  */
#line 2285 "Compiler.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 603 "Compiler.y"

void yyerror(char const *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}


int main(int argc,char* argv[]) {

	yyin = fopen(argv[1],"r");
	cout << "Open File" << endl;
	
	yyparse();
	
	root->printTree();
	
	/*eval(root,0);	//输出语法分析树

	Parser parser(root); //分析语法树

	freeGramTree(root);*/

	fclose(yyin);
	return 0;
}

