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
/* A Bison parser, made by GNU Bison 3.3.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 16 "src/decompile/cpp/slghparse.y" /* yacc.c:337  */

#include "slgh_compile.hh"

#define YYERROR_VERBOSE

  extern SleighCompile *slgh;
  extern int4 actionon;
  extern FILE *yyin;
  extern int yydebug;
  extern int yylex(void);
  extern int yyerror(const char *str );

#line 83 "src/decompile/cpp/slghparse.cc" /* yacc.c:337  */
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
    OP_BOOL_OR = 258,
    OP_BOOL_AND = 259,
    OP_BOOL_XOR = 260,
    OP_OR = 261,
    OP_XOR = 262,
    OP_AND = 263,
    OP_EQUAL = 264,
    OP_NOTEQUAL = 265,
    OP_FEQUAL = 266,
    OP_FNOTEQUAL = 267,
    OP_GREATEQUAL = 268,
    OP_LESSEQUAL = 269,
    OP_SLESS = 270,
    OP_SGREATEQUAL = 271,
    OP_SLESSEQUAL = 272,
    OP_SGREAT = 273,
    OP_FLESS = 274,
    OP_FGREAT = 275,
    OP_FLESSEQUAL = 276,
    OP_FGREATEQUAL = 277,
    OP_LEFT = 278,
    OP_RIGHT = 279,
    OP_SRIGHT = 280,
    OP_FADD = 281,
    OP_FSUB = 282,
    OP_SDIV = 283,
    OP_SREM = 284,
    OP_FMULT = 285,
    OP_FDIV = 286,
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
    NEXT2SYM = 368,
    MACROSYM = 369,
    LABELSYM = 370,
    SUBTABLESYM = 371
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 29 "src/decompile/cpp/slghparse.y" /* yacc.c:352  */

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
  Next2Symbol *next2sym;
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

#line 288 "src/decompile/cpp/slghparse.cc" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_DECOMPILE_CPP_SLGHPARSE_HH_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2692

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  140
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  343
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  724

#define YYUNDEFTOK  2
#define YYMAXUTOK   371

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,   139,    43,     2,     2,     2,    38,    11,     2,
     132,   133,    36,    32,   134,    33,     2,    37,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   138,     8,
      17,   131,    18,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   135,     2,   136,     9,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   137,     6,   130,    44,     2,     2,     2,
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
     128,   129
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   158,   158,   159,   160,   161,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   174,   175,   176,   177,
     179,   180,   182,   184,   186,   187,   188,   189,   190,   192,
     194,   195,   198,   199,   200,   201,   202,   204,   205,   206,
     207,   208,   209,   211,   213,   214,   215,   216,   217,   218,
     219,   221,   223,   225,   227,   228,   230,   233,   235,   237,
     239,   241,   244,   246,   247,   248,   250,   252,   253,   254,
     257,   258,   261,   263,   264,   265,   267,   268,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   280,   281,   282,
     283,   285,   287,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   304,   305,   306,   307,
     309,   310,   312,   313,   315,   316,   318,   319,   320,   321,
     322,   323,   324,   327,   328,   329,   330,   332,   333,   335,
     336,   337,   338,   339,   340,   342,   343,   345,   347,   348,
     350,   351,   352,   353,   354,   356,   357,   358,   359,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   456,   457,   458,   459,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   471,   472,   473,   474,   476,
     477,   478,   479,   480,   482,   483,   484,   486,   487,   489,
     490,   491,   492,   493,   494,   496,   497,   498,   499,   500,
     502,   503,   504,   505,   506,   507,   509,   510,   512,   513,
     514,   516,   517,   518,   520,   521,   522,   525,   526,   528,
     529,   530,   532,   534,   535,   536,   537,   539,   540,   541,
     543,   544,   545,   546,   547,   549,   550,   552,   553,   555,
     556,   559,   560,   561,   563,   564,   565,   567,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OP_BOOL_OR", "OP_BOOL_AND",
  "OP_BOOL_XOR", "'|'", "OP_OR", "';'", "'^'", "OP_XOR", "'&'", "OP_AND",
  "OP_EQUAL", "OP_NOTEQUAL", "OP_FEQUAL", "OP_FNOTEQUAL", "'<'", "'>'",
  "OP_GREATEQUAL", "OP_LESSEQUAL", "OP_SLESS", "OP_SGREATEQUAL",
  "OP_SLESSEQUAL", "OP_SGREAT", "OP_FLESS", "OP_FGREAT", "OP_FLESSEQUAL",
  "OP_FGREATEQUAL", "OP_LEFT", "OP_RIGHT", "OP_SRIGHT", "'+'", "'-'",
  "OP_FADD", "OP_FSUB", "'*'", "'/'", "'%'", "OP_SDIV", "OP_SREM",
  "OP_FMULT", "OP_FDIV", "'!'", "'~'", "OP_ZEXT", "OP_CARRY", "OP_BORROW",
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
  "STARTSYM", "ENDSYM", "NEXT2SYM", "MACROSYM", "LABELSYM", "SUBTABLESYM",
  "'}'", "'='", "'('", "')'", "','", "'['", "']'", "'{'", "':'", "' '",
  "$accept", "spec", "definition", "constructorlike", "endiandef",
  "aligndef", "tokendef", "tokenprop", "contextdef", "contextprop",
  "fielddef", "contextfielddef", "spacedef", "spaceprop", "varnodedef",
  "bitrangedef", "bitrangelist", "bitrangesingle", "pcodeopdef",
  "valueattach", "nameattach", "varattach", "macrodef", "withblockstart",
  "withblockmid", "withblock", "id_or_nil", "bitpat_or_nil", "macrostart",
  "rtlbody", "constructor", "constructprint", "subtablestart",
  "pexpression", "pequation", "elleq", "ellrt", "atomic", "constraint",
  "contextblock", "contextlist", "section_def", "rtlfirstsection",
  "rtlcontinue", "rtl", "rtlmid", "statement", "expr", "sizedstar",
  "jumpdest", "varnode", "integervarnode", "lhsvarnode", "label",
  "exportvarnode", "familysymbol", "specificsymbol", "charstring",
  "intblist", "intbpart", "stringlist", "stringpart", "anystringlist",
  "anystringpart", "valuelist", "valuepart", "varlist", "varpart",
  "paramlist", "oplist", "anysymbol", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     125,    61,    40,    41,    44,    91,    93,   123,    58,    32
};
# endif

#define YYPACT_NINF -322

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-322)))

