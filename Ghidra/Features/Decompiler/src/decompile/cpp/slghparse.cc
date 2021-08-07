/* ###
 * IP: GHIDRA
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
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
#line 16 "src/decompile/cpp/slghparse.y"

#include "slgh_compile.hh"

#define YYERROR_VERBOSE

  extern SleighCompile *slgh;
  extern int4 actionon;
  extern FILE *yyin;
  extern int yydebug;
  extern int yylex(void);
  extern int yyerror(const char *str );

/* Line 371 of yacc.c  */
#line 81 "src/decompile/cpp/slghparse.cc"

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
   by #include "slghparse.hh".  */
#ifndef YY_YY_SRC_DECOMPILE_CPP_SLGHPARSE_HH_INCLUDED
# define YY_YY_SRC_DECOMPILE_CPP_SLGHPARSE_HH_INCLUDED
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
     OP_BOOL_OR = 258,
     OP_BOOL_XOR = 259,
     OP_BOOL_AND = 260,
     OP_OR = 261,
     OP_XOR = 262,
     OP_AND = 263,
     OP_FNOTEQUAL = 264,
     OP_FEQUAL = 265,
     OP_NOTEQUAL = 266,
     OP_EQUAL = 267,
     OP_FGREATEQUAL = 268,
     OP_FLESSEQUAL = 269,
     OP_FGREAT = 270,
     OP_FLESS = 271,
     OP_SGREAT = 272,
     OP_SLESSEQUAL = 273,
     OP_SGREATEQUAL = 274,
     OP_SLESS = 275,
     OP_LESSEQUAL = 276,
     OP_GREATEQUAL = 277,
     OP_SRIGHT = 278,
     OP_RIGHT = 279,
     OP_LEFT = 280,
     OP_FSUB = 281,
     OP_FADD = 282,
     OP_FDIV = 283,
     OP_FMULT = 284,
     OP_SREM = 285,
     OP_SDIV = 286,
     OP_ZEXT = 287,
     OP_CARRY = 288,
     OP_BORROW = 289,
     OP_SEXT = 290,
     OP_SCARRY = 291,
     OP_SBORROW = 292,
     OP_NAN = 293,
     OP_ABS = 294,
     OP_SQRT = 295,
     OP_CEIL = 296,
     OP_FLOOR = 297,
     OP_ROUND = 298,
     OP_INT2FLOAT = 299,
     OP_FLOAT2FLOAT = 300,
     OP_TRUNC = 301,
     OP_CPOOLREF = 302,
     OP_NEW = 303,
     OP_POPCOUNT = 304,
     OP_COUNTLEADINGZEROS = 305,
     OP_COUNTLEADINGONES = 306,
     BADINTEGER = 307,
     GOTO_KEY = 308,
     CALL_KEY = 309,
     RETURN_KEY = 310,
     IF_KEY = 311,
     DEFINE_KEY = 312,
     ATTACH_KEY = 313,
     MACRO_KEY = 314,
     SPACE_KEY = 315,
     TYPE_KEY = 316,
     RAM_KEY = 317,
     DEFAULT_KEY = 318,
     REGISTER_KEY = 319,
     ENDIAN_KEY = 320,
     WITH_KEY = 321,
     ALIGN_KEY = 322,
     OP_UNIMPL = 323,
     TOKEN_KEY = 324,
     SIGNED_KEY = 325,
     NOFLOW_KEY = 326,
     HEX_KEY = 327,
     DEC_KEY = 328,
     BIG_KEY = 329,
     LITTLE_KEY = 330,
     SIZE_KEY = 331,
     WORDSIZE_KEY = 332,
     OFFSET_KEY = 333,
     NAMES_KEY = 334,
     VALUES_KEY = 335,
     VARIABLES_KEY = 336,
     PCODEOP_KEY = 337,
     IS_KEY = 338,
     LOCAL_KEY = 339,
     DELAYSLOT_KEY = 340,
     CROSSBUILD_KEY = 341,
     EXPORT_KEY = 342,
     BUILD_KEY = 343,
     CONTEXT_KEY = 344,
     ELLIPSIS_KEY = 345,
     GLOBALSET_KEY = 346,
     BITRANGE_KEY = 347,
     CHAR = 348,
     INTEGER = 349,
     INTB = 350,
     STRING = 351,
     SYMBOLSTRING = 352,
     SPACESYM = 353,
     SECTIONSYM = 354,
     TOKENSYM = 355,
     USEROPSYM = 356,
     VALUESYM = 357,
     VALUEMAPSYM = 358,
     CONTEXTSYM = 359,
     NAMESYM = 360,
     VARSYM = 361,
     BITSYM = 362,
     SPECSYM = 363,
     VARLISTSYM = 364,
     OPERANDSYM = 365,
     STARTSYM = 366,
     ENDSYM = 367,
     MACROSYM = 368,
     LABELSYM = 369,
     SUBTABLESYM = 370
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 29 "src/decompile/cpp/slghparse.y"

  char ch;
  uintb *i;
  intb *big;
  string *str;
  vector<string> *strlist;
  vector<intb> *biglist;
  vector<ExprTree *> *param;
  SpaceQuality *spacequal;
  FieldQuality *fieldqual;
  StarQuality *starqual;
  VarnodeTpl *varnode;
  ExprTree *tree;
  vector<OpTpl *> *stmt;
  ConstructTpl *sem;
  SectionVector *sectionstart;
  Constructor *construct;
  PatternEquation *pateq;
  PatternExpression *patexp;

  vector<SleighSymbol *> *symlist;
  vector<ContextChange *> *contop;
  SleighSymbol *anysym;
  SpaceSymbol *spacesym;
  SectionSymbol *sectionsym;
  TokenSymbol *tokensym;
  UserOpSymbol *useropsym;
  MacroSymbol *macrosym;
  LabelSymbol *labelsym;
  SubtableSymbol *subtablesym;
  StartSymbol *startsym;
  EndSymbol *endsym;
  OperandSymbol *operandsym;
  VarnodeListSymbol *varlistsym;
  VarnodeSymbol *varsym;
  BitrangeSymbol *bitsym;
  NameSymbol *namesym;
  ValueSymbol *valuesym;
  ValueMapSymbol *valuemapsym;
  ContextSymbol *contextsym;
  FamilySymbol *famsym;
  SpecificSymbol *specsym;


/* Line 387 of yacc.c  */
#line 284 "src/decompile/cpp/slghparse.cc"
} YYSTYPE;
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

