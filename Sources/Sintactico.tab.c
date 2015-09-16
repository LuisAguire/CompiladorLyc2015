/* A Bison parser, made by GNU Bison 3.0.2.  */

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "Sources/Sintactico.y" /* yacc.c:339  */

int yylex(void);
void yyerror(const char *);
#include "TablaSimbolos.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "System.h"
using namespace std;
extern FILE *yyin;
extern int lineCounter;
extern char *yytext;
bool compileSucess=false;
#define PRINT(x)			cout<<"Sintactico: "<<x<<endl;

#line 82 "Sintactico.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "Sintactico.tab.h".  */
#ifndef YY_YY_SINTACTICO_TAB_H_INCLUDED
# define YY_YY_SINTACTICO_TAB_H_INCLUDED
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
    INICIO_PROG = 258,
    FIN_PROG = 259,
    WHILE = 260,
    DO = 261,
    ENDWHILE = 262,
    FUNCION_LONG = 263,
    IN = 264,
    AND = 265,
    OR = 266,
    NOT = 267,
    MAYOR = 268,
    MAYOR_IGUAL = 269,
    MENOR = 270,
    MENOR_IGUAL = 271,
    IGUAL = 272,
    DISTINTO = 273,
    MAS = 274,
    MENOS = 275,
    MUL = 276,
    DIV = 277,
    MAS_STRING = 278,
    ASIGNACION = 279,
    PARENT_ABRE = 280,
    PARENT_CIERRA = 281,
    WRITE = 282,
    READ = 283,
    IF = 284,
    THEN = 285,
    ENDIF = 286,
    ELSE = 287,
    COMA = 288,
    REAL = 289,
    INT = 290,
    STRING = 291,
    CORCHETE_ABRE = 292,
    CORCHETE_CIERRA = 293,
    DOS_PUNTOS = 294,
    PUNTO = 295,
    VAR = 296,
    ENDVAR = 297,
    CONCATENACION = 298,
    CONSTANTE_STRING = 299,
    CONSTANTE_INT = 300,
    CONSTANTE_REAL = 301,
    COMENTARIO = 302,
    COMENTARIO2 = 303,
    CONST = 304,
    ID = 305,
    END_OF_FILE = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTACTICO_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 185 "Sintactico.tab.c" /* yacc.c:358  */

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
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   336

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  145

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    75,    75,    76,    77,    78,    83,    84,    86,    87,
      88,    89,    90,    91,    94,    94,    96,    97,    96,   101,
     102,   104,   105,   106,   107,   109,   111,   112,   113,   114,
     115,   116,   118,   119,   120,   121,   122,   124,   128,   129,
     131,   132,   133,   135,   136,   137,   139,   141,   142,   145,
     147,   149,   150,   154,   156,   157,   158,   159,   161,   163,
     165,   167,   168,   170,   171,   175,   176,   177,   180,   181,
     182,   183,   184,   185,   187,   188,   189,   191,   193
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INICIO_PROG", "FIN_PROG", "WHILE", "DO",
  "ENDWHILE", "FUNCION_LONG", "IN", "AND", "OR", "NOT", "MAYOR",
  "MAYOR_IGUAL", "MENOR", "MENOR_IGUAL", "IGUAL", "DISTINTO", "MAS",
  "MENOS", "MUL", "DIV", "MAS_STRING", "ASIGNACION", "PARENT_ABRE",
  "PARENT_CIERRA", "WRITE", "READ", "IF", "THEN", "ENDIF", "ELSE", "COMA",
  "REAL", "INT", "STRING", "CORCHETE_ABRE", "CORCHETE_CIERRA",
  "DOS_PUNTOS", "PUNTO", "VAR", "ENDVAR", "CONCATENACION",
  "CONSTANTE_STRING", "CONSTANTE_INT", "CONSTANTE_REAL", "COMENTARIO",
  "COMENTARIO2", "CONST", "ID", "END_OF_FILE", "$accept", "inicio",
  "lista_sentencia", "sentencia", "iteracion", "$@1", "$@2", "$@3",
  "lista_expresiones", "cond", "exp_logica", "comp", "exp",
  "funcion_Longitud", "valores_func_long", "termino", "factor",
  "asignacion", "impresion", "ingreso", "decisionPrimera", "decision",
  "declaracion", "lista_declaraciones", "declaracion_especial",
  "tipos_datos_varios", "ids_datos_varios", "tipos_datos", "ids_datos",
  "cte", "concatenacion", "tipo", "cadena", "IID", YY_NULLPTR
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
     305,   306
};
# endif