#define YYTABLE_NINF -274

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-274)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -46,   -33,     9,  -322,   -42,  -322,    18,   327,   211,   -38,
     -34,   -19,   -14,  -322,  -322,  -322,  -322,  -322,   422,  -322,
     446,  -322,   115,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,    36,  -322,   -11,  -322,    61,    63,    95,  -322,  -322,
    2509,     6,  2528,   -70,    43,    35,    86,   -62,   -62,   -62,
      60,  -322,  -322,   131,  -322,  -322,  -322,    70,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,   309,    93,  -322,   168,   305,
     184,  -322,   215,  -322,   220,   225,   346,  -322,  -322,  -322,
    -322,  -322,  1751,  -322,  -322,  -322,  -322,   298,  -322,  1751,
    -322,  -322,  -322,   298,   398,   403,  -322,  -322,   316,   284,
    -322,  -322,   331,   423,  -322,   311,     3,  -322,   313,  -322,
    -322,   -61,   320,   -25,    49,   347,  1751,   337,  -322,  -322,
    -322,   338,   340,  -322,  -322,  -322,  -322,   341,   322,   367,
     368,   348,  1736,  1493,  -322,  -322,  -322,  -322,  -322,  -322,
     345,  -322,  1751,    17,  -322,  -322,   378,  -322,   161,  -322,
      17,  -322,  -322,   474,   376,  -322,  2377,  -322,   365,  -322,
    -322,   -30,  -322,  -322,    -4,  2547,   477,   381,  -322,     7,
     489,  -322,    41,   507,  -322,    75,   383,   182,   412,   416,
     419,   420,  -322,  -322,  -322,  -322,  -322,   289,     8,   -41,
    -322,  1625,  1723,     4,  1601,  1689,   411,  1700,  1657,   407,
     414,   140,   418,  -322,   436,  -322,  -322,  -322,  -322,  -322,
     421,   -73,  -322,  1601,   -91,  -322,    72,  -322,   141,  -322,
    1773,    25,  1751,  1751,  1751,  -322,   -52,  -322,  1773,  1773,
    1773,  1773,  1773,  1773,   -52,  -322,   441,  -322,  -322,  -322,
     442,  -322,   465,  -322,  -322,  -322,  -322,  -322,  2403,  -322,
    -322,  -322,   469,  -322,  -322,    13,  -322,  -322,  -322,   -77,
    -322,  -322,   470,   451,   444,   455,   457,   459,  -322,  -322,
     521,  -322,  -322,   611,   613,   522,   561,  -322,   534,  -322,
    -322,  -322,  -322,  -322,  1601,   663,  -322,  1601,   665,  -322,
    1601,  1601,  1601,  1601,  1601,   572,   573,   574,   575,   580,
     583,   616,   617,   625,   627,   662,   667,   702,   703,   738,
     739,   744,   745,   780,   785,  -322,  1601,  1897,  1601,  -322,
     158,    -3,   582,   690,   784,   382,   699,   871,  -322,  1633,
     914,  -322,   949,   851,  1601,   855,  1601,  1601,  1601,  1555,
     890,   891,  1601,   893,  1773,  1773,  -322,  1773,  1665,  -322,
    -322,  -322,   266,  1022,  -322,   -60,  -322,  -322,  -322,  1665,
    1665,  1665,  1665,  1665,  1665,  -322,   960,   932,   947,  -322,
    -322,  -322,  -322,   934,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,   972,   974,  1011,  1012,  1700,  -322,  -322,   985,
    -322,  1043,   303,  -322,   344,  -322,   581,  -322,  -322,  -322,
    -322,  1601,  1601,  1601,  1601,  1601,  1601,  1601,  1601,  1601,
    1601,  1601,  1601,  1601,  1601,  1601,  1601,  1601,  1601,  1601,
    1601,   787,  1601,  1601,  1601,  1601,  1601,  1601,  1601,  1601,
    1601,  1601,  1601,  1601,  1601,  1601,  1601,  1601,  1601,  1601,
    1601,  1601,  1601,  1601,  1601,  1601,  1601,  1601,  1601,  1601,
    1601,  1601,  1601,  1601,  1601,  1601,  1601,  1601,   370,  -322,
      27,  1052,  1053,  -322,  1601,  1055,  -322,  1066,   308,  1093,
    -322,  1095,  1231,  -322,  1234,  -322,  -322,  -322,  -322,  1951,
    1109,  2271,    96,  1991,   155,  1601,  1142,  1149,  2031,  1147,
    -322,  -322,    54,  1773,  1773,  1773,  1773,  1773,  1773,  1773,
    1773,  1773,  1151,  -322,  1189,  1190,  -322,  -322,  -322,    -9,
    1229,  1227,  1216,  -322,  1230,  1263,  1268,  1269,  -322,  1266,
    1305,  1436,  1473,  1476,   827,   661,   869,   705,   747,   910,
     950,   990,  1031,  1071,  1111,  1152,  1192,  1232,   292,   621,
    1273,  1313,  1353,   300,  -322,  2310,  2347,  2347,  2381,  2413,
    2443,  2523,  2523,  2523,  2523,  2549,  2549,  2549,  2549,  2549,
    2549,  2549,  2549,  2549,  2549,  2549,  2549,  2561,  2561,  2561,
    2650,  2650,  2650,  2650,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  1509,  1309,  1348,  -322,  2071,    -2,  1514,  1517,  1554,
    1700,  -322,  -322,  -322,  1601,  1557,  1601,  -322,  1592,  2111,
    -322,  -322,  -322,  1416,  -322,   480,  2580,  2648,   265,   265,
     400,   400,  -322,  -322,  1825,  1773,  1773,  1670,   312,  -322,
    -322,   362,  1456,   -70,  -322,  -322,  -322,  -322,  1495,  -322,
    -322,  -322,  -322,  -322,  1601,  -322,  1601,  1601,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  1601,
    -322,  -322,  -322,  -322,  -322,  -322,  1497,  -322,  -322,  1601,
    -322,  -322,  -322,  -322,  2151,  -322,  2271,  -322,  -322,  1469,
    1472,  1479,   492,  1591,  -322,  -322,  1587,  1588,  -322,  -322,
    1483,  1618,  -322,  1394,  1434,  1474,  1515,  1494,  2191,  -322,
    1498,  1516,  1518,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  1601,  1499,  1505,  2231,  1623,
    1631,  -322,  -322,  -322
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     2,     0,     1,     0,     0,     0,     0,
      67,     0,     0,    89,     4,     5,     3,     6,     0,     7,
       0,     8,     0,     9,    10,    11,    12,    13,    14,    17,
      63,     0,    18,     0,    16,     0,     0,     0,    15,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    69,    68,     0,    88,    87,    23,     0,   327,   328,
     329,   330,   333,   334,   335,   336,   337,   343,   338,   339,
     340,   341,   342,   331,   332,    27,     0,    29,     0,    31,
       0,    43,     0,    50,     0,     0,     0,    66,    64,    65,
     145,    82,     0,   286,    83,    86,    85,    84,    81,     0,
      78,    80,    90,    79,     0,     0,    44,    45,     0,     0,
      28,   298,     0,     0,    30,     0,     0,    54,     0,   308,
     309,     0,     0,     0,     0,   324,    70,     0,    34,    35,
      36,     0,     0,    39,    40,    41,    42,     0,     0,     0,
       0,     0,   140,     0,   275,   276,   277,   278,   124,   279,
     123,   126,     0,   127,   106,   111,   113,   114,   125,   287,
     127,    20,    21,     0,     0,   299,     0,    57,     0,    53,
      55,     0,   310,   311,     0,     0,     0,     0,   289,     0,
       0,   316,     0,     0,   325,     0,   127,    71,     0,     0,
       0,     0,    46,    47,    48,    49,    61,     0,     0,   245,
     260,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     259,   257,     0,   280,     0,   281,   282,   283,   284,   285,
       0,   258,   146,     0,     0,   256,     0,   173,   255,   110,
       0,     0,     0,     0,     0,   129,     0,   112,     0,     0,
       0,     0,     0,     0,     0,    22,     0,   300,   297,   301,
       0,    52,     0,   314,   312,   313,   307,   303,     0,   304,
      59,   290,     0,   291,   293,     0,    58,   318,   317,     0,
      60,    72,     0,     0,     0,     0,     0,     0,   257,   258,
       0,   262,   255,     0,     0,     0,     0,   250,   249,   254,
     251,   246,   247,   248,     0,     0,   253,     0,     0,   170,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   239,     0,     0,     0,   174,
     255,     0,     0,     0,     0,     0,     0,   143,   274,     0,
       0,   269,     0,     0,     0,     0,   321,     0,   321,     0,
       0,     0,     0,     0,     0,     0,    91,     0,   122,    92,
      93,   115,   108,   109,   107,     0,    75,   145,    76,   117,
     118,   120,   121,   119,   116,    77,    24,     0,     0,   305,
     302,   306,   292,     0,   294,   296,   288,   320,   319,   315,
     326,    62,     0,     0,     0,     0,     0,   268,   267,     0,
     244,     0,     0,   165,     0,   168,     0,   189,   216,   202,
     190,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   321,     0,     0,     0,     0,
     321,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   175,
       0,     0,     0,   147,     0,     0,   154,     0,     0,     0,
     270,     0,   144,   266,     0,   264,   141,   161,   261,     0,
       0,   322,     0,     0,     0,     0,     0,     0,     0,     0,
     104,   105,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   134,     0,     0,   128,   138,   145,     0,
       0,     0,     0,   295,     0,     0,     0,     0,   263,   243,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   176,   205,   204,   203,   193,   191,
     192,   179,   180,   206,   207,   181,   184,   182,   183,   185,
     186,   187,   188,   208,   209,   210,   211,   194,   195,   196,
     177,   178,   212,   213,   197,   198,   200,   199,   201,   214,
     215,     0,     0,     0,   237,     0,     0,     0,     0,     0,
       0,   272,   142,   151,     0,     0,     0,   158,     0,     0,
     160,   159,   149,     0,    94,   101,   102,   100,    98,    99,
      95,    96,    97,   103,     0,     0,     0,     0,     0,    73,
     137,     0,     0,     0,    32,    33,    37,    38,     0,   252,
     167,   169,   171,   220,     0,   219,     0,     0,   226,   217,
     218,   228,   229,   230,   225,   224,   227,   241,   231,     0,
     233,   234,   235,   240,   166,   236,     0,   150,   148,     0,
     164,   163,   162,   271,     0,   156,   323,   172,   155,     0,
       0,     0,     0,     0,    74,   139,     0,     0,    26,    25,
       0,     0,   242,     0,     0,     0,     0,     0,     0,   153,
       0,     0,     0,   130,   133,   135,   136,    56,    51,   221,
     222,   223,   232,   238,   152,     0,     0,     0,     0,     0,
       0,   157,   131,   132
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -322,  -322,  1609,  1610,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  1527,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  1423,
    -322,  -322,  -322,  -224,   -78,  -322,  1526,  -322,  -322,  -117,
    -322,  1044,  -322,  -322,  1303,  1155,  -322,  -201,  -141,  -198,
    -129,  1204,  1337,  -140,  -322,   -92,   -44,  1642,  -322,  -322,
    1046,  -322,  -322,  -322,   404,  -322,  -322,  -322,  -321,  -322,
      10
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    14,    15,     3,    16,    17,    18,    19,    20,
      75,    79,    21,    22,    23,    24,   116,   117,    25,    26,
      27,    28,    29,    30,    31,    32,    53,   186,    33,   368,
      34,    35,    36,   358,   153,   154,   155,   156,   157,   236,
     365,   630,   517,   518,   141,   142,   222,   491,   328,   295,
     329,   225,   226,   296,   340,   359,   330,    97,   180,   265,
     113,   166,   176,   258,   122,   174,   183,   269,   492,   185,
      76
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     158,   223,   227,   327,   298,   473,   668,   158,   177,     5,
       6,   169,   299,   224,   369,   370,   371,   372,   373,   374,
     628,   160,   349,   232,     1,   233,    38,   494,   234,   366,
      80,   232,   387,   233,   158,   251,   234,     6,   197,   111,
     262,   350,   388,   244,   512,     4,   383,   351,   187,   513,
     107,   158,   110,   119,   172,   120,   173,   514,  -266,   389,
     158,   503,  -266,   515,   504,   112,   505,   339,   281,   273,
      91,    50,    98,   121,   231,    51,   516,   252,   334,     7,
       8,     9,   178,   506,   507,   367,   508,   509,    10,    37,
     510,   511,   200,   402,   285,    52,   404,   286,   228,   406,
     407,   408,   409,   410,   548,   253,    86,     8,     9,   553,
     179,   254,   115,   255,   263,    10,   264,   283,    11,    54,
     384,   629,   385,    81,    55,   431,    90,   469,   474,   669,
     500,   501,   256,   502,   210,   475,   284,   108,    12,   300,
     158,   158,   158,   489,   115,    11,   493,    13,    39,   386,
     267,   498,   235,   282,   362,   363,   364,    92,   361,    99,
     268,   332,   114,   282,   341,    12,    87,    93,   181,    93,
      94,    95,   100,   101,    13,   238,   249,   118,   239,   240,
     241,   242,   104,   105,   182,   259,   360,   614,   232,    82,
     233,    83,   125,   234,   360,   360,   360,   360,   360,   360,
      96,   127,   102,   352,    84,    85,   480,   353,   271,   272,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   131,   549,   550,   551,   552,   605,
     606,   555,   556,   557,   558,   559,   560,   561,   562,   563,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,   587,   588,   589,   590,   528,   381,   126,
     591,   344,  -264,   595,   233,  -265,  -264,   234,   345,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   608,   606,
     470,   282,   243,   471,   609,   485,   472,   508,   509,   132,
     197,   510,   511,    47,    48,    49,   432,   433,   434,   435,
     360,   360,   436,   360,   437,   137,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   138,   432,   433,   434,
     435,   139,   282,   436,   200,   437,   140,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   198,   133,   134,
     135,   136,   128,   197,   129,   130,   210,   192,   278,   193,
      40,   682,   683,   674,   159,   676,   161,    41,   213,    42,
     215,   162,   216,   217,   218,   219,   164,   598,   279,    40,
     599,   686,    43,   163,   687,   657,   606,   280,    42,    44,
      56,   167,    45,   663,   606,   287,   510,   511,    46,   531,
     165,    43,   168,   693,   171,   694,   695,   200,    44,   688,
     689,    45,   123,   124,    77,   175,   184,    46,   696,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   698,   188,
     189,   673,   190,   191,   194,   195,   230,   288,   196,   289,
     532,   237,   245,   246,   250,   260,   223,   227,   261,   210,
     504,   278,   505,   290,   291,   292,   293,   266,   224,   503,
     703,   213,   504,   215,   505,   216,   217,   218,   219,   506,
     507,   279,   508,   509,   718,   270,   510,   511,   235,   274,
     479,   506,   507,   275,   508,   509,   276,   277,   510,   511,
     342,    57,   680,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,   333,    68,    69,    70,    71,    72,    73,
     346,    74,   343,   348,   378,    78,   282,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,   347,    68,    69,
      70,    71,    72,    73,   376,    74,   382,   377,   392,   390,
     681,   360,   360,   228,   432,   433,   434,   435,   391,   393,
     436,   394,   437,   395,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   432,   433,   434,   435,   396,   397,
     436,   398,   437,   399,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   432,   433,   434,   435,   400,   401,
     436,   403,   437,   405,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   411,   412,   413,   414,   432,   433,
     434,   435,   415,   476,   436,   416,   437,   533,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   417,   418,
     432,   433,   434,   435,   658,   659,   436,   419,   437,   420,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     432,   433,   434,   435,   421,   644,   436,   477,   437,   422,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     432,   433,   434,   435,   423,   424,   436,   481,   437,   646,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     425,   426,   432,   433,   434,   435,   427,   428,   436,  -273,
     437,   647,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   429,   432,   433,   434,   435,   430,   478,   436,
     554,   437,   486,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   432,   433,   434,   435,   487,   488,   436,
     643,   437,   490,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   432,   433,   434,   435,   496,   497,   436,
     499,   437,   645,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   234,   432,   433,   434,   435,   520,   521,
     436,   523,   437,   648,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   432,   433,   434,   435,   522,   524,
     436,   525,   437,   649,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   432,   433,   434,   435,   526,   527,
     436,   529,   437,   650,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   530,   432,   433,   434,   435,   593,
     594,   436,   596,   437,   651,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   432,   433,   434,   435,   597,
     600,   436,   601,   437,   652,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   432,   433,   434,   435,  -265,
     604,   436,   602,   437,   653,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   610,   432,   433,   434,   435,
     611,   613,   436,   624,   437,   654,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   432,   433,   434,   435,
     625,   626,   436,   633,   437,   655,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   432,   433,   434,   435,
     631,   632,   436,   634,   437,   656,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   635,   432,   433,   434,
     435,   636,   637,   436,   638,   437,   660,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   432,   433,   434,
     435,   639,   665,   436,   640,   437,   661,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   432,   433,   434,
     435,   641,   666,   436,   642,   437,   662,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   664,   432,   433,
     434,   435,   670,   679,   436,   671,   437,   709,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   432,   433,
     434,   435,   672,   690,   436,   675,   437,   710,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   503,   704,
     677,   504,   692,   505,   697,   700,   701,   711,   144,   145,
     146,   147,   197,   702,   148,   149,   150,   705,   706,   707,
     506,   507,   151,   508,   509,   152,   708,   510,   511,   715,
     713,   722,   719,   716,   301,   717,   302,   199,   720,   723,
      88,    89,   198,   170,   303,   304,   305,   306,   712,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   200,   375,   335,   229,
     519,   685,   503,   627,   592,   504,   484,   505,   103,   691,
       0,   197,     0,     0,     0,     0,   495,   198,     0,     0,
     287,     0,     0,   199,   506,   507,     0,   508,   509,   628,
       0,   510,   511,     0,     0,     0,   199,     0,   210,     0,
     278,   197,     0,     0,     0,   324,     0,     0,     0,     0,
     213,   325,   215,     0,   216,   217,   218,   219,     0,     0,
     279,     0,   288,   326,   289,   200,   201,   202,   203,   204,
     198,     0,   482,     0,     0,     0,     0,   197,   290,   291,
     292,   293,   213,   198,   215,     0,   216,   217,   218,   219,
     294,     0,   483,     0,   336,   200,   337,   205,   206,   207,
       0,   209,   199,     0,     0,     0,   213,   210,   215,   211,
     216,   217,   218,   219,   212,     0,   338,     0,   287,   213,
     214,   215,     0,   216,   217,   218,   219,   220,   331,   221,
     684,   200,   201,   202,   203,   204,   354,   210,   213,   278,
     215,     0,   216,   217,   218,   219,     0,   355,     0,   213,
       0,   215,     0,   216,   217,   218,   219,     0,     0,   279,
     288,     0,   289,   205,   206,   207,   208,   209,     0,     0,
       0,     0,     0,   210,     0,   211,   290,   291,   292,   293,
     212,     0,     0,     0,   143,   213,   214,   215,   297,   216,
     217,   218,   219,   220,     0,   221,   144,   145,   146,   147,
       0,     0,   148,   149,   150,     0,     0,     0,     0,     0,
     151,   356,     0,   152,     0,     0,     0,     0,   144,   145,
     146,   147,   213,     0,   215,   149,   216,   217,   218,   219,
     432,   433,   434,   435,     0,   357,   436,     0,   437,     0,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     144,   145,   146,   147,   213,     0,   215,   149,   216,   217,
     218,   219,     0,     0,   432,   433,   434,   435,     0,   603,
     436,     0,   437,   468,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   432,   433,   434,   435,     0,   607,
     436,     0,   437,     0,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   432,   433,   434,   435,     0,   612,
     436,     0,   437,     0,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   432,   433,   434,   435,     0,   667,
     436,     0,   437,     0,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   432,   433,   434,   435,     0,   678,
     436,     0,   437,     0,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   432,   433,   434,   435,     0,   699,
     436,     0,   437,     0,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   432,   433,   434,   435,     0,   714,
     436,     0,   437,     0,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   432,   433,   434,   435,     0,   721,
     436,     0,   437,     0,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   432,   433,   434,   435,     0,     0,
     436,     0,   437,     0,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   433,   434,   435,     0,     0,   436,
       0,   437,     0,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   435,     0,     0,   436,     0,   437,     0,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     436,     0,   437,     0,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   437,     0,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   247,     0,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     0,    68,
      69,    70,    71,    72,    73,     0,    74,     0,     0,     0,
       0,     0,   379,   248,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,     0,    68,    69,    70,    71,    72,
      73,     0,    74,     0,     0,     0,     0,     0,     0,   380,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,  -274,  -274,  -274,  -274,
    -274,  -274,  -274,  -274,  -274,  -274,  -274,  -274,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   505,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,     0,     0,     0,     0,     0,   506,
     507,     0,   508,   509,     0,     0,   510,   511,   106,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
       0,    68,    69,    70,    71,    72,    73,   109,    74,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,     0,
      68,    69,    70,    71,    72,    73,   257,    74,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     0,    68,
      69,    70,    71,    72,    73,     0,    74,   506,   507,     0,
     508,   509,     0,     0,   510,   511,   461,   462,   463,   464,
     465,   466,   467
};