#endif /* !YY_YY_SRC_DECOMPILE_CPP_SLGHPARSE_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 312 "src/decompile/cpp/slghparse.cc"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2686

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  139
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  340
/* YYNRULES -- Number of states.  */
#define YYNSTATES  721

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   370

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,   138,    43,     2,     2,     2,    38,    11,     2,
     131,   132,    36,    32,   133,    33,     2,    37,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   137,     8,
      17,   130,    18,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   134,     2,   135,     9,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   136,     6,   129,    44,     2,     2,     2,
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
       5,     7,    10,    12,    13,    14,    15,    16,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    34,    35,    39,    40,    41,    42,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    14,    16,    18,    20,
      22,    24,    26,    28,    30,    32,    35,    37,    39,    41,
      44,    50,    56,    62,    65,    72,    82,    92,    95,    99,
     102,   106,   109,   117,   125,   128,   131,   134,   142,   150,
     153,   156,   159,   162,   165,   169,   173,   178,   183,   188,
     193,   196,   207,   213,   218,   220,   223,   232,   237,   243,
     249,   255,   260,   267,   269,   272,   275,   278,   279,   281,
     283,   284,   286,   292,   296,   301,   303,   309,   315,   318,
     321,   324,   327,   330,   333,   336,   339,   342,   345,   348,
     350,   353,   355,   357,   359,   363,   367,   371,   375,   379,
     383,   387,   391,   395,   399,   402,   405,   407,   411,   415,
     419,   422,   424,   427,   429,   431,   435,   439,   443,   447,
     451,   455,   459,   463,   465,   467,   469,   471,   472,   476,
     477,   483,   492,   501,   507,   510,   514,   518,   521,   523,
     527,   529,   534,   540,   544,   549,   550,   553,   558,   565,
     570,   576,   581,   589,   596,   600,   606,   612,   622,   627,
     632,   637,   641,   647,   653,   659,   663,   669,   675,   679,
     685,   688,   694,   700,   702,   704,   707,   711,   715,   719,
     723,   727,   731,   735,   739,   743,   747,   751,   755,   759,
     762,   765,   769,   773,   777,   781,   785,   789,   793,   797,
     801,   805,   809,   812,   816,   820,   824,   828,   832,   836,
     840,   844,   848,   852,   856,   860,   864,   867,   872,   877,
     882,   887,   894,   901,   908,   913,   918,   923,   928,   933,
     938,   943,   948,   955,   960,   965,   970,   975,   979,   986,
     988,   993,   998,  1005,  1010,  1014,  1016,  1018,  1020,  1022,
    1024,  1026,  1031,  1033,  1035,  1037,  1039,  1041,  1043,  1045,
    1047,  1051,  1054,  1059,  1061,  1063,  1065,  1069,  1073,  1075,
    1078,  1083,  1087,  1089,  1091,  1093,  1095,  1097,  1099,  1101,
    1103,  1105,  1107,  1109,  1111,  1113,  1116,  1120,  1122,  1125,
    1127,  1130,  1132,  1135,  1139,  1142,  1146,  1148,  1150,  1153,
    1156,  1160,  1162,  1164,  1167,  1170,  1174,  1176,  1178,  1180,
    1182,  1185,  1188,  1191,  1195,  1197,  1199,  1201,  1204,  1207,
    1208,  1210,  1214,  1215,  1217,  1221,  1223,  1225,  1227,  1229,
    1231,  1233,  1235,  1237,  1239,  1241,  1243,  1245,  1247,  1249,
    1251
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     140,     0,    -1,   143,    -1,   140,   144,    -1,   140,   141,
      -1,   140,   142,    -1,   145,    -1,   147,    -1,   151,    -1,
     153,    -1,   154,    -1,   157,    -1,   158,    -1,   159,    -1,
     160,    -1,     1,     8,    -1,   169,    -1,   161,    -1,   164,
      -1,     1,   129,    -1,    70,    78,   130,    87,     8,    -1,
      70,    78,   130,    88,     8,    -1,    70,    80,   130,   107,
       8,    -1,   146,     8,    -1,    70,    82,   109,   131,   107,
     132,    -1,    70,    82,   109,   131,   107,   132,    78,   130,
      88,    -1,    70,    82,   109,   131,   107,   132,    78,   130,
      87,    -1,   146,   149,    -1,    70,    82,   209,    -1,   148,
       8,    -1,    70,   102,   119,    -1,   148,   150,    -1,   109,
     130,   131,   107,   133,   107,   132,    -1,   209,   130,   131,
     107,   133,   107,   132,    -1,   149,    83,    -1,   149,    85,
      -1,   149,    86,    -1,   109,   130,   131,   107,   133,   107,
     132,    -1,   209,   130,   131,   107,   133,   107,   132,    -1,
     150,    83,    -1,   150,    84,    -1,   150,    85,    -1,   150,
      86,    -1,   152,     8,    -1,    70,    73,   109,    -1,    70,
      73,   209,    -1,   152,    74,   130,    75,    -1,   152,    74,
     130,    77,    -1,   152,    89,   130,   107,    -1,   152,    90,
     130,   107,    -1,   152,    76,    -1,    70,   111,    91,   130,
     107,    89,   130,   107,   199,     8,    -1,    70,   111,    91,
     130,    65,    -1,    70,   105,   155,     8,    -1,   156,    -1,
     155,   156,    -1,   109,   130,   119,   134,   107,   133,   107,
     135,    -1,    70,    95,   199,     8,    -1,    71,    93,   203,
     197,     8,    -1,    71,    92,   203,   201,     8,    -1,    71,
      94,   203,   205,     8,    -1,   167,   136,   183,   129,    -1,
      79,   165,   137,   166,   178,   136,    -1,   162,    -1,   163,
     141,    -1,   163,   142,    -1,   163,   129,    -1,    -1,   128,
      -1,   109,    -1,    -1,   173,    -1,    72,   109,   131,   208,
     132,    -1,   136,   183,   129,    -1,   136,   182,   184,   129,
      -1,    81,    -1,   170,    96,   173,   178,   168,    -1,   171,
      96,   173,   178,   168,    -1,   171,   109,    -1,   171,   196,
      -1,   171,   110,    -1,   171,     9,    -1,   170,     9,    -1,
     170,   109,    -1,   170,   196,    -1,   170,   138,    -1,   170,
     110,    -1,   128,   137,    -1,   109,   137,    -1,   137,    -1,
     171,   138,    -1,   108,    -1,   194,    -1,   195,    -1,   131,
     172,   132,    -1,   172,    32,   172,    -1,   172,    33,   172,
      -1,   172,    36,   172,    -1,   172,    31,   172,    -1,   172,
      30,   172,    -1,   172,    12,   172,    -1,   172,     7,   172,
      -1,   172,    10,   172,    -1,   172,    37,   172,    -1,    33,
     172,    -1,    44,   172,    -1,   174,    -1,   173,    11,   173,
      -1,   173,     6,   173,    -1,   173,     8,   173,    -1,   103,
     175,    -1,   175,    -1,   176,   103,    -1,   176,    -1,   177,
      -1,   131,   173,   132,    -1,   194,   130,   172,    -1,   194,
      15,   172,    -1,   194,    17,   172,    -1,   194,    27,   172,
      -1,   194,    18,   172,    -1,   194,    28,   172,    -1,   123,
     130,   172,    -1,   123,    -1,   121,    -1,   194,    -1,   128,
      -1,    -1,   134,   179,   135,    -1,    -1,   179,   117,   130,
     172,     8,    -1,   179,   104,   131,   194,   133,   117,   132,
       8,    -1,   179,   104,   131,   195,   133,   117,   132,     8,
      -1,   179,   123,   130,   172,     8,    -1,   179,   109,    -1,
      31,   109,    30,    -1,    31,   112,    30,    -1,   183,   180,
      -1,   181,    -1,   182,   184,   180,    -1,   184,    -1,   184,
     100,   193,     8,    -1,   184,   100,   187,   191,     8,    -1,
     184,   100,   109,    -1,   184,   100,   187,   109,    -1,    -1,
     184,   185,    -1,   184,    97,   109,     8,    -1,   184,    97,
     109,   137,   107,     8,    -1,   191,   130,   186,     8,    -1,
      97,   109,   130,   186,     8,    -1,   109,   130,   186,     8,
      -1,    97,   109,   137,   107,   130,   186,     8,    -1,   109,
     137,   107,   130,   186,     8,    -1,    97,   195,   130,    -1,
     187,   186,   130,   186,     8,    -1,   114,   131,   207,   132,
       8,    -1,   191,   134,   107,   133,   107,   135,   130,   186,
       8,    -1,   120,   130,   186,     8,    -1,   189,   137,   107,
     130,    -1,   189,   131,   107,   132,    -1,   101,   123,     8,
      -1,    99,   189,   133,   112,     8,    -1,    99,   189,   133,
     109,     8,    -1,    98,   131,   107,   132,     8,    -1,    66,
     188,     8,    -1,    69,   186,    66,   188,     8,    -1,    66,
     134,   186,   135,     8,    -1,    67,   188,     8,    -1,    67,
     134,   186,   135,     8,    -1,    68,     8,    -1,    68,   134,
     186,   135,     8,    -1,   126,   131,   207,   132,     8,    -1,
     192,    -1,   189,    -1,   187,   186,    -1,   131,   186,   132,
      -1,   186,    32,   186,    -1,   186,    33,   186,    -1,   186,
      16,   186,    -1,   186,    15,   186,    -1,   186,    17,   186,
      -1,   186,    28,   186,    -1,   186,    27,   186,    -1,   186,
      18,   186,    -1,   186,    26,   186,    -1,   186,    25,   186,
      -1,   186,    24,   186,    -1,   186,    23,   186,    -1,    33,
     186,    -1,    44,   186,    -1,   186,     9,   186,    -1,   186,
      11,   186,    -1,   186,     6,   186,    -1,   186,    31,   186,
      -1,   186,    30,   186,    -1,   186,    29,   186,    -1,   186,
      36,   186,    -1,   186,    37,   186,    -1,   186,    42,   186,
      -1,   186,    38,   186,    -1,   186,    41,   186,    -1,    43,
     186,    -1,   186,     4,   186,    -1,   186,     5,   186,    -1,
     186,     3,   186,    -1,   186,    14,   186,    -1,   186,    13,
     186,    -1,   186,    22,   186,    -1,   186,    21,   186,    -1,
     186,    20,   186,    -1,   186,    19,   186,    -1,   186,    35,
     186,    -1,   186,    34,   186,    -1,   186,    40,   186,    -1,
     186,    39,   186,    -1,    34,   186,    -1,    52,   131,   186,
     132,    -1,    53,   131,   186,   132,    -1,    48,   131,   186,
     132,    -1,    45,   131,   186,   132,    -1,    46,   131,   186,
     133,   186,   132,    -1,    49,   131,   186,   133,   186,   132,
      -1,    50,   131,   186,   133,   186,   132,    -1,    58,   131,
     186,   132,    -1,    57,   131,   186,   132,    -1,    51,   131,
     186,   132,    -1,    59,   131,   186,   132,    -1,    54,   131,
     186,   132,    -1,    55,   131,   186,   132,    -1,    56,   131,
     186,   132,    -1,    61,   131,   186,   132,    -1,    61,   131,
     186,   133,   186,   132,    -1,    62,   131,   186,   132,    -1,
      63,   131,   186,   132,    -1,    64,   131,   186,   132,    -1,
     195,   131,   190,   132,    -1,   195,   137,   107,    -1,   195,
     134,   107,   133,   107,   135,    -1,   120,    -1,   114,   131,
     207,   132,    -1,    60,   131,   207,   132,    -1,    36,   134,
     111,   135,   137,   107,    -1,    36,   134,   111,   135,    -1,
      36,   137,   107,    -1,    36,    -1,   124,    -1,   125,    -1,
     107,    -1,    65,    -1,   123,    -1,   107,   134,   111,   135,
      -1,   192,    -1,   109,    -1,   195,    -1,   190,    -1,   109,
      -1,   128,    -1,   107,    -1,    65,    -1,   107,   137,   107,
      -1,    11,   189,    -1,    11,   137,   107,   189,    -1,   195,
      -1,   109,    -1,   128,    -1,    17,   127,    18,    -1,    17,
     109,    18,    -1,   195,    -1,    11,   189,    -1,    11,   137,
     107,   189,    -1,   107,   137,   107,    -1,   109,    -1,   128,
      -1,   115,    -1,   116,    -1,   117,    -1,   118,    -1,   122,
      -1,   119,    -1,   121,    -1,   123,    -1,   124,    -1,   125,
      -1,   106,    -1,   196,   106,    -1,   134,   198,   135,    -1,
     107,    -1,    33,   107,    -1,   107,    -1,    33,   107,    -1,
     109,    -1,   198,   107,    -1,   198,    33,   107,    -1,   198,
     109,    -1,   134,   200,   135,    -1,   109,    -1,   109,    -1,
     200,   109,    -1,   200,   209,    -1,   134,   202,   135,    -1,
     109,    -1,   209,    -1,   202,   109,    -1,   202,   209,    -1,
     134,   204,   135,    -1,   115,    -1,   117,    -1,   115,    -1,
     117,    -1,   204,   115,    -1,   204,   117,    -1,   204,   109,
      -1,   134,   206,   135,    -1,   119,    -1,   119,    -1,   109,
      -1,   206,   119,    -1,   206,   109,    -1,    -1,   186,    -1,
     207,   133,   186,    -1,    -1,   109,    -1,   208,   133,   109,
      -1,   111,    -1,   112,    -1,   113,    -1,   114,    -1,   126,
      -1,   128,    -1,   115,    -1,   116,    -1,   117,    -1,   118,
      -1,   119,    -1,   122,    -1,   123,    -1,   124,    -1,   125,
      -1,   120,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   156,   156,   157,   158,   159,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   172,   173,   174,   175,
     177,   178,   180,   182,   184,   185,   186,   187,   188,   190,
     192,   193,   196,   197,   198,   199,   200,   202,   203,   204,
     205,   206,   207,   209,   211,   212,   213,   214,   215,   216,
     217,   219,   221,   223,   225,   226,   228,   231,   233,   235,
     237,   239,   242,   244,   245,   246,   248,   250,   251,   252,
     255,   256,   259,   261,   262,   263,   265,   266,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   278,   279,   280,
     281,   283,   285,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   302,   303,   304,   305,
     307,   308,   310,   311,   313,   314,   316,   317,   318,   319,
     320,   321,   322,   325,   326,   327,   328,   330,   331,   333,
     334,   335,   336,   337,   338,   340,   341,   343,   345,   346,
     348,   349,   350,   351,   352,   354,   355,   356,   357,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   454,   455,   456,   457,   459,   460,   461,   462,
     463,   464,   465,   466,   468,   469,   470,   471,   473,   474,
     475,   476,   477,   479,   480,   481,   483,   484,   486,   487,
     488,   489,   490,   491,   493,   494,   495,   496,   497,   499,
     500,   501,   502,   503,   505,   506,   508,   509,   510,   512,
     513,   514,   516,   517,   518,   521,   522,   524,   525,   526,
     528,   530,   531,   532,   533,   535,   536,   537,   539,   540,
     541,   542,   543,   545,   546,   548,   549,   551,   552,   555,
     556,   557,   559,   560,   561,   563,   564,   565,   566,   567,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OP_BOOL_OR", "OP_BOOL_XOR",
  "OP_BOOL_AND", "'|'", "OP_OR", "';'", "'^'", "OP_XOR", "'&'", "OP_AND",
  "OP_FNOTEQUAL", "OP_FEQUAL", "OP_NOTEQUAL", "OP_EQUAL", "'<'", "'>'",
  "OP_FGREATEQUAL", "OP_FLESSEQUAL", "OP_FGREAT", "OP_FLESS", "OP_SGREAT",
  "OP_SLESSEQUAL", "OP_SGREATEQUAL", "OP_SLESS", "OP_LESSEQUAL",
  "OP_GREATEQUAL", "OP_SRIGHT", "OP_RIGHT", "OP_LEFT", "'+'", "'-'",
  "OP_FSUB", "OP_FADD", "'*'", "'/'", "'%'", "OP_FDIV", "OP_FMULT",
  "OP_SREM", "OP_SDIV", "'!'", "'~'", "OP_ZEXT", "OP_CARRY", "OP_BORROW",
  "OP_SEXT", "OP_SCARRY", "OP_SBORROW", "OP_NAN", "OP_ABS", "OP_SQRT",
  "OP_CEIL", "OP_FLOOR", "OP_ROUND", "OP_INT2FLOAT", "OP_FLOAT2FLOAT",
  "OP_TRUNC", "OP_CPOOLREF", "OP_NEW", "OP_POPCOUNT",
  "OP_COUNTLEADINGZEROS", "OP_COUNTLEADINGONES", "BADINTEGER", "GOTO_KEY",
  "CALL_KEY", "RETURN_KEY", "IF_KEY", "DEFINE_KEY", "ATTACH_KEY",
  "MACRO_KEY", "SPACE_KEY", "TYPE_KEY", "RAM_KEY", "DEFAULT_KEY",
  "REGISTER_KEY", "ENDIAN_KEY", "WITH_KEY", "ALIGN_KEY", "OP_UNIMPL",
  "TOKEN_KEY", "SIGNED_KEY", "NOFLOW_KEY", "HEX_KEY", "DEC_KEY", "BIG_KEY",
  "LITTLE_KEY", "SIZE_KEY", "WORDSIZE_KEY", "OFFSET_KEY", "NAMES_KEY",
  "VALUES_KEY", "VARIABLES_KEY", "PCODEOP_KEY", "IS_KEY", "LOCAL_KEY",
  "DELAYSLOT_KEY", "CROSSBUILD_KEY", "EXPORT_KEY", "BUILD_KEY",
  "CONTEXT_KEY", "ELLIPSIS_KEY", "GLOBALSET_KEY", "BITRANGE_KEY", "CHAR",
  "INTEGER", "INTB", "STRING", "SYMBOLSTRING", "SPACESYM", "SECTIONSYM",
  "TOKENSYM", "USEROPSYM", "VALUESYM", "VALUEMAPSYM", "CONTEXTSYM",
  "NAMESYM", "VARSYM", "BITSYM", "SPECSYM", "VARLISTSYM", "OPERANDSYM",
  "STARTSYM", "ENDSYM", "MACROSYM", "LABELSYM", "SUBTABLESYM", "'}'",
  "'='", "'('", "')'", "','", "'['", "']'", "'{'", "':'", "' '", "$accept",
  "spec", "definition", "constructorlike", "endiandef", "aligndef",
  "tokendef", "tokenprop", "contextdef", "contextprop", "fielddef",
  "contextfielddef", "spacedef", "spaceprop", "varnodedef", "bitrangedef",
  "bitrangelist", "bitrangesingle", "pcodeopdef", "valueattach",
  "nameattach", "varattach", "macrodef", "withblockstart", "withblockmid",
  "withblock", "id_or_nil", "bitpat_or_nil", "macrostart", "rtlbody",
  "constructor", "constructprint", "subtablestart", "pexpression",
  "pequation", "elleq", "ellrt", "atomic", "constraint", "contextblock",
  "contextlist", "section_def", "rtlfirstsection", "rtlcontinue", "rtl",
  "rtlmid", "statement", "expr", "sizedstar", "jumpdest", "varnode",
  "integervarnode", "lhsvarnode", "label", "exportvarnode", "familysymbol",
  "specificsymbol", "charstring", "intblist", "intbpart", "stringlist",
  "stringpart", "anystringlist", "anystringpart", "valuelist", "valuepart",
  "varlist", "varpart", "paramlist", "oplist", "anysymbol", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   124,   261,    59,    94,
     262,    38,   263,   264,   265,   266,   267,    60,    62,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,    43,    45,   281,   282,    42,    47,    37,   283,
     284,   285,   286,    33,   126,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   125,
      61,    40,    41,    44,    91,    93,   123,    58,    32
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   139,   140,   140,   140,   140,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   142,   142,   142,   142,
     143,   143,   144,   145,   146,   146,   146,   146,   146,   147,
     148,   148,   149,   149,   149,   149,   149,   150,   150,   150,
     150,   150,   150,   151,   152,   152,   152,   152,   152,   152,
     152,   153,   153,   154,   155,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   163,   163,   164,   165,   165,   165,
     166,   166,   167,   168,   168,   168,   169,   169,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   171,   171,   171,
     171,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   173,   173,   173,   173,
     174,   174,   175,   175,   176,   176,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   178,   178,   179,
     179,   179,   179,   179,   179,   180,   180,   181,   182,   182,
     183,   183,   183,   183,   183,   184,   184,   184,   184,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   187,   187,   187,   187,   188,   188,   188,   188,
     188,   188,   188,   188,   189,   189,   189,   189,   190,   190,
     190,   190,   190,   191,   191,   191,   192,   192,   193,   193,
     193,   193,   193,   193,   194,   194,   194,   194,   194,   195,
     195,   195,   195,   195,   196,   196,   197,   197,   197,   198,
     198,   198,   198,   198,   198,   199,   199,   200,   200,   200,
     201,   202,   202,   202,   202,   203,   203,   203,   204,   204,
     204,   204,   204,   205,   205,   206,   206,   206,   206,   207,
     207,   207,   208,   208,   208,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     2,
       5,     5,     5,     2,     6,     9,     9,     2,     3,     2,
       3,     2,     7,     7,     2,     2,     2,     7,     7,     2,
       2,     2,     2,     2,     3,     3,     4,     4,     4,     4,
       2,    10,     5,     4,     1,     2,     8,     4,     5,     5,
       5,     4,     6,     1,     2,     2,     2,     0,     1,     1,
       0,     1,     5,     3,     4,     1,     5,     5,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       2,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     1,     3,     3,     3,
       2,     1,     2,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     0,     3,     0,
       5,     8,     8,     5,     2,     3,     3,     2,     1,     3,
       1,     4,     5,     3,     4,     0,     2,     4,     6,     4,
       5,     4,     7,     6,     3,     5,     5,     9,     4,     4,
       4,     3,     5,     5,     5,     3,     5,     5,     3,     5,
       2,     5,     5,     1,     1,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     4,     4,     4,
       4,     6,     6,     6,     4,     4,     4,     4,     4,     4,
       4,     4,     6,     4,     4,     4,     4,     3,     6,     1,
       4,     4,     6,     4,     3,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     4,     1,     1,     1,     3,     3,     1,     2,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     1,     2,     1,
       2,     1,     2,     3,     2,     3,     1,     1,     2,     2,
       3,     1,     1,     2,     2,     3,     1,     1,     1,     1,
       2,     2,     2,     3,     1,     1,     1,     2,     2,     0,
       1,     3,     0,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     2,     0,     1,     0,     0,     0,     0,
      67,     0,     0,    89,     4,     5,     3,     6,     0,     7,
       0,     8,     0,     9,    10,    11,    12,    13,    14,    17,
      63,     0,    18,     0,    16,     0,     0,     0,    15,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    69,    68,     0,    88,    87,    23,     0,   325,   326,
     327,   328,   331,   332,   333,   334,   335,   340,   336,   337,
     338,   339,   329,   330,    27,     0,    29,     0,    31,     0,
      43,     0,    50,     0,     0,     0,    66,    64,    65,   145,
      82,     0,   284,    83,    86,    85,    84,    81,     0,    78,
      80,    90,    79,     0,     0,    44,    45,     0,     0,    28,
     296,     0,     0,    30,     0,     0,    54,     0,   306,   307,
       0,     0,     0,     0,   322,    70,     0,    34,    35,    36,
       0,     0,    39,    40,    41,    42,     0,     0,     0,     0,
       0,   140,     0,   274,   275,   276,   277,   124,   278,   123,
     126,     0,   127,   106,   111,   113,   114,   125,   285,   127,
      20,    21,     0,     0,   297,     0,    57,     0,    53,    55,
       0,   308,   309,     0,     0,     0,     0,   287,     0,     0,
     314,     0,     0,   323,     0,   127,    71,     0,     0,     0,
       0,    46,    47,    48,    49,    61,     0,     0,   245,   259,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   258,
     256,     0,   279,     0,   280,   281,   282,   283,     0,   257,
     146,     0,     0,   255,     0,   173,   254,   110,     0,     0,
       0,     0,     0,   129,     0,   112,     0,     0,     0,     0,
       0,     0,     0,    22,     0,   298,   295,   299,     0,    52,
       0,   312,   310,   311,   305,   301,     0,   302,    59,   288,
       0,   289,   291,     0,    58,   316,   315,     0,    60,    72,
       0,     0,     0,     0,     0,     0,   256,   257,     0,   261,
     254,     0,     0,     0,     0,   249,   248,   253,   250,   246,
     247,     0,     0,   252,     0,     0,   170,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   239,     0,     0,     0,   174,   254,     0,     0,
       0,     0,     0,     0,   143,   273,     0,     0,   268,     0,
       0,     0,     0,   319,     0,   319,     0,     0,     0,     0,
       0,     0,     0,    91,     0,   122,    92,    93,   115,   108,
     109,   107,     0,    75,   145,    76,   117,   118,   120,   119,
     121,   116,    77,    24,     0,     0,   303,   300,   304,   290,
       0,   292,   294,   286,   318,   317,   313,   324,    62,     0,
       0,     0,     0,     0,   267,   266,     0,   244,     0,     0,
     165,     0,   168,     0,   189,   216,   202,   190,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   319,     0,     0,     0,     0,   319,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   175,     0,     0,     0,
     147,     0,     0,   154,     0,     0,     0,   269,     0,   144,
     265,     0,   263,   141,   161,   260,     0,     0,   320,     0,
       0,     0,     0,     0,     0,     0,     0,   104,   105,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     134,     0,     0,   128,   138,   145,     0,     0,     0,     0,
     293,     0,     0,     0,     0,   262,   243,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   176,   205,   203,   204,   193,   191,   192,   207,   206,
     180,   179,   181,   184,   211,   210,   209,   208,   188,   187,
     186,   185,   183,   182,   196,   195,   194,   177,   178,   213,
     212,   197,   198,   200,   215,   214,   201,   199,     0,     0,
       0,   237,     0,     0,     0,     0,     0,     0,   271,   142,
     151,     0,     0,     0,   158,     0,     0,   160,   159,   149,
       0,    94,   101,   102,   100,    99,    98,    95,    96,    97,
     103,     0,     0,     0,     0,     0,    73,   137,     0,     0,
       0,    32,    33,    37,    38,     0,   251,   167,   169,   171,
     220,     0,   219,     0,     0,   226,   217,   218,   228,   229,
     230,   225,   224,   227,   241,   231,     0,   233,   234,   235,
     240,   166,   236,     0,   150,   148,     0,   164,   163,   162,
     270,     0,   156,   321,   172,   155,     0,     0,     0,     0,
       0,    74,   139,     0,     0,    26,    25,     0,     0,   242,
       0,     0,     0,     0,     0,     0,   153,     0,     0,     0,
     130,   133,   135,   136,    56,    51,   221,   222,   223,   232,
     238,   152,     0,     0,     0,     0,     0,     0,   157,   131,
     132
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    14,    15,     3,    16,    17,    18,    19,    20,
      74,    78,    21,    22,    23,    24,   115,   116,    25,    26,
      27,    28,    29,    30,    31,    32,    53,   185,    33,   365,
      34,    35,    36,   355,   152,   153,   154,   155,   156,   234,
     362,   627,   514,   515,   140,   141,   220,   488,   325,   292,
     326,   223,   224,   293,   337,   356,   327,    96,   179,   263,
     112,   165,   175,   256,   121,   173,   182,   267,   489,   184,
      75
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -315
static const yytype_int16 yypact[] =
{
     -22,   -52,    10,  -315,   -33,  -315,     7,  1546,   331,   -70,
     -35,   -62,   -51,  -315,  -315,  -315,  -315,  -315,   392,  -315,
     423,  -315,   382,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,    35,  -315,   -13,  -315,    19,    21,   -55,  -315,  -315,
    2522,    64,  2540,   -80,    87,   114,   177,   -30,   -30,   -30,
     155,  -315,  -315,   159,  -315,  -315,  -315,   189,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,  -315,  -315,   336,   198,  -315,   206,   240,   256,
    -315,   261,  -315,   276,   299,  1547,  -315,  -315,  -315,  -315,
    -315,  1711,  -315,  -315,  -315,  -315,   329,  -315,  1711,  -315,
    -315,  -315,   329,   428,   430,  -315,  -315,   332,   310,  -315,
    -315,   334,   432,  -315,   330,     0,  -315,   338,  -315,  -315,
      18,   325,   -16,  -110,   352,  1711,   342,  -315,  -315,  -315,
     344,   346,  -315,  -315,  -315,  -315,   350,   335,   358,   359,
     340,  1753,  1572,  -315,  -315,  -315,  -315,  -315,  -315,   353,
    -315,  1711,    12,  -315,  -315,   379,  -315,    44,  -315,    12,
    -315,  -315,   479,   386,  -315,  2418,  -315,   375,  -315,  -315,
     -44,  -315,  -315,   -59,  2558,   488,   391,  -315,    83,   491,
    -315,     2,   492,  -315,   -67,   368,   283,   412,   421,   422,
     424,  -315,  -315,  -315,  -315,  -315,   264,   -31,   193,  -315,
     273,   355,    -2,  1620,   290,   402,    72,   367,   427,   426,
      31,   433,  -315,   435,  -315,  -315,  -315,  -315,   436,   -57,
    -315,  1620,  -112,  -315,    32,  -315,    48,  -315,  1591,    41,
    1711,  1711,  1711,  -315,   -68,  -315,  1591,  1591,  1591,  1591,
    1591,  1591,   -68,  -315,   434,  -315,  -315,  -315,   442,  -315,
     490,  -315,  -315,  -315,  -315,  -315,  2443,  -315,  -315,  -315,
     470,  -315,  -315,    13,  -315,  -315,  -315,   -25,  -315,  -315,
     472,   480,   484,   486,   523,   524,  -315,  -315,   514,  -315,
    -315,   641,   643,   581,   586,  -315,   560,  -315,  -315,  -315,
    -315,  1620,   691,  -315,  1620,   694,  -315,  1620,  1620,  1620,
    1620,  1620,   608,   611,   644,   645,   653,   655,   686,   696,
     731,   736,   771,   772,   811,   812,   814,   851,   852,   854,
     891,   892,  -315,  1620,  1879,  1620,  -315,   139,    30,   570,
     633,   689,   309,   726,   897,  -315,  2330,  1017,  -315,  1054,
     716,  1620,   956,  1620,  1620,  1620,  1575,   958,   995,  1620,
     996,  1591,  1591,  -315,  1591,  2431,  -315,  -315,  -315,   141,
    1094,  -315,   165,  -315,  -315,  -315,  2431,  2431,  2431,  2431,
    2431,  2431,  -315,  1064,  1036,  1052,  -315,  -315,  -315,  -315,
    1038,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  1076,
    1078,  1115,  1116,    72,  -315,  -315,  1090,  -315,  1151,   328,
    -315,   569,  -315,   609,  -315,  -315,  -315,  -315,  1620,  1620,
    1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,
    1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,   815,  1620,
    1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,
    1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,
    1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,  1620,
    1620,  1620,  1620,  1620,  1620,   270,  -315,     5,  1156,  1158,
    -315,  1620,  1195,  -315,  1171,   272,  1198,  -315,  1235,  1337,
    -315,  1374,  -315,  -315,  -315,  -315,  1933,  1213,  2253,    66,
    1973,    96,  1620,  1251,  1292,  2013,  1252,  -315,  -315,   285,
    1591,  1591,  1591,  1591,  1591,  1591,  1591,  1591,  1591,  1294,
    -315,  1293,  1332,  -315,  -315,  -315,   -26,  1333,  1369,  1358,
    -315,  1371,  1373,  1410,  1411,  -315,  1408,  1447,  1577,  1610,
    1613,   855,   692,   895,   732,   774,   935,   975,  1015,  1055,
    1095,  1135,  1175,  1215,  1255,   145,   649,  1295,  1335,  1375,
     170,  -315,  2292,  2329,  2329,  2363,  2395,  2456,  2562,  2562,
    2562,  2562,  2588,  2588,  2588,  2588,  2588,  2588,  2588,  2588,
    2588,  2588,  2588,  2588,   520,   520,   520,   485,   485,   485,
     485,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  1614,  1451,
    1490,  -315,  2053,     4,  1617,  1622,  1624,    72,  -315,  -315,
    -315,  1620,  1625,  1620,  -315,  1626,  2093,  -315,  -315,  -315,
    1529,  -315,  2489,  1730,   171,   248,   248,   140,   140,  -315,
    -315,  1807,  1591,  1591,  1687,   296,  -315,  -315,   226,  1530,
     -80,  -315,  -315,  -315,  -315,  1531,  -315,  -315,  -315,  -315,
    -315,  1620,  -315,  1620,  1620,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,  1620,  -315,  -315,  -315,
    -315,  -315,  -315,  1532,  -315,  -315,  1620,  -315,  -315,  -315,
    -315,  2133,  -315,  2253,  -315,  -315,  1505,  1510,  1511,  1767,
    1833,  -315,  -315,  1615,  1616,  -315,  -315,  1512,  1642,  -315,
    1415,  1455,  1495,  1535,  1520,  2173,  -315,  1556,  1542,  1543,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,  1620,  1559,  1560,  2213,  1653,  1654,  -315,  -315,
    -315
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -315,  -315,  1665,  1666,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,  1586,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  1460,
    -315,  -315,  -315,  -196,   -61,  -315,  1569,  -315,  -315,  -132,
    -315,  1093,  -315,  -315,  1355,  1205,  -315,  -199,  -140,  -198,
    -127,  1254,  1388,  -139,  -315,   -91,   -53,  1689,  -315,  -315,
    1096,  -315,  -315,  -315,   327,  -315,  -315,  -315,  -314,  -315,
      15
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -273
static const yytype_int16 yytable[] =
{
     157,   221,   225,   295,   324,   625,   296,   157,   168,   180,
       5,     6,   665,   363,   222,    38,   196,   176,   230,   347,
     231,   249,   346,   232,   181,   348,     4,   242,    90,   110,
      97,   491,   103,   104,   157,    79,     6,   159,   470,    50,
     366,   367,   368,   369,   370,   371,   380,   230,     1,   231,
     251,   157,   232,   271,   111,   106,   252,   109,   253,   236,
     157,   237,   238,   250,   186,   269,   270,   336,   364,   279,
     199,   239,   240,  -265,    51,    54,   254,  -265,   281,   331,
       7,     8,     9,   196,   384,   118,    55,   119,   226,    10,
     229,   177,   399,    52,   385,   401,   282,    37,   403,   404,
     405,   406,   407,   626,   120,    85,     8,     9,   545,   114,
     386,   265,   209,   550,    10,    91,   260,    98,   178,    11,
     381,   266,   382,    89,   428,    92,   466,    92,    93,    94,
      99,   100,   297,   171,   666,   172,    39,   199,    12,   157,
     157,   157,   486,   280,    11,   490,   233,    13,   383,   231,
     495,   329,   232,   280,   338,   497,   498,    95,   499,   101,
     471,   341,   349,    12,    86,  -264,   350,   472,   342,   359,
     360,   361,    13,   358,   241,   357,   507,   508,  -263,   209,
     247,   276,  -263,   357,   357,   357,   357,   357,   357,   257,
     261,   212,   262,   214,   107,   215,   216,   217,   602,   603,
     277,   503,   504,   505,   506,   477,   113,   507,   508,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   114,   546,   547,   548,   549,   605,   603,
     552,   553,   554,   555,   556,   557,   558,   559,   560,   561,
     562,   563,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,   587,   525,   588,   117,   509,
     467,   378,   592,   468,   510,   196,   469,   654,   603,   280,
     505,   506,   511,   482,   507,   508,   124,   197,   512,   230,
     197,   231,   500,   606,   232,   501,   125,   502,   357,   357,
     513,   357,   660,   603,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   685,   686,   503,   504,   505,   506,   126,
     196,   507,   508,   132,   133,   134,   135,   283,   130,   199,
     284,   429,   430,   431,   432,   285,   131,   433,   285,   434,
     280,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   209,   197,   276,   199,   122,   123,   286,   332,   287,
     286,   595,   287,   212,   596,   214,   136,   215,   216,   217,
      80,   137,   277,   288,   289,   290,   288,   289,   290,   328,
      56,   278,   671,   198,   673,   683,   138,   291,   684,   212,
     191,   214,   192,   215,   216,   217,   209,   611,   276,   127,
     285,   128,   129,    47,    48,    49,   679,   680,   212,   139,
     214,    76,   215,   216,   217,   158,   160,   277,   161,   162,
     166,   163,   690,   164,   691,   692,   476,   357,   357,   357,
     357,   357,   357,   357,   357,   357,    81,   693,    82,   174,
     167,   183,   286,   528,   287,   193,   194,   695,   170,   195,
     670,    83,    84,   187,   333,   188,   334,   189,   288,   289,
     290,   190,   235,   228,   221,   225,   212,   243,   214,   294,
     215,   216,   217,   244,   248,   335,   258,   222,   259,   264,
     268,    57,   233,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,   715,    68,    69,    70,    71,    72,   272,
      73,   458,   459,   460,   461,   462,   463,   464,   273,   274,
     677,   275,    77,   330,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,   280,    68,    69,    70,    71,    72,
     339,    73,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   340,   343,   344,   373,   345,   678,   357,
     357,   226,   429,   430,   431,   432,   374,   379,   433,   375,
     434,   387,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   429,   430,   431,   432,   388,   389,   433,   390,
     434,   393,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   429,   430,   431,   432,   391,   392,   433,   394,
     434,   395,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   396,   397,   398,   429,   430,   431,   432,   400,
     473,   433,   402,   434,   529,   435,   436,   437,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   429,   430,   431,   432,   408,
     474,   433,   409,   434,   530,   435,   436,   437,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   410,   411,   429,   430,   431,
     432,   655,   656,   433,   412,   434,   413,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   414,   429,   430,
     431,   432,   475,   485,   433,   641,   434,   415,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   429,   430,
     431,   432,   416,   478,   433,   643,   434,   417,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   429,   430,
     431,   432,   418,   419,   433,  -272,   434,   644,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   429,   430,
     431,   432,   420,   421,   433,   422,   434,   551,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   429,   430,
     431,   432,   423,   424,   433,   425,   434,   640,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   429,   430,
     431,   432,   426,   427,   433,   483,   434,   642,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   429,   430,
     431,   432,   484,   487,   433,   493,   434,   645,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   429,   430,
     431,   432,   494,   496,   433,   232,   434,   646,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   429,   430,
     431,   432,   517,   518,   433,   520,   434,   647,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   429,   430,
     431,   432,   519,   521,   433,   522,   434,   648,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   429,   430,
     431,   432,   523,   524,   433,   526,   434,   649,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   429,   430,
     431,   432,   527,   590,   433,   591,   434,   650,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   429,   430,
     431,   432,   593,   594,   433,   597,   434,   651,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   429,   430,
     431,   432,   598,   601,   433,  -264,   434,   652,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   429,   430,
     431,   432,   599,   607,   433,   610,   434,   653,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   429,   430,
     431,   432,   608,   622,   433,   621,   434,   657,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   429,   430,
     431,   432,   623,   628,   433,   630,   434,   658,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   429,   430,
     431,   432,   629,   631,   433,   632,   434,   659,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   429,   430,
     431,   432,   633,   634,   433,   635,   434,   706,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   429,   430,
     431,   432,   636,   662,   433,   637,   434,   707,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   638,    40,
      40,   639,   661,   663,   351,   667,    41,   708,    42,    42,
     668,   196,   669,   672,   674,   352,   676,   687,   689,   694,
     697,    43,    43,   698,   699,   702,   703,   704,    44,    44,
     705,    45,    45,   298,   299,   710,   198,    46,    46,   713,
     714,   719,   720,   300,   301,   302,   303,   709,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   199,   712,   143,   144,   145,
     146,   716,   717,   147,   148,   149,    87,    88,   196,   353,
     150,   169,   372,   151,   197,   492,   143,   144,   145,   146,
     212,   227,   214,   148,   215,   216,   217,   682,   625,   516,
     624,   589,   354,   198,   481,   102,   688,   209,     0,   276,
       0,     0,     0,     0,   321,     0,     0,     0,     0,   212,
     322,   214,   502,   215,   216,   217,     0,     0,   277,     0,
       0,   323,   199,   200,   201,   202,   203,     0,     0,     0,
     503,   504,   505,   506,   196,     0,   507,   508,     0,     0,
     197,     0,     0,     0,   500,   700,     0,   501,     0,   502,
       0,     0,     0,     0,   204,   205,   206,     0,   208,   198,
       0,     0,     0,     0,   209,     0,   210,   503,   504,   505,
     506,   211,     0,   507,   508,     0,   212,   213,   214,     0,
     215,   216,   217,   218,   142,   219,   681,     0,   199,   200,
     201,   202,   203,     0,     0,     0,   143,   144,   145,   146,
       0,     0,   147,   148,   149,     0,     0,     0,     0,   150,
     500,   701,   151,   501,     0,   502,     0,     0,     0,     0,
     204,   205,   206,   207,   208,     0,     0,     0,     0,     0,
     209,     0,   210,   503,   504,   505,   506,   211,     0,   507,
     508,     0,   212,   213,   214,     0,   215,   216,   217,   218,
       0,   219,   429,   430,   431,   432,     0,     0,   433,     0,
     434,     0,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   143,   144,   145,   146,   212,     0,   214,   148,
     215,   216,   217,     0,     0,     0,   429,   430,   431,   432,
       0,   600,   433,     0,   434,   465,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   429,   430,   431,   432,
       0,   604,   433,     0,   434,     0,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   429,   430,   431,   432,
       0,   609,   433,     0,   434,     0,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   429,   430,   431,   432,
       0,   664,   433,     0,   434,     0,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   429,   430,   431,   432,
       0,   675,   433,     0,   434,     0,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   429,   430,   431,   432,
       0,   696,   433,     0,   434,     0,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   429,   430,   431,   432,
       0,   711,   433,     0,   434,     0,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   429,   430,   431,   432,
       0,   718,   433,     0,   434,     0,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   429,   430,   431,   432,
       0,     0,   433,     0,   434,     0,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   430,   431,   432,     0,
       0,   433,     0,   434,     0,   435,   436,   437,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   432,     0,     0,   433,     0,
     434,     0,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   433,     0,   434,     0,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   434,     0,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   500,   479,
       0,   501,     0,   502,     0,     0,     0,     0,     0,   212,
       0,   214,     0,   215,   216,   217,     0,     0,   480,     0,
       0,   503,   504,   505,   506,     0,     0,   507,   508,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   501,
       0,   502,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   503,
     504,   505,   506,     0,     0,   507,   508,   245,     0,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,     0,
      68,    69,    70,    71,    72,     0,    73,     0,     0,     0,
       0,     0,   376,   246,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,     0,    68,    69,    70,    71,    72,
       0,    73,     0,     0,     0,     0,     0,     0,   377,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   105,     0,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,     0,    68,    69,    70,    71,    72,   108,
      73,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,     0,    68,    69,    70,    71,    72,   255,    73,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,     0,
      68,    69,    70,    71,    72,     0,    73
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-315)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-273)))