#define YYPACT_NINF -18

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-18)))

#define YYTABLE_NINF -78

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,   113,    24,    23,    99,    51,    43,    43,   -11,    99,
     100,    49,   -18,   -18,   -18,   123,   -18,   -18,     7,   -18,
      20,   -18,   -18,   -18,   -18,   286,   -18,   156,   -18,    52,
      62,    -8,   -18,   -18,    43,    80,    59,    84,     1,    57,
       3,    66,     7,    62,   -18,    82,   -18,   -18,   -18,    22,
     -17,   -18,    71,   -11,    64,   -18,   -13,   -13,   -13,   -13,
     199,    65,   166,   -10,   -10,    43,   -10,   -18,   -18,    43,
      43,   -18,   -18,   -18,   -18,   -18,   -18,    43,   -18,    43,
     -18,   -18,    75,    89,   -18,   -18,   -11,    86,   -18,   -18,
     -18,    20,   -18,    20,   -18,   -18,   -18,   286,   -18,    95,
     -18,   -18,   -18,   -18,   -18,     7,   -18,   -18,   286,   -18,
     -18,     7,   110,     7,     5,   -18,    22,   -18,   -11,   -18,
     209,   -18,   243,    43,    43,   127,   -18,   117,   129,   -18,
     -18,    12,     7,     7,   -18,   -18,   -11,    43,   -18,   -18,
       7,   150,   286,   253,   -18
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,    66,    65,    78,     0,     6,     8,    13,    36,
      34,    42,    10,    11,    12,     0,     9,     0,    44,    35,
       0,    43,     1,     5,     0,     0,    23,     0,    43,     0,
       0,    43,    47,    48,    49,     0,    74,    75,    76,     0,
       0,    56,     0,     0,     0,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,    14,     0,
       0,    30,    26,    31,    27,    29,    28,     0,    16,     0,
      45,    50,     0,    61,    53,    57,     0,     0,    54,     4,
      67,    32,    43,    33,    40,    41,    51,     0,     3,     0,
      77,    73,    72,    68,    70,    46,    69,    71,     0,    21,
      22,    25,     0,    38,     0,    59,     0,    55,     0,    58,
       0,     2,     0,     0,     0,     0,    62,     0,    63,    52,
      15,     0,    19,    39,    37,    60,     0,     0,    17,    64,
      20,     0,     0,     0,    18
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -18,   -18,   -12,   -14,   -18,   -18,   -18,   -18,   -18,   157,
      -6,   -18,     2,   -18,   -18,    27,    32,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,   115,   -18,   -18,    56,    39,   -18,
     -18,    -3,    14,    -4
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    15,    16,    17,   108,   112,   141,   131,    35,
      36,    77,    18,    19,   114,    20,    21,    22,    23,    24,
      25,    26,    27,    50,    51,    52,   119,    82,   127,    28,
      29,    83,    30,    31
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      38,    55,    41,    41,    44,    41,    37,    53,    40,    42,
      78,    37,     6,    60,     1,    62,    65,    46,    47,    48,
      49,    43,    56,    57,    32,    84,    56,    57,    67,    80,
      41,    90,    12,    13,   100,    66,    37,    14,   124,    14,
      14,    58,    59,   125,    66,   137,    55,    86,    55,    88,
     138,     5,    92,    92,    92,    92,    46,    47,    48,   102,
     104,    41,   107,   109,   110,    41,    41,   105,     6,    69,
      70,    37,    37,    41,    33,    41,    39,   101,   103,   111,
     106,   113,   117,    91,    93,   120,    68,    11,    12,    13,
      94,    95,   -77,    14,    79,    63,   122,    71,    72,    73,
      74,    75,    76,    56,    57,    64,    55,     5,    55,    66,
      87,    34,    81,   115,   128,    89,    98,     3,     4,    41,
      41,     5,   116,   118,     6,   132,   133,    54,     4,    55,
     143,     5,   128,    41,    46,    47,    48,    49,     6,   140,
       7,     8,     9,    11,    12,    13,   121,   123,     6,    14,
       7,     8,     9,   134,    10,   135,   142,    11,    12,    13,
      61,     4,   136,    14,     5,    85,    45,    11,    12,    13,
      99,     4,   126,    14,     5,   139,     0,     0,     0,     0,
       0,     6,     0,     7,     8,     9,     0,     0,     0,     0,
       0,     6,     0,     7,     8,     9,     0,     0,     0,     0,
      11,    12,    13,     0,     4,     0,    14,     5,     0,     0,
      11,    12,    13,     0,     4,     0,    14,     5,     0,     0,
       0,     0,     0,     0,     6,     0,     7,     8,     9,     0,
      96,    97,     0,     0,     6,     0,     7,     8,     9,     0,
     129,     0,     0,    11,    12,    13,     0,     0,     4,    14,
     130,     5,     0,    11,    12,    13,     0,     0,     4,    14,
     144,     5,     0,     0,     0,     0,     0,     0,     6,     0,
       7,     8,     9,     0,     0,     0,     0,     0,     6,     0,
       7,     8,     9,     0,     0,     0,     0,    11,    12,    13,
       0,     4,     0,    14,     5,     0,     0,    11,    12,    13,
       0,     0,     0,    14,     0,     0,     0,     0,     0,     0,
       0,     6,     0,     7,     8,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,    13,     0,     0,     0,    14
};