static const yytype_int16 yycheck[] =
{
      92,   142,   142,   204,   202,     8,     8,    99,    33,     0,
       1,     8,     8,   142,   238,   239,   240,   241,   242,   243,
      29,    99,   223,     6,    70,     8,     8,   348,    11,    81,
      20,     6,   109,     8,   126,    65,    11,     1,    11,   109,
      33,   132,   119,   160,   104,    78,    33,   138,   126,   109,
      40,   143,    42,   115,   115,   117,   117,   117,   131,   136,
     152,     7,   135,   123,    10,   135,    12,   208,   197,   186,
       9,   109,     9,   135,   152,   109,   136,   107,   207,    70,
      71,    72,   107,    29,    30,   137,    32,    33,    79,   131,
      36,    37,    65,   294,   135,   129,   297,   138,   142,   300,
     301,   302,   303,   304,   425,   109,    70,    71,    72,   430,
     135,   115,   109,   117,   107,    79,   109,   109,   109,   138,
     107,   130,   109,     8,   138,   326,   137,   328,   131,   131,
     354,   355,   136,   357,   107,   138,   128,   131,   129,   135,
     232,   233,   234,   344,   109,   109,   347,   138,   130,   136,
     109,   352,   135,   197,   232,   233,   234,    96,   133,    96,
     119,   205,   119,   207,   208,   129,   130,   106,   119,   106,
     109,   110,   109,   110,   138,    14,   166,    91,    17,    18,
      19,    20,    87,    88,   135,   175,   230,   133,     6,    74,
       8,    76,   132,    11,   238,   239,   240,   241,   242,   243,
     139,   131,   139,   131,    89,    90,   335,   135,   133,   134,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   131,   426,   427,   428,   429,   133,
     134,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   396,   258,   138,
     468,   131,   131,   474,     8,   135,   135,    11,   138,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   133,   134,
     132,   335,   131,   135,   495,   339,   138,    32,    33,   131,
      11,    36,    37,    92,    93,    94,     3,     4,     5,     6,
     354,   355,     9,   357,    11,   131,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,   131,     3,     4,     5,
       6,   131,   396,     9,    65,    11,   131,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    17,    83,    84,
      85,    86,    83,    11,    85,    86,   107,    75,   109,    77,
      73,   625,   626,   604,   106,   606,     8,    80,   119,    82,
     121,     8,   123,   124,   125,   126,   132,   109,   129,    73,
     112,   109,    95,   107,   112,   133,   134,   138,    82,   102,
       8,     8,   105,   133,   134,    65,    36,    37,   111,   136,
     109,    95,   131,   644,   131,   646,   647,    65,   102,    87,
      88,   105,    48,    49,     8,   135,   109,   111,   659,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   669,   132,
     132,   600,   132,   132,   107,   107,   131,   107,   130,   109,
     136,   103,     8,   107,   119,     8,   627,   627,   107,   107,
      10,   109,    12,   123,   124,   125,   126,     8,   627,     7,
       8,   119,    10,   121,    12,   123,   124,   125,   126,    29,
      30,   129,    32,    33,   715,     8,    36,    37,   135,   107,
     138,    29,    30,   107,    32,    33,   107,   107,    36,    37,
     123,   109,   624,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   132,   122,   123,   124,   125,   126,   127,
     132,   129,   138,   132,    89,   109,   600,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   131,   122,   123,
     124,   125,   126,   127,   133,   129,   107,   135,   134,   109,
     624,   625,   626,   627,     3,     4,     5,     6,   137,   134,
       9,   134,    11,   134,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     3,     4,     5,     6,   107,    18,
       9,    18,    11,   111,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     3,     4,     5,     6,   107,   135,
       9,     8,    11,     8,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,   132,   132,   132,   132,     3,     4,
       5,     6,   132,   131,     9,   132,    11,   136,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,   132,   132,
       3,     4,     5,     6,   133,   134,     9,   132,    11,   132,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
       3,     4,     5,     6,   132,   134,     9,   107,    11,   132,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
       3,     4,     5,     6,   132,   132,     9,   138,    11,   134,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
     132,   132,     3,     4,     5,     6,   132,   132,     9,     8,
      11,   134,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,   132,     3,     4,     5,     6,   132,   134,     9,
     133,    11,     8,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     3,     4,     5,     6,     8,   107,     9,
     133,    11,   107,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     3,     4,     5,     6,   107,   107,     9,
     107,    11,   133,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    11,     3,     4,     5,     6,    78,   107,
       9,   107,    11,   133,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     3,     4,     5,     6,   131,   107,
       9,   107,    11,   133,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     3,     4,     5,     6,   107,   107,
       9,   136,    11,   133,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,   111,     3,     4,     5,     6,   107,
     107,     9,   107,    11,   133,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     3,     4,     5,     6,   133,
     107,     9,   107,    11,   133,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     3,     4,     5,     6,     8,
     131,     9,     8,    11,   133,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,   133,     3,     4,     5,     6,
     131,   134,     9,   132,    11,   133,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
     131,   131,     9,   107,    11,   133,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
     131,   134,     9,   133,    11,   133,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,   133,     3,     4,     5,
       6,   133,   133,     9,   138,    11,   133,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     3,     4,     5,
       6,   136,   133,     9,     8,    11,   133,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     3,     4,     5,
       6,     8,   134,     9,     8,    11,   133,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     8,     3,     4,
       5,     6,     8,   107,     9,     8,    11,   133,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     3,     4,
       5,     6,     8,   107,     9,     8,    11,   133,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     7,     8,
       8,    10,   107,    12,   107,   136,   134,   133,   115,   116,
     117,   118,    11,   134,   121,   122,   123,    30,    30,   136,
      29,    30,   129,    32,    33,   132,     8,    36,    37,   131,
     136,     8,   133,   117,    33,   117,    35,    36,   133,     8,
      31,    31,    17,   116,    43,    44,    45,    46,   133,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,   244,    11,   143,
     367,   627,     7,   518,   470,    10,   339,    12,    36,   633,
      -1,    11,    -1,    -1,    -1,    -1,   131,    17,    -1,    -1,
      65,    -1,    -1,    36,    29,    30,    -1,    32,    33,    29,
      -1,    36,    37,    -1,    -1,    -1,    36,    -1,   107,    -1,
     109,    11,    -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,
     119,   120,   121,    -1,   123,   124,   125,   126,    -1,    -1,
     129,    -1,   107,   132,   109,    65,    66,    67,    68,    69,
      17,    -1,   109,    -1,    -1,    -1,    -1,    11,   123,   124,
     125,   126,   119,    17,   121,    -1,   123,   124,   125,   126,
     135,    -1,   129,    -1,   107,    65,   109,    97,    98,    99,
      -1,   101,    36,    -1,    -1,    -1,   119,   107,   121,   109,
     123,   124,   125,   126,   114,    -1,   129,    -1,    65,   119,
     120,   121,    -1,   123,   124,   125,   126,   127,   109,   129,
     130,    65,    66,    67,    68,    69,    33,   107,   119,   109,
     121,    -1,   123,   124,   125,   126,    -1,    44,    -1,   119,
      -1,   121,    -1,   123,   124,   125,   126,    -1,    -1,   129,
     107,    -1,   109,    97,    98,    99,   100,   101,    -1,    -1,
      -1,    -1,    -1,   107,    -1,   109,   123,   124,   125,   126,
     114,    -1,    -1,    -1,   103,   119,   120,   121,   135,   123,
     124,   125,   126,   127,    -1,   129,   115,   116,   117,   118,
      -1,    -1,   121,   122,   123,    -1,    -1,    -1,    -1,    -1,
     129,   108,    -1,   132,    -1,    -1,    -1,    -1,   115,   116,
     117,   118,   119,    -1,   121,   122,   123,   124,   125,   126,
       3,     4,     5,     6,    -1,   132,     9,    -1,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
     115,   116,   117,   118,   119,    -1,   121,   122,   123,   124,
     125,   126,    -1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    11,    66,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     3,     4,     5,     6,    -1,     8,
       9,    -1,    11,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     3,     4,     5,     6,    -1,     8,
       9,    -1,    11,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     3,     4,     5,     6,    -1,     8,
       9,    -1,    11,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     3,     4,     5,     6,    -1,     8,
       9,    -1,    11,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     3,     4,     5,     6,    -1,     8,
       9,    -1,    11,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     3,     4,     5,     6,    -1,     8,
       9,    -1,    11,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     3,     4,     5,     6,    -1,     8,
       9,    -1,    11,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     3,     4,     5,     6,    -1,    -1,
       9,    -1,    11,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     4,     5,     6,    -1,    -1,     9,
      -1,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     6,    -1,    -1,     9,    -1,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
       9,    -1,    11,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,   109,    -1,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,    -1,   122,
     123,   124,   125,   126,   127,    -1,   129,    -1,    -1,    -1,
      -1,    -1,   109,   136,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,    -1,   122,   123,   124,   125,   126,
     127,    -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    12,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    29,
      30,    -1,    32,    33,    -1,    -1,    36,    37,   109,    -1,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
      -1,   122,   123,   124,   125,   126,   127,   109,   129,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    -1,
     122,   123,   124,   125,   126,   127,   109,   129,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,    -1,   122,
     123,   124,   125,   126,   127,    -1,   129,    29,    30,    -1,
      32,    33,    -1,    -1,    36,    37,    36,    37,    38,    39,
      40,    41,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    70,   141,   144,    78,     0,     1,    70,    71,    72,
      79,   109,   129,   138,   142,   143,   145,   146,   147,   148,
     149,   152,   153,   154,   155,   158,   159,   160,   161,   162,
     163,   164,   165,   168,   170,   171,   172,   131,     8,   130,
      73,    80,    82,    95,   102,   105,   111,    92,    93,    94,
     109,   109,   129,   166,   138,   138,     8,   109,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   122,   123,
     124,   125,   126,   127,   129,   150,   210,     8,   109,   151,
     210,     8,    74,    76,    89,    90,    70,   130,   142,   143,
     137,     9,    96,   106,   109,   110,   139,   197,     9,    96,
     109,   110,   139,   197,    87,    88,   109,   210,   131,   109,
     210,   109,   135,   200,   119,   109,   156,   157,    91,   115,
     117,   135,   204,   204,   204,   132,   138,   131,    83,    85,
      86,   131,   131,    83,    84,    85,    86,   131,   131,   131,
     131,   184,   185,   103,   115,   116,   117,   118,   121,   122,
     123,   129,   132,   174,   175,   176,   177,   178,   195,   106,
     174,     8,     8,   107,   132,   109,   201,     8,   131,     8,
     157,   131,   115,   117,   205,   135,   202,    33,   107,   135,
     198,   119,   135,   206,   109,   209,   167,   174,   132,   132,
     132,   132,    75,    77,   107,   107,   130,    11,    17,    36,
      65,    66,    67,    68,    69,    97,    98,    99,   100,   101,
     107,   109,   114,   119,   120,   121,   123,   124,   125,   126,
     127,   129,   186,   188,   190,   191,   192,   193,   196,   176,
     131,   174,     6,     8,    11,   135,   179,   103,    14,    17,
      18,    19,    20,   131,   179,     8,   107,   109,   136,   210,
     119,    65,   107,   109,   115,   117,   136,   109,   203,   210,
       8,   107,    33,   107,   109,   199,     8,   109,   119,   207,
       8,   133,   134,   179,   107,   107,   107,   107,   109,   129,
     138,   190,   196,   109,   128,   135,   138,    65,   107,   109,
     123,   124,   125,   126,   135,   189,   193,   135,   189,     8,
     135,    33,    35,    43,    44,    45,    46,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,   114,   120,   132,   187,   188,   190,
     196,   109,   196,   132,   190,    11,   107,   109,   129,   188,
     194,   196,   123,   138,   131,   138,   132,   131,   132,   187,
     132,   138,   131,   135,    33,    44,   108,   132,   173,   195,
     196,   133,   174,   174,   174,   180,    81,   137,   169,   173,
     173,   173,   173,   173,   173,   169,   133,   135,    89,   109,
     136,   210,   107,    33,   107,   109,   136,   109,   119,   136,
     109,   137,   134,   134,   134,   134,   107,    18,    18,   111,
     107,   135,   187,     8,   187,     8,   187,   187,   187,   187,
     187,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   187,     3,     4,     5,     6,     9,    11,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    66,   187,
     132,   135,   138,     8,   131,   138,   131,   107,   134,   138,
     190,   138,   109,   129,   192,   196,     8,     8,   107,   187,
     107,   187,   208,   187,   208,   131,   107,   107,   187,   107,
     173,   173,   173,     7,    10,    12,    29,    30,    32,    33,
      36,    37,   104,   109,   117,   123,   136,   182,   183,   184,
      78,   107,   131,   107,   107,   107,   107,   107,   190,   136,
     111,   136,   136,   136,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   208,   187,
     187,   187,   187,   208,   133,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   189,   191,   107,   107,   187,   107,   133,   109,   112,
     107,   107,     8,     8,   131,   133,   134,     8,   133,   187,
     133,   131,     8,   134,   133,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   132,   131,   131,   185,    29,   130,
     181,   131,   134,   107,   133,   133,   133,   133,   138,   136,
       8,     8,     8,   133,   134,   133,   134,   134,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   134,
     133,   133,   133,   133,     8,   133,   134,     8,     8,   131,
       8,     8,     8,   190,   187,     8,   187,     8,     8,   107,
     195,   196,   173,   173,   130,   181,   109,   112,    87,    88,
     107,   200,   107,   187,   187,   187,   187,   107,   187,     8,
     136,   134,   134,     8,     8,    30,    30,   136,     8,   133,
     133,   133,   133,   136,     8,   131,   117,   117,   187,   133,
     133,     8,     8,     8
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   140,   141,   141,   141,   141,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   143,   143,   143,   143,
     144,   144,   145,   146,   147,   147,   147,   147,   147,   148,
     149,   149,   150,   150,   150,   150,   150,   151,   151,   151,
     151,   151,   151,   152,   153,   153,   153,   153,   153,   153,
     153,   154,   154,   155,   156,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   164,   164,   165,   166,   166,   166,
     167,   167,   168,   169,   169,   169,   170,   170,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   172,   172,   172,
     172,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   174,   174,   174,   174,
     175,   175,   176,   176,   177,   177,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   179,   179,   180,
     180,   180,   180,   180,   180,   181,   181,   182,   183,   183,
     184,   184,   184,   184,   184,   185,   185,   185,   185,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   188,   188,   188,   188,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   190,   190,   190,   190,   191,
     191,   191,   191,   191,   192,   192,   192,   193,   193,   194,
     194,   194,   194,   194,   194,   195,   195,   195,   195,   195,
     196,   196,   196,   196,   196,   196,   197,   197,   198,   198,
     198,   199,   199,   199,   199,   199,   199,   200,   200,   201,
     201,   201,   202,   203,   203,   203,   203,   204,   204,   204,
     205,   205,   205,   205,   205,   206,   206,   207,   207,   207,
     207,   208,   208,   208,   209,   209,   209,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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
       1,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     4,     1,     1,     1,     3,     3,     1,
       2,     4,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     1,
       2,     1,     2,     1,     2,     3,     2,     3,     1,     1,
       2,     2,     3,     1,     1,     2,     2,     3,     1,     1,
       1,     1,     2,     2,     2,     3,     1,     1,     1,     2,
       2,     0,     1,     3,     0,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
        case 19:
#line 177 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { slgh->resetConstructors(); }
#line 2301 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 20:
#line 179 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { slgh->setEndian(1); }
#line 2307 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 21:
#line 180 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { slgh->setEndian(0); }
#line 2313 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 22:
#line 182 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { slgh->setAlignment(*(yyvsp[-1].i)); delete (yyvsp[-1].i); }
#line 2319 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 23:
#line 184 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    {}
#line 2325 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 24:
#line 186 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tokensym) = slgh->defineToken((yyvsp[-3].str),(yyvsp[-1].i),0); }
#line 2331 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 25:
#line 187 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tokensym) = slgh->defineToken((yyvsp[-6].str),(yyvsp[-4].i),-1); }
#line 2337 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 26:
#line 188 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tokensym) = slgh->defineToken((yyvsp[-6].str),(yyvsp[-4].i),1); }
#line 2343 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 27:
#line 189 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tokensym) = (yyvsp[-1].tokensym); slgh->addTokenField((yyvsp[-1].tokensym),(yyvsp[0].fieldqual)); }
#line 2349 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 28:
#line 190 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { string errmsg=(yyvsp[0].anysym)->getName()+": redefined as a token"; yyerror(errmsg.c_str()); YYERROR; }
#line 2355 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 29:
#line 192 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    {}
#line 2361 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 30:
#line 194 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.varsym) = (yyvsp[0].varsym); }
#line 2367 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 31:
#line 195 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.varsym) = (yyvsp[-1].varsym); if (!slgh->addContextField( (yyvsp[-1].varsym), (yyvsp[0].fieldqual) ))
                                            { yyerror("All context definitions must come before constructors"); YYERROR; } }