static const yytype_int16 yycheck[] =
{
      91,   141,   141,   201,   203,    31,     8,    98,     8,   119,
       0,     1,     8,    81,   141,     8,    11,    33,     6,   131,
       8,    65,   221,    11,   134,   137,    78,   159,     9,   109,
       9,   345,    87,    88,   125,    20,     1,    98,     8,   109,
     236,   237,   238,   239,   240,   241,    33,     6,    70,     8,
     109,   142,    11,   185,   134,    40,   115,    42,   117,    15,
     151,    17,    18,   107,   125,   132,   133,   207,   136,   196,
      65,    27,    28,   130,   109,   137,   135,   134,   109,   206,
      70,    71,    72,    11,   109,   115,   137,   117,   141,    79,
     151,   107,   291,   128,   119,   294,   127,   130,   297,   298,
     299,   300,   301,   129,   134,    70,    71,    72,   422,   109,
     135,   109,   107,   427,    79,    96,    33,    96,   134,   109,
     107,   119,   109,   136,   323,   106,   325,   106,   109,   110,
     109,   110,   134,   115,   130,   117,   129,    65,   128,   230,
     231,   232,   341,   196,   109,   344,   134,   137,   135,     8,
     349,   204,    11,   206,   207,   351,   352,   138,   354,   138,
     130,   130,   130,   128,   129,   134,   134,   137,   137,   230,
     231,   232,   137,   132,   130,   228,    36,    37,   130,   107,
     165,   109,   134,   236,   237,   238,   239,   240,   241,   174,
     107,   119,   109,   121,   130,   123,   124,   125,   132,   133,
     128,    30,    31,    32,    33,   332,   119,    36,    37,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   109,   423,   424,   425,   426,   132,   133,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   393,   465,    91,   104,
     131,   256,   471,   134,   109,    11,   137,   132,   133,   332,
      32,    33,   117,   336,    36,    37,   131,    17,   123,     6,
      17,     8,     7,   492,    11,    10,   137,    12,   351,   352,
     135,   354,   132,   133,   500,   501,   502,   503,   504,   505,
     506,   507,   508,    87,    88,    30,    31,    32,    33,   130,
      11,    36,    37,    83,    84,    85,    86,   134,   130,    65,
     137,     3,     4,     5,     6,    65,   130,     9,    65,    11,
     393,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,   107,    17,   109,    65,    48,    49,   107,    11,   109,
     107,   109,   109,   119,   112,   121,   130,   123,   124,   125,
       8,   130,   128,   123,   124,   125,   123,   124,   125,   109,
       8,   137,   601,    36,   603,   109,   130,   134,   112,   119,
      75,   121,    77,   123,   124,   125,   107,   132,   109,    83,
      65,    85,    86,    92,    93,    94,   622,   623,   119,   130,
     121,     8,   123,   124,   125,   106,     8,   128,     8,   107,
       8,   131,   641,   109,   643,   644,   137,   500,   501,   502,
     503,   504,   505,   506,   507,   508,    74,   656,    76,   134,
     130,   109,   107,   135,   109,   107,   107,   666,   130,   129,
     597,    89,    90,   131,   107,   131,   109,   131,   123,   124,
     125,   131,   103,   130,   624,   624,   119,     8,   121,   134,
     123,   124,   125,   107,   119,   128,     8,   624,   107,     8,
       8,   109,   134,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   712,   122,   123,   124,   125,   126,   107,
     128,    36,    37,    38,    39,    40,    41,    42,   107,   107,
     621,   107,   109,   131,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   597,   122,   123,   124,   125,   126,
     123,   128,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,   137,   131,   130,   132,   131,   621,   622,
     623,   624,     3,     4,     5,     6,   134,   107,     9,    89,
      11,   109,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     3,     4,     5,     6,   136,   133,     9,   133,
      11,   107,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     3,     4,     5,     6,   133,   133,     9,    18,
      11,    18,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,   111,   107,   134,     3,     4,     5,     6,     8,
     130,     9,     8,    11,   135,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     3,     4,     5,     6,   131,
     107,     9,   131,    11,   135,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,   131,   131,     3,     4,     5,
       6,   132,   133,     9,   131,    11,   131,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,   131,     3,     4,
       5,     6,   133,   107,     9,   133,    11,   131,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,     4,
       5,     6,   131,   137,     9,   133,    11,   131,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,     4,
       5,     6,   131,   131,     9,     8,    11,   133,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,     4,
       5,     6,   131,   131,     9,   131,    11,   132,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,     4,
       5,     6,   131,   131,     9,   131,    11,   132,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,     4,
       5,     6,   131,   131,     9,     8,    11,   132,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,     4,
       5,     6,     8,   107,     9,   107,    11,   132,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,     4,
       5,     6,   107,   107,     9,    11,    11,   132,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,     4,
       5,     6,    78,   107,     9,   107,    11,   132,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,     4,
       5,     6,   130,   107,     9,   107,    11,   132,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,     4,
       5,     6,   107,   107,     9,   135,    11,   132,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,     4,
       5,     6,   111,   107,     9,   107,    11,   132,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,     4,
       5,     6,   107,   132,     9,   107,    11,   132,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,     4,
       5,     6,   107,   130,     9,     8,    11,   132,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,     4,
       5,     6,     8,   132,     9,   133,    11,   132,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,     4,
       5,     6,   130,   130,     9,   131,    11,   132,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,     4,
       5,     6,   130,   130,     9,   107,    11,   132,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,     4,
       5,     6,   133,   132,     9,   132,    11,   132,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,     4,
       5,     6,   132,   132,     9,   137,    11,   132,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,     4,
       5,     6,   135,   132,     9,     8,    11,   132,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     8,    73,
      73,     8,     8,   133,    33,     8,    80,   132,    82,    82,
       8,    11,     8,     8,     8,    44,   107,   107,   107,   107,
     135,    95,    95,   133,   133,    30,    30,   135,   102,   102,
       8,   105,   105,    33,    34,   135,    36,   111,   111,   117,
     117,     8,     8,    43,    44,    45,    46,   132,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   130,   115,   116,   117,
     118,   132,   132,   121,   122,   123,    31,    31,    11,   108,
     128,   115,   242,   131,    17,   130,   115,   116,   117,   118,
     119,   142,   121,   122,   123,   124,   125,   624,    31,   364,
     515,   467,   131,    36,   336,    36,   630,   107,    -1,   109,
      -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,   119,
     120,   121,    12,   123,   124,   125,    -1,    -1,   128,    -1,
      -1,   131,    65,    66,    67,    68,    69,    -1,    -1,    -1,
      30,    31,    32,    33,    11,    -1,    36,    37,    -1,    -1,
      17,    -1,    -1,    -1,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    -1,    97,    98,    99,    -1,   101,    36,
      -1,    -1,    -1,    -1,   107,    -1,   109,    30,    31,    32,
      33,   114,    -1,    36,    37,    -1,   119,   120,   121,    -1,
     123,   124,   125,   126,   103,   128,   129,    -1,    65,    66,
      67,    68,    69,    -1,    -1,    -1,   115,   116,   117,   118,
      -1,    -1,   121,   122,   123,    -1,    -1,    -1,    -1,   128,
       7,     8,   131,    10,    -1,    12,    -1,    -1,    -1,    -1,
      97,    98,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,
     107,    -1,   109,    30,    31,    32,    33,   114,    -1,    36,
      37,    -1,   119,   120,   121,    -1,   123,   124,   125,   126,
      -1,   128,     3,     4,     5,     6,    -1,    -1,     9,    -1,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,   115,   116,   117,   118,   119,    -1,   121,   122,
     123,   124,   125,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    11,    66,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
      -1,     8,     9,    -1,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
      -1,     8,     9,    -1,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
      -1,     8,     9,    -1,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
      -1,     8,     9,    -1,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
      -1,     8,     9,    -1,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
      -1,     8,     9,    -1,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
      -1,     8,     9,    -1,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
      -1,    -1,     9,    -1,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     4,     5,     6,    -1,
      -1,     9,    -1,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     6,    -1,    -1,     9,    -1,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     9,    -1,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     7,   109,
      -1,    10,    -1,    12,    -1,    -1,    -1,    -1,    -1,   119,
      -1,   121,    -1,   123,   124,   125,    -1,    -1,   128,    -1,
      -1,    30,    31,    32,    33,    -1,    -1,    36,    37,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    10,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    -1,    -1,    36,    37,   109,    -1,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    -1,
     122,   123,   124,   125,   126,    -1,   128,    -1,    -1,    -1,
      -1,    -1,   109,   135,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,    -1,   122,   123,   124,   125,   126,
      -1,   128,    -1,    -1,    -1,    -1,    -1,    -1,   135,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,   109,    -1,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,    -1,   122,   123,   124,   125,   126,   109,
     128,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,    -1,   122,   123,   124,   125,   126,   109,   128,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    -1,
     122,   123,   124,   125,   126,    -1,   128
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    70,   140,   143,    78,     0,     1,    70,    71,    72,
      79,   109,   128,   137,   141,   142,   144,   145,   146,   147,
     148,   151,   152,   153,   154,   157,   158,   159,   160,   161,
     162,   163,   164,   167,   169,   170,   171,   130,     8,   129,
      73,    80,    82,    95,   102,   105,   111,    92,    93,    94,
     109,   109,   128,   165,   137,   137,     8,   109,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   122,   123,
     124,   125,   126,   128,   149,   209,     8,   109,   150,   209,
       8,    74,    76,    89,    90,    70,   129,   141,   142,   136,
       9,    96,   106,   109,   110,   138,   196,     9,    96,   109,
     110,   138,   196,    87,    88,   109,   209,   130,   109,   209,
     109,   134,   199,   119,   109,   155,   156,    91,   115,   117,
     134,   203,   203,   203,   131,   137,   130,    83,    85,    86,
     130,   130,    83,    84,    85,    86,   130,   130,   130,   130,
     183,   184,   103,   115,   116,   117,   118,   121,   122,   123,
     128,   131,   173,   174,   175,   176,   177,   194,   106,   173,
       8,     8,   107,   131,   109,   200,     8,   130,     8,   156,
     130,   115,   117,   204,   134,   201,    33,   107,   134,   197,
     119,   134,   205,   109,   208,   166,   173,   131,   131,   131,
     131,    75,    77,   107,   107,   129,    11,    17,    36,    65,
      66,    67,    68,    69,    97,    98,    99,   100,   101,   107,
     109,   114,   119,   120,   121,   123,   124,   125,   126,   128,
     185,   187,   189,   190,   191,   192,   195,   175,   130,   173,
       6,     8,    11,   134,   178,   103,    15,    17,    18,    27,
      28,   130,   178,     8,   107,   109,   135,   209,   119,    65,
     107,   109,   115,   117,   135,   109,   202,   209,     8,   107,
      33,   107,   109,   198,     8,   109,   119,   206,     8,   132,
     133,   178,   107,   107,   107,   107,   109,   128,   137,   189,
     195,   109,   127,   134,   137,    65,   107,   109,   123,   124,
     125,   134,   188,   192,   134,   188,     8,   134,    33,    34,
      43,    44,    45,    46,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,   114,   120,   131,   186,   187,   189,   195,   109,   195,
     131,   189,    11,   107,   109,   128,   187,   193,   195,   123,
     137,   130,   137,   131,   130,   131,   186,   131,   137,   130,
     134,    33,    44,   108,   131,   172,   194,   195,   132,   173,
     173,   173,   179,    81,   136,   168,   172,   172,   172,   172,
     172,   172,   168,   132,   134,    89,   109,   135,   209,   107,
      33,   107,   109,   135,   109,   119,   135,   109,   136,   133,
     133,   133,   133,   107,    18,    18,   111,   107,   134,   186,
       8,   186,     8,   186,   186,   186,   186,   186,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   186,     3,
       4,     5,     6,     9,    11,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    66,   186,   131,   134,   137,
       8,   130,   137,   130,   107,   133,   137,   189,   137,   109,
     128,   191,   195,     8,     8,   107,   186,   107,   186,   207,
     186,   207,   130,   107,   107,   186,   107,   172,   172,   172,
       7,    10,    12,    30,    31,    32,    33,    36,    37,   104,
     109,   117,   123,   135,   181,   182,   183,    78,   107,   130,
     107,   107,   107,   107,   107,   189,   135,   111,   135,   135,
     135,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   207,   186,   186,   186,   186,
     207,   132,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   188,   190,
     107,   107,   186,   107,   132,   109,   112,   107,   107,     8,
       8,   130,   132,   133,     8,   132,   186,   132,   130,     8,
     133,   132,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   131,   130,   130,   184,    31,   129,   180,   130,   133,
     107,   132,   132,   132,   132,   137,   135,     8,     8,     8,
     132,   133,   132,   133,   133,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   133,   132,   132,   132,
     132,     8,   132,   133,     8,     8,   130,     8,     8,     8,
     189,   186,     8,   186,     8,     8,   107,   194,   195,   172,
     172,   129,   180,   109,   112,    87,    88,   107,   199,   107,
     186,   186,   186,   186,   107,   186,     8,   135,   133,   133,
       8,     8,    30,    30,   135,     8,   132,   132,   132,   132,
     135,     8,   130,   117,   117,   186,   132,   132,     8,     8,
       8
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
        case 19:
/* Line 1792 of yacc.c  */
#line 175 "src/decompile/cpp/slghparse.y"
    { slgh->resetConstructors(); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 177 "src/decompile/cpp/slghparse.y"
    { slgh->setEndian(1); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 178 "src/decompile/cpp/slghparse.y"
    { slgh->setEndian(0); }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 180 "src/decompile/cpp/slghparse.y"
    { slgh->setAlignment(*(yyvsp[(4) - (5)].i)); delete (yyvsp[(4) - (5)].i); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 182 "src/decompile/cpp/slghparse.y"
    {}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 184 "src/decompile/cpp/slghparse.y"
    { (yyval.tokensym) = slgh->defineToken((yyvsp[(3) - (6)].str),(yyvsp[(5) - (6)].i),0); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 185 "src/decompile/cpp/slghparse.y"
    { (yyval.tokensym) = slgh->defineToken((yyvsp[(3) - (9)].str),(yyvsp[(5) - (9)].i),-1); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 186 "src/decompile/cpp/slghparse.y"
    { (yyval.tokensym) = slgh->defineToken((yyvsp[(3) - (9)].str),(yyvsp[(5) - (9)].i),1); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 187 "src/decompile/cpp/slghparse.y"
    { (yyval.tokensym) = (yyvsp[(1) - (2)].tokensym); slgh->addTokenField((yyvsp[(1) - (2)].tokensym),(yyvsp[(2) - (2)].fieldqual)); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 188 "src/decompile/cpp/slghparse.y"
    { string errmsg=(yyvsp[(3) - (3)].anysym)->getName()+": redefined as a token"; yyerror(errmsg.c_str()); YYERROR; }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 190 "src/decompile/cpp/slghparse.y"
    {}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 192 "src/decompile/cpp/slghparse.y"
    { (yyval.varsym) = (yyvsp[(3) - (3)].varsym); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 193 "src/decompile/cpp/slghparse.y"
    { (yyval.varsym) = (yyvsp[(1) - (2)].varsym); if (!slgh->addContextField( (yyvsp[(1) - (2)].varsym), (yyvsp[(2) - (2)].fieldqual) ))
                                            { yyerror("All context definitions must come before constructors"); YYERROR; } }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 196 "src/decompile/cpp/slghparse.y"
    { (yyval.fieldqual) = new FieldQuality((yyvsp[(1) - (7)].str),(yyvsp[(4) - (7)].i),(yyvsp[(6) - (7)].i)); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 197 "src/decompile/cpp/slghparse.y"
    { delete (yyvsp[(4) - (7)].i); delete (yyvsp[(6) - (7)].i); string errmsg = (yyvsp[(1) - (7)].anysym)->getName()+": redefined as field"; yyerror(errmsg.c_str()); YYERROR; }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 198 "src/decompile/cpp/slghparse.y"
    { (yyval.fieldqual) = (yyvsp[(1) - (2)].fieldqual); (yyval.fieldqual)->signext = true; }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 199 "src/decompile/cpp/slghparse.y"
    { (yyval.fieldqual) = (yyvsp[(1) - (2)].fieldqual); (yyval.fieldqual)->hex = true; }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 200 "src/decompile/cpp/slghparse.y"
    { (yyval.fieldqual) = (yyvsp[(1) - (2)].fieldqual); (yyval.fieldqual)->hex = false; }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 202 "src/decompile/cpp/slghparse.y"
    { (yyval.fieldqual) = new FieldQuality((yyvsp[(1) - (7)].str),(yyvsp[(4) - (7)].i),(yyvsp[(6) - (7)].i)); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 203 "src/decompile/cpp/slghparse.y"
    { delete (yyvsp[(4) - (7)].i); delete (yyvsp[(6) - (7)].i); string errmsg = (yyvsp[(1) - (7)].anysym)->getName()+": redefined as field"; yyerror(errmsg.c_str()); YYERROR; }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 204 "src/decompile/cpp/slghparse.y"
    { (yyval.fieldqual) = (yyvsp[(1) - (2)].fieldqual); (yyval.fieldqual)->signext = true; }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 205 "src/decompile/cpp/slghparse.y"
    { (yyval.fieldqual) = (yyvsp[(1) - (2)].fieldqual); (yyval.fieldqual)->flow = false; }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 206 "src/decompile/cpp/slghparse.y"
    { (yyval.fieldqual) = (yyvsp[(1) - (2)].fieldqual); (yyval.fieldqual)->hex = true; }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 207 "src/decompile/cpp/slghparse.y"
    { (yyval.fieldqual) = (yyvsp[(1) - (2)].fieldqual); (yyval.fieldqual)->hex = false; }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 209 "src/decompile/cpp/slghparse.y"
    { slgh->newSpace((yyvsp[(1) - (2)].spacequal)); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 211 "src/decompile/cpp/slghparse.y"
    { (yyval.spacequal) = new SpaceQuality(*(yyvsp[(3) - (3)].str)); delete (yyvsp[(3) - (3)].str); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 212 "src/decompile/cpp/slghparse.y"
    { string errmsg = (yyvsp[(3) - (3)].anysym)->getName()+": redefined as space"; yyerror(errmsg.c_str()); YYERROR; }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 213 "src/decompile/cpp/slghparse.y"
    { (yyval.spacequal) = (yyvsp[(1) - (4)].spacequal); (yyval.spacequal)->type = SpaceQuality::ramtype; }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 214 "src/decompile/cpp/slghparse.y"
    { (yyval.spacequal) = (yyvsp[(1) - (4)].spacequal); (yyval.spacequal)->type = SpaceQuality::registertype; }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 215 "src/decompile/cpp/slghparse.y"
    { (yyval.spacequal) = (yyvsp[(1) - (4)].spacequal); (yyval.spacequal)->size = *(yyvsp[(4) - (4)].i); delete (yyvsp[(4) - (4)].i); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 216 "src/decompile/cpp/slghparse.y"
    { (yyval.spacequal) = (yyvsp[(1) - (4)].spacequal); (yyval.spacequal)->wordsize = *(yyvsp[(4) - (4)].i); delete (yyvsp[(4) - (4)].i); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 217 "src/decompile/cpp/slghparse.y"
    { (yyval.spacequal) = (yyvsp[(1) - (2)].spacequal); (yyval.spacequal)->isdefault = true; }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 219 "src/decompile/cpp/slghparse.y"
    {
               slgh->defineVarnodes((yyvsp[(2) - (10)].spacesym),(yyvsp[(5) - (10)].i),(yyvsp[(8) - (10)].i),(yyvsp[(9) - (10)].strlist)); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 221 "src/decompile/cpp/slghparse.y"
    { yyerror("Parsed integer is too big (overflow)"); YYERROR; }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 228 "src/decompile/cpp/slghparse.y"
    {
               slgh->defineBitrange((yyvsp[(1) - (8)].str),(yyvsp[(3) - (8)].varsym),(uint4)*(yyvsp[(5) - (8)].i),(uint4)*(yyvsp[(7) - (8)].i)); delete (yyvsp[(5) - (8)].i); delete (yyvsp[(7) - (8)].i); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 231 "src/decompile/cpp/slghparse.y"
    { slgh->addUserOp((yyvsp[(3) - (4)].strlist)); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 233 "src/decompile/cpp/slghparse.y"
    { slgh->attachValues((yyvsp[(3) - (5)].symlist),(yyvsp[(4) - (5)].biglist)); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 235 "src/decompile/cpp/slghparse.y"
    { slgh->attachNames((yyvsp[(3) - (5)].symlist),(yyvsp[(4) - (5)].strlist)); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 237 "src/decompile/cpp/slghparse.y"
    { slgh->attachVarnodes((yyvsp[(3) - (5)].symlist),(yyvsp[(4) - (5)].symlist)); }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 239 "src/decompile/cpp/slghparse.y"
    { slgh->buildMacro((yyvsp[(1) - (4)].macrosym),(yyvsp[(3) - (4)].sem)); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 242 "src/decompile/cpp/slghparse.y"
    {  slgh->pushWith((yyvsp[(2) - (6)].subtablesym),(yyvsp[(4) - (6)].pateq),(yyvsp[(5) - (6)].contop)); }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 248 "src/decompile/cpp/slghparse.y"
    { slgh->popWith(); }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 250 "src/decompile/cpp/slghparse.y"
    { (yyval.subtablesym) = (SubtableSymbol *)0; }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 251 "src/decompile/cpp/slghparse.y"
    { (yyval.subtablesym) = (yyvsp[(1) - (1)].subtablesym); }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 252 "src/decompile/cpp/slghparse.y"
    { (yyval.subtablesym) = slgh->newTable((yyvsp[(1) - (1)].str)); }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 255 "src/decompile/cpp/slghparse.y"
    { (yyval.pateq) = (PatternEquation *)0; }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 256 "src/decompile/cpp/slghparse.y"
    { (yyval.pateq) = (yyvsp[(1) - (1)].pateq); }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 259 "src/decompile/cpp/slghparse.y"
    { (yyval.macrosym) = slgh->createMacro((yyvsp[(2) - (5)].str),(yyvsp[(4) - (5)].strlist)); }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 261 "src/decompile/cpp/slghparse.y"
    { (yyval.sectionstart) = slgh->standaloneSection((yyvsp[(2) - (3)].sem)); }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 262 "src/decompile/cpp/slghparse.y"
    { (yyval.sectionstart) = slgh->finalNamedSection((yyvsp[(2) - (4)].sectionstart),(yyvsp[(3) - (4)].sem)); }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 263 "src/decompile/cpp/slghparse.y"
    { (yyval.sectionstart) = (SectionVector *)0; }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 265 "src/decompile/cpp/slghparse.y"
    { slgh->buildConstructor((yyvsp[(1) - (5)].construct),(yyvsp[(3) - (5)].pateq),(yyvsp[(4) - (5)].contop),(yyvsp[(5) - (5)].sectionstart)); }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 266 "src/decompile/cpp/slghparse.y"
    { slgh->buildConstructor((yyvsp[(1) - (5)].construct),(yyvsp[(3) - (5)].pateq),(yyvsp[(4) - (5)].contop),(yyvsp[(5) - (5)].sectionstart)); }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 268 "src/decompile/cpp/slghparse.y"
    { (yyval.construct) = (yyvsp[(1) - (2)].construct); (yyval.construct)->addSyntax(*(yyvsp[(2) - (2)].str)); delete (yyvsp[(2) - (2)].str); }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 269 "src/decompile/cpp/slghparse.y"
    { (yyval.construct) = (yyvsp[(1) - (2)].construct); (yyval.construct)->addSyntax(*(yyvsp[(2) - (2)].str)); delete (yyvsp[(2) - (2)].str); }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 270 "src/decompile/cpp/slghparse.y"
    { (yyval.construct) = (yyvsp[(1) - (2)].construct); if (slgh->isInRoot((yyvsp[(1) - (2)].construct))) { (yyval.construct)->addSyntax(*(yyvsp[(2) - (2)].str)); delete (yyvsp[(2) - (2)].str); } else slgh->newOperand((yyvsp[(1) - (2)].construct),(yyvsp[(2) - (2)].str)); }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 271 "src/decompile/cpp/slghparse.y"
    { (yyval.construct) = (yyvsp[(1) - (2)].construct); if (!slgh->isInRoot((yyvsp[(1) - (2)].construct))) { yyerror("Unexpected '^' at start of print pieces");  YYERROR; } }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 272 "src/decompile/cpp/slghparse.y"
    { (yyval.construct) = (yyvsp[(1) - (2)].construct); }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 273 "src/decompile/cpp/slghparse.y"
    { (yyval.construct) = (yyvsp[(1) - (2)].construct); (yyval.construct)->addSyntax(*(yyvsp[(2) - (2)].str)); delete (yyvsp[(2) - (2)].str); }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 274 "src/decompile/cpp/slghparse.y"
    { (yyval.construct) = (yyvsp[(1) - (2)].construct); (yyval.construct)->addSyntax(*(yyvsp[(2) - (2)].str)); delete (yyvsp[(2) - (2)].str); }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 275 "src/decompile/cpp/slghparse.y"
    { (yyval.construct) = (yyvsp[(1) - (2)].construct); (yyval.construct)->addSyntax(string(" ")); }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 276 "src/decompile/cpp/slghparse.y"
    { (yyval.construct) = (yyvsp[(1) - (2)].construct); slgh->newOperand((yyvsp[(1) - (2)].construct),(yyvsp[(2) - (2)].str)); }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 278 "src/decompile/cpp/slghparse.y"
    { (yyval.construct) = slgh->createConstructor((yyvsp[(1) - (2)].subtablesym)); }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 279 "src/decompile/cpp/slghparse.y"
    { SubtableSymbol *sym=slgh->newTable((yyvsp[(1) - (2)].str)); (yyval.construct) = slgh->createConstructor(sym); }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 280 "src/decompile/cpp/slghparse.y"
    { (yyval.construct) = slgh->createConstructor((SubtableSymbol *)0); }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 281 "src/decompile/cpp/slghparse.y"
    { (yyval.construct) = (yyvsp[(1) - (2)].construct); }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 283 "src/decompile/cpp/slghparse.y"
    { (yyval.patexp) = new ConstantValue(*(yyvsp[(1) - (1)].big)); delete (yyvsp[(1) - (1)].big); }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 285 "src/decompile/cpp/slghparse.y"
    { if ((actionon==1)&&((yyvsp[(1) - (1)].famsym)->getType() != SleighSymbol::context_symbol))
                                             { string errmsg="Global symbol "+(yyvsp[(1) - (1)].famsym)->getName(); errmsg += " is not allowed in action expression"; yyerror(errmsg.c_str()); } (yyval.patexp) = (yyvsp[(1) - (1)].famsym)->getPatternValue(); }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 288 "src/decompile/cpp/slghparse.y"
    { (yyval.patexp) = (yyvsp[(1) - (1)].specsym)->getPatternExpression(); }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 289 "src/decompile/cpp/slghparse.y"
    { (yyval.patexp) = (yyvsp[(2) - (3)].patexp); }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 290 "src/decompile/cpp/slghparse.y"
    { (yyval.patexp) = new PlusExpression((yyvsp[(1) - (3)].patexp),(yyvsp[(3) - (3)].patexp)); }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 291 "src/decompile/cpp/slghparse.y"
    { (yyval.patexp) = new SubExpression((yyvsp[(1) - (3)].patexp),(yyvsp[(3) - (3)].patexp)); }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 292 "src/decompile/cpp/slghparse.y"
    { (yyval.patexp) = new MultExpression((yyvsp[(1) - (3)].patexp),(yyvsp[(3) - (3)].patexp)); }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 293 "src/decompile/cpp/slghparse.y"
    { (yyval.patexp) = new LeftShiftExpression((yyvsp[(1) - (3)].patexp),(yyvsp[(3) - (3)].patexp)); }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 294 "src/decompile/cpp/slghparse.y"
    { (yyval.patexp) = new RightShiftExpression((yyvsp[(1) - (3)].patexp),(yyvsp[(3) - (3)].patexp)); }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 295 "src/decompile/cpp/slghparse.y"
    { (yyval.patexp) = new AndExpression((yyvsp[(1) - (3)].patexp),(yyvsp[(3) - (3)].patexp)); }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 296 "src/decompile/cpp/slghparse.y"
    { (yyval.patexp) = new OrExpression((yyvsp[(1) - (3)].patexp),(yyvsp[(3) - (3)].patexp)); }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 297 "src/decompile/cpp/slghparse.y"
    { (yyval.patexp) = new XorExpression((yyvsp[(1) - (3)].patexp),(yyvsp[(3) - (3)].patexp)); }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 298 "src/decompile/cpp/slghparse.y"
    { (yyval.patexp) = new DivExpression((yyvsp[(1) - (3)].patexp),(yyvsp[(3) - (3)].patexp)); }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 299 "src/decompile/cpp/slghparse.y"
    { (yyval.patexp) = new MinusExpression((yyvsp[(2) - (2)].patexp)); }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 300 "src/decompile/cpp/slghparse.y"
    { (yyval.patexp) = new NotExpression((yyvsp[(2) - (2)].patexp)); }
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 303 "src/decompile/cpp/slghparse.y"
    { (yyval.pateq) = new EquationAnd((yyvsp[(1) - (3)].pateq),(yyvsp[(3) - (3)].pateq)); }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 304 "src/decompile/cpp/slghparse.y"
    { (yyval.pateq) = new EquationOr((yyvsp[(1) - (3)].pateq),(yyvsp[(3) - (3)].pateq)); }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 305 "src/decompile/cpp/slghparse.y"
    { (yyval.pateq) = new EquationCat((yyvsp[(1) - (3)].pateq),(yyvsp[(3) - (3)].pateq)); }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 307 "src/decompile/cpp/slghparse.y"
    { (yyval.pateq) = new EquationLeftEllipsis((yyvsp[(2) - (2)].pateq)); }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 310 "src/decompile/cpp/slghparse.y"
    { (yyval.pateq) = new EquationRightEllipsis((yyvsp[(1) - (2)].pateq)); }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 314 "src/decompile/cpp/slghparse.y"
    { (yyval.pateq) = (yyvsp[(2) - (3)].pateq); }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 316 "src/decompile/cpp/slghparse.y"
    { (yyval.pateq) = new EqualEquation((yyvsp[(1) - (3)].famsym)->getPatternValue(),(yyvsp[(3) - (3)].patexp)); }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 317 "src/decompile/cpp/slghparse.y"
    { (yyval.pateq) = new NotEqualEquation((yyvsp[(1) - (3)].famsym)->getPatternValue(),(yyvsp[(3) - (3)].patexp)); }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 318 "src/decompile/cpp/slghparse.y"
    { (yyval.pateq) = new LessEquation((yyvsp[(1) - (3)].famsym)->getPatternValue(),(yyvsp[(3) - (3)].patexp)); }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 319 "src/decompile/cpp/slghparse.y"
    { (yyval.pateq) = new LessEqualEquation((yyvsp[(1) - (3)].famsym)->getPatternValue(),(yyvsp[(3) - (3)].patexp)); }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 320 "src/decompile/cpp/slghparse.y"
    { (yyval.pateq) = new GreaterEquation((yyvsp[(1) - (3)].famsym)->getPatternValue(),(yyvsp[(3) - (3)].patexp)); }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 321 "src/decompile/cpp/slghparse.y"
    { (yyval.pateq) = new GreaterEqualEquation((yyvsp[(1) - (3)].famsym)->getPatternValue(),(yyvsp[(3) - (3)].patexp)); }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 322 "src/decompile/cpp/slghparse.y"
    { (yyval.pateq) = slgh->constrainOperand((yyvsp[(1) - (3)].operandsym),(yyvsp[(3) - (3)].patexp)); 
                                          if ((yyval.pateq) == (PatternEquation *)0) 
                                            { string errmsg="Constraining currently undefined operand "+(yyvsp[(1) - (3)].operandsym)->getName(); yyerror(errmsg.c_str()); } }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 325 "src/decompile/cpp/slghparse.y"
    { (yyval.pateq) = new OperandEquation((yyvsp[(1) - (1)].operandsym)->getIndex()); slgh->selfDefine((yyvsp[(1) - (1)].operandsym)); }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 326 "src/decompile/cpp/slghparse.y"
    { (yyval.pateq) = new UnconstrainedEquation((yyvsp[(1) - (1)].specsym)->getPatternExpression()); }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 327 "src/decompile/cpp/slghparse.y"
    { (yyval.pateq) = slgh->defineInvisibleOperand((yyvsp[(1) - (1)].famsym)); }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 328 "src/decompile/cpp/slghparse.y"
    { (yyval.pateq) = slgh->defineInvisibleOperand((yyvsp[(1) - (1)].subtablesym)); }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 330 "src/decompile/cpp/slghparse.y"
    { (yyval.contop) = (vector<ContextChange *> *)0; }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 331 "src/decompile/cpp/slghparse.y"
    { (yyval.contop) = (yyvsp[(2) - (3)].contop); }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 333 "src/decompile/cpp/slghparse.y"
    { (yyval.contop) = new vector<ContextChange *>; }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 334 "src/decompile/cpp/slghparse.y"
    { (yyval.contop) = (yyvsp[(1) - (5)].contop); if (!slgh->contextMod((yyvsp[(1) - (5)].contop),(yyvsp[(2) - (5)].contextsym),(yyvsp[(4) - (5)].patexp))) { string errmsg="Cannot use 'inst_next' to set context variable: "+(yyvsp[(2) - (5)].contextsym)->getName(); yyerror(errmsg.c_str()); YYERROR; } }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 335 "src/decompile/cpp/slghparse.y"
    { (yyval.contop) = (yyvsp[(1) - (8)].contop); slgh->contextSet((yyvsp[(1) - (8)].contop),(yyvsp[(4) - (8)].famsym),(yyvsp[(6) - (8)].contextsym)); }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 336 "src/decompile/cpp/slghparse.y"
    { (yyval.contop) = (yyvsp[(1) - (8)].contop); slgh->contextSet((yyvsp[(1) - (8)].contop),(yyvsp[(4) - (8)].specsym),(yyvsp[(6) - (8)].contextsym)); }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 337 "src/decompile/cpp/slghparse.y"
    { (yyval.contop) = (yyvsp[(1) - (5)].contop); slgh->defineOperand((yyvsp[(2) - (5)].operandsym),(yyvsp[(4) - (5)].patexp)); }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 338 "src/decompile/cpp/slghparse.y"
    { string errmsg="Expecting context symbol, not "+*(yyvsp[(2) - (2)].str); delete (yyvsp[(2) - (2)].str); yyerror(errmsg.c_str()); YYERROR; }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 340 "src/decompile/cpp/slghparse.y"
    { (yyval.sectionsym) = slgh->newSectionSymbol( *(yyvsp[(2) - (3)].str) ); delete (yyvsp[(2) - (3)].str); }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 341 "src/decompile/cpp/slghparse.y"
    { (yyval.sectionsym) = (yyvsp[(2) - (3)].sectionsym); }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 343 "src/decompile/cpp/slghparse.y"
    { (yyval.sectionstart) = slgh->firstNamedSection((yyvsp[(1) - (2)].sem),(yyvsp[(2) - (2)].sectionsym)); }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 345 "src/decompile/cpp/slghparse.y"
    { (yyval.sectionstart) = (yyvsp[(1) - (1)].sectionstart); }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 346 "src/decompile/cpp/slghparse.y"
    { (yyval.sectionstart) = slgh->nextNamedSection((yyvsp[(1) - (3)].sectionstart),(yyvsp[(2) - (3)].sem),(yyvsp[(3) - (3)].sectionsym)); }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 348 "src/decompile/cpp/slghparse.y"
    { (yyval.sem) = (yyvsp[(1) - (1)].sem); if ((yyval.sem)->getOpvec().empty() && ((yyval.sem)->getResult() == (HandleTpl *)0)) slgh->recordNop(); }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 349 "src/decompile/cpp/slghparse.y"
    { (yyval.sem) = slgh->setResultVarnode((yyvsp[(1) - (4)].sem),(yyvsp[(3) - (4)].varnode)); }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 350 "src/decompile/cpp/slghparse.y"
    { (yyval.sem) = slgh->setResultStarVarnode((yyvsp[(1) - (5)].sem),(yyvsp[(3) - (5)].starqual),(yyvsp[(4) - (5)].varnode)); }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 351 "src/decompile/cpp/slghparse.y"
    { string errmsg="Unknown export varnode: "+*(yyvsp[(3) - (3)].str); delete (yyvsp[(3) - (3)].str); yyerror(errmsg.c_str()); YYERROR; }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 352 "src/decompile/cpp/slghparse.y"
    { string errmsg="Unknown pointer varnode: "+*(yyvsp[(4) - (4)].str); delete (yyvsp[(3) - (4)].starqual); delete (yyvsp[(4) - (4)].str); yyerror(errmsg.c_str()); YYERROR; }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 354 "src/decompile/cpp/slghparse.y"
    { (yyval.sem) = new ConstructTpl(); }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 355 "src/decompile/cpp/slghparse.y"
    { (yyval.sem) = (yyvsp[(1) - (2)].sem); if (!(yyval.sem)->addOpList(*(yyvsp[(2) - (2)].stmt))) { delete (yyvsp[(2) - (2)].stmt); yyerror("Multiple delayslot declarations"); YYERROR; } delete (yyvsp[(2) - (2)].stmt); }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 356 "src/decompile/cpp/slghparse.y"
    { (yyval.sem) = (yyvsp[(1) - (4)].sem); slgh->pcode.newLocalDefinition((yyvsp[(3) - (4)].str)); }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 357 "src/decompile/cpp/slghparse.y"
    { (yyval.sem) = (yyvsp[(1) - (6)].sem); slgh->pcode.newLocalDefinition((yyvsp[(3) - (6)].str),*(yyvsp[(5) - (6)].i)); delete (yyvsp[(5) - (6)].i); }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 359 "src/decompile/cpp/slghparse.y"
    { (yyvsp[(3) - (4)].tree)->setOutput((yyvsp[(1) - (4)].varnode)); (yyval.stmt) = ExprTree::toVector((yyvsp[(3) - (4)].tree)); }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 360 "src/decompile/cpp/slghparse.y"
    { (yyval.stmt) = slgh->pcode.newOutput(true,(yyvsp[(4) - (5)].tree),(yyvsp[(2) - (5)].str)); }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 361 "src/decompile/cpp/slghparse.y"
    { (yyval.stmt) = slgh->pcode.newOutput(false,(yyvsp[(3) - (4)].tree),(yyvsp[(1) - (4)].str)); }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 362 "src/decompile/cpp/slghparse.y"
    { (yyval.stmt) = slgh->pcode.newOutput(true,(yyvsp[(6) - (7)].tree),(yyvsp[(2) - (7)].str),*(yyvsp[(4) - (7)].i)); delete (yyvsp[(4) - (7)].i); }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 363 "src/decompile/cpp/slghparse.y"
    { (yyval.stmt) = slgh->pcode.newOutput(true,(yyvsp[(5) - (6)].tree),(yyvsp[(1) - (6)].str),*(yyvsp[(3) - (6)].i)); delete (yyvsp[(3) - (6)].i); }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 364 "src/decompile/cpp/slghparse.y"
    { (yyval.stmt) = (vector<OpTpl *> *)0; string errmsg = "Redefinition of symbol: "+(yyvsp[(2) - (3)].specsym)->getName(); yyerror(errmsg.c_str()); YYERROR; }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 365 "src/decompile/cpp/slghparse.y"
    { (yyval.stmt) = slgh->pcode.createStore((yyvsp[(1) - (5)].starqual),(yyvsp[(2) - (5)].tree),(yyvsp[(4) - (5)].tree)); }
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 366 "src/decompile/cpp/slghparse.y"
    { (yyval.stmt) = slgh->pcode.createUserOpNoOut((yyvsp[(1) - (5)].useropsym),(yyvsp[(3) - (5)].param)); }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 367 "src/decompile/cpp/slghparse.y"
    { (yyval.stmt) = slgh->pcode.assignBitRange((yyvsp[(1) - (9)].varnode),(uint4)*(yyvsp[(3) - (9)].i),(uint4)*(yyvsp[(5) - (9)].i),(yyvsp[(8) - (9)].tree)); delete (yyvsp[(3) - (9)].i), delete (yyvsp[(5) - (9)].i); }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 368 "src/decompile/cpp/slghparse.y"
    { (yyval.stmt)=slgh->pcode.assignBitRange((yyvsp[(1) - (4)].bitsym)->getParentSymbol()->getVarnode(),(yyvsp[(1) - (4)].bitsym)->getBitOffset(),(yyvsp[(1) - (4)].bitsym)->numBits(),(yyvsp[(3) - (4)].tree)); }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 369 "src/decompile/cpp/slghparse.y"
    { delete (yyvsp[(1) - (4)].varnode); delete (yyvsp[(3) - (4)].i); yyerror("Illegal truncation on left-hand side of assignment"); YYERROR; }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 370 "src/decompile/cpp/slghparse.y"
    { delete (yyvsp[(1) - (4)].varnode); delete (yyvsp[(3) - (4)].i); yyerror("Illegal subpiece on left-hand side of assignment"); YYERROR; }
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 371 "src/decompile/cpp/slghparse.y"
    { (yyval.stmt) = slgh->pcode.createOpConst(BUILD,(yyvsp[(2) - (3)].operandsym)->getIndex()); }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 372 "src/decompile/cpp/slghparse.y"
    { (yyval.stmt) = slgh->createCrossBuild((yyvsp[(2) - (5)].varnode),(yyvsp[(4) - (5)].sectionsym)); }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 373 "src/decompile/cpp/slghparse.y"
    { (yyval.stmt) = slgh->createCrossBuild((yyvsp[(2) - (5)].varnode),slgh->newSectionSymbol(*(yyvsp[(4) - (5)].str))); delete (yyvsp[(4) - (5)].str); }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 374 "src/decompile/cpp/slghparse.y"
    { (yyval.stmt) = slgh->pcode.createOpConst(DELAY_SLOT,*(yyvsp[(3) - (5)].i)); delete (yyvsp[(3) - (5)].i); }
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 375 "src/decompile/cpp/slghparse.y"
    { (yyval.stmt) = slgh->pcode.createOpNoOut(CPUI_BRANCH,new ExprTree((yyvsp[(2) - (3)].varnode))); }
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 376 "src/decompile/cpp/slghparse.y"
    { (yyval.stmt) = slgh->pcode.createOpNoOut(CPUI_CBRANCH,new ExprTree((yyvsp[(4) - (5)].varnode)),(yyvsp[(2) - (5)].tree)); }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 377 "src/decompile/cpp/slghparse.y"
    { (yyval.stmt) = slgh->pcode.createOpNoOut(CPUI_BRANCHIND,(yyvsp[(3) - (5)].tree)); }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 378 "src/decompile/cpp/slghparse.y"
    { (yyval.stmt) = slgh->pcode.createOpNoOut(CPUI_CALL,new ExprTree((yyvsp[(2) - (3)].varnode))); }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 379 "src/decompile/cpp/slghparse.y"
    { (yyval.stmt) = slgh->pcode.createOpNoOut(CPUI_CALLIND,(yyvsp[(3) - (5)].tree)); }
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 380 "src/decompile/cpp/slghparse.y"
    { yyerror("Must specify an indirect parameter for return"); YYERROR; }
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 381 "src/decompile/cpp/slghparse.y"
    { (yyval.stmt) = slgh->pcode.createOpNoOut(CPUI_RETURN,(yyvsp[(3) - (5)].tree)); }
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 382 "src/decompile/cpp/slghparse.y"
    { (yyval.stmt) = slgh->createMacroUse((yyvsp[(1) - (5)].macrosym),(yyvsp[(3) - (5)].param)); }
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 383 "src/decompile/cpp/slghparse.y"
    { (yyval.stmt) = slgh->pcode.placeLabel( (yyvsp[(1) - (1)].labelsym) ); }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 385 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = new ExprTree((yyvsp[(1) - (1)].varnode)); }
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 386 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createLoad((yyvsp[(1) - (2)].starqual),(yyvsp[(2) - (2)].tree)); }
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 387 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 388 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_ADD,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 389 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SUB,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 390 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_EQUAL,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 391 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_NOTEQUAL,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 392 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_LESS,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 393 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_LESSEQUAL,(yyvsp[(3) - (3)].tree),(yyvsp[(1) - (3)].tree)); }
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 394 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_LESSEQUAL,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 395 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_LESS,(yyvsp[(3) - (3)].tree),(yyvsp[(1) - (3)].tree)); }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 396 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SLESS,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 397 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SLESSEQUAL,(yyvsp[(3) - (3)].tree),(yyvsp[(1) - (3)].tree)); }
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 398 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SLESSEQUAL,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 399 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SLESS,(yyvsp[(3) - (3)].tree),(yyvsp[(1) - (3)].tree)); }
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 400 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_2COMP,(yyvsp[(2) - (2)].tree)); }
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 401 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_NEGATE,(yyvsp[(2) - (2)].tree)); }
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 402 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_XOR,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 403 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_AND,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 404 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_OR,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 405 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_LEFT,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 406 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_RIGHT,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 407 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SRIGHT,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 408 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_MULT,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 409 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_DIV,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 410 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SDIV,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 411 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_REM,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 412 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SREM,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 413 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_BOOL_NEGATE,(yyvsp[(2) - (2)].tree)); }
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 414 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_BOOL_XOR,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 415 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_BOOL_AND,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 416 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_BOOL_OR,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 417 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_EQUAL,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 418 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_NOTEQUAL,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 419 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_LESS,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 209:
/* Line 1792 of yacc.c  */
#line 420 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_LESS,(yyvsp[(3) - (3)].tree),(yyvsp[(1) - (3)].tree)); }
    break;

  case 210:
/* Line 1792 of yacc.c  */
#line 421 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_LESSEQUAL,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 422 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_LESSEQUAL,(yyvsp[(3) - (3)].tree),(yyvsp[(1) - (3)].tree)); }
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 423 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_ADD,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 424 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_SUB,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 425 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_MULT,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 215:
/* Line 1792 of yacc.c  */
#line 426 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_DIV,(yyvsp[(1) - (3)].tree),(yyvsp[(3) - (3)].tree)); }
    break;

  case 216:
/* Line 1792 of yacc.c  */
#line 427 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_NEG,(yyvsp[(2) - (2)].tree)); }
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 428 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_ABS,(yyvsp[(3) - (4)].tree)); }
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 429 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_SQRT,(yyvsp[(3) - (4)].tree)); }
    break;

  case 219:
/* Line 1792 of yacc.c  */
#line 430 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SEXT,(yyvsp[(3) - (4)].tree)); }
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 431 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_ZEXT,(yyvsp[(3) - (4)].tree)); }
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 432 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_CARRY,(yyvsp[(3) - (6)].tree),(yyvsp[(5) - (6)].tree)); }
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 433 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SCARRY,(yyvsp[(3) - (6)].tree),(yyvsp[(5) - (6)].tree)); }
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 434 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SBORROW,(yyvsp[(3) - (6)].tree),(yyvsp[(5) - (6)].tree)); }
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 435 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_FLOAT2FLOAT,(yyvsp[(3) - (4)].tree)); }
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 436 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_INT2FLOAT,(yyvsp[(3) - (4)].tree)); }
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 437 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_NAN,(yyvsp[(3) - (4)].tree)); }
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 438 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_TRUNC,(yyvsp[(3) - (4)].tree)); }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 439 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_CEIL,(yyvsp[(3) - (4)].tree)); }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 440 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_FLOOR,(yyvsp[(3) - (4)].tree)); }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 441 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_ROUND,(yyvsp[(3) - (4)].tree)); }
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 442 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_NEW,(yyvsp[(3) - (4)].tree)); }
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 443 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_NEW,(yyvsp[(3) - (6)].tree),(yyvsp[(5) - (6)].tree)); }
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 444 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_POPCOUNT,(yyvsp[(3) - (4)].tree)); }
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 445 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_COUNTLEADINGZEROS,(yyvsp[(3) - (4)].tree)); }
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 446 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_COUNTLEADINGONES,(yyvsp[(3) - (4)].tree)); }
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 447 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createOp(CPUI_SUBPIECE,new ExprTree((yyvsp[(1) - (4)].specsym)->getVarnode()),new ExprTree((yyvsp[(3) - (4)].varnode))); }
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 448 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createBitRange((yyvsp[(1) - (3)].specsym),0,(uint4)(*(yyvsp[(3) - (3)].i) * 8)); delete (yyvsp[(3) - (3)].i); }
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 449 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createBitRange((yyvsp[(1) - (6)].specsym),(uint4)*(yyvsp[(3) - (6)].i),(uint4)*(yyvsp[(5) - (6)].i)); delete (yyvsp[(3) - (6)].i), delete (yyvsp[(5) - (6)].i); }
    break;

  case 239:
/* Line 1792 of yacc.c  */
#line 450 "src/decompile/cpp/slghparse.y"
    { (yyval.tree)=slgh->pcode.createBitRange((yyvsp[(1) - (1)].bitsym)->getParentSymbol(),(yyvsp[(1) - (1)].bitsym)->getBitOffset(),(yyvsp[(1) - (1)].bitsym)->numBits()); }
    break;

  case 240:
/* Line 1792 of yacc.c  */
#line 451 "src/decompile/cpp/slghparse.y"
    { (yyval.tree) = slgh->pcode.createUserOp((yyvsp[(1) - (4)].useropsym),(yyvsp[(3) - (4)].param)); }
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 452 "src/decompile/cpp/slghparse.y"
    { if ((*(yyvsp[(3) - (4)].param)).size() < 2) { string errmsg = "Must at least two inputs to cpool"; yyerror(errmsg.c_str()); YYERROR; } (yyval.tree) = slgh->pcode.createVariadic(CPUI_CPOOLREF,(yyvsp[(3) - (4)].param)); }
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 454 "src/decompile/cpp/slghparse.y"
    { (yyval.starqual) = new StarQuality; (yyval.starqual)->size = *(yyvsp[(6) - (6)].i); delete (yyvsp[(6) - (6)].i); (yyval.starqual)->id=ConstTpl((yyvsp[(3) - (6)].spacesym)->getSpace()); }
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 455 "src/decompile/cpp/slghparse.y"
    { (yyval.starqual) = new StarQuality; (yyval.starqual)->size = 0; (yyval.starqual)->id=ConstTpl((yyvsp[(3) - (4)].spacesym)->getSpace()); }
    break;

  case 244:
/* Line 1792 of yacc.c  */
#line 456 "src/decompile/cpp/slghparse.y"
    { (yyval.starqual) = new StarQuality; (yyval.starqual)->size = *(yyvsp[(3) - (3)].i); delete (yyvsp[(3) - (3)].i); (yyval.starqual)->id=ConstTpl(slgh->getDefaultCodeSpace()); }
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 457 "src/decompile/cpp/slghparse.y"
    { (yyval.starqual) = new StarQuality; (yyval.starqual)->size = 0; (yyval.starqual)->id=ConstTpl(slgh->getDefaultCodeSpace()); }
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 459 "src/decompile/cpp/slghparse.y"
    { VarnodeTpl *sym = (yyvsp[(1) - (1)].startsym)->getVarnode(); (yyval.varnode) = new VarnodeTpl(ConstTpl(ConstTpl::j_curspace),sym->getOffset(),ConstTpl(ConstTpl::j_curspace_size)); delete sym; }
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 460 "src/decompile/cpp/slghparse.y"
    { VarnodeTpl *sym = (yyvsp[(1) - (1)].endsym)->getVarnode(); (yyval.varnode) = new VarnodeTpl(ConstTpl(ConstTpl::j_curspace),sym->getOffset(),ConstTpl(ConstTpl::j_curspace_size)); delete sym; }
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 461 "src/decompile/cpp/slghparse.y"
    { (yyval.varnode) = new VarnodeTpl(ConstTpl(ConstTpl::j_curspace),ConstTpl(ConstTpl::real,*(yyvsp[(1) - (1)].i)),ConstTpl(ConstTpl::j_curspace_size)); delete (yyvsp[(1) - (1)].i); }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 462 "src/decompile/cpp/slghparse.y"
    { (yyval.varnode) = new VarnodeTpl(ConstTpl(ConstTpl::j_curspace),ConstTpl(ConstTpl::real,0),ConstTpl(ConstTpl::j_curspace_size)); yyerror("Parsed integer is too big (overflow)"); }
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 463 "src/decompile/cpp/slghparse.y"
    { (yyval.varnode) = (yyvsp[(1) - (1)].operandsym)->getVarnode(); (yyvsp[(1) - (1)].operandsym)->setCodeAddress(); }
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 464 "src/decompile/cpp/slghparse.y"
    { AddrSpace *spc = (yyvsp[(3) - (4)].spacesym)->getSpace(); (yyval.varnode) = new VarnodeTpl(ConstTpl(spc),ConstTpl(ConstTpl::real,*(yyvsp[(1) - (4)].i)),ConstTpl(ConstTpl::real,spc->getAddrSize())); delete (yyvsp[(1) - (4)].i); }
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 465 "src/decompile/cpp/slghparse.y"
    { (yyval.varnode) = new VarnodeTpl(ConstTpl(slgh->getConstantSpace()),ConstTpl(ConstTpl::j_relative,(yyvsp[(1) - (1)].labelsym)->getIndex()),ConstTpl(ConstTpl::real,sizeof(uintm))); (yyvsp[(1) - (1)].labelsym)->incrementRefCount(); }
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 466 "src/decompile/cpp/slghparse.y"
    { string errmsg = "Unknown jump destination: "+*(yyvsp[(1) - (1)].str); delete (yyvsp[(1) - (1)].str); yyerror(errmsg.c_str()); YYERROR; }
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 468 "src/decompile/cpp/slghparse.y"
    { (yyval.varnode) = (yyvsp[(1) - (1)].specsym)->getVarnode(); }
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 469 "src/decompile/cpp/slghparse.y"
    { (yyval.varnode) = (yyvsp[(1) - (1)].varnode); }
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 470 "src/decompile/cpp/slghparse.y"
    { string errmsg = "Unknown varnode parameter: "+*(yyvsp[(1) - (1)].str); delete (yyvsp[(1) - (1)].str); yyerror(errmsg.c_str()); YYERROR; }
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 471 "src/decompile/cpp/slghparse.y"
    { string errmsg = "Subtable not attached to operand: "+(yyvsp[(1) - (1)].subtablesym)->getName(); yyerror(errmsg.c_str()); YYERROR; }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 473 "src/decompile/cpp/slghparse.y"
    { (yyval.varnode) = new VarnodeTpl(ConstTpl(slgh->getConstantSpace()),ConstTpl(ConstTpl::real,*(yyvsp[(1) - (1)].i)),ConstTpl(ConstTpl::real,0)); delete (yyvsp[(1) - (1)].i); }
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 474 "src/decompile/cpp/slghparse.y"
    { (yyval.varnode) = new VarnodeTpl(ConstTpl(slgh->getConstantSpace()),ConstTpl(ConstTpl::real,0),ConstTpl(ConstTpl::real,0)); yyerror("Parsed integer is too big (overflow)"); }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 475 "src/decompile/cpp/slghparse.y"
    { (yyval.varnode) = new VarnodeTpl(ConstTpl(slgh->getConstantSpace()),ConstTpl(ConstTpl::real,*(yyvsp[(1) - (3)].i)),ConstTpl(ConstTpl::real,*(yyvsp[(3) - (3)].i))); delete (yyvsp[(1) - (3)].i); delete (yyvsp[(3) - (3)].i); }
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 476 "src/decompile/cpp/slghparse.y"
    { (yyval.varnode) = slgh->pcode.addressOf((yyvsp[(2) - (2)].varnode),0); }
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 477 "src/decompile/cpp/slghparse.y"
    { (yyval.varnode) = slgh->pcode.addressOf((yyvsp[(4) - (4)].varnode),*(yyvsp[(3) - (4)].i)); delete (yyvsp[(3) - (4)].i); }
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 479 "src/decompile/cpp/slghparse.y"
    { (yyval.varnode) = (yyvsp[(1) - (1)].specsym)->getVarnode(); }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 480 "src/decompile/cpp/slghparse.y"
    { string errmsg = "Unknown assignment varnode: "+*(yyvsp[(1) - (1)].str); delete (yyvsp[(1) - (1)].str); yyerror(errmsg.c_str()); YYERROR; }
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 481 "src/decompile/cpp/slghparse.y"
    { string errmsg = "Subtable not attached to operand: "+(yyvsp[(1) - (1)].subtablesym)->getName(); yyerror(errmsg.c_str()); YYERROR; }
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 483 "src/decompile/cpp/slghparse.y"
    { (yyval.labelsym) = (yyvsp[(2) - (3)].labelsym); }
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 484 "src/decompile/cpp/slghparse.y"
    { (yyval.labelsym) = slgh->pcode.defineLabel( (yyvsp[(2) - (3)].str) ); }
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 486 "src/decompile/cpp/slghparse.y"
    { (yyval.varnode) = (yyvsp[(1) - (1)].specsym)->getVarnode(); }
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 487 "src/decompile/cpp/slghparse.y"
    { (yyval.varnode) = slgh->pcode.addressOf((yyvsp[(2) - (2)].varnode),0); }
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 488 "src/decompile/cpp/slghparse.y"
    { (yyval.varnode) = slgh->pcode.addressOf((yyvsp[(4) - (4)].varnode),*(yyvsp[(3) - (4)].i)); delete (yyvsp[(3) - (4)].i); }
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 489 "src/decompile/cpp/slghparse.y"
    { (yyval.varnode) = new VarnodeTpl(ConstTpl(slgh->getConstantSpace()),ConstTpl(ConstTpl::real,*(yyvsp[(1) - (3)].i)),ConstTpl(ConstTpl::real,*(yyvsp[(3) - (3)].i))); delete (yyvsp[(1) - (3)].i); delete (yyvsp[(3) - (3)].i); }
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 490 "src/decompile/cpp/slghparse.y"
    { string errmsg="Unknown export varnode: "+*(yyvsp[(1) - (1)].str); delete (yyvsp[(1) - (1)].str); yyerror(errmsg.c_str()); YYERROR; }
    break;

  case 273:
/* Line 1792 of yacc.c  */
#line 491 "src/decompile/cpp/slghparse.y"
    { string errmsg = "Subtable not attached to operand: "+(yyvsp[(1) - (1)].subtablesym)->getName(); yyerror(errmsg.c_str()); YYERROR; }
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 493 "src/decompile/cpp/slghparse.y"
    { (yyval.famsym) = (yyvsp[(1) - (1)].valuesym); }
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 494 "src/decompile/cpp/slghparse.y"
    { (yyval.famsym) = (yyvsp[(1) - (1)].valuemapsym); }
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 495 "src/decompile/cpp/slghparse.y"
    { (yyval.famsym) = (yyvsp[(1) - (1)].contextsym); }
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 496 "src/decompile/cpp/slghparse.y"
    { (yyval.famsym) = (yyvsp[(1) - (1)].namesym); }
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 497 "src/decompile/cpp/slghparse.y"
    { (yyval.famsym) = (yyvsp[(1) - (1)].varlistsym); }
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 499 "src/decompile/cpp/slghparse.y"
    { (yyval.specsym) = (yyvsp[(1) - (1)].varsym); }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 500 "src/decompile/cpp/slghparse.y"
    { (yyval.specsym) = (yyvsp[(1) - (1)].specsym); }
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 501 "src/decompile/cpp/slghparse.y"
    { (yyval.specsym) = (yyvsp[(1) - (1)].operandsym); }
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 502 "src/decompile/cpp/slghparse.y"
    { (yyval.specsym) = (yyvsp[(1) - (1)].startsym); }
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 503 "src/decompile/cpp/slghparse.y"
    { (yyval.specsym) = (yyvsp[(1) - (1)].endsym); }
    break;

  case 284:
/* Line 1792 of yacc.c  */
#line 505 "src/decompile/cpp/slghparse.y"
    { (yyval.str) = new string; (*(yyval.str)) += (yyvsp[(1) - (1)].ch); }
    break;

  case 285:
/* Line 1792 of yacc.c  */
#line 506 "src/decompile/cpp/slghparse.y"
    { (yyval.str) = (yyvsp[(1) - (2)].str); (*(yyval.str)) += (yyvsp[(2) - (2)].ch); }
    break;

  case 286:
/* Line 1792 of yacc.c  */
#line 508 "src/decompile/cpp/slghparse.y"
    { (yyval.biglist) = (yyvsp[(2) - (3)].biglist); }
    break;

  case 287:
/* Line 1792 of yacc.c  */
#line 509 "src/decompile/cpp/slghparse.y"
    { (yyval.biglist) = new vector<intb>; (yyval.biglist)->push_back(intb(*(yyvsp[(1) - (1)].i))); delete (yyvsp[(1) - (1)].i); }
    break;

  case 288:
/* Line 1792 of yacc.c  */
#line 510 "src/decompile/cpp/slghparse.y"
    { (yyval.biglist) = new vector<intb>; (yyval.biglist)->push_back(-intb(*(yyvsp[(2) - (2)].i))); delete (yyvsp[(2) - (2)].i); }
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 512 "src/decompile/cpp/slghparse.y"
    { (yyval.biglist) = new vector<intb>; (yyval.biglist)->push_back(intb(*(yyvsp[(1) - (1)].i))); delete (yyvsp[(1) - (1)].i); }
    break;

  case 290:
/* Line 1792 of yacc.c  */
#line 513 "src/decompile/cpp/slghparse.y"
    { (yyval.biglist) = new vector<intb>; (yyval.biglist)->push_back(-intb(*(yyvsp[(2) - (2)].i))); delete (yyvsp[(2) - (2)].i); }
    break;

  case 291:
/* Line 1792 of yacc.c  */
#line 514 "src/decompile/cpp/slghparse.y"
    { if (*(yyvsp[(1) - (1)].str)!="_") { string errmsg = "Expecting integer but saw: "+*(yyvsp[(1) - (1)].str); delete (yyvsp[(1) - (1)].str); yyerror(errmsg.c_str()); YYERROR; }
                                  (yyval.biglist) = new vector<intb>; (yyval.biglist)->push_back((intb)0xBADBEEF); delete (yyvsp[(1) - (1)].str); }
    break;

  case 292:
/* Line 1792 of yacc.c  */
#line 516 "src/decompile/cpp/slghparse.y"
    { (yyval.biglist) = (yyvsp[(1) - (2)].biglist); (yyval.biglist)->push_back(intb(*(yyvsp[(2) - (2)].i))); delete (yyvsp[(2) - (2)].i); }
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 517 "src/decompile/cpp/slghparse.y"
    { (yyval.biglist) = (yyvsp[(1) - (3)].biglist); (yyval.biglist)->push_back(-intb(*(yyvsp[(3) - (3)].i))); delete (yyvsp[(3) - (3)].i); }
    break;

  case 294:
/* Line 1792 of yacc.c  */
#line 518 "src/decompile/cpp/slghparse.y"
    { if (*(yyvsp[(2) - (2)].str)!="_") { string errmsg = "Expecting integer but saw: "+*(yyvsp[(2) - (2)].str); delete (yyvsp[(2) - (2)].str); yyerror(errmsg.c_str()); YYERROR; }
                                  (yyval.biglist) = (yyvsp[(1) - (2)].biglist); (yyval.biglist)->push_back((intb)0xBADBEEF); delete (yyvsp[(2) - (2)].str); }
    break;

  case 295:
/* Line 1792 of yacc.c  */
#line 521 "src/decompile/cpp/slghparse.y"
    { (yyval.strlist) = (yyvsp[(2) - (3)].strlist); }
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 522 "src/decompile/cpp/slghparse.y"
    { (yyval.strlist) = new vector<string>; (yyval.strlist)->push_back(*(yyvsp[(1) - (1)].str)); delete (yyvsp[(1) - (1)].str); }
    break;

  case 297:
/* Line 1792 of yacc.c  */
#line 524 "src/decompile/cpp/slghparse.y"
    { (yyval.strlist) = new vector<string>; (yyval.strlist)->push_back( *(yyvsp[(1) - (1)].str) ); delete (yyvsp[(1) - (1)].str); }
    break;

  case 298:
/* Line 1792 of yacc.c  */
#line 525 "src/decompile/cpp/slghparse.y"
    { (yyval.strlist) = (yyvsp[(1) - (2)].strlist); (yyval.strlist)->push_back(*(yyvsp[(2) - (2)].str)); delete (yyvsp[(2) - (2)].str); }
    break;

  case 299:
/* Line 1792 of yacc.c  */
#line 526 "src/decompile/cpp/slghparse.y"
    { string errmsg = (yyvsp[(2) - (2)].anysym)->getName()+": redefined"; yyerror(errmsg.c_str()); YYERROR; }
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 528 "src/decompile/cpp/slghparse.y"
    { (yyval.strlist) = (yyvsp[(2) - (3)].strlist); }
    break;

  case 301:
/* Line 1792 of yacc.c  */
#line 530 "src/decompile/cpp/slghparse.y"
    { (yyval.strlist) = new vector<string>; (yyval.strlist)->push_back( *(yyvsp[(1) - (1)].str) ); delete (yyvsp[(1) - (1)].str); }
    break;

  case 302:
/* Line 1792 of yacc.c  */
#line 531 "src/decompile/cpp/slghparse.y"
    { (yyval.strlist) = new vector<string>; (yyval.strlist)->push_back( (yyvsp[(1) - (1)].anysym)->getName() ); }
    break;

  case 303:
/* Line 1792 of yacc.c  */
#line 532 "src/decompile/cpp/slghparse.y"
    { (yyval.strlist) = (yyvsp[(1) - (2)].strlist); (yyval.strlist)->push_back(*(yyvsp[(2) - (2)].str)); delete (yyvsp[(2) - (2)].str); }
    break;

  case 304:
/* Line 1792 of yacc.c  */
#line 533 "src/decompile/cpp/slghparse.y"
    { (yyval.strlist) = (yyvsp[(1) - (2)].strlist); (yyval.strlist)->push_back((yyvsp[(2) - (2)].anysym)->getName()); }
    break;

  case 305:
/* Line 1792 of yacc.c  */
#line 535 "src/decompile/cpp/slghparse.y"
    { (yyval.symlist) = (yyvsp[(2) - (3)].symlist); }
    break;

  case 306:
/* Line 1792 of yacc.c  */
#line 536 "src/decompile/cpp/slghparse.y"
    { (yyval.symlist) = new vector<SleighSymbol *>; (yyval.symlist)->push_back((yyvsp[(1) - (1)].valuesym)); }
    break;

  case 307:
/* Line 1792 of yacc.c  */
#line 537 "src/decompile/cpp/slghparse.y"
    { (yyval.symlist) = new vector<SleighSymbol *>; (yyval.symlist)->push_back((yyvsp[(1) - (1)].contextsym)); }
    break;

  case 308:
/* Line 1792 of yacc.c  */
#line 539 "src/decompile/cpp/slghparse.y"
    { (yyval.symlist) = new vector<SleighSymbol *>; (yyval.symlist)->push_back( (yyvsp[(1) - (1)].valuesym) ); }
    break;

  case 309:
/* Line 1792 of yacc.c  */
#line 540 "src/decompile/cpp/slghparse.y"
    { (yyval.symlist) = new vector<SleighSymbol *>; (yyval.symlist)->push_back((yyvsp[(1) - (1)].contextsym)); }
    break;

  case 310:
/* Line 1792 of yacc.c  */
#line 541 "src/decompile/cpp/slghparse.y"
    { (yyval.symlist) = (yyvsp[(1) - (2)].symlist); (yyval.symlist)->push_back((yyvsp[(2) - (2)].valuesym)); }
    break;

  case 311:
/* Line 1792 of yacc.c  */
#line 542 "src/decompile/cpp/slghparse.y"
    { (yyval.symlist) = (yyvsp[(1) - (2)].symlist); (yyval.symlist)->push_back((yyvsp[(2) - (2)].contextsym)); }
    break;

  case 312:
/* Line 1792 of yacc.c  */
#line 543 "src/decompile/cpp/slghparse.y"
    { string errmsg = *(yyvsp[(2) - (2)].str)+": is not a value pattern"; delete (yyvsp[(2) - (2)].str); yyerror(errmsg.c_str()); YYERROR; }
    break;

  case 313:
/* Line 1792 of yacc.c  */
#line 545 "src/decompile/cpp/slghparse.y"
    { (yyval.symlist) = (yyvsp[(2) - (3)].symlist); }
    break;

  case 314:
/* Line 1792 of yacc.c  */
#line 546 "src/decompile/cpp/slghparse.y"
    { (yyval.symlist) = new vector<SleighSymbol *>; (yyval.symlist)->push_back((yyvsp[(1) - (1)].varsym)); }
    break;

  case 315:
/* Line 1792 of yacc.c  */
#line 548 "src/decompile/cpp/slghparse.y"
    { (yyval.symlist) = new vector<SleighSymbol *>; (yyval.symlist)->push_back((yyvsp[(1) - (1)].varsym)); }
    break;

  case 316:
/* Line 1792 of yacc.c  */
#line 549 "src/decompile/cpp/slghparse.y"
    { if (*(yyvsp[(1) - (1)].str)!="_") { string errmsg = *(yyvsp[(1) - (1)].str)+": is not a varnode symbol"; delete (yyvsp[(1) - (1)].str); yyerror(errmsg.c_str()); YYERROR; }
				  (yyval.symlist) = new vector<SleighSymbol *>; (yyval.symlist)->push_back((SleighSymbol *)0); delete (yyvsp[(1) - (1)].str); }
    break;

  case 317:
/* Line 1792 of yacc.c  */
#line 551 "src/decompile/cpp/slghparse.y"
    { (yyval.symlist) = (yyvsp[(1) - (2)].symlist); (yyval.symlist)->push_back((yyvsp[(2) - (2)].varsym)); }
    break;

  case 318:
/* Line 1792 of yacc.c  */
#line 552 "src/decompile/cpp/slghparse.y"
    { if (*(yyvsp[(2) - (2)].str)!="_") { string errmsg = *(yyvsp[(2) - (2)].str)+": is not a varnode symbol"; delete (yyvsp[(2) - (2)].str); yyerror(errmsg.c_str()); YYERROR; }
                                  (yyval.symlist) = (yyvsp[(1) - (2)].symlist); (yyval.symlist)->push_back((SleighSymbol *)0); delete (yyvsp[(2) - (2)].str); }
    break;

  case 319:
/* Line 1792 of yacc.c  */
#line 555 "src/decompile/cpp/slghparse.y"
    { (yyval.param) = new vector<ExprTree *>; }
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 556 "src/decompile/cpp/slghparse.y"
    { (yyval.param) = new vector<ExprTree *>; (yyval.param)->push_back((yyvsp[(1) - (1)].tree)); }
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 557 "src/decompile/cpp/slghparse.y"
    { (yyval.param) = (yyvsp[(1) - (3)].param); (yyval.param)->push_back((yyvsp[(3) - (3)].tree)); }
    break;

  case 322:
/* Line 1792 of yacc.c  */
#line 559 "src/decompile/cpp/slghparse.y"
    { (yyval.strlist) = new vector<string>; }
    break;

  case 323:
/* Line 1792 of yacc.c  */
#line 560 "src/decompile/cpp/slghparse.y"
    { (yyval.strlist) = new vector<string>; (yyval.strlist)->push_back(*(yyvsp[(1) - (1)].str)); delete (yyvsp[(1) - (1)].str); }
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 561 "src/decompile/cpp/slghparse.y"
    { (yyval.strlist) = (yyvsp[(1) - (3)].strlist); (yyval.strlist)->push_back(*(yyvsp[(3) - (3)].str)); delete (yyvsp[(3) - (3)].str); }
    break;

  case 325:
/* Line 1792 of yacc.c  */
#line 563 "src/decompile/cpp/slghparse.y"
    { (yyval.anysym) = (yyvsp[(1) - (1)].spacesym); }
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 564 "src/decompile/cpp/slghparse.y"
    { (yyval.anysym) = (yyvsp[(1) - (1)].sectionsym); }
    break;

  case 327:
/* Line 1792 of yacc.c  */
#line 565 "src/decompile/cpp/slghparse.y"
    { (yyval.anysym) = (yyvsp[(1) - (1)].tokensym); }
    break;

  case 328:
/* Line 1792 of yacc.c  */
#line 566 "src/decompile/cpp/slghparse.y"
    { (yyval.anysym) = (yyvsp[(1) - (1)].useropsym); }
    break;

  case 329:
/* Line 1792 of yacc.c  */
#line 567 "src/decompile/cpp/slghparse.y"
    { (yyval.anysym) = (yyvsp[(1) - (1)].macrosym); }
    break;

  case 330:
/* Line 1792 of yacc.c  */
#line 568 "src/decompile/cpp/slghparse.y"
    { (yyval.anysym) = (yyvsp[(1) - (1)].subtablesym); }
    break;

  case 331:
/* Line 1792 of yacc.c  */
#line 569 "src/decompile/cpp/slghparse.y"
    { (yyval.anysym) = (yyvsp[(1) - (1)].valuesym); }
    break;

  case 332:
/* Line 1792 of yacc.c  */
#line 570 "src/decompile/cpp/slghparse.y"
    { (yyval.anysym) = (yyvsp[(1) - (1)].valuemapsym); }
    break;

  case 333:
/* Line 1792 of yacc.c  */
#line 571 "src/decompile/cpp/slghparse.y"
    { (yyval.anysym) = (yyvsp[(1) - (1)].contextsym); }
    break;

  case 334:
/* Line 1792 of yacc.c  */
#line 572 "src/decompile/cpp/slghparse.y"
    { (yyval.anysym) = (yyvsp[(1) - (1)].namesym); }
    break;

  case 335:
/* Line 1792 of yacc.c  */
#line 573 "src/decompile/cpp/slghparse.y"
    { (yyval.anysym) = (yyvsp[(1) - (1)].varsym); }
    break;

  case 336:
/* Line 1792 of yacc.c  */
#line 574 "src/decompile/cpp/slghparse.y"
    { (yyval.anysym) = (yyvsp[(1) - (1)].varlistsym); }
    break;

  case 337:
/* Line 1792 of yacc.c  */
#line 575 "src/decompile/cpp/slghparse.y"
    { (yyval.anysym) = (yyvsp[(1) - (1)].operandsym); }
    break;

  case 338:
/* Line 1792 of yacc.c  */
#line 576 "src/decompile/cpp/slghparse.y"
    { (yyval.anysym) = (yyvsp[(1) - (1)].startsym); }
    break;

  case 339:
/* Line 1792 of yacc.c  */
#line 577 "src/decompile/cpp/slghparse.y"
    { (yyval.anysym) = (yyvsp[(1) - (1)].endsym); }
    break;

  case 340:
/* Line 1792 of yacc.c  */
#line 578 "src/decompile/cpp/slghparse.y"
    { (yyval.anysym) = (yyvsp[(1) - (1)].bitsym); }
    break;


/* Line 1792 of yacc.c  */
#line 4458 "src/decompile/cpp/slghparse.cc"
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
#line 580 "src/decompile/cpp/slghparse.y"


int yyerror(const char *s)

{
  slgh->reportError(s);
  return 0;
}