static const yytype_int16 yycheck[] =
{
       4,    15,     6,     7,     8,     9,     4,    10,     6,     7,
       9,     9,    25,    25,     3,    27,    24,    34,    35,    36,
      37,     7,    19,    20,     0,    42,    19,    20,    34,    26,
      34,    44,    45,    46,    44,    43,    34,    50,    33,    50,
      50,    21,    22,    38,    43,    33,    60,    50,    62,    53,
      38,     8,    56,    57,    58,    59,    34,    35,    36,    63,
      64,    65,    66,    69,    70,    69,    70,    65,    25,    10,
      11,    69,    70,    77,    51,    79,    25,    63,    64,    77,
      66,    79,    86,    56,    57,    97,     6,    44,    45,    46,
      58,    59,    43,    50,    37,    43,   108,    13,    14,    15,
      16,    17,    18,    19,    20,    43,   120,     8,   122,    43,
      39,    12,    30,    38,   118,    51,    51,     4,     5,   123,
     124,     8,    33,    37,    25,   123,   124,     4,     5,   143,
     142,     8,   136,   137,    34,    35,    36,    37,    25,   137,
      27,    28,    29,    44,    45,    46,    51,    37,    25,    50,
      27,    28,    29,    26,    41,    38,     6,    44,    45,    46,
       4,     5,    33,    50,     8,    50,     9,    44,    45,    46,
       4,     5,   116,    50,     8,   136,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      44,    45,    46,    -1,     5,    -1,    50,     8,    -1,    -1,
      44,    45,    46,    -1,     5,    -1,    50,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    -1,
      31,    32,    -1,    -1,    25,    -1,    27,    28,    29,    -1,
      31,    -1,    -1,    44,    45,    46,    -1,    -1,     5,    50,
       7,     8,    -1,    44,    45,    46,    -1,    -1,     5,    50,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    -1,    -1,    -1,    -1,    44,    45,    46,
      -1,     5,    -1,    50,     8,    -1,    -1,    44,    45,    46,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    -1,    -1,    -1,    50
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    53,     4,     5,     8,    25,    27,    28,    29,
      41,    44,    45,    46,    50,    54,    55,    56,    64,    65,
      67,    68,    69,    70,    71,    72,    73,    74,    81,    82,
      84,    85,     0,    51,    12,    61,    62,    64,    85,    25,
      64,    85,    64,    84,    85,    61,    34,    35,    36,    37,
      75,    76,    77,    83,     4,    55,    19,    20,    21,    22,
      54,     4,    54,    43,    43,    24,    43,    62,     6,    10,
      11,    13,    14,    15,    16,    17,    18,    63,     9,    37,
      26,    30,    79,    83,    42,    76,    83,    39,    85,    51,
      44,    67,    85,    67,    68,    68,    31,    32,    51,     4,
      44,    84,    85,    84,    85,    64,    84,    85,    57,    62,
      62,    64,    58,    64,    66,    38,    33,    85,    37,    78,
      54,    51,    54,    37,    33,    38,    79,    80,    85,    31,
       7,    60,    64,    64,    26,    38,    33,    33,    38,    80,
      64,    59,     6,    54,     7
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    53,    53,    54,    54,    55,    55,
      55,    55,    55,    55,    57,    56,    58,    59,    56,    60,
      60,    61,    61,    61,    61,    62,    63,    63,    63,    63,
      63,    63,    64,    64,    64,    64,    64,    65,    66,    66,
      67,    67,    67,    68,    68,    68,    69,    70,    70,    71,
      72,    73,    73,    74,    75,    75,    75,    75,    76,    77,
      78,    79,    79,    80,    80,    81,    81,    81,    82,    82,
      82,    82,    82,    82,    83,    83,    83,    84,    85
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     4,     4,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     0,     6,     0,     0,    11,     1,
       3,     3,     3,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     1,     1,     6,     1,     3,
       3,     3,     1,     1,     1,     3,     3,     2,     2,     2,
       3,     3,     5,     3,     2,     3,     1,     2,     3,     3,
       3,     1,     3,     1,     3,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 75 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Inicio de programa completo"); compileSucess=true; TS_INICIO_DECLARACIONES;}
#line 1409 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 76 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Inicio de Programa solo declaracion");compileSucess=true; TS_INICIO_DECLARACIONES;}
#line 1415 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 77 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Inicio de Programa solo sentencias");compileSucess=true; TS_FIN_DECLARACIONES;}
#line 1421 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 78 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Inicio de programa vacio");compileSucess=true;TS_FIN_DECLARACIONES;}
#line 1427 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 83 "Sources/Sintactico.y" /* yacc.c:1646  */
    { PRINT("Sentencia"); }
#line 1433 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 84 "Sources/Sintactico.y" /* yacc.c:1646  */
    { PRINT("Lista de Sentencias"); }
#line 1439 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 86 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Sentencia loop");}
#line 1445 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 87 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Sentencia condicion");}
#line 1451 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 88 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Sentencia igualacion");}
#line 1457 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 89 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Sentencia standard output");}
#line 1463 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 90 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Sentencia standard input");}
#line 1469 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 91 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Sentencia exp");}
#line 1475 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 94 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("While");}
#line 1481 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 95 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("While step");}
#line 1487 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 96 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("WhileIN cabecera");}
#line 1493 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 97 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("WhileIN expresiones");}
#line 1499 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 98 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("WhileIN sentencias");}
#line 1505 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 101 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("WhileIN expresion");}
#line 1511 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 102 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("WhileIN expresiones");}
#line 1517 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 104 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Expresion logica and");}
#line 1523 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 105 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Expresion logica or");}
#line 1529 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 106 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Expresion logica");}
#line 1535 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 107 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Expresion logica NOT");}
#line 1541 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 109 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Expresion logica");}
#line 1547 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 111 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Comparacion mayor igual");}
#line 1553 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 112 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Comparacion menor igual");}
#line 1559 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 113 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Comparacion distinto");}
#line 1565 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 114 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Comparacion igual");}
#line 1571 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 115 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Comparacion mayor");}
#line 1577 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 116 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Comparacion menor");}
#line 1583 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 118 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Expresion suma termino");}
#line 1589 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 119 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Expresion menos termino");}
#line 1595 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 120 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Expresion termino");}
#line 1601 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 121 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Expresion concatenacion");}
#line 1607 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 126 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Funcion longitud");}
#line 1613 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 128 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Funcion longitud valor final");}
#line 1619 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 129 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Funcion longitud valor sub i");}
#line 1625 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 131 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Termino por factor");}
#line 1631 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 132 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Termino div factor");}
#line 1637 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 133 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Termino factor");}
#line 1643 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 135 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Identificador");}
#line 1649 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 136 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Constante");}
#line 1655 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 137 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Expresion entre parentesis");}
#line 1661 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 139 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Asignacion");}
#line 1667 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 141 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Standard output Identificador");}
#line 1673 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 142 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Standard output constante");}
#line 1679 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 145 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Standard input");}
#line 1685 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 147 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("if sin else aux")}
#line 1691 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 149 "Sources/Sintactico.y" /* yacc.c:1646  */
    { PRINT("if sin else body");}
#line 1697 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 150 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("if con else\n");}
#line 1703 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 154 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Declaraciones de variables"); TS_FIN_DECLARACIONES;}
#line 1709 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 156 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Declaracion sub i");}
#line 1715 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 157 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Declaracion de variabl"); TS_FIN_DECLARACION_ACTUAL;}
#line 1721 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 158 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Declaracion de variable especial"); TS_FIN_DECLARACION_ACTUAL;}
#line 1727 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 159 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Declaracion especial sub i");}
#line 1733 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 161 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Declaracion especial tipo dos puntos ids"); TS_FIN_DECLARACION_ACTUAL;}
#line 1739 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 163 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Declaracion especial corchete tipos corchete");}
#line 1745 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 165 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Declaracion especial corchete ids corchete");}
#line 1751 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 167 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Declaracion especial tipo");}
#line 1757 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 168 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Declaracion especial tipo coma");}
#line 1763 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 170 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Declaracion especial id");}
#line 1769 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 171 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Declaracion especial id coma");}
#line 1775 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 175 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Constante real");}
#line 1781 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 176 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Constante entera");}
#line 1787 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 177 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Constante string");}
#line 1793 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 180 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Concatena Cadena ");}
#line 1799 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 181 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Concatena Identificador Cadena");}
#line 1805 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 182 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Concatena Cadena Identificador");}
#line 1811 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 183 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Concatena Identificador Identificador\n");}
#line 1817 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 187 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("tipo real"); TS_ADD_TIPO(yytext);}
#line 1823 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 188 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("tipo entero"); TS_ADD_TIPO(yytext);}
#line 1829 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 189 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("tipo string"); TS_ADD_TIPO(yytext);}
#line 1835 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 191 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Constante string");}
#line 1841 "Sintactico.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 193 "Sources/Sintactico.y" /* yacc.c:1646  */
    {PRINT("Id"); TS_ADD_ID(yytext,lineCounter);}
#line 1847 "Sintactico.tab.c" /* yacc.c:1646  */
    break;


#line 1851 "Sintactico.tab.c" /* yacc.c:1646  */
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
#line 195 "Sources/Sintactico.y" /* yacc.c:1906  */



int main(int argc,char **argv)
{
	cout<<APP_ABOUT<<endl;	
	if(argc<2)
	{
		cout<<"Ingrese el archivo a compilar."<<endl;
		return -1;
	}
	yyin=fopen(argv[1],"r");
	if(yyin==NULL)
	{
		cout<<"Error abriendo archivo: "<<argv[1]<<endl;
		return -1;
	}
	
	yyparse();
	
	return 0;
}

void yyerror(const char *error)
{
	if(compileSucess)
	{
		PRINT("Compilacion OK");
		fclose(yyin);
		exit(0);
	}
	PRINT(error<<" line number: "<<lineCounter);
}