#line 2374 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 32:
#line 198 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.fieldqual) = new FieldQuality((yyvsp[-6].str),(yyvsp[-3].i),(yyvsp[-1].i)); }
#line 2380 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 33:
#line 199 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { delete (yyvsp[-3].i); delete (yyvsp[-1].i); string errmsg = (yyvsp[-6].anysym)->getName()+": redefined as field"; yyerror(errmsg.c_str()); YYERROR; }
#line 2386 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 34:
#line 200 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.fieldqual) = (yyvsp[-1].fieldqual); (yyval.fieldqual)->signext = true; }
#line 2392 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 35:
#line 201 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.fieldqual) = (yyvsp[-1].fieldqual); (yyval.fieldqual)->hex = true; }
#line 2398 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 36:
#line 202 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.fieldqual) = (yyvsp[-1].fieldqual); (yyval.fieldqual)->hex = false; }
#line 2404 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 37:
#line 204 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.fieldqual) = new FieldQuality((yyvsp[-6].str),(yyvsp[-3].i),(yyvsp[-1].i)); }
#line 2410 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 38:
#line 205 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { delete (yyvsp[-3].i); delete (yyvsp[-1].i); string errmsg = (yyvsp[-6].anysym)->getName()+": redefined as field"; yyerror(errmsg.c_str()); YYERROR; }
#line 2416 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 39:
#line 206 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.fieldqual) = (yyvsp[-1].fieldqual); (yyval.fieldqual)->signext = true; }
#line 2422 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 40:
#line 207 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.fieldqual) = (yyvsp[-1].fieldqual); (yyval.fieldqual)->flow = false; }
#line 2428 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 41:
#line 208 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.fieldqual) = (yyvsp[-1].fieldqual); (yyval.fieldqual)->hex = true; }
#line 2434 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 42:
#line 209 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.fieldqual) = (yyvsp[-1].fieldqual); (yyval.fieldqual)->hex = false; }
#line 2440 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 43:
#line 211 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { slgh->newSpace((yyvsp[-1].spacequal)); }
#line 2446 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 44:
#line 213 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.spacequal) = new SpaceQuality(*(yyvsp[0].str)); delete (yyvsp[0].str); }
#line 2452 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 45:
#line 214 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { string errmsg = (yyvsp[0].anysym)->getName()+": redefined as space"; yyerror(errmsg.c_str()); YYERROR; }
#line 2458 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 46:
#line 215 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.spacequal) = (yyvsp[-3].spacequal); (yyval.spacequal)->type = SpaceQuality::ramtype; }
#line 2464 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 47:
#line 216 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.spacequal) = (yyvsp[-3].spacequal); (yyval.spacequal)->type = SpaceQuality::registertype; }
#line 2470 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 48:
#line 217 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.spacequal) = (yyvsp[-3].spacequal); (yyval.spacequal)->size = *(yyvsp[0].i); delete (yyvsp[0].i); }
#line 2476 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 49:
#line 218 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.spacequal) = (yyvsp[-3].spacequal); (yyval.spacequal)->wordsize = *(yyvsp[0].i); delete (yyvsp[0].i); }
#line 2482 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 50:
#line 219 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.spacequal) = (yyvsp[-1].spacequal); (yyval.spacequal)->isdefault = true; }
#line 2488 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 51:
#line 221 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    {
               slgh->defineVarnodes((yyvsp[-8].spacesym),(yyvsp[-5].i),(yyvsp[-2].i),(yyvsp[-1].strlist)); }
