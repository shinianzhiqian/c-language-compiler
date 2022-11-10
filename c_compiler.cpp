/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ASSIGN_OP = 258,
     OR = 259,
     AND = 260,
     SINGLAND = 261,
     NE_OP = 262,
     EQ_OP = 263,
     LE_OP = 264,
     GE_OP = 265,
     LT_OP = 266,
     GT_OP = 267,
     PRINTF = 268,
     SCANF = 269,
     IDENTIFIER = 270,
     CONST = 271,
     LOWER_THAN_ELSE = 272,
     WHILE = 273,
     FOR = 274,
     BREAK = 275,
     CONTINUE = 276,
     IF = 277,
     ELSE = 278,
     RETURN = 279,
     VOID = 280,
     S_QUO = 281,
     D_QUO = 282,
     INT = 283,
     COMMA = 284,
     SEMI = 285
   };
#endif
/* Tokens.  */
#define ASSIGN_OP 258
#define OR 259
#define AND 260
#define SINGLAND 261
#define NE_OP 262
#define EQ_OP 263
#define LE_OP 264
#define GE_OP 265
#define LT_OP 266
#define GT_OP 267
#define PRINTF 268
#define SCANF 269
#define IDENTIFIER 270
#define CONST 271
#define LOWER_THAN_ELSE 272
#define WHILE 273
#define FOR 274
#define BREAK 275
#define CONTINUE 276
#define IF 277
#define ELSE 278
#define RETURN 279
#define VOID 280
#define S_QUO 281
#define D_QUO 282
#define INT 283
#define COMMA 284
#define SEMI 285




/* Copy the first part of user declarations.  */
#line 1 "c_compiler.y"

extern "C"
{
#include <stdio.h>
#include <string.h>
#include "Node/BaseNode.h"

//在lex.yy.c里定义，会被yyparse()调用。在此声明消除编译和链接错误。
extern int yylex(void); 

// 在此声明，消除yacc生成代码时的告警
extern int yyparse(void); 

int yywrap()
{
    return 1;
}
}
// 该函数在y.tab.c里会被调用，需要在此定义
void yyerror(const char *s)
{
	printf("[error] %s\n", s);
}