#line 2495 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 52:
#line 223 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { yyerror("Parsed integer is too big (overflow)"); YYERROR; }
#line 2501 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 56:
#line 230 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    {
               slgh->defineBitrange((yyvsp[-7].str),(yyvsp[-5].varsym),(uint4)*(yyvsp[-3].i),(uint4)*(yyvsp[-1].i)); delete (yyvsp[-3].i); delete (yyvsp[-1].i); }
#line 2508 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 57:
#line 233 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { slgh->addUserOp((yyvsp[-1].strlist)); }
#line 2514 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 58:
#line 235 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { slgh->attachValues((yyvsp[-2].symlist),(yyvsp[-1].biglist)); }
#line 2520 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 59:
#line 237 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { slgh->attachNames((yyvsp[-2].symlist),(yyvsp[-1].strlist)); }
#line 2526 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 60:
#line 239 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { slgh->attachVarnodes((yyvsp[-2].symlist),(yyvsp[-1].symlist)); }
#line 2532 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 61:
#line 241 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { slgh->buildMacro((yyvsp[-3].macrosym),(yyvsp[-1].sem)); }
#line 2538 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 62:
#line 244 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    {  slgh->pushWith((yyvsp[-4].subtablesym),(yyvsp[-2].pateq),(yyvsp[-1].contop)); }
#line 2544 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 66:
#line 250 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { slgh->popWith(); }
#line 2550 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 67:
#line 252 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.subtablesym) = (SubtableSymbol *)0; }
#line 2556 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 68:
#line 253 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.subtablesym) = (yyvsp[0].subtablesym); }
#line 2562 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 69:
#line 254 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.subtablesym) = slgh->newTable((yyvsp[0].str)); }
#line 2568 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 70:
#line 257 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.pateq) = (PatternEquation *)0; }
#line 2574 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 71:
#line 258 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.pateq) = (yyvsp[0].pateq); }
#line 2580 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 72:
#line 261 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.macrosym) = slgh->createMacro((yyvsp[-3].str),(yyvsp[-1].strlist)); }
#line 2586 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 73:
#line 263 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.sectionstart) = slgh->standaloneSection((yyvsp[-1].sem)); }
#line 2592 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 74:
#line 264 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.sectionstart) = slgh->finalNamedSection((yyvsp[-2].sectionstart),(yyvsp[-1].sem)); }
#line 2598 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 75:
#line 265 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.sectionstart) = (SectionVector *)0; }
#line 2604 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 76:
#line 267 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { slgh->buildConstructor((yyvsp[-4].construct),(yyvsp[-2].pateq),(yyvsp[-1].contop),(yyvsp[0].sectionstart)); }
#line 2610 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 77:
#line 268 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { slgh->buildConstructor((yyvsp[-4].construct),(yyvsp[-2].pateq),(yyvsp[-1].contop),(yyvsp[0].sectionstart)); }
#line 2616 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 78:
#line 270 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.construct) = (yyvsp[-1].construct); (yyval.construct)->addSyntax(*(yyvsp[0].str)); delete (yyvsp[0].str); }
#line 2622 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 79:
#line 271 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.construct) = (yyvsp[-1].construct); (yyval.construct)->addSyntax(*(yyvsp[0].str)); delete (yyvsp[0].str); }
#line 2628 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 80:
#line 272 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.construct) = (yyvsp[-1].construct); if (slgh->isInRoot((yyvsp[-1].construct))) { (yyval.construct)->addSyntax(*(yyvsp[0].str)); delete (yyvsp[0].str); } else slgh->newOperand((yyvsp[-1].construct),(yyvsp[0].str)); }
#line 2634 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 81:
#line 273 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.construct) = (yyvsp[-1].construct); if (!slgh->isInRoot((yyvsp[-1].construct))) { yyerror("Unexpected '^' at start of print pieces");  YYERROR; } }
#line 2640 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 82:
#line 274 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.construct) = (yyvsp[-1].construct); }
#line 2646 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 83:
#line 275 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.construct) = (yyvsp[-1].construct); (yyval.construct)->addSyntax(*(yyvsp[0].str)); delete (yyvsp[0].str); }
#line 2652 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 84:
#line 276 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.construct) = (yyvsp[-1].construct); (yyval.construct)->addSyntax(*(yyvsp[0].str)); delete (yyvsp[0].str); }
#line 2658 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 85:
#line 277 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.construct) = (yyvsp[-1].construct); (yyval.construct)->addSyntax(string(" ")); }
#line 2664 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 86:
#line 278 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.construct) = (yyvsp[-1].construct); slgh->newOperand((yyvsp[-1].construct),(yyvsp[0].str)); }
#line 2670 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 87:
#line 280 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.construct) = slgh->createConstructor((yyvsp[-1].subtablesym)); }
#line 2676 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 88:
#line 281 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { SubtableSymbol *sym=slgh->newTable((yyvsp[-1].str)); (yyval.construct) = slgh->createConstructor(sym); }
#line 2682 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 89:
#line 282 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.construct) = slgh->createConstructor((SubtableSymbol *)0); }
#line 2688 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 90:
#line 283 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.construct) = (yyvsp[-1].construct); }
#line 2694 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 91:
#line 285 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.patexp) = new ConstantValue(*(yyvsp[0].big)); delete (yyvsp[0].big); }
#line 2700 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 92:
#line 287 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { if ((actionon==1)&&((yyvsp[0].famsym)->getType() != SleighSymbol::context_symbol))
                                             { string errmsg="Global symbol "+(yyvsp[0].famsym)->getName(); errmsg += " is not allowed in action expression"; yyerror(errmsg.c_str()); } (yyval.patexp) = (yyvsp[0].famsym)->getPatternValue(); }
#line 2707 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 93:
#line 290 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.patexp) = (yyvsp[0].specsym)->getPatternExpression(); }
#line 2713 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 94:
#line 291 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.patexp) = (yyvsp[-1].patexp); }
#line 2719 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 95:
#line 292 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.patexp) = new PlusExpression((yyvsp[-2].patexp),(yyvsp[0].patexp)); }
#line 2725 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 96:
#line 293 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.patexp) = new SubExpression((yyvsp[-2].patexp),(yyvsp[0].patexp)); }
#line 2731 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 97:
#line 294 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.patexp) = new MultExpression((yyvsp[-2].patexp),(yyvsp[0].patexp)); }
#line 2737 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 98:
#line 295 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.patexp) = new LeftShiftExpression((yyvsp[-2].patexp),(yyvsp[0].patexp)); }
#line 2743 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 99:
#line 296 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.patexp) = new RightShiftExpression((yyvsp[-2].patexp),(yyvsp[0].patexp)); }
#line 2749 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 100:
#line 297 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.patexp) = new AndExpression((yyvsp[-2].patexp),(yyvsp[0].patexp)); }
#line 2755 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 101:
#line 298 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.patexp) = new OrExpression((yyvsp[-2].patexp),(yyvsp[0].patexp)); }
#line 2761 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 102:
#line 299 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.patexp) = new XorExpression((yyvsp[-2].patexp),(yyvsp[0].patexp)); }
#line 2767 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 103:
#line 300 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.patexp) = new DivExpression((yyvsp[-2].patexp),(yyvsp[0].patexp)); }
#line 2773 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 104:
#line 301 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.patexp) = new MinusExpression((yyvsp[0].patexp)); }
#line 2779 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 105:
#line 302 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.patexp) = new NotExpression((yyvsp[0].patexp)); }
#line 2785 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 107:
#line 305 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.pateq) = new EquationAnd((yyvsp[-2].pateq),(yyvsp[0].pateq)); }
#line 2791 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 108:
#line 306 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.pateq) = new EquationOr((yyvsp[-2].pateq),(yyvsp[0].pateq)); }
#line 2797 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 109:
#line 307 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.pateq) = new EquationCat((yyvsp[-2].pateq),(yyvsp[0].pateq)); }
#line 2803 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 110:
#line 309 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.pateq) = new EquationLeftEllipsis((yyvsp[0].pateq)); }
#line 2809 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 112:
#line 312 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.pateq) = new EquationRightEllipsis((yyvsp[-1].pateq)); }
#line 2815 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 115:
#line 316 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.pateq) = (yyvsp[-1].pateq); }
#line 2821 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 116:
#line 318 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.pateq) = new EqualEquation((yyvsp[-2].famsym)->getPatternValue(),(yyvsp[0].patexp)); }
#line 2827 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 117:
#line 319 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.pateq) = new NotEqualEquation((yyvsp[-2].famsym)->getPatternValue(),(yyvsp[0].patexp)); }
#line 2833 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 118:
#line 320 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.pateq) = new LessEquation((yyvsp[-2].famsym)->getPatternValue(),(yyvsp[0].patexp)); }
#line 2839 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 119:
#line 321 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.pateq) = new LessEqualEquation((yyvsp[-2].famsym)->getPatternValue(),(yyvsp[0].patexp)); }
#line 2845 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 120:
#line 322 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.pateq) = new GreaterEquation((yyvsp[-2].famsym)->getPatternValue(),(yyvsp[0].patexp)); }
#line 2851 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 121:
#line 323 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.pateq) = new GreaterEqualEquation((yyvsp[-2].famsym)->getPatternValue(),(yyvsp[0].patexp)); }
#line 2857 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 122:
#line 324 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.pateq) = slgh->constrainOperand((yyvsp[-2].operandsym),(yyvsp[0].patexp)); 
                                          if ((yyval.pateq) == (PatternEquation *)0) 
                                            { string errmsg="Constraining currently undefined operand "+(yyvsp[-2].operandsym)->getName(); yyerror(errmsg.c_str()); } }
#line 2865 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 123:
#line 327 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.pateq) = new OperandEquation((yyvsp[0].operandsym)->getIndex()); slgh->selfDefine((yyvsp[0].operandsym)); }
#line 2871 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 124:
#line 328 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.pateq) = new UnconstrainedEquation((yyvsp[0].specsym)->getPatternExpression()); }
#line 2877 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 125:
#line 329 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.pateq) = slgh->defineInvisibleOperand((yyvsp[0].famsym)); }
#line 2883 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 126:
#line 330 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.pateq) = slgh->defineInvisibleOperand((yyvsp[0].subtablesym)); }
#line 2889 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 127:
#line 332 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.contop) = (vector<ContextChange *> *)0; }
#line 2895 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 128:
#line 333 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.contop) = (yyvsp[-1].contop); }
#line 2901 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 129:
#line 335 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.contop) = new vector<ContextChange *>; }
#line 2907 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 130:
#line 336 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.contop) = (yyvsp[-4].contop); if (!slgh->contextMod((yyvsp[-4].contop),(yyvsp[-3].contextsym),(yyvsp[-1].patexp))) { string errmsg="Cannot use 'inst_next' or 'inst_next2' to set context variable: "+(yyvsp[-3].contextsym)->getName(); yyerror(errmsg.c_str()); YYERROR; } }
#line 2913 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 131:
#line 337 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.contop) = (yyvsp[-7].contop); slgh->contextSet((yyvsp[-7].contop),(yyvsp[-4].famsym),(yyvsp[-2].contextsym)); }
#line 2919 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 132:
#line 338 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.contop) = (yyvsp[-7].contop); slgh->contextSet((yyvsp[-7].contop),(yyvsp[-4].specsym),(yyvsp[-2].contextsym)); }
#line 2925 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 133:
#line 339 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.contop) = (yyvsp[-4].contop); slgh->defineOperand((yyvsp[-3].operandsym),(yyvsp[-1].patexp)); }
#line 2931 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 134:
#line 340 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { string errmsg="Expecting context symbol, not "+*(yyvsp[0].str); delete (yyvsp[0].str); yyerror(errmsg.c_str()); YYERROR; }
#line 2937 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 135:
#line 342 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.sectionsym) = slgh->newSectionSymbol( *(yyvsp[-1].str) ); delete (yyvsp[-1].str); }
#line 2943 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 136:
#line 343 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.sectionsym) = (yyvsp[-1].sectionsym); }
#line 2949 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 137:
#line 345 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.sectionstart) = slgh->firstNamedSection((yyvsp[-1].sem),(yyvsp[0].sectionsym)); }
#line 2955 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 138:
#line 347 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.sectionstart) = (yyvsp[0].sectionstart); }
#line 2961 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 139:
#line 348 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.sectionstart) = slgh->nextNamedSection((yyvsp[-2].sectionstart),(yyvsp[-1].sem),(yyvsp[0].sectionsym)); }
#line 2967 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 140:
#line 350 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.sem) = (yyvsp[0].sem); if ((yyval.sem)->getOpvec().empty() && ((yyval.sem)->getResult() == (HandleTpl *)0)) slgh->recordNop(); }
#line 2973 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 141:
#line 351 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.sem) = slgh->setResultVarnode((yyvsp[-3].sem),(yyvsp[-1].varnode)); }
#line 2979 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 142:
#line 352 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.sem) = slgh->setResultStarVarnode((yyvsp[-4].sem),(yyvsp[-2].starqual),(yyvsp[-1].varnode)); }
#line 2985 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 143:
#line 353 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { string errmsg="Unknown export varnode: "+*(yyvsp[0].str); delete (yyvsp[0].str); yyerror(errmsg.c_str()); YYERROR; }
#line 2991 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 144:
#line 354 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { string errmsg="Unknown pointer varnode: "+*(yyvsp[0].str); delete (yyvsp[-1].starqual); delete (yyvsp[0].str); yyerror(errmsg.c_str()); YYERROR; }
#line 2997 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 145:
#line 356 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.sem) = new ConstructTpl(); }
#line 3003 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 146:
#line 357 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.sem) = (yyvsp[-1].sem); if (!(yyval.sem)->addOpList(*(yyvsp[0].stmt))) { delete (yyvsp[0].stmt); yyerror("Multiple delayslot declarations"); YYERROR; } delete (yyvsp[0].stmt); }
#line 3009 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 147:
#line 358 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.sem) = (yyvsp[-3].sem); slgh->pcode.newLocalDefinition((yyvsp[-1].str)); }
#line 3015 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 148:
#line 359 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.sem) = (yyvsp[-5].sem); slgh->pcode.newLocalDefinition((yyvsp[-3].str),*(yyvsp[-1].i)); delete (yyvsp[-1].i); }
#line 3021 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 149:
#line 361 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyvsp[-1].tree)->setOutput((yyvsp[-3].varnode)); (yyval.stmt) = ExprTree::toVector((yyvsp[-1].tree)); }
#line 3027 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 150:
#line 362 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.stmt) = slgh->pcode.newOutput(true,(yyvsp[-1].tree),(yyvsp[-3].str)); }
#line 3033 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 151:
#line 363 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.stmt) = slgh->pcode.newOutput(false,(yyvsp[-1].tree),(yyvsp[-3].str)); }
#line 3039 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 152:
#line 364 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.stmt) = slgh->pcode.newOutput(true,(yyvsp[-1].tree),(yyvsp[-5].str),*(yyvsp[-3].i)); delete (yyvsp[-3].i); }
#line 3045 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 153:
#line 365 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.stmt) = slgh->pcode.newOutput(true,(yyvsp[-1].tree),(yyvsp[-5].str),*(yyvsp[-3].i)); delete (yyvsp[-3].i); }
#line 3051 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 154:
#line 366 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.stmt) = (vector<OpTpl *> *)0; string errmsg = "Redefinition of symbol: "+(yyvsp[-1].specsym)->getName(); yyerror(errmsg.c_str()); YYERROR; }
#line 3057 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 155:
#line 367 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.stmt) = slgh->pcode.createStore((yyvsp[-4].starqual),(yyvsp[-3].tree),(yyvsp[-1].tree)); }
#line 3063 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 156:
#line 368 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.stmt) = slgh->pcode.createUserOpNoOut((yyvsp[-4].useropsym),(yyvsp[-2].param)); }
#line 3069 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 157:
#line 369 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.stmt) = slgh->pcode.assignBitRange((yyvsp[-8].varnode),(uint4)*(yyvsp[-6].i),(uint4)*(yyvsp[-4].i),(yyvsp[-1].tree)); delete (yyvsp[-6].i), delete (yyvsp[-4].i); }
#line 3075 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 158:
#line 370 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.stmt)=slgh->pcode.assignBitRange((yyvsp[-3].bitsym)->getParentSymbol()->getVarnode(),(yyvsp[-3].bitsym)->getBitOffset(),(yyvsp[-3].bitsym)->numBits(),(yyvsp[-1].tree)); }
#line 3081 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 159:
#line 371 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { delete (yyvsp[-3].varnode); delete (yyvsp[-1].i); yyerror("Illegal truncation on left-hand side of assignment"); YYERROR; }
#line 3087 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 160:
#line 372 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { delete (yyvsp[-3].varnode); delete (yyvsp[-1].i); yyerror("Illegal subpiece on left-hand side of assignment"); YYERROR; }
#line 3093 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 161:
#line 373 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.stmt) = slgh->pcode.createOpConst(BUILD,(yyvsp[-1].operandsym)->getIndex()); }
#line 3099 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 162:
#line 374 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.stmt) = slgh->createCrossBuild((yyvsp[-3].varnode),(yyvsp[-1].sectionsym)); }
#line 3105 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 163:
#line 375 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.stmt) = slgh->createCrossBuild((yyvsp[-3].varnode),slgh->newSectionSymbol(*(yyvsp[-1].str))); delete (yyvsp[-1].str); }
#line 3111 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 164:
#line 376 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.stmt) = slgh->pcode.createOpConst(DELAY_SLOT,*(yyvsp[-2].i)); delete (yyvsp[-2].i); }
#line 3117 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 165:
#line 377 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.stmt) = slgh->pcode.createOpNoOut(CPUI_BRANCH,new ExprTree((yyvsp[-1].varnode))); }
#line 3123 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 166:
#line 378 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.stmt) = slgh->pcode.createOpNoOut(CPUI_CBRANCH,new ExprTree((yyvsp[-1].varnode)),(yyvsp[-3].tree)); }
#line 3129 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 167:
#line 379 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.stmt) = slgh->pcode.createOpNoOut(CPUI_BRANCHIND,(yyvsp[-2].tree)); }
#line 3135 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 168:
#line 380 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.stmt) = slgh->pcode.createOpNoOut(CPUI_CALL,new ExprTree((yyvsp[-1].varnode))); }
#line 3141 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 169:
#line 381 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.stmt) = slgh->pcode.createOpNoOut(CPUI_CALLIND,(yyvsp[-2].tree)); }
#line 3147 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 170:
#line 382 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { yyerror("Must specify an indirect parameter for return"); YYERROR; }
#line 3153 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 171:
#line 383 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.stmt) = slgh->pcode.createOpNoOut(CPUI_RETURN,(yyvsp[-2].tree)); }
#line 3159 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 172:
#line 384 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.stmt) = slgh->createMacroUse((yyvsp[-4].macrosym),(yyvsp[-2].param)); }
#line 3165 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 173:
#line 385 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.stmt) = slgh->pcode.placeLabel( (yyvsp[0].labelsym) ); }
#line 3171 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 174:
#line 387 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = new ExprTree((yyvsp[0].varnode)); }
#line 3177 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 175:
#line 388 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createLoad((yyvsp[-1].starqual),(yyvsp[0].tree)); }
#line 3183 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 176:
#line 389 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = (yyvsp[-1].tree); }
#line 3189 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 177:
#line 390 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_ADD,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3195 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 178:
#line 391 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SUB,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3201 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 179:
#line 392 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_EQUAL,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3207 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 180:
#line 393 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_NOTEQUAL,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3213 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 181:
#line 394 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_LESS,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3219 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 182:
#line 395 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_LESSEQUAL,(yyvsp[0].tree),(yyvsp[-2].tree)); }
#line 3225 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 183:
#line 396 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_LESSEQUAL,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3231 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 184:
#line 397 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_LESS,(yyvsp[0].tree),(yyvsp[-2].tree)); }
#line 3237 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 185:
#line 398 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SLESS,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3243 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 186:
#line 399 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SLESSEQUAL,(yyvsp[0].tree),(yyvsp[-2].tree)); }
#line 3249 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 187:
#line 400 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SLESSEQUAL,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3255 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 188:
#line 401 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SLESS,(yyvsp[0].tree),(yyvsp[-2].tree)); }
#line 3261 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 189:
#line 402 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_2COMP,(yyvsp[0].tree)); }
#line 3267 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 190:
#line 403 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_NEGATE,(yyvsp[0].tree)); }
#line 3273 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 191:
#line 404 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_XOR,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3279 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 192:
#line 405 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_AND,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3285 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 193:
#line 406 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_OR,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3291 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 194:
#line 407 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_LEFT,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3297 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 195:
#line 408 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_RIGHT,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3303 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 196:
#line 409 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SRIGHT,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3309 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 197:
#line 410 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_MULT,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3315 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 198:
#line 411 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_DIV,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3321 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 199:
#line 412 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SDIV,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3327 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 200:
#line 413 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_REM,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3333 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 201:
#line 414 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SREM,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3339 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 202:
#line 415 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_BOOL_NEGATE,(yyvsp[0].tree)); }
#line 3345 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 203:
#line 416 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_BOOL_XOR,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3351 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 204:
#line 417 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_BOOL_AND,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3357 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 205:
#line 418 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_BOOL_OR,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3363 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 206:
#line 419 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_EQUAL,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3369 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 207:
#line 420 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_NOTEQUAL,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3375 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 208:
#line 421 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_LESS,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3381 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 209:
#line 422 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_LESS,(yyvsp[0].tree),(yyvsp[-2].tree)); }
#line 3387 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 210:
#line 423 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_LESSEQUAL,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3393 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 211:
#line 424 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_LESSEQUAL,(yyvsp[0].tree),(yyvsp[-2].tree)); }
#line 3399 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 212:
#line 425 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_ADD,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3405 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 213:
#line 426 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_SUB,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3411 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 214:
#line 427 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_MULT,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3417 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 215:
#line 428 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_DIV,(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 3423 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 216:
#line 429 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_NEG,(yyvsp[0].tree)); }
#line 3429 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 217:
#line 430 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_ABS,(yyvsp[-1].tree)); }
#line 3435 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 218:
#line 431 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_SQRT,(yyvsp[-1].tree)); }
#line 3441 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 219:
#line 432 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SEXT,(yyvsp[-1].tree)); }
#line 3447 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 220:
#line 433 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_ZEXT,(yyvsp[-1].tree)); }
#line 3453 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 221:
#line 434 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_CARRY,(yyvsp[-3].tree),(yyvsp[-1].tree)); }
#line 3459 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 222:
#line 435 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SCARRY,(yyvsp[-3].tree),(yyvsp[-1].tree)); }
#line 3465 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 223:
#line 436 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_INT_SBORROW,(yyvsp[-3].tree),(yyvsp[-1].tree)); }
#line 3471 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 224:
#line 437 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_FLOAT2FLOAT,(yyvsp[-1].tree)); }
#line 3477 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 225:
#line 438 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_INT2FLOAT,(yyvsp[-1].tree)); }
#line 3483 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 226:
#line 439 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_NAN,(yyvsp[-1].tree)); }
#line 3489 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 227:
#line 440 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_TRUNC,(yyvsp[-1].tree)); }
#line 3495 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 228:
#line 441 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_CEIL,(yyvsp[-1].tree)); }
#line 3501 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 229:
#line 442 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_FLOOR,(yyvsp[-1].tree)); }
#line 3507 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 230:
#line 443 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_FLOAT_ROUND,(yyvsp[-1].tree)); }
#line 3513 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 231:
#line 444 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_NEW,(yyvsp[-1].tree)); }
#line 3519 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 232:
#line 445 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_NEW,(yyvsp[-3].tree),(yyvsp[-1].tree)); }
#line 3525 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 233:
#line 446 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_POPCOUNT,(yyvsp[-1].tree)); }
#line 3531 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 234:
#line 447 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_COUNTLEADINGZEROS,(yyvsp[-1].tree)); }
#line 3537 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 235:
#line 448 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_COUNTLEADINGONES,(yyvsp[-1].tree)); }
#line 3543 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 236:
#line 449 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createOp(CPUI_SUBPIECE,new ExprTree((yyvsp[-3].specsym)->getVarnode()),new ExprTree((yyvsp[-1].varnode))); }
#line 3549 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 237:
#line 450 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createBitRange((yyvsp[-2].specsym),0,(uint4)(*(yyvsp[0].i) * 8)); delete (yyvsp[0].i); }
#line 3555 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 238:
#line 451 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createBitRange((yyvsp[-5].specsym),(uint4)*(yyvsp[-3].i),(uint4)*(yyvsp[-1].i)); delete (yyvsp[-3].i), delete (yyvsp[-1].i); }
#line 3561 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 239:
#line 452 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree)=slgh->pcode.createBitRange((yyvsp[0].bitsym)->getParentSymbol(),(yyvsp[0].bitsym)->getBitOffset(),(yyvsp[0].bitsym)->numBits()); }
#line 3567 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 240:
#line 453 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.tree) = slgh->pcode.createUserOp((yyvsp[-3].useropsym),(yyvsp[-1].param)); }
#line 3573 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 241:
#line 454 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { if ((*(yyvsp[-1].param)).size() < 2) { string errmsg = "Must at least two inputs to cpool"; yyerror(errmsg.c_str()); YYERROR; } (yyval.tree) = slgh->pcode.createVariadic(CPUI_CPOOLREF,(yyvsp[-1].param)); }
#line 3579 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 242:
#line 456 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.starqual) = new StarQuality; (yyval.starqual)->size = *(yyvsp[0].i); delete (yyvsp[0].i); (yyval.starqual)->id=ConstTpl((yyvsp[-3].spacesym)->getSpace()); }
#line 3585 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 243:
#line 457 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.starqual) = new StarQuality; (yyval.starqual)->size = 0; (yyval.starqual)->id=ConstTpl((yyvsp[-1].spacesym)->getSpace()); }
#line 3591 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 244:
#line 458 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.starqual) = new StarQuality; (yyval.starqual)->size = *(yyvsp[0].i); delete (yyvsp[0].i); (yyval.starqual)->id=ConstTpl(slgh->getDefaultCodeSpace()); }
#line 3597 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 245:
#line 459 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.starqual) = new StarQuality; (yyval.starqual)->size = 0; (yyval.starqual)->id=ConstTpl(slgh->getDefaultCodeSpace()); }
#line 3603 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 246:
#line 461 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { VarnodeTpl *sym = (yyvsp[0].startsym)->getVarnode(); (yyval.varnode) = new VarnodeTpl(ConstTpl(ConstTpl::j_curspace),sym->getOffset(),ConstTpl(ConstTpl::j_curspace_size)); delete sym; }
#line 3609 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 247:
#line 462 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { VarnodeTpl *sym = (yyvsp[0].endsym)->getVarnode(); (yyval.varnode) = new VarnodeTpl(ConstTpl(ConstTpl::j_curspace),sym->getOffset(),ConstTpl(ConstTpl::j_curspace_size)); delete sym; }
#line 3615 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 248:
#line 463 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { VarnodeTpl *sym = (yyvsp[0].next2sym)->getVarnode(); (yyval.varnode) = new VarnodeTpl(ConstTpl(ConstTpl::j_curspace),sym->getOffset(),ConstTpl(ConstTpl::j_curspace_size)); delete sym; }
#line 3621 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 249:
#line 464 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.varnode) = new VarnodeTpl(ConstTpl(ConstTpl::j_curspace),ConstTpl(ConstTpl::real,*(yyvsp[0].i)),ConstTpl(ConstTpl::j_curspace_size)); delete (yyvsp[0].i); }
#line 3627 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 250:
#line 465 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.varnode) = new VarnodeTpl(ConstTpl(ConstTpl::j_curspace),ConstTpl(ConstTpl::real,0),ConstTpl(ConstTpl::j_curspace_size)); yyerror("Parsed integer is too big (overflow)"); }
#line 3633 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 251:
#line 466 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.varnode) = (yyvsp[0].operandsym)->getVarnode(); (yyvsp[0].operandsym)->setCodeAddress(); }
#line 3639 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 252:
#line 467 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { AddrSpace *spc = (yyvsp[-1].spacesym)->getSpace(); (yyval.varnode) = new VarnodeTpl(ConstTpl(spc),ConstTpl(ConstTpl::real,*(yyvsp[-3].i)),ConstTpl(ConstTpl::real,spc->getAddrSize())); delete (yyvsp[-3].i); }
#line 3645 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 253:
#line 468 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.varnode) = new VarnodeTpl(ConstTpl(slgh->getConstantSpace()),ConstTpl(ConstTpl::j_relative,(yyvsp[0].labelsym)->getIndex()),ConstTpl(ConstTpl::real,sizeof(uintm))); (yyvsp[0].labelsym)->incrementRefCount(); }
#line 3651 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 254:
#line 469 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { string errmsg = "Unknown jump destination: "+*(yyvsp[0].str); delete (yyvsp[0].str); yyerror(errmsg.c_str()); YYERROR; }
#line 3657 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 255:
#line 471 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.varnode) = (yyvsp[0].specsym)->getVarnode(); }
#line 3663 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 256:
#line 472 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.varnode) = (yyvsp[0].varnode); }
#line 3669 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 257:
#line 473 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { string errmsg = "Unknown varnode parameter: "+*(yyvsp[0].str); delete (yyvsp[0].str); yyerror(errmsg.c_str()); YYERROR; }
#line 3675 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 258:
#line 474 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { string errmsg = "Subtable not attached to operand: "+(yyvsp[0].subtablesym)->getName(); yyerror(errmsg.c_str()); YYERROR; }
#line 3681 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 259:
#line 476 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.varnode) = new VarnodeTpl(ConstTpl(slgh->getConstantSpace()),ConstTpl(ConstTpl::real,*(yyvsp[0].i)),ConstTpl(ConstTpl::real,0)); delete (yyvsp[0].i); }
#line 3687 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 260:
#line 477 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.varnode) = new VarnodeTpl(ConstTpl(slgh->getConstantSpace()),ConstTpl(ConstTpl::real,0),ConstTpl(ConstTpl::real,0)); yyerror("Parsed integer is too big (overflow)"); }
#line 3693 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 261:
#line 478 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.varnode) = new VarnodeTpl(ConstTpl(slgh->getConstantSpace()),ConstTpl(ConstTpl::real,*(yyvsp[-2].i)),ConstTpl(ConstTpl::real,*(yyvsp[0].i))); delete (yyvsp[-2].i); delete (yyvsp[0].i); }
#line 3699 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 262:
#line 479 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.varnode) = slgh->pcode.addressOf((yyvsp[0].varnode),0); }
#line 3705 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 263:
#line 480 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.varnode) = slgh->pcode.addressOf((yyvsp[0].varnode),*(yyvsp[-1].i)); delete (yyvsp[-1].i); }
#line 3711 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 264:
#line 482 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.varnode) = (yyvsp[0].specsym)->getVarnode(); }
#line 3717 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 265:
#line 483 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { string errmsg = "Unknown assignment varnode: "+*(yyvsp[0].str); delete (yyvsp[0].str); yyerror(errmsg.c_str()); YYERROR; }
#line 3723 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 266:
#line 484 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { string errmsg = "Subtable not attached to operand: "+(yyvsp[0].subtablesym)->getName(); yyerror(errmsg.c_str()); YYERROR; }
#line 3729 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 267:
#line 486 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.labelsym) = (yyvsp[-1].labelsym); }
#line 3735 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 268:
#line 487 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.labelsym) = slgh->pcode.defineLabel( (yyvsp[-1].str) ); }
#line 3741 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 269:
#line 489 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.varnode) = (yyvsp[0].specsym)->getVarnode(); }
#line 3747 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 270:
#line 490 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.varnode) = slgh->pcode.addressOf((yyvsp[0].varnode),0); }
#line 3753 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 271:
#line 491 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.varnode) = slgh->pcode.addressOf((yyvsp[0].varnode),*(yyvsp[-1].i)); delete (yyvsp[-1].i); }
#line 3759 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 272:
#line 492 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.varnode) = new VarnodeTpl(ConstTpl(slgh->getConstantSpace()),ConstTpl(ConstTpl::real,*(yyvsp[-2].i)),ConstTpl(ConstTpl::real,*(yyvsp[0].i))); delete (yyvsp[-2].i); delete (yyvsp[0].i); }
#line 3765 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 273:
#line 493 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { string errmsg="Unknown export varnode: "+*(yyvsp[0].str); delete (yyvsp[0].str); yyerror(errmsg.c_str()); YYERROR; }
#line 3771 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 274:
#line 494 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { string errmsg = "Subtable not attached to operand: "+(yyvsp[0].subtablesym)->getName(); yyerror(errmsg.c_str()); YYERROR; }
#line 3777 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 275:
#line 496 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.famsym) = (yyvsp[0].valuesym); }
#line 3783 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 276:
#line 497 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.famsym) = (yyvsp[0].valuemapsym); }
#line 3789 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 277:
#line 498 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.famsym) = (yyvsp[0].contextsym); }
#line 3795 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 278:
#line 499 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.famsym) = (yyvsp[0].namesym); }
#line 3801 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 279:
#line 500 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.famsym) = (yyvsp[0].varlistsym); }
#line 3807 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 280:
#line 502 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.specsym) = (yyvsp[0].varsym); }
#line 3813 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 281:
#line 503 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.specsym) = (yyvsp[0].specsym); }
#line 3819 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 282:
#line 504 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.specsym) = (yyvsp[0].operandsym); }
#line 3825 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 283:
#line 505 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.specsym) = (yyvsp[0].startsym); }
#line 3831 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 284:
#line 506 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.specsym) = (yyvsp[0].endsym); }
#line 3837 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 285:
#line 507 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.specsym) = (yyvsp[0].next2sym); }
#line 3843 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 286:
#line 509 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.str) = new string; (*(yyval.str)) += (yyvsp[0].ch); }
#line 3849 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 287:
#line 510 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.str) = (yyvsp[-1].str); (*(yyval.str)) += (yyvsp[0].ch); }
#line 3855 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 288:
#line 512 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.biglist) = (yyvsp[-1].biglist); }
#line 3861 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 289:
#line 513 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.biglist) = new vector<intb>; (yyval.biglist)->push_back(intb(*(yyvsp[0].i))); delete (yyvsp[0].i); }
#line 3867 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 290:
#line 514 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.biglist) = new vector<intb>; (yyval.biglist)->push_back(-intb(*(yyvsp[0].i))); delete (yyvsp[0].i); }
#line 3873 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 291:
#line 516 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.biglist) = new vector<intb>; (yyval.biglist)->push_back(intb(*(yyvsp[0].i))); delete (yyvsp[0].i); }
#line 3879 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 292:
#line 517 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.biglist) = new vector<intb>; (yyval.biglist)->push_back(-intb(*(yyvsp[0].i))); delete (yyvsp[0].i); }
#line 3885 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 293:
#line 518 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { if (*(yyvsp[0].str)!="_") { string errmsg = "Expecting integer but saw: "+*(yyvsp[0].str); delete (yyvsp[0].str); yyerror(errmsg.c_str()); YYERROR; }
                                  (yyval.biglist) = new vector<intb>; (yyval.biglist)->push_back((intb)0xBADBEEF); delete (yyvsp[0].str); }