int main()
{
	yyparse();
	return 0;
}


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 33 "c_compiler.y"
{
    int num;
    AST::BaseNode *ast;
    char *str;
}
/* Line 193 of yacc.c.  */
#line 193 "c_compiler.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 206 "c_compiler.cpp"

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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   720

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNRULES -- Number of states.  */
#define YYNSTATES  193

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    18,     2,     2,     2,    17,     2,     2,
      19,    20,    15,    13,     2,    14,     2,    16,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,     2,     2,     2,     2,     2,
       2,    21,     2,    22,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    14,    18,    22,    24,
      28,    33,    38,    41,    43,    47,    49,    51,    54,    58,
      63,    67,    69,    72,    78,    83,    87,    92,    94,    98,
     101,   103,   106,   109,   111,   115,   118,   124,   132,   138,
     145,   153,   161,   169,   179,   188,   197,   206,   209,   212,
     220,   226,   232,   234,   238,   240,   244,   246,   248,   250,
     252,   256,   260,   264,   268,   272,   276,   280,   283,   287,
     291,   294,   298,   302,   306,   310,   314,   318,   322,   327,
     331,   334,   339,   342,   344,   348,   350
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    46,    -1,    47,    -1,    46,    47,    -1,
      50,    57,    40,    -1,    50,    51,    54,    -1,    50,    51,
      41,    -1,    25,    -1,    25,    21,    22,    -1,    25,    21,
      26,    22,    -1,    25,    21,    60,    22,    -1,    15,    25,
      -1,    26,    -1,    49,    39,    26,    -1,    38,    -1,    35,
      -1,    38,    15,    -1,    25,    19,    20,    -1,    25,    19,
      52,    20,    -1,    52,    39,    53,    -1,    53,    -1,    50,
      25,    -1,    50,    25,    21,    26,    22,    -1,    50,    25,
      21,    22,    -1,    50,     6,    25,    -1,    50,     6,    15,
      25,    -1,    50,    -1,    42,    55,    43,    -1,    55,    56,
      -1,    56,    -1,    60,    40,    -1,    57,    40,    -1,    54,
      -1,    34,    60,    40,    -1,    34,    40,    -1,    32,    19,
      60,    20,    56,    -1,    32,    19,    60,    20,    56,    33,
      56,    -1,    28,    19,    60,    20,    56,    -1,    29,    19,
      40,    40,    20,    56,    -1,    29,    19,    59,    40,    40,
      20,    56,    -1,    29,    19,    40,    60,    40,    20,    56,
      -1,    29,    19,    40,    40,    60,    20,    56,    -1,    29,
      19,    59,    40,    60,    40,    60,    20,    56,    -1,    29,
      19,    59,    40,    60,    40,    20,    56,    -1,    29,    19,
      59,    40,    40,    60,    20,    56,    -1,    29,    19,    40,
      60,    40,    60,    20,    56,    -1,    30,    40,    -1,    31,
      40,    -1,    23,    19,    37,    60,    37,    20,    40,    -1,
      23,    19,    60,    20,    40,    -1,    24,    19,    25,    20,
      40,    -1,    58,    -1,    58,    39,    57,    -1,    48,    -1,
      48,     3,    60,    -1,    57,    -1,    60,    -1,    26,    -1,
      62,    -1,    60,     3,    60,    -1,    60,    13,    60,    -1,
      60,    14,    60,    -1,    60,    15,    60,    -1,    60,    16,
      60,    -1,    60,    17,    60,    -1,    19,    60,    20,    -1,
      14,    60,    -1,    60,     5,    60,    -1,    60,     4,    60,
      -1,    18,    60,    -1,    42,    49,    43,    -1,    60,     8,
      60,    -1,    60,     7,    60,    -1,    60,    12,    60,    -1,
      60,    11,    60,    -1,    60,    10,    60,    -1,    60,     9,
      60,    -1,    25,    19,    61,    20,    -1,    25,    19,    20,
      -1,    15,    25,    -1,    25,    21,    60,    22,    -1,     6,
      25,    -1,    60,    -1,    61,    39,    60,    -1,    25,    -1,
      62,    25,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    79,    79,    86,    90,    96,   100,   104,   109,   113,
     117,   121,   125,   131,   135,   141,   145,   149,   155,   159,
     164,   167,   171,   174,   177,   180,   183,   186,   191,   195,
     198,   203,   207,   211,   215,   219,   223,   227,   230,   234,
     238,   242,   246,   250,   254,   258,   262,   266,   270,   274,
     278,   282,   295,   300,   306,   310,   316,   320,   327,   331,
     335,   339,   343,   347,   351,   355,   359,   363,   367,   371,
     375,   379,   383,   387,   391,   395,   399,   403,   407,   411,
     414,   418,   422,   428,   432,   438,   441
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ASSIGN_OP", "OR", "AND", "SINGLAND",
  "NE_OP", "EQ_OP", "LE_OP", "GE_OP", "LT_OP", "GT_OP", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'!'", "'('", "')'", "'['", "']'", "PRINTF",
  "SCANF", "IDENTIFIER", "CONST", "LOWER_THAN_ELSE", "WHILE", "FOR",
  "BREAK", "CONTINUE", "IF", "ELSE", "RETURN", "VOID", "S_QUO", "D_QUO",
  "INT", "COMMA", "SEMI", "'SEMI'", "'{'", "'}'", "$accept", "program",
  "blocks", "block", "variable", "consts", "descriptor", "function",
  "params", "param", "body", "statements", "statement", "declares",
  "declarevars", "forstart", "expression", "arguments", "identifiers", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,    43,    45,    42,    47,    37,    33,    40,
      41,    91,    93,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,    83,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    47,    48,    48,
      48,    48,    48,    49,    49,    50,    50,    50,    51,    51,
      52,    52,    53,    53,    53,    53,    53,    53,    54,    55,
      55,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    57,    57,    58,    58,    59,    59,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    61,    61,    62,    62
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     3,     3,     3,     1,     3,
       4,     4,     2,     1,     3,     1,     1,     2,     3,     4,
       3,     1,     2,     5,     4,     3,     4,     1,     3,     2,
       1,     2,     2,     1,     3,     2,     5,     7,     5,     6,
       7,     7,     7,     9,     8,     8,     8,     2,     2,     7,
       5,     5,     1,     3,     1,     3,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       2,     4,     2,     1,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    16,    15,     0,     2,     3,     0,    17,     1,     4,
       0,     8,    54,     0,     0,    52,    12,     0,     0,     0,
       7,     0,     6,     5,     0,    18,    27,     0,    21,     0,
       0,     0,     0,     0,     9,    85,    58,     0,     0,    59,
      58,    55,     0,     0,     0,    85,     0,     0,     0,     0,
       0,     0,     0,    33,     0,    30,     0,     0,     8,    53,
       0,    22,    19,     0,    82,    67,    80,    70,     0,     0,
       0,    10,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    86,
      80,     0,     0,     0,     0,     0,    47,    48,     0,    35,
       0,    58,    28,    29,    32,    31,     0,    25,     0,    20,
      66,    79,    83,     0,     0,     0,    71,    60,    69,    68,
      73,    72,    77,    76,    75,    74,    61,    62,    63,    64,
      65,     0,     0,     0,     0,     0,     0,    56,     0,    57,
       0,    34,    26,    24,     0,    78,     0,    81,    14,     0,
       0,     0,    81,     0,     0,     0,     0,     0,    23,    84,
       0,    50,    51,    38,     0,     0,     0,     0,     0,    36,
       0,    39,     0,     0,     0,     0,     0,     0,     0,    49,
      42,    41,     0,    40,     0,     0,     0,    37,    46,    45,
      44,     0,    43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    12,    73,     6,    13,    27,    28,
      53,    54,    55,    56,    15,   138,    57,   113,    39
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -53
static const yytype_int16 yypact[] =
{
      79,   -53,    16,    32,    79,   -53,    -9,   -53,   -53,   -53,
      13,   103,    41,   -22,     9,    35,   -53,    52,   265,   433,
     -53,   215,   -53,   -53,    -2,   -53,    -1,   -12,   -53,    30,
     433,    53,   433,   433,   -53,   110,    60,    63,   485,    73,
     -53,   681,    77,    89,    90,    67,    96,    97,    94,    95,
     100,    85,   244,   -53,    11,   -53,   104,   153,   116,   -53,
      56,   122,   -53,    79,   -53,   125,   -53,   -53,   537,   279,
     433,   -53,   -53,   -32,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   -53,   -53,
       7,   294,   120,   265,   433,   308,   -53,   -53,   433,   -53,
     168,   -21,   -53,   -53,   -53,   -53,   121,   -53,    57,   -53,
     -53,   -53,   681,   -11,   505,   124,   -53,   681,   694,   454,
     703,   703,    80,    80,    80,    80,   125,   125,   -53,   -53,
     -53,   433,   555,   127,   521,   573,   326,   -53,   111,   681,
     591,   -53,   -53,   -53,   130,   -53,   433,   -53,   -53,   469,
     113,   114,    45,   215,   355,   187,   370,   215,   -53,   681,
     135,   -53,   -53,   -53,   215,   609,   388,   403,   202,   141,
     146,   -53,   215,   215,   627,   215,   645,   418,   215,   -53,
     -53,   -53,   215,   -53,   215,   215,   663,   -53,   -53,   -53,
     -53,   215,   -53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -53,   -53,   -53,   183,   -53,   -53,   -13,   -53,   -53,   126,
     175,   -53,   -52,    -3,   -53,   -53,   -18,   -53,   -53
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -14
static const yytype_int16 yytable[] =
{
      38,    41,   103,    14,    26,    60,    10,   115,    62,   145,
     -12,   116,    65,    10,    67,    68,    11,    29,   -13,    20,
      21,    59,   -13,    58,    61,    30,    42,    63,   146,    32,
      33,     7,     8,   100,    43,    44,    45,    40,    16,    46,
      47,    48,    49,    50,    19,    51,   -12,   -12,   -11,    23,
      26,   112,   114,    52,   102,    64,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
      -8,   106,    25,   132,    24,   134,   135,   139,    66,   143,
     140,   107,    71,   144,   -11,   -11,    69,     1,    93,    72,
       2,    29,   137,    83,    84,    85,    86,    87,    89,    30,
      31,   163,    90,    32,    33,   169,    -8,    -8,    91,    92,
      35,    40,   171,   149,     1,    94,    95,     2,   155,    98,
     180,   181,    17,   183,    18,    99,   187,    37,   159,    69,
     188,    70,   189,   190,    96,    97,   165,    18,   168,   192,
      85,    86,    87,   108,   104,   133,   142,   151,   174,   176,
     148,   156,   158,   161,   162,   170,    74,    75,    76,   186,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    74,    75,    76,   178,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,   179,     9,    22,   109,
      74,    75,    76,   105,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    74,    75,    76,   141,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
       0,    29,     0,     0,     0,     0,     0,   166,     0,    30,
      42,     0,     0,    32,    33,     0,     0,     0,    43,    44,
      45,    40,   177,    46,    47,    48,    49,    50,     0,    51,
      29,     0,     0,     0,     0,     0,     0,    52,    30,    42,
       0,     0,    32,    33,     0,     0,     0,    43,    44,    45,
     101,    29,    46,    47,    48,    49,    50,     0,    51,    30,
      31,     0,     0,    32,    33,    29,    52,    34,     0,     0,
      35,    36,     0,    30,    31,     0,     0,    32,    33,   111,
      29,     0,     0,     0,    35,    40,     0,    37,    30,    31,
       0,     0,    32,    33,    29,     0,     0,     0,     0,    35,
      40,    37,    30,    42,     0,     0,    32,    33,     0,     0,
       0,   131,    29,    45,    40,     0,    37,     0,     0,     0,
      30,    31,     0,     0,    32,    33,     0,     0,   136,     0,
      37,    35,    40,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,     0,     0,     0,   154,     0,    37,    30,
      31,     0,     0,    32,    33,   164,    29,     0,     0,     0,
      35,    40,     0,     0,    30,    31,     0,     0,    32,    33,
       0,     0,     0,     0,    29,    35,    40,    37,     0,     0,
       0,     0,    30,    31,     0,     0,    32,    33,   173,    29,
     167,     0,    37,    35,    40,     0,     0,    30,    31,     0,
       0,    32,    33,   175,    29,     0,     0,     0,    35,    40,
      37,     0,    30,    31,     0,     0,    32,    33,   185,    29,
       0,     0,     0,    35,    40,    37,     0,    30,    31,     0,
       0,    32,    33,     0,     0,     0,     0,     0,    35,    40,
      37,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    74,    75,    76,    37,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,     0,    74,    75,
      76,     0,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,     0,     0,     0,   160,    88,    74,    75,
      76,     0,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,     0,    74,    75,    76,   147,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,     0,
      74,    75,    76,   152,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,     0,     0,   110,    74,    75,
      76,     0,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,     0,     0,   150,    74,    75,    76,     0,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,     0,     0,   153,    74,    75,    76,     0,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,     0,
       0,   157,    74,    75,    76,     0,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,     0,     0,   172,
      74,    75,    76,     0,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,     0,     0,   182,    74,    75,
      76,     0,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,     0,     0,   184,    74,    75,    76,     0,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,     0,     0,   191,    74,    75,    76,     0,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    76,
       0,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    79,    80,    81,    82,    83,    84,    85,    86,
      87
};

static const yytype_int16 yycheck[] =
{
      18,    19,    54,     6,    17,     6,    15,    39,    20,    20,
       3,    43,    30,    15,    32,    33,    25,     6,    39,    41,
      42,    24,    43,    25,    25,    14,    15,    39,    39,    18,
      19,    15,     0,    51,    23,    24,    25,    26,    25,    28,
      29,    30,    31,    32,     3,    34,    39,    40,     3,    40,
      63,    69,    70,    42,    43,    25,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
       3,    15,    20,    91,    39,    93,    94,    95,    25,    22,
      98,    25,    22,    26,    39,    40,    19,    35,    21,    26,
      38,     6,    95,    13,    14,    15,    16,    17,    25,    14,
      15,   153,    25,    18,    19,   157,    39,    40,    19,    19,
      25,    26,   164,   131,    35,    19,    19,    38,   136,    19,
     172,   173,    19,   175,    21,    40,   178,    42,   146,    19,
     182,    21,   184,   185,    40,    40,   154,    21,   156,   191,
      15,    16,    17,    21,    40,    25,    25,    20,   166,   167,
      26,    40,    22,    40,    40,    20,     3,     4,     5,   177,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,     3,     4,     5,    33,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    40,     4,    13,    63,
       3,     4,     5,    40,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     3,     4,     5,    40,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,     6,    -1,    -1,    -1,    -1,    -1,    40,    -1,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    40,    28,    29,    30,    31,    32,    -1,    34,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    42,    14,    15,
      -1,    -1,    18,    19,    -1,    -1,    -1,    23,    24,    25,
      26,     6,    28,    29,    30,    31,    32,    -1,    34,    14,
      15,    -1,    -1,    18,    19,     6,    42,    22,    -1,    -1,
      25,    26,    -1,    14,    15,    -1,    -1,    18,    19,    20,
       6,    -1,    -1,    -1,    25,    26,    -1,    42,    14,    15,
      -1,    -1,    18,    19,     6,    -1,    -1,    -1,    -1,    25,
      26,    42,    14,    15,    -1,    -1,    18,    19,    -1,    -1,
      -1,    37,     6,    25,    26,    -1,    42,    -1,    -1,    -1,
      14,    15,    -1,    -1,    18,    19,    -1,    -1,    40,    -1,
      42,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,    -1,    -1,    40,    -1,    42,    14,
      15,    -1,    -1,    18,    19,    20,     6,    -1,    -1,    -1,
      25,    26,    -1,    -1,    14,    15,    -1,    -1,    18,    19,
      -1,    -1,    -1,    -1,     6,    25,    26,    42,    -1,    -1,
      -1,    -1,    14,    15,    -1,    -1,    18,    19,    20,     6,
      40,    -1,    42,    25,    26,    -1,    -1,    14,    15,    -1,
      -1,    18,    19,    20,     6,    -1,    -1,    -1,    25,    26,
      42,    -1,    14,    15,    -1,    -1,    18,    19,    20,     6,
      -1,    -1,    -1,    25,    26,    42,    -1,    14,    15,    -1,
      -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    25,    26,
      42,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     3,     4,     5,    42,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    37,    22,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,     3,     4,     5,    22,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
       3,     4,     5,    22,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    20,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    20,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    20,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    20,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    20,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    20,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    20,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    20,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     9,    10,    11,    12,    13,    14,    15,    16,
      17
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    38,    45,    46,    47,    50,    15,     0,    47,
      15,    25,    48,    51,    57,    58,    25,    19,    21,     3,
      41,    42,    54,    40,    39,    20,    50,    52,    53,     6,
      14,    15,    18,    19,    22,    25,    26,    42,    60,    62,
      26,    60,    15,    23,    24,    25,    28,    29,    30,    31,
      32,    34,    42,    54,    55,    56,    57,    60,    25,    57,
       6,    25,    20,    39,    25,    60,    25,    60,    60,    19,
      21,    22,    26,    49,     3,     4,     5,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    22,    25,
      25,    19,    19,    21,    19,    19,    40,    40,    19,    40,
      60,    26,    43,    56,    40,    40,    15,    25,    21,    53,
      20,    20,    60,    61,    60,    39,    43,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    37,    60,    25,    60,    60,    40,    57,    59,    60,
      60,    40,    25,    22,    26,    20,    39,    22,    26,    60,
      20,    20,    22,    20,    40,    60,    40,    20,    22,    60,
      37,    40,    40,    56,    20,    60,    40,    40,    60,    56,
      20,    56,    20,    20,    60,    20,    60,    40,    33,    40,
      56,    56,    20,    56,    20,    20,    60,    56,    56,    56,
      56,    20,    56
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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


/* Prevent warnings from -Wmissing-prototypes.  */

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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
#line 80 "c_compiler.y"
    {
        printf("program->blocks");
    }
    break;

  case 3:
#line 87 "c_compiler.y"
    {
        printf("blocks->block")
    }
    break;

  case 4:
#line 91 "c_compiler.y"
    {
        printf("blocks->blocks block")
    }
    break;

  case 5:
#line 97 "c_compiler.y"
    {
        printf("block->descriptor declares SEMI")
    }
    break;

  case 6:
#line 101 "c_compiler.y"
    {
        printf("block->descriptor function body")
    }
    break;

  case 7:
#line 105 "c_compiler.y"
    {
        print("block->descriptor function 'SEMI'")
    }
    break;

  case 8:
#line 110 "c_compiler.y"
    {
        printf("variable->IDENTIFIER")
    }
    break;

  case 9:
#line 114 "c_compiler.y"
    {
        printf("variable->IDENTIFIER '[' ']'")
    }
    break;

  case 10:
#line 118 "c_compiler.y"
    {
        printf("variable->IDENTIFIER '[' CONST ']'")
    }
    break;

  case 11:
#line 122 "c_compiler.y"
    {
        printf("variable->IDENTIFIER '[' expression ']'")
    }
    break;

  case 12:
#line 126 "c_compiler.y"
    {
        printf("variable->'*' IDENTIFIER")
    }
    break;

  case 13:
#line 132 "c_compiler.y"
    {
        printf("")
    }
    break;

  case 14:
#line 136 "c_compiler.y"
    {
        printf("")
    }
    break;

  case 15:
#line 142 "c_compiler.y"
    {
        printf("")
    }
    break;

  case 16:
#line 146 "c_compiler.y"
    {
        printf("")
    }
    break;

  case 17:
#line 150 "c_compiler.y"
    {
        printf("")
    }
    break;

  case 18:
#line 156 "c_compiler.y"
    {
        printf("")
    }
    break;

  case 19:
#line 160 "c_compiler.y"
    {
        printf("")
    }
    break;

  case 20:
#line 164 "c_compiler.y"
    {
    printf("params: params COMMA param");
}
    break;

  case 21:
#line 167 "c_compiler.y"
    {
    printf("params: param");
}
    break;

  case 22:
#line 171 "c_compiler.y"
    {
    printf("param:descriptor identifiers");
}
    break;

  case 23:
#line 174 "c_compiler.y"
    {
    printf("param:descriptor identifiers '[' CONST ']'");
}
    break;

  case 24:
#line 177 "c_compiler.y"
    {
    printf("param:descriptor identifiers '[' ']' ");
}
    break;

  case 25:
#line 180 "c_compiler.y"
    {
    printf("param:descriptor SINGLAND identifiers");
}
    break;

  case 26:
#line 183 "c_compiler.y"
    {
    printf("param:descriptor SINGLAND '*' identifiers");
}
    break;

  case 27:
#line 186 "c_compiler.y"
    {
    printf("param:descriptor");
}
    break;

  case 28:
#line 191 "c_compiler.y"
    {
    printf("body:'{' statements '}'");
}
    break;

  case 29:
#line 195 "c_compiler.y"
    {
    printf("statements:statements statement");
}
    break;

  case 30:
#line 198 "c_compiler.y"
    {
    printf("statements:statement");
}
    break;

  case 31:
#line 204 "c_compiler.y"
    {

    }
    break;

  case 32:
#line 208 "c_compiler.y"
    {

    }
    break;

  case 33:
#line 212 "c_compiler.y"
    {

    }
    break;

  case 34:
#line 216 "c_compiler.y"
    {

    }
    break;

  case 35:
#line 220 "c_compiler.y"
    {

    }
    break;

  case 36:
#line 224 "c_compiler.y"
    {

    }
    break;

  case 37:
#line 227 "c_compiler.y"
    {

    }
    break;

  case 38:
#line 231 "c_compiler.y"
    {

    }
    break;

  case 39:
#line 235 "c_compiler.y"
    {

    }
    break;

  case 40:
#line 239 "c_compiler.y"
    {

    }
    break;

  case 41:
#line 243 "c_compiler.y"
    {

    }
    break;

  case 42:
#line 247 "c_compiler.y"
    {

    }
    break;

  case 43:
#line 251 "c_compiler.y"
    {

    }
    break;

  case 44:
#line 255 "c_compiler.y"
    {

    }
    break;

  case 45:
#line 259 "c_compiler.y"
    {

    }
    break;

  case 46:
#line 263 "c_compiler.y"
    {

    }
    break;

  case 47:
#line 267 "c_compiler.y"
    {

    }
    break;

  case 48:
#line 271 "c_compiler.y"
    {

    }
    break;

  case 49:
#line 275 "c_compiler.y"
    {

    }
    break;

  case 50:
#line 279 "c_compiler.y"
    {

    }
    break;

  case 51:
#line 283 "c_compiler.y"
    {

    }
    break;

  case 52:
#line 296 "c_compiler.y"
    {


    }
    break;

  case 53:
#line 301 "c_compiler.y"
    {

    }
    break;

  case 54:
#line 307 "c_compiler.y"
    {

    }
    break;

  case 55:
#line 311 "c_compiler.y"
    {

    }
    break;

  case 56:
#line 317 "c_compiler.y"
    {

    }
    break;

  case 57:
#line 321 "c_compiler.y"
    {

    }
    break;

  case 58:
#line 328 "c_compiler.y"
    {

    }
    break;

  case 59:
#line 332 "c_compiler.y"
    {

    }
    break;

  case 60:
#line 336 "c_compiler.y"
    {

    }
    break;

  case 61:
#line 340 "c_compiler.y"
    {

    }
    break;

  case 62:
#line 344 "c_compiler.y"
    {

    }
    break;

  case 63:
#line 348 "c_compiler.y"
    {

    }
    break;

  case 64:
#line 352 "c_compiler.y"
    {

    }
    break;

  case 65:
#line 356 "c_compiler.y"
    {

    }
    break;

  case 66:
#line 360 "c_compiler.y"
    {

    }
    break;

  case 67:
#line 364 "c_compiler.y"
    {

    }
    break;

  case 68:
#line 368 "c_compiler.y"
    {

    }
    break;

  case 69:
#line 372 "c_compiler.y"
    {

    }
    break;

  case 70:
#line 376 "c_compiler.y"
    {

    }
    break;

  case 71:
#line 380 "c_compiler.y"
    {

    }
    break;

  case 72:
#line 384 "c_compiler.y"
    {

    }
    break;

  case 73:
#line 388 "c_compiler.y"
    {

    }
    break;

  case 74:
#line 392 "c_compiler.y"
    {

    }
    break;

  case 75:
#line 396 "c_compiler.y"
    {

    }
    break;

  case 76:
#line 400 "c_compiler.y"
    {

    }
    break;

  case 77:
#line 404 "c_compiler.y"
    {

    }
    break;

  case 78:
#line 408 "c_compiler.y"
    {

    }
    break;

  case 79:
#line 411 "c_compiler.y"
    {

    }
    break;

  case 80:
#line 415 "c_compiler.y"
    {

    }
    break;

  case 81:
#line 419 "c_compiler.y"
    {

    }
    break;

  case 82:
#line 423 "c_compiler.y"
    {

    }
    break;

  case 83:
#line 429 "c_compiler.y"
    {

    }
    break;

  case 84:
#line 433 "c_compiler.y"
    {

    }
    break;

  case 85:
#line 438 "c_compiler.y"
    {

    }
    break;

  case 86:
#line 442 "c_compiler.y"
    {

    }
    break;


/* Line 1267 of yacc.c.  */
#line 2265 "c_compiler.cpp"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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


#line 448 "c_compiler.y"


// void AddOutput(int Row, char* type, char* text){
//     char str[50];
//     sprintf(str, "line%d:(%s, %s)\n", Row, type, text);
//     char *tmp = Ans;
//     Ans = (char *) malloc(strlen(tmp) + strlen(str) + 1);
//     sprintf(Ans, "%s%s", tmp, str);
//     if(strlen(tmp) > 0)
//         free(tmp);
//     return ;
// }