#line 3892 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 294:
#line 520 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.biglist) = (yyvsp[-1].biglist); (yyval.biglist)->push_back(intb(*(yyvsp[0].i))); delete (yyvsp[0].i); }
#line 3898 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 295:
#line 521 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.biglist) = (yyvsp[-2].biglist); (yyval.biglist)->push_back(-intb(*(yyvsp[0].i))); delete (yyvsp[0].i); }
#line 3904 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 296:
#line 522 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { if (*(yyvsp[0].str)!="_") { string errmsg = "Expecting integer but saw: "+*(yyvsp[0].str); delete (yyvsp[0].str); yyerror(errmsg.c_str()); YYERROR; }
                                  (yyval.biglist) = (yyvsp[-1].biglist); (yyval.biglist)->push_back((intb)0xBADBEEF); delete (yyvsp[0].str); }
#line 3911 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 297:
#line 525 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.strlist) = (yyvsp[-1].strlist); }
#line 3917 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 298:
#line 526 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.strlist) = new vector<string>; (yyval.strlist)->push_back(*(yyvsp[0].str)); delete (yyvsp[0].str); }
#line 3923 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 299:
#line 528 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.strlist) = new vector<string>; (yyval.strlist)->push_back( *(yyvsp[0].str) ); delete (yyvsp[0].str); }
#line 3929 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 300:
#line 529 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.strlist) = (yyvsp[-1].strlist); (yyval.strlist)->push_back(*(yyvsp[0].str)); delete (yyvsp[0].str); }
#line 3935 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 301:
#line 530 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { string errmsg = (yyvsp[0].anysym)->getName()+": redefined"; yyerror(errmsg.c_str()); YYERROR; }
#line 3941 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 302:
#line 532 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.strlist) = (yyvsp[-1].strlist); }
#line 3947 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 303:
#line 534 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.strlist) = new vector<string>; (yyval.strlist)->push_back( *(yyvsp[0].str) ); delete (yyvsp[0].str); }
#line 3953 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 304:
#line 535 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.strlist) = new vector<string>; (yyval.strlist)->push_back( (yyvsp[0].anysym)->getName() ); }
#line 3959 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 305:
#line 536 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.strlist) = (yyvsp[-1].strlist); (yyval.strlist)->push_back(*(yyvsp[0].str)); delete (yyvsp[0].str); }
#line 3965 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 306:
#line 537 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.strlist) = (yyvsp[-1].strlist); (yyval.strlist)->push_back((yyvsp[0].anysym)->getName()); }
#line 3971 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 307:
#line 539 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.symlist) = (yyvsp[-1].symlist); }
#line 3977 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 308:
#line 540 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.symlist) = new vector<SleighSymbol *>; (yyval.symlist)->push_back((yyvsp[0].valuesym)); }
#line 3983 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 309:
#line 541 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.symlist) = new vector<SleighSymbol *>; (yyval.symlist)->push_back((yyvsp[0].contextsym)); }
#line 3989 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 310:
#line 543 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.symlist) = new vector<SleighSymbol *>; (yyval.symlist)->push_back( (yyvsp[0].valuesym) ); }
#line 3995 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 311:
#line 544 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.symlist) = new vector<SleighSymbol *>; (yyval.symlist)->push_back((yyvsp[0].contextsym)); }
#line 4001 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 312:
#line 545 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.symlist) = (yyvsp[-1].symlist); (yyval.symlist)->push_back((yyvsp[0].valuesym)); }
#line 4007 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 313:
#line 546 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.symlist) = (yyvsp[-1].symlist); (yyval.symlist)->push_back((yyvsp[0].contextsym)); }
#line 4013 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 314:
#line 547 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { string errmsg = *(yyvsp[0].str)+": is not a value pattern"; delete (yyvsp[0].str); yyerror(errmsg.c_str()); YYERROR; }
#line 4019 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 315:
#line 549 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.symlist) = (yyvsp[-1].symlist); }
#line 4025 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 316:
#line 550 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.symlist) = new vector<SleighSymbol *>; (yyval.symlist)->push_back((yyvsp[0].varsym)); }
#line 4031 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 317:
#line 552 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.symlist) = new vector<SleighSymbol *>; (yyval.symlist)->push_back((yyvsp[0].varsym)); }
#line 4037 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 318:
#line 553 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { if (*(yyvsp[0].str)!="_") { string errmsg = *(yyvsp[0].str)+": is not a varnode symbol"; delete (yyvsp[0].str); yyerror(errmsg.c_str()); YYERROR; }
				  (yyval.symlist) = new vector<SleighSymbol *>; (yyval.symlist)->push_back((SleighSymbol *)0); delete (yyvsp[0].str); }
#line 4044 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 319:
#line 555 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.symlist) = (yyvsp[-1].symlist); (yyval.symlist)->push_back((yyvsp[0].varsym)); }
#line 4050 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 320:
#line 556 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { if (*(yyvsp[0].str)!="_") { string errmsg = *(yyvsp[0].str)+": is not a varnode symbol"; delete (yyvsp[0].str); yyerror(errmsg.c_str()); YYERROR; }
                                  (yyval.symlist) = (yyvsp[-1].symlist); (yyval.symlist)->push_back((SleighSymbol *)0); delete (yyvsp[0].str); }
#line 4057 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 321:
#line 559 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.param) = new vector<ExprTree *>; }
#line 4063 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 322:
#line 560 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.param) = new vector<ExprTree *>; (yyval.param)->push_back((yyvsp[0].tree)); }
#line 4069 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 323:
#line 561 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.param) = (yyvsp[-2].param); (yyval.param)->push_back((yyvsp[0].tree)); }
#line 4075 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 324:
#line 563 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.strlist) = new vector<string>; }
#line 4081 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 325:
#line 564 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.strlist) = new vector<string>; (yyval.strlist)->push_back(*(yyvsp[0].str)); delete (yyvsp[0].str); }
#line 4087 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 326:
#line 565 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.strlist) = (yyvsp[-2].strlist); (yyval.strlist)->push_back(*(yyvsp[0].str)); delete (yyvsp[0].str); }
#line 4093 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 327:
#line 567 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.anysym) = (yyvsp[0].spacesym); }
#line 4099 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 328:
#line 568 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.anysym) = (yyvsp[0].sectionsym); }
#line 4105 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 329:
#line 569 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.anysym) = (yyvsp[0].tokensym); }
#line 4111 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 330:
#line 570 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.anysym) = (yyvsp[0].useropsym); }
#line 4117 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 331:
#line 571 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.anysym) = (yyvsp[0].macrosym); }
#line 4123 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 332:
#line 572 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.anysym) = (yyvsp[0].subtablesym); }
#line 4129 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 333:
#line 573 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.anysym) = (yyvsp[0].valuesym); }
#line 4135 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 334:
#line 574 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.anysym) = (yyvsp[0].valuemapsym); }
#line 4141 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 335:
#line 575 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.anysym) = (yyvsp[0].contextsym); }
#line 4147 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 336:
#line 576 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.anysym) = (yyvsp[0].namesym); }
#line 4153 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 337:
#line 577 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.anysym) = (yyvsp[0].varsym); }
#line 4159 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 338:
#line 578 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.anysym) = (yyvsp[0].varlistsym); }
#line 4165 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 339:
#line 579 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.anysym) = (yyvsp[0].operandsym); }
#line 4171 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 340:
#line 580 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.anysym) = (yyvsp[0].startsym); }
#line 4177 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 341:
#line 581 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.anysym) = (yyvsp[0].endsym); }
#line 4183 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 342:
#line 582 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.anysym) = (yyvsp[0].next2sym); }
#line 4189 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;

  case 343:
#line 583 "src/decompile/cpp/slghparse.y" /* yacc.c:1652  */
    { (yyval.anysym) = (yyvsp[0].bitsym); }
#line 4195 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
    break;


#line 4199 "src/decompile/cpp/slghparse.cc" /* yacc.c:1652  */
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
  return yyresult;
}
#line 585 "src/decompile/cpp/slghparse.y" /* yacc.c:1918  */


int yyerror(const char *s)

{
  slgh->reportError(s);
  return 0;
}
