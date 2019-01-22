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


/* Substitute the variable and function names.  */
#define yyparse         yyansi_cparse
#define yylex           yyansi_clex
#define yyerror         yyansi_cerror
#define yydebug         yyansi_cdebug
#define yynerrs         yyansi_cnerrs

#define yylval          yyansi_clval
#define yychar          yyansi_cchar

/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */


/*
 * This parser is based on:
 *
 * c5.y, a ANSI-C grammar written by James A. Roskind.
 * "Portions Copyright (c) 1989, 1990 James A. Roskind".
 * (http://www.idiom.com/free-compilers/,
 * ftp://ftp.infoseek.com/ftp/pub/c++grammar/,
 * ftp://ftp.sra.co.jp/.a/pub/cmd/c++grammar2.0.tar.gz)
 */

#define PARSER ansi_c_parser

#include "ansi_c_parser.h"

int yyansi_clex();
extern char *yyansi_ctext;

#include "parser_static.inc"

#include "ansi_c_y.tab.h"

// statements have right recursion, deep nesting of statements thus
// requires more stack space
#define YYMAXDEPTH 25600

/*** token declaration **************************************************/
#line 229 "parser.y" /* yacc.c:339  */

/************************************************************************/
/*** rules **************************************************************/
/************************************************************************/

#line 109 "ansi_c_y.tab.cpp" /* yacc.c:339  */

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
   by #include "ansi_c_y.tab.hpp".  */
#ifndef YY_YYANSI_C_ANSI_C_Y_TAB_HPP_INCLUDED
# define YY_YYANSI_C_ANSI_C_Y_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yyansi_cdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_AUTO = 258,
    TOK_BOOL = 259,
    TOK_COMPLEX = 260,
    TOK_BREAK = 261,
    TOK_CASE = 262,
    TOK_CHAR = 263,
    TOK_CONST = 264,
    TOK_CONTINUE = 265,
    TOK_DEFAULT = 266,
    TOK_DO = 267,
    TOK_DOUBLE = 268,
    TOK_ELSE = 269,
    TOK_ENUM = 270,
    TOK_EXTERN = 271,
    TOK_FLOAT = 272,
    TOK_FOR = 273,
    TOK_GOTO = 274,
    TOK_IF = 275,
    TOK_INLINE = 276,
    TOK_INT = 277,
    TOK_LONG = 278,
    TOK_REGISTER = 279,
    TOK_RESTRICT = 280,
    TOK_RETURN = 281,
    TOK_SHORT = 282,
    TOK_SIGNED = 283,
    TOK_SIZEOF = 284,
    TOK_STATIC = 285,
    TOK_STRUCT = 286,
    TOK_SWITCH = 287,
    TOK_TYPEDEF = 288,
    TOK_UNION = 289,
    TOK_UNSIGNED = 290,
    TOK_VOID = 291,
    TOK_VOLATILE = 292,
    TOK_WCHAR_T = 293,
    TOK_WHILE = 294,
    TOK_ARROW = 295,
    TOK_INCR = 296,
    TOK_DECR = 297,
    TOK_SHIFTLEFT = 298,
    TOK_SHIFTRIGHT = 299,
    TOK_LE = 300,
    TOK_GE = 301,
    TOK_EQ = 302,
    TOK_NE = 303,
    TOK_ANDAND = 304,
    TOK_OROR = 305,
    TOK_ELLIPSIS = 306,
    TOK_MULTASSIGN = 307,
    TOK_DIVASSIGN = 308,
    TOK_MODASSIGN = 309,
    TOK_PLUSASSIGN = 310,
    TOK_MINUSASSIGN = 311,
    TOK_SHLASSIGN = 312,
    TOK_SHRASSIGN = 313,
    TOK_ANDASSIGN = 314,
    TOK_XORASSIGN = 315,
    TOK_ORASSIGN = 316,
    TOK_IDENTIFIER = 317,
    TOK_TYPEDEFNAME = 318,
    TOK_INTEGER = 319,
    TOK_FLOATING = 320,
    TOK_CHARACTER = 321,
    TOK_STRING = 322,
    TOK_ASM_STRING = 323,
    TOK_INT8 = 324,
    TOK_INT16 = 325,
    TOK_INT32 = 326,
    TOK_INT64 = 327,
    TOK_PTR32 = 328,
    TOK_PTR64 = 329,
    TOK_TYPEOF = 330,
    TOK_GCC_AUTO_TYPE = 331,
    TOK_GCC_FLOAT128 = 332,
    TOK_GCC_INT128 = 333,
    TOK_GCC_DECIMAL32 = 334,
    TOK_GCC_DECIMAL64 = 335,
    TOK_GCC_DECIMAL128 = 336,
    TOK_GCC_ASM = 337,
    TOK_GCC_ASM_PAREN = 338,
    TOK_GCC_ATTRIBUTE = 339,
    TOK_GCC_ATTRIBUTE_ALIGNED = 340,
    TOK_GCC_ATTRIBUTE_TRANSPARENT_UNION = 341,
    TOK_GCC_ATTRIBUTE_PACKED = 342,
    TOK_GCC_ATTRIBUTE_VECTOR_SIZE = 343,
    TOK_GCC_ATTRIBUTE_MODE = 344,
    TOK_GCC_ATTRIBUTE_GNU_INLINE = 345,
    TOK_GCC_ATTRIBUTE_END = 346,
    TOK_GCC_LABEL = 347,
    TOK_MSC_ASM = 348,
    TOK_MSC_BASED = 349,
    TOK_CW_VAR_ARG_TYPEOF = 350,
    TOK_BUILTIN_VA_ARG = 351,
    TOK_GCC_BUILTIN_TYPES_COMPATIBLE_P = 352,
    TOK_OFFSETOF = 353,
    TOK_ALIGNOF = 354,
    TOK_MSC_TRY = 355,
    TOK_MSC_FINALLY = 356,
    TOK_MSC_EXCEPT = 357,
    TOK_MSC_LEAVE = 358,
    TOK_MSC_DECLSPEC = 359,
    TOK_INTERFACE = 360,
    TOK_CDECL = 361,
    TOK_STDCALL = 362,
    TOK_FASTCALL = 363,
    TOK_CLRCALL = 364,
    TOK_FORALL = 365,
    TOK_EXISTS = 366,
    TOK_ACSL_FORALL = 367,
    TOK_ACSL_EXISTS = 368,
    TOK_ARRAY_OF = 369,
    TOK_CPROVER_BITVECTOR = 370,
    TOK_CPROVER_FLOATBV = 371,
    TOK_CPROVER_FIXEDBV = 372,
    TOK_CPROVER_ATOMIC = 373,
    TOK_CPROVER_BOOL = 374,
    TOK_CPROVER_THROW = 375,
    TOK_CPROVER_CATCH = 376,
    TOK_CPROVER_TRY = 377,
    TOK_CPROVER_FINALLY = 378,
    TOK_IMPLIES = 379,
    TOK_EQUIVALENT = 380,
    TOK_TRUE = 381,
    TOK_FALSE = 382,
    TOK_REAL = 383,
    TOK_IMAG = 384,
    TOK_ALIGNAS = 385,
    TOK_ATOMIC_TYPE_QUALIFIER = 386,
    TOK_ATOMIC_TYPE_SPECIFIER = 387,
    TOK_GENERIC = 388,
    TOK_IMAGINARY = 389,
    TOK_NORETURN = 390,
    TOK_STATIC_ASSERT = 391,
    TOK_THREAD_LOCAL = 392,
    TOK_NULLPTR = 393,
    TOK_CONSTEXPR = 394,
    TOK_SCANNER_ERROR = 395,
    TOK_SCANNER_EOF = 396,
    TOK_CATCH = 397,
    TOK_CLASS = 398,
    TOK_DELETE = 399,
    TOK_DECLTYPE = 400,
    TOK_EXPLICIT = 401,
    TOK_FRIEND = 402,
    TOK_MUTABLE = 403,
    TOK_NAMESPACE = 404,
    TOK_NEW = 405,
    TOK_OPERATOR = 406,
    TOK_PRIVATE = 407,
    TOK_PROTECTED = 408,
    TOK_PUBLIC = 409,
    TOK_TEMPLATE = 410,
    TOK_THIS = 411,
    TOK_THROW = 412,
    TOK_TYPEID = 413,
    TOK_TYPENAME = 414,
    TOK_TRY = 415,
    TOK_USING = 416,
    TOK_VIRTUAL = 417,
    TOK_SCOPE = 418,
    TOK_DOTPM = 419,
    TOK_ARROWPM = 420,
    TOK_MSC_UNARY_TYPE_PREDICATE = 421,
    TOK_MSC_BINARY_TYPE_PREDICATE = 422,
    TOK_MSC_UUIDOF = 423,
    TOK_MSC_IF_EXISTS = 424,
    TOK_MSC_IF_NOT_EXISTS = 425,
    TOK_MSC_UNDERLYING_TYPE = 426
  };
#endif
/* Tokens.  */
#define TOK_AUTO 258
#define TOK_BOOL 259
#define TOK_COMPLEX 260
#define TOK_BREAK 261
#define TOK_CASE 262
#define TOK_CHAR 263
#define TOK_CONST 264
#define TOK_CONTINUE 265
#define TOK_DEFAULT 266
#define TOK_DO 267
#define TOK_DOUBLE 268
#define TOK_ELSE 269
#define TOK_ENUM 270
#define TOK_EXTERN 271
#define TOK_FLOAT 272
#define TOK_FOR 273
#define TOK_GOTO 274
#define TOK_IF 275
#define TOK_INLINE 276
#define TOK_INT 277
#define TOK_LONG 278
#define TOK_REGISTER 279
#define TOK_RESTRICT 280
#define TOK_RETURN 281
#define TOK_SHORT 282
#define TOK_SIGNED 283
#define TOK_SIZEOF 284
#define TOK_STATIC 285
#define TOK_STRUCT 286
#define TOK_SWITCH 287
#define TOK_TYPEDEF 288
#define TOK_UNION 289
#define TOK_UNSIGNED 290
#define TOK_VOID 291
#define TOK_VOLATILE 292
#define TOK_WCHAR_T 293
#define TOK_WHILE 294
#define TOK_ARROW 295
#define TOK_INCR 296
#define TOK_DECR 297
#define TOK_SHIFTLEFT 298
#define TOK_SHIFTRIGHT 299
#define TOK_LE 300
#define TOK_GE 301
#define TOK_EQ 302
#define TOK_NE 303
#define TOK_ANDAND 304
#define TOK_OROR 305
#define TOK_ELLIPSIS 306
#define TOK_MULTASSIGN 307
#define TOK_DIVASSIGN 308
#define TOK_MODASSIGN 309
#define TOK_PLUSASSIGN 310
#define TOK_MINUSASSIGN 311
#define TOK_SHLASSIGN 312
#define TOK_SHRASSIGN 313
#define TOK_ANDASSIGN 314
#define TOK_XORASSIGN 315
#define TOK_ORASSIGN 316
#define TOK_IDENTIFIER 317
#define TOK_TYPEDEFNAME 318
#define TOK_INTEGER 319
#define TOK_FLOATING 320
#define TOK_CHARACTER 321
#define TOK_STRING 322
#define TOK_ASM_STRING 323
#define TOK_INT8 324
#define TOK_INT16 325
#define TOK_INT32 326
#define TOK_INT64 327
#define TOK_PTR32 328
#define TOK_PTR64 329
#define TOK_TYPEOF 330
#define TOK_GCC_AUTO_TYPE 331
#define TOK_GCC_FLOAT128 332
#define TOK_GCC_INT128 333
#define TOK_GCC_DECIMAL32 334
#define TOK_GCC_DECIMAL64 335
#define TOK_GCC_DECIMAL128 336
#define TOK_GCC_ASM 337
#define TOK_GCC_ASM_PAREN 338
#define TOK_GCC_ATTRIBUTE 339
#define TOK_GCC_ATTRIBUTE_ALIGNED 340
#define TOK_GCC_ATTRIBUTE_TRANSPARENT_UNION 341
#define TOK_GCC_ATTRIBUTE_PACKED 342
#define TOK_GCC_ATTRIBUTE_VECTOR_SIZE 343
#define TOK_GCC_ATTRIBUTE_MODE 344
#define TOK_GCC_ATTRIBUTE_GNU_INLINE 345
#define TOK_GCC_ATTRIBUTE_END 346
#define TOK_GCC_LABEL 347
#define TOK_MSC_ASM 348
#define TOK_MSC_BASED 349
#define TOK_CW_VAR_ARG_TYPEOF 350
#define TOK_BUILTIN_VA_ARG 351
#define TOK_GCC_BUILTIN_TYPES_COMPATIBLE_P 352
#define TOK_OFFSETOF 353
#define TOK_ALIGNOF 354
#define TOK_MSC_TRY 355
#define TOK_MSC_FINALLY 356
#define TOK_MSC_EXCEPT 357
#define TOK_MSC_LEAVE 358
#define TOK_MSC_DECLSPEC 359
#define TOK_INTERFACE 360
#define TOK_CDECL 361
#define TOK_STDCALL 362
#define TOK_FASTCALL 363
#define TOK_CLRCALL 364
#define TOK_FORALL 365
#define TOK_EXISTS 366
#define TOK_ACSL_FORALL 367
#define TOK_ACSL_EXISTS 368
#define TOK_ARRAY_OF 369
#define TOK_CPROVER_BITVECTOR 370
#define TOK_CPROVER_FLOATBV 371
#define TOK_CPROVER_FIXEDBV 372
#define TOK_CPROVER_ATOMIC 373
#define TOK_CPROVER_BOOL 374
#define TOK_CPROVER_THROW 375
#define TOK_CPROVER_CATCH 376
#define TOK_CPROVER_TRY 377
#define TOK_CPROVER_FINALLY 378
#define TOK_IMPLIES 379
#define TOK_EQUIVALENT 380
#define TOK_TRUE 381
#define TOK_FALSE 382
#define TOK_REAL 383
#define TOK_IMAG 384
#define TOK_ALIGNAS 385
#define TOK_ATOMIC_TYPE_QUALIFIER 386
#define TOK_ATOMIC_TYPE_SPECIFIER 387
#define TOK_GENERIC 388
#define TOK_IMAGINARY 389
#define TOK_NORETURN 390
#define TOK_STATIC_ASSERT 391
#define TOK_THREAD_LOCAL 392
#define TOK_NULLPTR 393
#define TOK_CONSTEXPR 394
#define TOK_SCANNER_ERROR 395
#define TOK_SCANNER_EOF 396
#define TOK_CATCH 397
#define TOK_CLASS 398
#define TOK_DELETE 399
#define TOK_DECLTYPE 400
#define TOK_EXPLICIT 401
#define TOK_FRIEND 402
#define TOK_MUTABLE 403
#define TOK_NAMESPACE 404
#define TOK_NEW 405
#define TOK_OPERATOR 406
#define TOK_PRIVATE 407
#define TOK_PROTECTED 408
#define TOK_PUBLIC 409
#define TOK_TEMPLATE 410
#define TOK_THIS 411
#define TOK_THROW 412
#define TOK_TYPEID 413
#define TOK_TYPENAME 414
#define TOK_TRY 415
#define TOK_USING 416
#define TOK_VIRTUAL 417
#define TOK_SCOPE 418
#define TOK_DOTPM 419
#define TOK_ARROWPM 420
#define TOK_MSC_UNARY_TYPE_PREDICATE 421
#define TOK_MSC_BINARY_TYPE_PREDICATE 422
#define TOK_MSC_UUIDOF 423
#define TOK_MSC_IF_EXISTS 424
#define TOK_MSC_IF_NOT_EXISTS 425
#define TOK_MSC_UNDERLYING_TYPE 426

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yyansi_clval;

int yyansi_cparse (void);

#endif /* !YY_YYANSI_C_ANSI_C_Y_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 502 "ansi_c_y.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  133
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6004

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  196
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  197
/* YYNRULES -- Number of rules.  */
#define YYNRULES  572
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1031

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   426

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   186,     2,     2,     2,   188,   181,     2,
     172,   173,   182,   183,   174,   184,   176,   187,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   175,   195,
     189,   194,   190,   193,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   177,     2,   178,   191,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   179,   192,   180,   185,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   237,   237,   243,   247,   251,   255,   259,   263,   268,
     269,   270,   271,   277,   278,   279,   281,   282,   283,   284,
     285,   286,   290,   300,   304,   311,   318,   328,   335,   348,
     357,   367,   375,   382,   392,   400,   410,   418,   430,   440,
     441,   443,   452,   461,   467,   473,   479,   486,   496,   510,
     511,   515,   520,   528,   529,   535,   541,   546,   555,   560,
     565,   570,   575,   580,   585,   590,   596,   605,   606,   613,
     618,   626,   627,   629,   631,   636,   637,   639,   644,   645,
     647,   652,   653,   655,   657,   659,   664,   665,   667,   672,
     673,   678,   679,   684,   685,   690,   691,   696,   697,   705,
     706,   714,   715,   720,   721,   728,   738,   739,   741,   743,
     745,   747,   749,   751,   753,   755,   757,   759,   764,   765,
     770,   775,   776,   782,   788,   794,   795,   796,   800,   812,
     811,   824,   823,   836,   835,   851,   856,   860,   864,   869,
     872,   878,   876,   894,   892,   910,   908,   924,   925,   926,
     927,   928,   932,   933,   934,   935,   936,   940,   941,   945,
     946,   950,   957,   958,   965,   972,   973,   980,   981,   985,
     986,   987,   988,   989,   990,   991,   992,   996,   997,  1001,
    1005,  1009,  1013,  1020,  1024,  1028,  1032,  1040,  1044,  1048,
    1056,  1057,  1061,  1068,  1072,  1076,  1083,  1087,  1091,  1098,
    1102,  1106,  1113,  1117,  1121,  1128,  1133,  1141,  1142,  1146,
    1150,  1157,  1166,  1167,  1171,  1175,  1182,  1186,  1190,  1197,
    1198,  1202,  1206,  1210,  1214,  1218,  1222,  1229,  1234,  1242,
    1245,  1249,  1250,  1251,  1252,  1253,  1254,  1255,  1256,  1257,
    1261,  1262,  1263,  1264,  1265,  1266,  1267,  1268,  1269,  1270,
    1271,  1272,  1273,  1274,  1275,  1276,  1277,  1278,  1279,  1280,
    1281,  1287,  1294,  1301,  1305,  1306,  1307,  1311,  1316,  1326,
    1323,  1344,  1340,  1359,  1373,  1375,  1380,  1385,  1394,  1397,
    1402,  1405,  1411,  1416,  1425,  1426,  1433,  1439,  1442,  1446,
    1447,  1454,  1456,  1458,  1460,  1462,  1464,  1466,  1468,  1473,
    1476,  1480,  1485,  1493,  1494,  1495,  1499,  1506,  1517,  1525,
    1536,  1544,  1555,  1558,  1569,  1578,  1590,  1593,  1597,  1609,
    1607,  1621,  1618,  1631,  1640,  1648,  1653,  1658,  1665,  1676,
    1680,  1687,  1688,  1697,  1702,  1709,  1718,  1723,  1731,  1739,
    1746,  1754,  1763,  1771,  1778,  1786,  1794,  1801,  1809,  1817,
    1825,  1832,  1843,  1844,  1848,  1852,  1857,  1861,  1870,  1874,
    1884,  1885,  1891,  1900,  1908,  1916,  1918,  1926,  1927,  1935,
    1941,  1956,  1963,  1970,  1978,  1985,  1993,  2005,  2006,  2007,
    2008,  2009,  2010,  2011,  2012,  2013,  2014,  2015,  2016,  2020,
    2029,  2037,  2044,  2053,  2064,  2071,  2079,  2091,  2098,  2103,
    2110,  2125,  2134,  2143,  2154,  2155,  2159,  2167,  2176,  2175,
    2203,  2220,  2227,  2229,  2231,  2233,  2238,  2259,  2264,  2271,
    2275,  2281,  2291,  2297,  2306,  2315,  2323,  2331,  2336,  2344,
    2354,  2356,  2357,  2358,  2359,  2371,  2376,  2381,  2386,  2391,
    2398,  2402,  2403,  2407,  2408,  2413,  2414,  2418,  2419,  2423,
    2424,  2429,  2430,  2433,  2434,  2438,  2442,  2443,  2447,  2448,
    2452,  2453,  2456,  2458,  2462,  2463,  2467,  2472,  2476,  2477,
    2481,  2488,  2509,  2514,  2517,  2521,  2526,  2534,  2539,  2540,
    2544,  2551,  2555,  2559,  2563,  2571,  2575,  2579,  2587,  2592,
    2601,  2602,  2603,  2607,  2613,  2619,  2627,  2635,  2642,  2649,
    2656,  2666,  2667,  2671,  2672,  2676,  2677,  2682,  2686,  2687,
    2692,  2700,  2702,  2712,  2713,  2718,  2724,  2729,  2737,  2739,
    2744,  2754,  2755,  2760,  2761,  2765,  2766,  2771,  2784,  2790,
    2792,  2802,  2809,  2814,  2815,  2816,  2820,  2821,  2825,  2827,
    2838,  2837,  2860,  2861,  2869,  2868,  2888,  2895,  2905,  2912,
    2919,  2927,  2936,  2945,  2957,  2963,  2971,  2976,  2986,  2997,
    3003,  3011,  3016,  3026,  3037,  3039,  3041,  3043,  3049,  3058,
    3060,  3062,  3063
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"auto\"", "\"bool\"", "\"complex\"",
  "\"break\"", "\"case\"", "\"char\"", "\"const\"", "\"continue\"",
  "\"default\"", "\"do\"", "\"double\"", "\"else\"", "\"enum\"",
  "\"extern\"", "\"float\"", "\"for\"", "\"goto\"", "\"if\"", "\"inline\"",
  "\"int\"", "\"long\"", "\"register\"", "\"restrict\"", "\"return\"",
  "\"short\"", "\"signed\"", "\"sizeof\"", "\"static\"", "\"struct\"",
  "\"switch\"", "\"typedef\"", "\"union\"", "\"unsigned\"", "\"void\"",
  "\"volatile\"", "\"wchar_t\"", "\"while\"", "\"->\"", "\"++\"", "\"--\"",
  "\"<<\"", "\">>\"", "\"<=\"", "\">=\"", "\"==\"", "\"!=\"", "\"&&\"",
  "\"||\"", "\"...\"", "\"*=\"", "\"/=\"", "\"%=\"", "\"+=\"", "\"-=\"",
  "\"<<=\"", "\">>=\"", "\"&=\"", "\"^=\"", "\"|=\"", "TOK_IDENTIFIER",
  "TOK_TYPEDEFNAME", "TOK_INTEGER", "TOK_FLOATING", "TOK_CHARACTER",
  "TOK_STRING", "TOK_ASM_STRING", "\"__int8\"", "\"__int16\"",
  "\"__int32\"", "\"__int64\"", "\"__ptr32\"", "\"__ptr64\"", "\"typeof\"",
  "\"__auto_type\"", "\"__float128\"", "\"__int128\"", "\"_Decimal32\"",
  "\"_Decimal64\"", "\"_Decimal128\"", "\"__asm__\"",
  "\"__asm__ (with parentheses)\"", "\"__attribute__\"", "\"aligned\"",
  "\"transparent_union\"", "\"packed\"", "\"vector_size\"", "\"mode\"",
  "\"__gnu_inline__\"", "\")\"", "\"__label__\"", "\"__asm\"",
  "\"__based\"", "\"_var_arg_typeof\"", "\"__builtin_va_arg\"",
  "\"__builtin_types_compatible_p\"", "\"__offsetof\"", "\"__alignof__\"",
  "\"__try\"", "\"__finally\"", "\"__except\"", "\"__leave\"",
  "\"__declspec\"", "\"__interface\"", "\"__cdecl\"", "\"__stdcall\"",
  "\"__fastcall\"", "\"__clrcall\"", "\"forall\"", "\"exists\"",
  "\"\\\\forall\"", "\"\\\\exists\"", "\"array_of\"",
  "\"__CPROVER_bitvector\"", "\"__CPROVER_floatbv\"",
  "\"__CPROVER_fixedbv\"", "\"__CPROVER_atomic\"", "\"__CPROVER_bool\"",
  "\"__CPROVER_throw\"", "\"__CPROVER_catch\"", "\"__CPROVER_try\"",
  "\"__CPROVER_finally\"", "\"==>\"", "\"<==>\"", "\"TRUE\"", "\"FALSE\"",
  "\"__real__\"", "\"__imag__\"", "\"_Alignas\"", "\"_Atomic\"",
  "\"_Atomic()\"", "\"_Generic\"", "\"_Imaginary\"", "\"_Noreturn\"",
  "\"_Static_assert\"", "\"_Thread_local\"", "\"nullptr\"",
  "\"constexpr\"", "TOK_SCANNER_ERROR", "TOK_SCANNER_EOF", "\"catch\"",
  "\"class\"", "\"delete\"", "\"decltype\"", "\"explicit\"", "\"friend\"",
  "\"mutable\"", "\"namespace\"", "\"new\"", "\"operator\"", "\"private\"",
  "\"protected\"", "\"public\"", "\"template\"", "\"this\"", "\"throw\"",
  "\"typeid\"", "\"typename\"", "\"try\"", "\"using\"", "\"virtual\"",
  "\"::\"", "\".*\"", "\"->*\"", "TOK_MSC_UNARY_TYPE_PREDICATE",
  "TOK_MSC_BINARY_TYPE_PREDICATE", "\"__uuidof\"", "\"__if_exists\"",
  "\"__if_not_exists\"", "\"__underlying_type\"", "'('", "')'", "','",
  "':'", "'.'", "'['", "']'", "'{'", "'}'", "'&'", "'*'", "'+'", "'-'",
  "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "'='",
  "';'", "$accept", "grammar", "identifier", "typedef_name", "integer",
  "floating", "character", "string", "constant", "primary_expression",
  "generic_selection", "generic_assoc_list", "generic_association",
  "gcc_builtin_expressions", "cw_builtin_expressions", "offsetof",
  "offsetof_member_designator", "quantifier_expression",
  "statement_expression", "postfix_expression", "member_name",
  "argument_expression_list", "unary_expression", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "logical_implication_expression", "logical_equivalence_expression",
  "conditional_expression", "assignment_expression", "comma_expression",
  "constant_expression", "comma_expression_opt", "declaration",
  "static_assert_declaration", "default_declaring_list", "@1", "@2", "$@3",
  "post_declarator_attribute", "post_declarator_attributes",
  "post_declarator_attributes_opt", "declaring_list", "@4", "@5", "$@6",
  "declaration_specifier", "type_specifier", "declaration_qualifier_list",
  "type_qualifier_list", "attribute_type_qualifier_list",
  "declaration_qualifier", "type_qualifier", "attribute_or_type_qualifier",
  "basic_declaration_specifier", "basic_type_specifier",
  "sue_declaration_specifier", "sue_type_specifier",
  "typedef_declaration_specifier", "typeof_declaration_specifier",
  "atomic_declaration_specifier", "typedef_type_specifier",
  "typeof_specifier", "typeof_type_specifier", "atomic_specifier",
  "atomic_type_specifier", "msc_decl_identifier", "msc_decl_modifier",
  "msc_declspec_seq", "msc_declspec", "msc_declspec_opt", "storage_class",
  "basic_type_name", "elaborated_type_name", "array_of_construct",
  "pragma_packed", "aggregate_name", "$@7", "$@8", "aggregate_key",
  "gcc_attribute_expression_list", "gcc_attribute_expression_list_opt",
  "gcc_attribute", "gcc_attribute_list", "gcc_attribute_specifier",
  "gcc_type_attribute_opt", "gcc_type_attribute_list",
  "gcc_type_attribute", "member_declaration_list_opt",
  "member_declaration_list", "member_declaration",
  "member_default_declaring_list", "member_declaring_list",
  "member_declarator", "member_identifier_declarator",
  "bit_field_size_opt", "bit_field_size", "enum_name", "$@9", "$@10",
  "enum_key", "enumerator_list", "enumerator_declaration",
  "enumerator_value_opt", "parameter_type_list", "KnR_parameter_list",
  "KnR_parameter", "parameter_list", "parameter_declaration",
  "identifier_or_typedef_name", "type_name", "initializer_opt",
  "initializer", "initializer_list", "initializer_list_opt",
  "designated_initializer", "designator", "statement",
  "declaration_statement", "labeled_statement", "compound_statement",
  "compound_scope", "statement_list", "expression_statement",
  "selection_statement", "declaration_or_expression_statement",
  "iteration_statement", "$@11", "jump_statement",
  "gcc_local_label_statement", "gcc_local_label_list", "gcc_local_label",
  "gcc_asm_statement", "msc_asm_statement", "msc_seh_statement",
  "cprover_exception_statement", "volatile_or_goto_opt",
  "gcc_asm_commands", "gcc_asm_assembler_template", "gcc_asm_outputs",
  "gcc_asm_output", "gcc_asm_output_list", "gcc_asm_inputs",
  "gcc_asm_input", "gcc_asm_input_list", "gcc_asm_clobbered_registers",
  "gcc_asm_clobbered_register", "gcc_asm_clobbered_registers_list",
  "gcc_asm_labels", "gcc_asm_labels_list", "translation_unit",
  "external_definition_list", "external_definition", "asm_definition",
  "function_definition", "function_body", "KnR_parameter_header_opt",
  "KnR_parameter_header", "KnR_parameter_declaration",
  "KnR_declaration_qualifier_list", "KnR_basic_declaration_specifier",
  "KnR_typedef_declaration_specifier", "KnR_sue_declaration_specifier",
  "KnR_declaration_specifier", "KnR_parameter_declaring_list",
  "function_head", "declarator", "typedef_declarator",
  "parameter_typedef_declarator", "clean_typedef_declarator",
  "clean_postfix_typedef_declarator", "paren_typedef_declarator",
  "paren_postfix_typedef_declarator", "simple_paren_typedef_declarator",
  "identifier_declarator", "unary_identifier_declarator",
  "postfix_identifier_declarator", "paren_identifier_declarator",
  "abstract_declarator", "parameter_abstract_declarator",
  "postfixing_abstract_declarator", "$@12",
  "parameter_postfixing_abstract_declarator", "$@13",
  "array_abstract_declarator", "unary_abstract_declarator",
  "parameter_unary_abstract_declarator", "postfix_abstract_declarator",
  "parameter_postfix_abstract_declarator", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,    40,    41,    44,    58,    46,    91,    93,   123,
     125,    38,    42,    43,    45,   126,    33,    47,    37,    60,
      62,    94,   124,    63,    61,    59
};
# endif

#define YYPACT_NINF -800

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-800)))

#define YYTABLE_NINF -541

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1853,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,   -89,  -800,  -800,  -800,  -800,  -800,  -800,   -76,
     -52,   -54,    64,    76,   -50,     7,   106,    39,    71,    70,
     110,   130,   132,  -800,  -800,  -800,   144,   147,  -800,    86,
    3280,  -800,   334,  -800,  1115,  -800,   150,   -35,   -18,    91,
     351,  2945,  2945,  -800,  5635,  5635,  5664,  5664,  5664,  5664,
    5664,  5664,   217,   846,   217,   846,  -800,  -800,  1115,  -800,
    -800,  -800,  1115,  -800,  -800,  -800,  1115,  -800,  1853,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,   -61,  3553,   310,   237,
    -800,  4624,  -800,  -800,  4624,   374,  -800,  4624,    15,  1115,
    4624,  4624,  4624,  1115,  4624,   266,   223,   651,    86,  1169,
    -800,  -800,  -800,  -800,  -800,  1115,  -800,  -800,    86,  -800,
      43,  -800,   258,  1700,  -800,   -61,  1127,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  1338,  1115,  -800,  -800,  1115,
    1115,  -800,  1115,  -800,  -800,   268,  1115,  -800,   217,   217,
    -800,  1115,  -800,  -800,   281,  1115,  1115,  -800,  1115,  1115,
    -800,  -800,  -800,  1115,  1115,  1115,  1115,  1115,   651,  1115,
     651,  1115,  -800,   358,   158,  -800,  -800,   298,  -800,    31,
    3166,  -800,  -800,   302,  4795,  4814,  4814,   158,  -800,  -800,
    -800,  -800,   312,   317,   323,   325,  4892,  -800,  -800,  -800,
    -800,  4624,  4624,   336,  3475,  4624,  4624,  4624,  4624,  4624,
    4624,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,    46,  -800,   178,   135,    88,    93,
      12,   321,   341,   348,   333,   498,    -7,  -800,   -96,  -800,
    -800,   230,  5872,   379,   391,    65,   245,   271,   393,   337,
    -800,  -800,  -800,  -800,  -800,   398,  -800,    19,   385,  -123,
      66,   155,   400,   409,   -61,  -800,  1395,  -800,  3723,  -800,
    -800,  -800,   988,   258,  -800,   419,   422,   -61,   258,   301,
    -800,  -800,  -800,    75,  -800,   988,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,   404,  -800,   651,   651,  -800,   404,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,   158,  -800,  -800,   408,   423,  2253,  5393,   374,  5268,
    4624,  -800,  3925,  -800,   429,  4003,  4702,  3475,  -800,  3475,
    -800,  -800,  -800,  1115,  4624,  1115,  1115,  3475,  -800,   431,
     434,  5018,  5018,  -800,  -800,  4624,   367,   444,   449,  -800,
    -800,  -800,  -800,  -800,  -800,   158,  -800,  -800,  4096,   158,
    4624,  4624,  4624,  4624,  4624,  4624,  4624,  4624,  4624,  4624,
    4624,  4624,  4624,  4624,  4624,  4624,  4624,  4624,  4624,  4624,
    4624,  4624,  4624,  4624,  4624,  4624,  4624,  4624,  4624,  4624,
    4624,  4624,  4189,  -800,  4624,   414,  2121,  4142,   217,   217,
    -800,  -800,  -800,   432,  -800,   467,  -800,   427,   555,   558,
     566,  -800,   293,  -800,  -800,  -800,  -800,   487,   491,  -800,
    4624,  -800,   404,  -800,   340,   -61,   -61,   502,   442,   258,
    -800,  -800,   640,   660,   512,  -800,   404,   404,  4282,  -800,
    -800,   507,    45,   158,   510,   517,  4624,   531,   520,  2621,
    -800,  4360,   535,  3294,   551,   561,   550,    75,   158,    -3,
    -800,  -800,   549,  -800,  -800,   578,  1161,   585,   567,  -800,
      91,   351,  2945,  2945,   595,  -800,  -800,  -800,  -800,  2437,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,    43,
    5752,   846,  5635,  5664,  -800,  5393,  -800,  5518,  5635,  5664,
    -800,    43,    10,  -800,   447,  -800,    37,    37,  1996,  1996,
     599,   601,  -800,   605,  -800,  -800,  -800,   607,  4453,   612,
     619,   622,   626,   628,   633,   639,   652,  5018,  5018,  1218,
    1218,   650,  -800,  4531,  -800,  -800,  -800,  -800,  -800,   464,
    -800,  -800,   232,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  -800,   135,   135,
      88,    88,    93,    93,    93,    93,    12,    12,   321,   341,
     348,   333,   498,  -800,  -800,  4624,   211,  -800,   133,  1628,
    -800,  -800,  -800,  -800,  -800,  -800,  -800,  4624,   653,    65,
    -800,  -800,  -800,   654,   658,   641,  4624,  4624,   661,  -800,
     404,  -800,  -800,  -800,  -800,  -800,   458,  -800,  -800,   310,
    -800,  -800,  3832,  -800,  -800,   756,   659,  -800,   -29,  -800,
    1115,   158,  -800,   -17,  -800,  2621,   794,   665,   655,    67,
    4624,  -800,    74,  4624,  4624,  -800,     6,  -800,   105,  -800,
    -800,   784,   541,  -800,   -85,  -800,   988,   988,  -800,  -800,
    2621,  -800,  -800,  -800,  -800,  1115,  1115,  -800,  1115,  -800,
    1115,   158,   158,  1115,  1115,  1115,  -800,    43,  -800,  5393,
     374,   381,  1285,  -800,  -800,  1115,  -800,  -800,  -800,  -800,
    -800,  1115,  -800,   412,  1514,  1115,  -800,  1115,  -800,  -800,
    5143,  -800,  -800,  -800,  -800,   675,   675,  -800,  1115,  1115,
     158,   675,  4624,  4624,  4624,  -800,  -800,   919,  3832,  -800,
    -800,  4624,  -800,  -800,  4624,   683,   686,   692,   414,  -800,
    -800,   694,   698,  -800,  -800,  -800,  -800,   239,   253,   283,
    -800,  -800,  -800,  -800,   699,   702,   158,  4624,   703,   708,
    -800,   700,   693,  -800,  3372,  -800,   695,  5872,   707,  1095,
    -800,   108,   109,   756,   158,  1115,   697,    36,  4624,  2621,
    -800,   717,  2805,  -800,  -800,   481,  -800,   485,   722,   310,
     828,   158,  -800,   720,  -800,   731,  -800,  -800,  -800,  -800,
    -800,  -800,  -800,  1115,  1115,  -800,  -800,  -800,  -800,  -800,
    5393,  -800,  -800,   732,   739,    37,  -800,  -800,  -800,   216,
    -800,  -800,  -800,  -800,   740,   744,   265,  -800,    96,   193,
     743,   500,  -800,   746,   748,   745,  -800,  -800,  -800,   -61,
     -61,  -800,  4624,  -800,   525,  -800,  -800,  -800,    -6,   749,
    -800,    25,  4282,  3646,  -800,   158,  4624,  4282,  -800,  -800,
     233,  3066,  1115,  -800,   212,  -800,   233,  -800,   747,  -800,
    -800,  4624,  -800,  1115,   758,  -800,  4624,  -800,  -800,  4624,
    2621,  2621,  2621,   750,   751,  -800,  -800,  -800,  4624,  -800,
    -800,  -800,  -800,    -2,  -800,  -800,  -800,  -800,  -800,   158,
    4624,  -800,  -800,  4624,  -800,   919,  4624,  3739,  -800,  -800,
    -800,  -800,  -800,   239,   158,   762,  -800,   761,    -4,   763,
    4624,  -800,  -800,  -800,  -800,  -800,    34,  -800,  4624,  -800,
    1115,   764,  -800,  1115,   764,  -800,  -800,  -800,  1115,  -800,
    -800,  2621,   528,   753,   926,  -800,  -800,   754,  -800,   532,
     769,  -800,  -800,   308,  -800,  -800,  -800,  -800,   752,   774,
    4624,    -6,   158,   781,  -800,   782,   310,   785,   346,  4624,
    -800,  -800,  -800,  1115,  -800,  -800,  1115,  -800,  -800,  -800,
     766,  4624,  2621,  -800,  -800,  -800,   239,   310,   536,  -800,
     779,  4624,    -4,  -800,  -800,   791,   158,  -800,  -800,   364,
    -800,  -800,  -800,  -800,   786,  -800,  -800,   793,   796,  -800,
     310,   543,  -800,   310,  -800,   795,  -800,  2621,  -800,  4624,
     798,  -800,  -800,   158,  -800,   569,  4624,  -800,  -800,   573,
    -800
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     462,   234,   258,   259,   245,   170,   254,   324,   232,   248,
     236,   240,   247,   235,   171,   246,   255,   233,   274,   231,
     275,   256,   257,   172,     3,     4,   241,   242,   243,   244,
     174,   175,     0,   249,   250,   251,   252,   253,   238,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   173,   263,   169,     0,     0,   237,     0,
       0,   469,     0,   531,   287,   467,     0,     0,     0,     0,
       0,     0,     0,   162,   147,   152,   148,   153,   149,   150,
     151,   154,   207,   155,   212,   156,   239,   157,   287,   190,
     266,   264,   287,   298,   159,   265,   287,     2,   463,   464,
     468,   466,   397,   496,   523,   525,   524,   287,     0,     0,
     294,     0,   292,   291,     0,     0,   297,     0,     0,   287,
       0,     0,     0,   287,     0,     0,     0,     0,     0,   177,
     165,   178,   526,     1,   202,   288,   289,   125,     0,   127,
       0,   126,     0,     0,   123,   505,   139,   502,   504,   507,
     508,   503,   513,   501,   124,   139,   287,   161,   168,   287,
     287,   167,   287,   187,   160,   129,   287,   163,   208,   213,
     158,   287,   191,   164,   131,   287,   287,   185,   287,   287,
     189,   192,   188,   287,   287,   287,   287,   287,   210,   287,
     215,   287,   183,   229,   319,   465,   472,     0,   471,   544,
       0,   528,   538,   542,     0,     0,     0,     0,     5,     6,
       7,     8,     0,     0,     0,     0,     0,   397,   397,   397,
     397,     0,     0,     0,   287,     0,     0,     0,     0,     0,
       0,    13,     9,    10,    11,    12,    14,    39,    21,    17,
      18,    19,    20,    16,    53,    67,    71,    75,    78,    81,
      86,    89,    91,    93,    95,    97,    99,   101,   103,   106,
     118,     0,     0,     0,     0,   280,     0,     0,     0,     0,
     218,   216,   217,   228,   224,   219,   225,     0,     0,     0,
       0,     0,     0,     0,   529,   532,   177,   166,   178,   527,
     290,   133,   139,     0,   521,     0,     0,     0,     0,     0,
     509,   516,   506,   430,   138,   140,   141,   136,   143,   194,
     197,   200,   179,   358,   203,   209,   214,   184,   358,   181,
     182,   180,   186,   195,   198,   201,   204,   193,   196,   199,
     230,   269,   352,   353,     0,   323,   121,   543,     0,     0,
       0,   546,     0,   120,     0,     0,     0,   287,    63,   287,
      54,    55,    57,   287,     0,   287,   287,   287,    65,     0,
       0,     0,     0,    69,    70,     0,     0,     0,     0,    56,
      58,    59,    60,    61,    62,     0,    45,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   205,     0,   354,   356,   152,   153,   154,
     155,   156,   206,     0,   281,   282,   284,     0,     0,     0,
       0,   176,     0,   227,   226,   267,   260,     0,     0,   211,
       0,   530,   358,   145,     0,   511,   518,     0,     0,     0,
     510,   517,   432,   431,     0,   137,   358,   358,     0,   130,
     132,     0,   287,     0,     0,     0,     0,     0,     0,   121,
     408,     0,     0,     0,     0,     0,     0,   430,     0,     0,
     397,   426,     0,   397,   394,    13,   287,   122,     0,   389,
       0,     0,     0,     0,     0,   398,   379,   377,   378,   121,
     380,   381,   382,   383,   385,   384,   386,   387,   388,     0,
       0,   162,   152,   154,   478,   539,   475,     0,   490,   491,
     492,     0,     0,   335,     0,   333,   338,   345,   342,   349,
       0,   331,   336,     0,   548,   549,   547,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,     0,    38,    49,    50,    44,    41,     0,
      51,    43,     0,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   107,    72,    73,    74,    71,    76,    77,
      79,    80,    84,    85,    82,    83,    87,    88,    90,    92,
      94,    96,    98,   100,   102,     0,     0,   119,   544,   554,
     558,   355,   535,   533,   534,   357,   470,   278,     0,   280,
     295,   293,   296,     0,     0,     0,     0,     0,     0,   134,
     358,   522,   512,   520,   519,   514,     0,   433,   434,     0,
     142,   144,   366,   360,   359,   287,     0,   273,     0,   325,
     287,     0,   413,     0,   412,   121,     0,     0,     0,     0,
       0,   414,     0,     0,   121,   396,     0,   419,     0,   417,
     423,     0,     0,   427,     0,   400,   139,   139,   129,   131,
     121,   395,   399,   494,   479,   287,   287,   476,   287,   480,
     287,     0,     0,   287,   287,   287,   493,     0,   477,   473,
       0,   544,   559,   563,   341,   287,   339,   571,   536,   537,
     348,   287,   346,   544,   559,   287,   343,   287,   350,   545,
       0,   550,   551,   553,   552,    64,     0,    29,   287,   287,
       0,    66,     0,     0,   397,    35,    37,   287,   366,    68,
      42,     0,    40,   105,     0,     0,     0,     0,   555,   556,
     276,   279,     0,   286,   285,   221,   220,     0,     0,     0,
     128,   146,   515,   440,     0,   435,     0,     0,    13,     0,
     367,   365,     0,   363,     0,   305,     0,     0,     0,   287,
     301,     0,     0,   287,   327,   287,   329,     0,     0,   121,
     393,     0,   121,   411,   410,     0,   415,     0,     0,     0,
       0,     0,   416,     0,   397,     0,   397,   397,   390,   482,
     485,   486,   481,   287,   287,   483,   484,   487,   495,   541,
     474,   334,   543,     0,     0,   560,   561,   340,   347,   560,
     344,   351,   332,   337,     0,     0,     0,    31,     0,     0,
       0,     0,    23,     0,   365,     0,    52,   104,   566,   564,
     565,   557,     0,   283,     0,   261,   262,   135,   442,   436,
     371,     0,     0,     0,   361,     0,     0,     0,   369,   306,
     312,     0,   287,   302,     0,   304,   312,   303,     0,   326,
     320,     0,   328,   287,     0,   391,     0,   404,   405,   121,
     121,   121,   121,     0,     0,   418,   422,   425,     0,   428,
     429,   488,   489,   569,   570,   562,    27,    28,    30,     0,
       0,    34,    36,     0,    22,   287,     0,     0,    47,   568,
     567,   277,   222,     0,     0,     0,   445,   441,   448,   437,
       0,   372,   370,   362,   364,   376,     0,   368,     0,   309,
     287,   316,   307,   287,   316,   268,   308,   310,   287,   330,
     322,   121,     0,     0,   401,   403,   406,     0,   421,     0,
     544,   572,    32,     0,    26,    24,    25,    48,     0,     0,
       0,     0,     0,     0,   451,   447,   454,   438,     0,     0,
     374,   318,   313,   287,   317,   315,   287,   270,   268,   392,
       0,   121,   121,   420,   397,    33,     0,     0,     0,   446,
       0,     0,     0,   455,   456,   453,   459,   439,   373,     0,
     311,   314,   272,   407,     0,   402,   424,     0,     0,   443,
       0,     0,   452,     0,   460,   458,   375,   121,   223,     0,
       0,   449,   457,     0,   409,     0,     0,   461,   444,     0,
     450
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -800,  -800,     0,   119,  -800,  -800,  -800,   -55,  -800,   200,
    -800,  -800,    68,  -800,  -800,  -800,  -800,  -800,  -800,  -800,
    -323,  -800,   145,  1044,   362,   383,   366,   402,   571,   575,
     570,   576,   579,  -800,   407,  -800,  -562,   778,   -72,  -199,
    -634,     9,  -612,  -800,  -800,  -800,  -800,   674,  -800,  -133,
    -800,  -800,  -800,  -800,     3,     4,     5,    84,  -127,   -12,
    1149,   858,  -800,  -187,  -800,  -141,  -800,  -800,  -800,  -139,
     -58,   -56,   -25,   -49,  -417,   710,  -800,   799,  -800,  1019,
     -64,     8,  -800,    13,  -800,  -800,  -800,   476,  -800,  -800,
     386,  -800,  -800,   879,  -800,   416,   221,  -800,   228,  -800,
    -800,   136,   152,    80,  -572,  -800,  -800,  -800,   505,   384,
     250,  -800,  -800,  -800,   338,  -800,   319,  -166,   797,  -293,
    -432,   299,   303,  -799,  -800,  -219,   248,  -800,  -100,   592,
    -800,   252,  -800,  -800,  -800,  -800,  -800,  -800,  -800,  -767,
    -800,  -800,  -800,  -800,   559,   243,  -800,  -800,    79,  -800,
    -800,    50,  -800,  -800,    24,  -800,  -800,  -800,  -800,  -800,
     945,  -800,  -800,  -800,  -800,   355,  -496,  -800,  -800,  -800,
    -800,  -800,  -800,  -800,    40,  -800,  -137,  -124,  -800,  -112,
    -800,  -266,   294,   -47,  -800,   -38,  -399,  -437,   574,  -800,
     484,  -800,  -800,   448,  -578,   450,  -577
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    62,   231,   145,   232,   233,   234,   235,   236,   237,
     238,   831,   832,   239,   240,   241,   826,   242,   243,   244,
     759,   559,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   487,   633,
     488,   489,    66,    67,   313,   318,   442,   304,   305,   306,
      68,   456,   457,   620,   490,   491,   492,   493,   128,   157,
      73,   130,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,   275,   276,   277,    86,   331,    87,
      88,    89,    90,   977,    91,   461,   636,    92,   741,   742,
     426,   427,    93,   262,   135,   136,   768,   769,   770,   771,
     772,   929,   932,   973,   930,    95,   334,   464,    96,   638,
     639,   872,   530,   524,   525,   531,   532,   494,   833,   459,
     760,   761,   762,   763,   764,   495,   496,   497,   498,   197,
     499,   500,   501,   879,   502,   647,   503,   504,   658,   659,
     505,   506,   507,   508,   454,   754,   755,   849,   916,   917,
     919,   964,   965,   967,   994,   995,   997,  1015,    97,    98,
      99,   100,   101,   198,   809,   515,   516,   517,   518,   519,
     520,   521,   522,   102,   931,   147,   148,   149,   150,   151,
     152,   297,   153,   104,   105,   106,   601,   816,   447,   338,
     202,   339,   203,   603,   698,   604,   699
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      63,   344,   196,    69,    70,    71,   300,   162,   171,    65,
     176,   179,   125,   159,   168,   615,   299,   605,   295,   677,
     788,   126,   308,   766,   885,   460,   634,   444,   335,   411,
     296,   301,   448,   733,   778,   261,   796,   110,   797,   266,
     270,   352,   267,   409,   270,   269,   160,   169,   279,   280,
     281,   414,   557,   264,   924,   436,   561,   399,   400,    63,
      63,   211,   175,   211,   180,   660,   183,   184,   185,    63,
      63,    63,    63,   345,   424,   417,   920,   271,   272,   163,
     172,   271,   272,   107,    72,   969,   375,   376,   377,   696,
     702,   706,   708,  -540,   452,   125,   108,   412,    63,    24,
      25,    69,    70,    71,   126,    24,    25,    65,   924,   146,
     155,   199,   453,   813,   814,   268,   200,   410,   111,    64,
     109,   418,   114,   419,   368,   813,   814,    24,    63,    40,
      41,    42,    43,    44,    45,    46,   397,   398,    63,   138,
      63,   533,    63,    63,   127,   774,   537,   539,    24,   619,
     512,   775,   366,    24,    25,   112,   140,   766,   779,   443,
     139,   766,   450,   630,   631,   462,   188,   113,   190,   295,
     950,   914,   837,   962,   295,   200,   661,   141,   789,   115,
     292,   296,    72,   626,   687,   790,   296,   451,   273,   274,
     156,   166,   433,   274,   332,  -540,   418,   116,   513,   414,
     739,   401,   402,   921,   337,   688,   420,   332,   414,   691,
     774,   117,   970,   421,   200,   142,   873,    64,   378,   692,
      24,    25,   379,   380,  -271,   143,     5,   127,   693,  1014,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     414,   414,    14,   118,   437,   943,   125,   368,   414,   368,
     646,   125,   315,   316,    23,   126,  1027,   368,    59,   119,
     126,   294,   784,   142,   270,   425,   415,   643,    60,   786,
     414,   395,   396,   143,    24,   366,   901,   366,    24,   791,
     672,   420,   864,   866,   127,   366,   144,   120,   421,   933,
      30,    31,   933,    63,   103,    24,    25,   640,    63,    63,
     792,   271,   272,   865,   867,   598,   337,   121,   562,   122,
     200,    47,   657,   333,   677,   599,   123,   392,   270,   124,
      24,    25,   393,   394,   600,   295,   333,   751,   512,   414,
     844,   332,   858,   438,   133,    53,   485,   296,   523,   841,
     596,   509,   526,   527,   528,   137,   416,  1004,    55,   348,
     350,   351,   171,   179,   132,   271,   272,   613,   168,   974,
     614,   358,   974,    24,    25,   165,   174,   414,   403,   404,
     549,   550,   391,   902,   418,   555,   513,   211,   895,   555,
     662,    64,   895,   664,    59,   414,   734,   928,   703,   694,
     700,   169,   103,   200,    60,   199,   285,   827,   704,   649,
     200,   652,   125,   413,   414,   142,   414,   693,   928,   265,
     732,   126,   294,    24,    25,   143,    94,   294,   428,   414,
     922,   510,   289,   529,   172,   927,   780,   414,   162,   171,
     293,   845,   291,   850,   159,   168,    24,   132,   898,   284,
     143,   899,   900,    24,   429,   414,   171,  -499,   179,    63,
     333,   798,   168,   680,   684,   486,    64,   414,    64,   420,
    -500,   846,    48,   332,   162,   171,   421,   160,   169,   485,
     159,   168,   738,   449,    24,   640,   131,   336,   332,   346,
      64,    64,   414,   143,   353,   169,   985,   164,   173,   354,
      63,    63,    63,    63,   556,   355,   958,   356,   556,   485,
     163,   172,   512,   160,   169,   679,   683,   685,   365,    63,
     431,   414,   199,   621,    94,   803,   804,   200,   172,   509,
     414,    63,   405,   142,   998,   407,    63,    63,    63,    63,
     666,   667,   925,   143,   308,   166,   163,   172,   414,   406,
     552,   414,  1016,   288,   748,   749,   154,   408,   418,   673,
     513,   290,   422,   691,   812,   300,   722,   723,   200,   131,
     875,   686,   307,   692,   423,   815,   430,   295,   294,  1007,
     432,   307,   693,   439,   753,   435,   952,   819,   785,   874,
     417,   787,   333,   440,   703,   812,   598,   463,   486,   200,
     648,   200,   445,   289,   704,   446,   599,   333,   458,   510,
     608,   609,  -321,   693,   173,   600,   173,   535,   640,   425,
     547,   156,   166,   548,   199,   625,   131,   553,   486,   200,
     689,   690,   554,   512,   368,   657,   418,   606,   419,   166,
     199,   752,   758,   420,    64,   200,   678,   730,   731,   607,
     421,   332,   794,   795,   125,   485,   610,   156,   166,   611,
     828,   829,   366,   126,   880,   414,   125,   612,   881,   414,
       5,   944,   945,   946,   616,   126,    64,    64,   617,   418,
     485,   513,   939,   904,   905,   624,    14,   627,   450,   628,
     201,   332,   332,   127,   629,   851,   635,    63,    23,   641,
     523,    63,    63,   509,   887,   645,   889,   890,   912,   913,
     201,   980,   414,    63,    63,   984,   414,   650,   307,  1009,
     414,   420,   642,   526,   527,   528,  1021,   414,   421,   302,
     555,   307,   979,   653,    30,    31,   644,   808,   758,   971,
     655,   173,   173,   654,   753,    40,    41,    42,    43,    44,
      45,    46,  1028,   414,   663,    47,  1030,   414,   959,   725,
     726,   556,    94,  -352,   420,    94,   555,   578,   579,   414,
     333,   421,   665,  1005,   486,   582,   583,   584,   585,    53,
     670,   860,   709,   510,   332,   710,   127,    94,    94,   485,
     580,   581,    55,   711,   926,   712,   668,   669,   127,   486,
     714,   332,   715,   915,   529,   716,   990,   171,  1024,   717,
     333,   333,   718,   168,   942,   586,   587,   719,    64,   359,
     360,   361,   362,   720,   509,    63,   949,   593,   594,    63,
     695,   701,   705,   707,   727,   721,   743,   745,   953,    64,
     657,   746,   173,   781,   750,   747,   169,   782,   773,   556,
      40,    41,    42,    43,    44,    45,    46,   556,   968,     1,
     783,   861,   793,   758,   728,   555,   838,   657,   441,   839,
      63,    63,     8,   963,    63,   840,    63,    10,   842,   172,
      13,   843,   847,   854,   853,   556,    17,   848,   -49,    19,
     485,   485,   485,   852,  1006,    94,    64,   862,   988,   876,
     859,   871,    57,   333,   510,   882,   884,   999,   486,   555,
     886,    64,   283,   888,   263,   893,   915,   758,   164,   173,
     333,   993,   894,   896,   332,    94,   278,   897,   903,  1011,
     282,   906,   907,   947,   918,   908,   173,   938,    38,    64,
     830,   948,  1008,   941,   960,   961,  -299,   963,   966,   928,
     982,   485,   812,   134,   164,   173,   986,  1025,   981,   983,
      48,   765,   987,   991,  1029,  1020,   992,  1010,   993,  1017,
     996,  1003,   332,    94,    94,  1013,  1018,   192,  1019,  1023,
    1026,   193,   556,   955,   556,   194,   588,   590,   343,   455,
     166,   589,   485,    58,   591,   287,   132,   434,   592,   602,
     602,  1002,   330,   681,   868,   744,   332,   863,   132,   486,
     486,   486,   937,    40,    41,    42,    43,    44,    45,    46,
     697,   697,   697,   697,   976,   131,   936,   485,   556,   622,
     623,   367,   682,   332,   869,   777,   556,   834,   811,   823,
     877,   835,   883,   333,   878,   309,   656,  1022,   310,   311,
     989,   312,  1012,   195,   810,   314,   736,     0,   737,     0,
     317,     0,     0,     0,   319,   320,     0,   321,   322,     0,
     486,    94,   323,   324,   325,   326,   327,     0,   328,     0,
     329,   303,    40,    41,    42,    43,    44,    45,    46,     0,
       0,   333,   307,   307,     0,     0,    94,     0,     0,     0,
     161,   170,     0,   161,   178,   161,   182,   161,   161,   161,
     187,   486,   189,     0,   191,     0,     0,     0,   131,   289,
       0,     0,     0,   289,     0,   333,     0,     0,   343,     0,
     131,     0,     0,   343,   343,     0,    94,     0,     0,     0,
       0,     0,   543,     0,     0,     0,   486,     0,     0,     0,
       0,     0,   333,   551,   540,     0,   541,     0,     0,     0,
     542,     0,   544,   545,   546,   934,   560,     0,   934,   563,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
       0,     0,   735,   602,     0,   697,   697,     0,  -162,    40,
      41,    42,    43,    44,    45,    46,     0,   697,   697,     0,
       0,     0,   597,     0,  -162,    94,     0,     0,    94,    40,
      41,    42,    43,    44,    45,    46,  -162,     0,     0,   129,
     303,    40,    41,    42,    43,    44,    45,    46,   618,     0,
     158,   167,     0,   158,   177,   158,   181,   158,   158,   158,
     186,    57,     0,     0,     0,     0,   343,     0,     0,     0,
       0,     0,  -162,  -162,   343,    40,    41,    42,    43,    44,
      45,    46,     0,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
       0,     0,     0,  -162,     0,   363,   364,     0,     0,   369,
     370,   371,   372,   373,   374,  -300,   286,   173,     0,     0,
      24,     0,   208,   209,   210,   211,     0,  -162,     0,     0,
     765,     0,   129,     0,     5,     0,    94,    94,    94,   697,
    -162,     0,     0,   697,     0,     0,  -497,     0,     0,     0,
      14,     0,   602,   212,   213,   214,   215,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,   217,   218,
     219,   220,     0,     0,     0,     0,  -353,   167,     0,   167,
       0,   637,     0,     0,     0,     0,     0,    24,    25,   129,
       0,   223,     0,     0,     0,     0,   514,    94,    30,    31,
       0,     0,     0,     0,     0,   134,     0,     0,     0,    40,
      41,    42,    43,    44,    45,    46,     0,   951,     0,    47,
       0,     0,     0,     0,     0,   740,   370,     0,     0,     0,
     724,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,     0,     0,    53,  -163,     0,     0,     0,     0,     0,
     343,     0,     0,   909,   910,     0,    55,     0,     0,     0,
    -163,   303,    40,    41,    42,    43,    44,    45,    46,     0,
       0,     0,  -163,    94,     0,     0,   574,   575,   576,   577,
     577,   577,   577,   577,   577,   577,   577,   577,   577,   577,
     577,   577,   577,   577,   577,   577,     0,   691,     0,     0,
       0,     0,   200,     0,   167,   167,     0,   692,  -163,  -163,
       0,     0,     0,     0,     0,     0,   693,     0,     0,  -163,
    -163,  -163,  -163,  -163,  -163,  -163,   511,     0,     0,  -163,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   343,     0,     0,   836,
       0,   161,   170,  -163,   767,   824,   825,  -498,     0,   776,
       0,     0,     0,     5,     0,     0,  -163,     0,     0,     0,
     674,   675,   676,     0,   514,     0,   161,   161,   161,    14,
       0,     0,   343,     0,     0,     0,     0,   161,   170,     0,
       0,    23,     0,     0,   799,   800,   343,   801,     0,   802,
       0,     0,   805,   806,   807,   167,   177,   181,   186,     0,
       0,     0,     0,     0,   817,     0,    24,     0,     0,     0,
     818,     0,   370,     0,   820,     0,   821,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     0,   729,    40,    41,
      42,    43,    44,    45,    46,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     911,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     343,   343,    53,     0,     0,   343,     0,     5,     0,   577,
       0,   158,   167,     0,     0,    55,     0,     0,   767,   343,
       0,     0,   767,    14,   870,     0,     0,     0,     0,   167,
       0,   177,   186,     0,   511,    23,   158,   158,   158,     0,
       0,     0,     0,     0,     0,     0,     0,   158,   167,     0,
       0,   954,   891,   892,   956,   343,   703,     0,     0,     0,
       0,   200,     0,     0,     0,     0,   704,     0,     0,     0,
       0,    30,    31,     0,     0,   693,   343,     0,   514,     5,
       0,     0,    40,    41,    42,    43,    44,    45,    46,     0,
       0,     0,    47,     0,     0,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,     0,     0,
       0,   935,     0,     0,     0,     0,    53,     0,   129,     0,
       0,     0,   940,     0,     0,     0,     0,     0,     0,    55,
       0,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    31,     0,     0,     0,   577,     0,
       0,     0,     0,     0,    40,    41,    42,    43,    44,    45,
      46,     0,     0,     0,    47,     0,     0,     0,     0,     0,
     598,     0,     0,     0,     0,   200,     0,     0,     0,   972,
     599,     0,   975,     0,     0,     0,     0,   978,    53,   600,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   514,
       0,    55,     0,     0,     0,     0,     0,     0,   511,     0,
       0,   129,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1000,   129,     0,  1001,     1,     2,     3,     0,
       0,     4,     5,     0,     0,     0,     6,     0,     7,     8,
       9,     0,   298,     0,    10,    11,    12,    13,    14,     0,
      15,    16,   143,    17,    18,     0,    19,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,    25,     0,     0,     0,
       0,     0,    26,    27,    28,    29,    30,    31,    32,     0,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,   511,
       0,     0,     0,     0,     0,     0,     0,    49,    50,    51,
      52,    53,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    56,     0,     0,     0,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       2,     3,     0,     0,     4,     5,     0,     0,     0,     6,
     167,     7,     8,     9,     0,     0,     0,    10,    11,    12,
      13,    14,     0,    15,    16,    59,    17,    18,     0,    19,
      20,    21,    22,    23,     0,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,    25,
       0,     0,     0,     0,     0,    26,    27,    28,    29,    30,
      31,    32,     0,    33,    34,    35,    36,    37,    38,     0,
      40,    41,    42,    43,    44,    45,    46,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,    50,    51,    52,    53,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     3,    55,    56,     4,
       5,     0,     0,    58,     6,     0,     7,     0,     9,     0,
       0,     0,     0,    11,    12,     0,    14,     0,    15,    16,
       0,     0,    18,     0,     0,    20,    21,    22,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   703,     0,
       0,     0,     0,   200,     0,     0,     0,     0,   704,     0,
       0,     0,     0,     0,    25,     0,     0,   693,     0,     0,
      26,    27,    28,    29,    30,    31,    32,     0,    33,    34,
      35,    36,    37,     0,     0,    40,    41,    42,    43,    44,
      45,    46,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,    50,    51,    52,    53,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    56,     0,     0,     1,     2,     3,   465,
     466,     4,     5,   467,   468,   469,     6,     0,     7,     8,
       9,   470,   471,   472,    10,    11,    12,    13,    14,   473,
      15,    16,   204,    17,    18,   474,    19,    20,    21,    22,
      23,     0,   475,   598,   205,   206,     0,     0,   200,     0,
       0,     0,   207,   599,     0,     0,     0,     0,     0,     0,
       0,     0,   600,     0,     0,    24,    25,   208,   209,   210,
     211,   476,    26,    27,    28,    29,    30,    31,    32,     0,
      33,    34,    35,    36,    37,    38,   477,    40,    41,    42,
      43,    44,    45,    46,     0,   478,   479,    47,   212,   213,
     214,   215,   216,   480,     0,     0,   481,    48,     0,     0,
       0,     0,     0,   217,   218,   219,   220,    49,    50,    51,
      52,    53,    54,   482,     0,   483,     0,     0,     0,     0,
       0,   221,   222,     0,    55,    56,   223,     0,     0,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,     0,     0,     0,     0,
       0,     0,  -397,   484,   225,   226,   227,   228,   229,   230,
       1,     2,     3,   465,   466,     4,     5,   467,   468,   469,
       6,     0,     7,     8,     9,   470,   471,   472,    10,    11,
      12,    13,    14,   473,    15,    16,   204,    17,    18,   474,
      19,    20,    21,    22,    23,     0,   475,     0,   205,   206,
       0,     0,     0,     0,     0,     0,   207,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,   208,   209,   210,   211,     0,    26,    27,    28,    29,
      30,    31,    32,     0,    33,    34,    35,    36,    37,    38,
     477,    40,    41,    42,    43,    44,    45,    46,     0,   478,
     479,    47,   212,   213,   214,   215,   216,   480,     0,     0,
     481,    48,     0,     0,     0,     0,     0,   217,   218,   219,
     220,    49,    50,    51,    52,    53,    54,   482,     0,   483,
       0,     0,     0,     0,     0,   221,   222,     0,    55,    56,
     223,     0,     0,    57,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
       0,     0,     0,     0,     0,     0,  -397,   671,   225,   226,
     227,   228,   229,   230,     1,     2,     3,   465,   466,     4,
       5,   467,   468,   469,     6,     0,     7,     8,     9,   470,
     471,   472,    10,    11,    12,    13,    14,   473,    15,    16,
     204,    17,    18,   474,    19,    20,    21,    22,    23,     0,
     475,     0,   205,   206,     0,     0,     0,     0,     0,     0,
     207,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    25,   208,   209,   210,   211,     0,
      26,    27,    28,    29,    30,    31,    32,     0,    33,    34,
      35,    36,    37,    38,   477,    40,    41,    42,    43,    44,
      45,    46,     0,   478,   479,    47,   212,   213,   214,   215,
     216,   480,     0,     0,   481,    48,     0,     0,     0,     0,
       0,   217,   218,   219,   220,    49,    50,    51,    52,    53,
      54,   482,     0,   483,     0,     0,     0,     0,     0,   221,
     222,     0,    55,    56,   223,     0,     0,    57,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,     0,     0,     0,     0,     0,     0,
    -397,     0,   225,   226,   227,   228,   229,   230,     1,     2,
       3,     0,     0,     4,     5,     0,     0,     0,     6,     0,
       7,     8,     9,     0,     0,     0,    10,    11,    12,    13,
      14,     0,    15,    16,   204,    17,    18,     0,    19,    20,
      21,    22,    23,     0,     0,     0,   205,   206,     0,     0,
       0,     0,     0,     0,   207,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,    25,   208,
     209,   210,   211,     0,    26,    27,    28,    29,    30,    31,
      32,     0,    33,    34,    35,    36,    37,    38,     0,    40,
      41,    42,    43,    44,    45,    46,     0,     0,     0,    47,
     212,   213,   214,   215,   216,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,   217,   218,   219,   220,    49,
      50,    51,    52,    53,    54,     0,     0,     0,     0,     0,
       0,     0,     0,   221,   222,     0,    55,    56,   223,     0,
       0,    57,    58,     0,     0,     0,     0,     0,     1,     2,
       3,     0,     0,     4,     5,     0,     0,     0,     6,     0,
       7,     8,     9,     0,     0,     0,    10,    11,    12,    13,
      14,     0,    15,    16,     0,    17,    18,   224,    19,    20,
      21,    22,    23,     0,     0,     0,   225,   226,   227,   228,
     229,   230,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,    25,     0,
       0,     0,     0,     0,    26,    27,    28,    29,    30,    31,
      32,     0,    33,    34,    35,    36,    37,    38,     0,    40,
      41,    42,    43,    44,    45,    46,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
      50,    51,    52,    53,    54,     0,     0,     0,     0,     0,
       2,     3,     0,     0,     4,     5,    55,    56,     0,     6,
       0,     7,    58,     9,     0,     0,     0,     0,    11,    12,
       0,    14,     0,    15,    16,     0,     0,    18,     0,     0,
      20,    21,    22,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    60,    24,    25,
       0,     0,     0,     0,     0,    26,    27,    28,    29,    30,
      31,    32,     0,    33,    34,    35,    36,    37,     0,     0,
      40,    41,    42,    43,    44,    45,    46,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     0,     0,     0,     0,
      49,    50,    51,    52,    53,    54,     0,     0,     0,     0,
       0,    14,     0,     0,     0,   204,   340,    55,    56,     0,
       0,     0,     0,    23,     0,     0,     0,   205,   206,     0,
       0,     0,     0,     0,     0,   207,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,     0,
     208,   209,   210,   211,     0,     0,     0,     0,    59,    30,
      31,   928,     0,     0,     0,     0,     0,     0,    60,     0,
      40,    41,    42,    43,    44,    45,    46,     0,     0,     0,
      47,   212,   213,   214,   215,   216,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   217,   218,   219,   220,
       0,     0,     0,     0,    53,     0,     0,     0,     0,     5,
       0,     0,     0,     0,   221,   222,     0,    55,     0,   223,
       0,     0,     0,     0,     0,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,     0,     0,
       0,     0,     0,   204,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   205,   206,     0,   224,     0,
       0,     0,    24,   207,   341,     0,     0,   225,   342,   227,
     228,   229,   230,    30,    31,     0,    24,     0,   208,   209,
     210,   211,     0,     0,    40,    41,    42,    43,    44,    45,
      46,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   212,
     213,   214,   215,   216,     0,     0,     0,     0,    53,     0,
       0,   204,     0,     0,   217,   218,   219,   220,     0,     0,
       0,    55,     0,   205,   206,     0,     0,     0,     0,     0,
       0,   207,   221,   222,     0,     0,     0,   223,     0,     0,
       0,     0,     0,     0,    24,     0,   208,   209,   210,   211,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,     0,     0,     0,   224,   212,   213,   214,
     215,   216,     0,     0,     0,   225,   226,   227,   228,   229,
     230,     0,   217,   218,   219,   220,     0,     0,     0,   651,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     221,   222,     0,     0,   204,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   205,   206,     0,     0,
       0,     0,     0,     0,   207,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,   208,
     209,   210,   211,     0,   224,     0,     0,     0,   855,   856,
       0,   632,     0,   225,   226,   227,   228,   229,   230,    40,
      41,    42,    43,    44,    45,    46,   857,     0,     0,     0,
     212,   213,   214,   215,   216,     0,     0,     0,     0,     0,
       0,     0,   204,     0,     0,   217,   218,   219,   220,     0,
       0,     0,     0,     0,   205,   206,     0,     0,     0,     0,
       0,     0,   207,   221,   222,     0,     0,     0,   223,     0,
       0,     0,     0,     0,     0,    24,     0,   208,   209,   210,
     211,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    41,    42,
      43,    44,    45,    46,     0,     0,     0,   224,   212,   213,
     214,   215,   216,     0,  -397,     0,   225,   226,   227,   228,
     229,   230,     0,   217,   218,   219,   220,     0,     0,     0,
       0,     0,     0,     0,     0,   204,     0,     0,     0,     0,
       0,   221,   222,     0,     0,     0,   223,   205,   206,     0,
       0,     0,     0,     0,     0,   207,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,    25,
     208,   209,   210,   211,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,     0,     0,     0,     0,
       0,     0,  -164,     0,   225,   226,   227,   228,   229,   230,
       0,   212,   213,   214,   215,   216,     0,     0,  -164,     0,
       0,     0,     0,     0,     0,     0,   217,   218,   219,   220,
    -164,     0,     0,     0,     0,     0,     0,     0,   204,     0,
       0,     0,     0,     0,   221,   222,     0,     0,     0,   223,
     205,   206,     0,     0,     0,     0,     0,     0,   207,     0,
       0,     0,     0,     0,     0,     0,  -164,  -164,     0,     0,
       0,    24,    25,   208,   209,   210,   211,  -164,  -164,  -164,
    -164,  -164,  -164,  -164,     0,     0,     0,  -164,   224,     0,
       0,     0,   756,   757,     0,   632,   923,   225,   226,   227,
     228,   229,   230,     0,   212,   213,   214,   215,   216,     0,
       0,  -164,     0,     0,     0,     0,     0,     0,     0,   217,
     218,   219,   220,     0,  -164,     0,     0,     0,     0,     0,
       0,   204,     0,     0,     0,     0,     0,   221,   222,     0,
       0,     0,   223,   205,   206,     0,     0,     0,     0,     0,
       0,   207,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,    25,   208,   209,   210,   211,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   224,     0,     0,     0,   756,   757,     0,   632,   957,
     225,   226,   227,   228,   229,   230,     0,   212,   213,   214,
     215,   216,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   217,   218,   219,   220,     0,     0,     0,     0,
       0,     0,     0,     0,   204,     0,     0,     0,     0,     0,
     221,   222,     0,     0,     0,   223,   205,   206,     0,     0,
       0,     0,     0,     0,   207,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,   208,
     209,   210,   211,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,     0,     0,     0,   756,   757,
       0,   632,     0,   225,   226,   227,   228,   229,   230,     0,
     212,   213,   214,   215,   216,     0,     0,     0,     0,     0,
       0,     0,   204,     0,     0,   217,   218,   219,   220,     0,
       0,     0,     0,     0,   205,   206,     0,     0,     0,     0,
       0,     0,   207,   221,   222,     0,     0,     0,   223,     0,
       0,     0,     0,     0,     0,    24,     0,   208,   209,   210,
     211,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,   212,   213,
     214,   215,   216,   534,     0,     0,   225,   226,   227,   228,
     229,   230,     0,   217,   218,   219,   220,     0,     0,     0,
       0,     0,     0,     0,     0,   204,     0,     0,     0,     0,
       0,   221,   222,     0,     0,     0,   223,   205,   206,     0,
       0,     0,     0,     0,     0,   207,     2,     3,     0,     0,
       4,     5,     0,     0,     0,     6,     0,     0,    24,     9,
     208,   209,   210,   211,    11,    12,     0,    14,     0,    15,
      16,     0,     0,     0,     0,   224,     0,    21,    22,    23,
       0,   536,     0,     0,   225,   226,   227,   228,   229,   230,
       0,   212,   213,   214,   215,   216,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   217,   218,   219,   220,
       0,    26,    27,    28,    29,    30,    31,     0,   204,    33,
      34,    35,    36,    37,   221,   222,     0,     0,     0,   223,
     205,   206,     0,     0,     0,     0,    47,     0,   207,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,     0,   208,   209,   210,   211,    50,    51,    52,
      53,    54,     0,     0,     0,     0,     0,     0,   224,   558,
       0,     0,     0,    55,     0,     0,     0,   225,   226,   227,
     228,   229,   230,     0,   212,   213,   214,   215,   216,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   217,
     218,   219,   220,     0,     0,     0,     0,     0,     0,     0,
       0,   204,     0,     0,     0,     0,     0,   221,   222,     0,
       0,     0,   223,   205,   206,     0,     0,     0,     0,     0,
       0,   207,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,   208,   209,   210,   211,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   224,     0,     0,   595,     0,     0,     0,     0,     0,
     225,   226,   227,   228,   229,   230,     0,   212,   213,   214,
     215,   216,     0,     0,     0,     0,     0,     0,     0,   204,
       0,     0,   217,   218,   219,   220,     0,     0,     0,     0,
       0,   205,   206,     0,     0,     0,     0,     0,     0,   207,
     221,   222,     0,     0,     0,   223,     0,     0,     0,     0,
       0,     0,    24,    25,   208,   209,   210,   211,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,   212,   213,   214,   215,   216,
       0,   632,     0,   225,   226,   227,   228,   229,   230,     0,
     217,   218,   219,   220,     0,     0,     0,     0,     0,     0,
       0,     0,   204,     0,     0,     0,     0,     0,   221,   222,
       0,     0,     0,   223,   205,   206,     0,     0,     0,     0,
       0,     0,   207,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,   208,   209,   210,
     211,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,     0,     0,     0,     0,     0,     0,     0,
       0,   225,   226,   227,   228,   229,   230,     0,   212,   213,
     214,   215,   216,     0,     0,     0,     0,     0,     0,     0,
     204,     0,     0,   217,   218,   219,   220,     0,     0,     0,
       0,     0,   205,   206,     0,     0,     0,     0,     0,     0,
     207,   221,   222,     0,     0,     0,   223,     0,     0,     0,
       0,     0,     0,    24,     0,   208,   209,   210,   211,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,   212,   213,   214,   215,
     216,   713,     0,     0,   225,   226,   227,   228,   229,   230,
       0,   217,   218,   219,   220,     0,     0,     0,     0,     0,
       0,     0,     0,   204,     0,     0,     0,     0,     0,   221,
     222,     0,     0,     0,   223,   205,   206,     0,     0,     0,
       0,     0,     0,   207,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,     0,   208,   209,
     210,   211,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,     0,     0,     0,     0,     0,     0,
     728,     0,   225,   226,   227,   228,   229,   230,     0,   212,
     213,   214,   215,   216,     0,     0,     0,     0,     0,     0,
       0,   204,     0,     0,   217,   218,   219,   220,     0,     0,
       0,     0,     0,   205,   206,     0,     0,     0,     0,     0,
       0,   207,   221,   222,     0,     0,     0,   223,     0,     0,
       0,     0,     0,     0,    24,     0,   208,   209,   210,   211,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,   212,   213,   214,
     215,   216,     0,     0,     0,   225,   226,   227,   228,   229,
     230,     0,   217,   218,   219,   220,     0,     0,     0,     0,
       0,     0,     0,     0,   204,     0,     0,     0,     0,     0,
     221,   222,     0,     0,     0,   223,   205,   206,     0,     0,
       0,     0,     0,   204,   207,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   205,   206,    24,     0,   208,
     209,   210,   211,   207,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,     0,    24,     0,   208,   209,
     210,   211,     0,   225,   538,   227,   228,   229,   230,     0,
     212,   213,   214,   215,   216,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   217,   218,   219,   220,   212,
     213,   214,   215,   216,     0,     0,     0,     0,     0,     0,
       0,   204,     0,     0,   217,   218,   219,   220,   223,     0,
       0,     0,     0,   205,   206,     0,     0,     0,     0,     0,
       0,   207,     0,     0,     0,     0,     0,   223,     0,     0,
       0,     0,     0,     0,    24,     0,   208,   209,   210,   211,
       0,     0,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,     0,     0,   225,   226,   227,   228,
     229,   230,     0,     0,     0,     0,   349,   212,   213,   214,
     215,   216,     0,     0,     0,   225,   226,   227,   228,   229,
     230,     0,   217,   218,   219,   220,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     2,     3,     0,   223,     4,     5,     0,     0,
       0,     6,     0,     7,     8,     9,     0,     0,     0,    10,
      11,    12,    13,    14,     0,    15,    16,     0,    17,    18,
       0,    19,    20,    21,    22,    23,     0,     0,     0,     0,
       0,     0,     0,     0,   357,     0,     0,     0,     0,     0,
       0,     0,     0,   225,   226,   227,   228,   229,   230,     0,
       0,    25,     0,     0,     0,     0,     0,    26,    27,    28,
      29,    30,    31,    32,     0,    33,    34,    35,    36,    37,
      38,     0,    40,    41,    42,    43,    44,    45,    46,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,    50,    51,    52,    53,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     3,    55,
      56,     4,     5,     0,    57,    58,     6,     0,     7,     8,
       9,     0,     0,     0,    10,    11,    12,    13,    14,     0,
      15,    16,     0,    17,    18,     0,    19,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   822,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,     0,
       0,     0,    26,    27,    28,    29,    30,    31,    32,     0,
      33,    34,    35,    36,    37,    38,     0,    40,    41,    42,
      43,    44,    45,    46,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,    50,    51,
      52,    53,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     2,     3,    55,    56,     4,     5,     0,     0,
      58,     6,     0,     7,     8,     9,     0,     0,     0,    10,
      11,    12,    13,    14,     0,    15,    16,     0,    17,    18,
       0,    19,    20,    21,    22,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,     0,     0,     0,     0,     0,    26,    27,    28,
      29,    30,    31,    32,     0,    33,    34,    35,    36,    37,
      38,     0,    40,    41,    42,    43,    44,    45,    46,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,    50,    51,    52,    53,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     3,    55,
      56,     4,     5,     0,     0,    58,     6,     0,     7,     8,
       9,     0,     0,     0,    10,    11,    12,    13,    14,     0,
      15,    16,     0,    17,    18,     0,    19,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,     0,
       0,     0,    26,    27,    28,    29,    30,    31,    32,     0,
      33,    34,    35,    36,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,    50,    51,
      52,    53,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     2,     3,    55,    56,     4,     5,     0,     0,
      58,     6,     0,     7,     8,     9,     0,     0,     0,    10,
      11,    12,    13,    14,     0,    15,    16,     0,    17,    18,
       0,    19,    20,    21,    22,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,     0,     0,     0,     0,     0,    26,    27,    28,
      29,    30,    31,     0,     0,    33,    34,    35,    36,    37,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    51,    52,    53,    54,     1,     2,
       3,     0,     0,     4,     5,     0,     0,     0,     6,    55,
       0,     8,     9,     0,     0,    58,    10,    11,    12,    13,
      14,     0,    15,    16,     0,    17,     0,     1,    19,     0,
      21,    22,    23,     5,     0,     0,     0,     0,     0,     0,
       8,     0,     0,     0,     0,    10,     0,     0,    13,    14,
       0,     0,     0,     0,    17,     0,     0,    19,     0,     0,
       0,    23,     0,     0,    26,    27,    28,    29,    30,    31,
       0,     0,    33,    34,    35,    36,    37,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,    30,    31,    48,
       0,     0,     0,     0,     0,     0,    38,     0,     0,     0,
      50,    51,    52,    53,    54,     0,     2,     3,    47,     0,
       4,     5,     0,     0,     0,     6,    55,     7,    48,     9,
       0,     0,    58,     0,    11,    12,     0,    14,     0,    15,
      16,     0,    53,    18,     0,     0,    20,    21,    22,    23,
       0,     0,     0,     0,     0,    55,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,     0,     0,     0,
       0,    26,    27,    28,    29,    30,    31,    32,     0,    33,
      34,    35,    36,    37,     0,     0,    40,    41,    42,    43,
      44,    45,    46,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,     2,     3,     0,     0,
       4,     5,     0,    55,    56,     6,     0,     7,     0,     9,
       0,     0,     0,     0,    11,    12,     0,    14,     0,    15,
      16,     0,     0,    18,     0,     0,    20,    21,    22,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,     0,     0,     0,
       0,    26,    27,    28,    29,    30,    31,    32,     0,    33,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56
};

static const yytype_int16 yycheck[] =
{
       0,   200,   102,     0,     0,     0,   143,    71,    72,     0,
      74,    75,    59,    71,    72,   432,   143,   416,   142,   515,
     654,    59,   155,   635,   791,   318,   458,   293,   194,   125,
     142,   143,   298,   595,    51,   107,   121,    91,   123,   111,
      25,   207,   114,    50,    25,   117,    71,    72,   120,   121,
     122,   174,   375,   108,   853,   178,   379,    45,    46,    59,
      60,    67,    74,    67,    76,    68,    78,    79,    80,    69,
      70,    71,    72,   200,     9,   262,    51,    62,    63,    71,
      72,    62,    63,   172,     0,    51,    40,    41,    42,   526,
     527,   528,   529,    62,    19,   142,   172,   193,    98,    62,
      63,    98,    98,    98,   142,    62,    63,    98,   907,    69,
      70,   172,    37,   691,   691,   115,   177,   124,   172,     0,
     172,   262,   172,   262,   224,   703,   703,    62,   128,    84,
      85,    86,    87,    88,    89,    90,    43,    44,   138,   174,
     140,   340,   142,   143,    60,   174,   345,   346,    62,   442,
     337,   180,   224,    62,    63,    91,   174,   769,   175,   292,
     195,   773,   299,   456,   457,   331,    82,    91,    84,   293,
     172,   177,   734,   177,   298,   177,   179,   195,   172,   172,
     140,   293,    98,   449,   174,   179,   298,   299,   173,   174,
      71,    72,   173,   174,   194,    62,   337,    91,   337,   174,
     599,   189,   190,   178,   173,   195,   262,   207,   174,   172,
     174,   172,   178,   262,   177,   172,   180,    98,   172,   182,
      62,    63,   176,   177,   179,   182,     9,   143,   191,   996,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
     174,   174,    25,   172,   178,   879,   293,   347,   174,   349,
     469,   298,   168,   169,    37,   293,  1023,   357,   172,   189,
     298,   142,   195,   172,    25,   265,   262,   466,   182,   195,
     174,   183,   184,   182,    62,   347,   180,   349,    62,   174,
     499,   337,   174,   174,   200,   357,   195,   177,   337,   861,
      73,    74,   864,   293,     0,    62,    63,   463,   298,   299,
     195,    62,    63,   195,   195,   172,   173,   177,   380,   177,
     177,    94,   478,   194,   810,   182,   172,   182,    25,   172,
      62,    63,   187,   188,   191,   449,   207,   620,   515,   174,
     747,   331,   764,   178,     0,   118,   336,   449,   338,   738,
     412,   337,   339,   339,   339,   195,   262,   981,   131,   204,
     205,   206,   416,   417,    60,    62,    63,    64,   416,   931,
      67,   216,   934,    62,    63,    71,    72,   174,    47,    48,
     361,   362,   194,   180,   515,   375,   515,    67,   815,   379,
     480,   262,   819,   483,   172,   174,   175,   175,   172,   526,
     527,   416,    98,   177,   182,   172,   173,   720,   182,   471,
     177,   473,   449,   173,   174,   172,   174,   191,   175,   172,
     178,   449,   293,    62,    63,   182,     0,   298,   173,   174,
     852,   337,   128,   339,   416,   857,   645,   174,   492,   493,
     172,   178,   138,   756,   492,   493,    62,   143,   173,   173,
     182,   176,   177,    62,   173,   174,   510,   179,   512,   449,
     331,   670,   510,   517,   518,   336,   337,   174,   339,   515,
     179,   178,   104,   463,   528,   529,   515,   492,   493,   469,
     528,   529,   599,   172,    62,   641,    60,   179,   478,   177,
     361,   362,   174,   182,   172,   510,   178,    71,    72,   172,
     490,   491,   492,   493,   375,   172,   913,   172,   379,   499,
     492,   493,   689,   528,   529,   517,   518,   519,   172,   509,
     173,   174,   172,   173,    98,   681,   682,   177,   510,   515,
     174,   521,   181,   172,   178,   192,   526,   527,   528,   529,
     490,   491,   855,   182,   667,   416,   528,   529,   174,   191,
     173,   174,   178,   127,   616,   617,   195,    49,   689,   509,
     689,   135,   173,   172,   173,   692,   547,   548,   177,   143,
     779,   521,   146,   182,   173,   692,   173,   691,   449,   986,
     172,   155,   191,   173,   629,   190,   899,   704,   650,   778,
     767,   653,   463,   174,   172,   173,   172,   179,   469,   177,
     471,   177,   173,   299,   182,   173,   182,   478,   194,   515,
     173,   174,   179,   191,   188,   191,   190,   178,   774,   609,
     179,   492,   493,   179,   172,   173,   200,   173,   499,   177,
     173,   174,   173,   810,   724,   791,   767,   195,   767,   510,
     172,   173,   632,   689,   515,   177,   517,   173,   174,   172,
     689,   641,   101,   102,   691,   645,    91,   528,   529,    91,
     722,   723,   724,   691,   173,   174,   703,    91,   173,   174,
       9,   880,   881,   882,   177,   703,   547,   548,   177,   810,
     670,   810,   871,   173,   174,   173,    25,    37,   815,    19,
     106,   681,   682,   599,   172,   757,   179,   687,    37,   179,
     690,   691,   692,   689,   794,   175,   796,   797,   173,   174,
     126,   173,   174,   703,   704,   173,   174,   172,   292,   173,
     174,   767,   195,   710,   710,   710,   173,   174,   767,   145,
     720,   305,   941,   172,    73,    74,   195,   687,   728,   928,
     180,   315,   316,   172,   789,    84,    85,    86,    87,    88,
      89,    90,   173,   174,   195,    94,   173,   174,   914,   549,
     550,   632,   336,   175,   810,   339,   756,   395,   396,   174,
     641,   810,   195,   982,   645,   399,   400,   401,   402,   118,
     175,   767,   173,   689,   774,   174,   692,   361,   362,   779,
     397,   398,   131,   178,   856,   178,   492,   493,   704,   670,
     178,   791,   173,   848,   710,   173,   962,   861,  1017,   173,
     681,   682,   174,   861,   876,   403,   404,   174,   689,   217,
     218,   219,   220,   174,   810,   815,   888,   410,   411,   819,
     526,   527,   528,   529,   174,   173,   173,   173,   900,   710,
     996,   173,   416,    39,   173,   194,   861,   172,   179,   720,
      84,    85,    86,    87,    88,    89,    90,   728,   920,     3,
     195,   767,    68,   853,   179,   855,   173,  1023,   284,   173,
     860,   861,    16,   918,   864,   173,   866,    21,   174,   861,
      24,   173,   173,   180,   174,   756,    30,   175,   175,    33,
     880,   881,   882,   175,   984,   469,   767,   180,   960,   172,
     195,   194,   136,   774,   810,   173,    68,   969,   779,   899,
     180,   782,   124,   172,   107,   173,   961,   907,   492,   493,
     791,   966,   173,   173,   914,   499,   119,   173,   175,   991,
     123,   175,   174,   173,   175,   180,   510,   180,    82,   810,
      11,   180,   987,   175,   172,   174,   180,   992,   175,   175,
      14,   941,   173,    64,   528,   529,   194,  1019,   195,   195,
     104,   195,   178,   172,  1026,  1010,   174,   178,  1013,   173,
     175,   195,   962,   547,   548,   174,   173,    88,   172,   174,
     172,    92,   853,   905,   855,    96,   405,   407,   200,   305,
     861,   406,   982,   137,   408,   127,   692,   277,   409,   415,
     416,   978,   193,   517,   773,   609,   996,   769,   704,   880,
     881,   882,   866,    84,    85,    86,    87,    88,    89,    90,
     526,   527,   528,   529,   934,   599,   864,  1017,   899,   445,
     446,   224,   517,  1023,   774,   641,   907,   728,   690,   710,
     782,   728,   789,   914,   782,   156,   477,  1013,   159,   160,
     961,   162,   992,    98,   689,   166,   598,    -1,   598,    -1,
     171,    -1,    -1,    -1,   175,   176,    -1,   178,   179,    -1,
     941,   645,   183,   184,   185,   186,   187,    -1,   189,    -1,
     191,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,   962,   666,   667,    -1,    -1,   670,    -1,    -1,    -1,
      71,    72,    -1,    74,    75,    76,    77,    78,    79,    80,
      81,   982,    83,    -1,    85,    -1,    -1,    -1,   692,   815,
      -1,    -1,    -1,   819,    -1,   996,    -1,    -1,   340,    -1,
     704,    -1,    -1,   345,   346,    -1,   710,    -1,    -1,    -1,
      -1,    -1,   354,    -1,    -1,    -1,  1017,    -1,    -1,    -1,
      -1,    -1,  1023,   365,   347,    -1,   349,    -1,    -1,    -1,
     353,    -1,   355,   356,   357,   861,   378,    -1,   864,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
      -1,    -1,   598,   599,    -1,   691,   692,    -1,     9,    84,
      85,    86,    87,    88,    89,    90,    -1,   703,   704,    -1,
      -1,    -1,   414,    -1,    25,   779,    -1,    -1,   782,    84,
      85,    86,    87,    88,    89,    90,    37,    -1,    -1,    60,
      83,    84,    85,    86,    87,    88,    89,    90,   440,    -1,
      71,    72,    -1,    74,    75,    76,    77,    78,    79,    80,
      81,   136,    -1,    -1,    -1,    -1,   458,    -1,    -1,    -1,
      -1,    -1,    73,    74,   466,    84,    85,    86,    87,    88,
      89,    90,    -1,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    94,    -1,   221,   222,    -1,    -1,   225,
     226,   227,   228,   229,   230,   180,   127,   861,    -1,    -1,
      62,    -1,    64,    65,    66,    67,    -1,   118,    -1,    -1,
     195,    -1,   143,    -1,     9,    -1,   880,   881,   882,   815,
     131,    -1,    -1,   819,    -1,    -1,   179,    -1,    -1,    -1,
      25,    -1,   738,    95,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,   175,   188,    -1,   190,
      -1,   462,    -1,    -1,    -1,    -1,    -1,    62,    63,   200,
      -1,   133,    -1,    -1,    -1,    -1,   337,   941,    73,    74,
      -1,    -1,    -1,    -1,    -1,   486,    -1,    -1,    -1,    84,
      85,    86,    87,    88,    89,    90,    -1,   893,    -1,    94,
      -1,    -1,    -1,    -1,    -1,   607,   342,    -1,    -1,    -1,
     172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   982,    -1,
      -1,    -1,    -1,   118,     9,    -1,    -1,    -1,    -1,    -1,
     632,    -1,    -1,   839,   840,    -1,   131,    -1,    -1,    -1,
      25,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    37,  1017,    -1,    -1,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,   172,    -1,    -1,
      -1,    -1,   177,    -1,   315,   316,    -1,   182,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,   191,    -1,    -1,    84,
      85,    86,    87,    88,    89,    90,   337,    -1,    -1,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   728,    -1,    -1,   731,
      -1,   492,   493,   118,   635,   718,   719,   179,    -1,   640,
      -1,    -1,    -1,     9,    -1,    -1,   131,    -1,    -1,    -1,
     511,   512,   513,    -1,   515,    -1,   517,   518,   519,    25,
      -1,    -1,   764,    -1,    -1,    -1,    -1,   528,   529,    -1,
      -1,    37,    -1,    -1,   675,   676,   778,   678,    -1,   680,
      -1,    -1,   683,   684,   685,   416,   417,   418,   419,    -1,
      -1,    -1,    -1,    -1,   695,    -1,    62,    -1,    -1,    -1,
     701,    -1,   538,    -1,   705,    -1,   707,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   553,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     842,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     852,   853,   118,    -1,    -1,   857,    -1,     9,    -1,   595,
      -1,   492,   493,    -1,    -1,   131,    -1,    -1,   769,   871,
      -1,    -1,   773,    25,   775,    -1,    -1,    -1,    -1,   510,
      -1,   512,   513,    -1,   515,    37,   517,   518,   519,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   528,   529,    -1,
      -1,   903,   803,   804,   906,   907,   172,    -1,    -1,    -1,
      -1,   177,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,
      -1,    73,    74,    -1,    -1,   191,   928,    -1,   689,     9,
      -1,    -1,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    94,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,   862,    -1,    -1,    -1,    -1,   118,    -1,   599,    -1,
      -1,    -1,   873,    -1,    -1,    -1,    -1,    -1,    -1,   131,
      -1,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    -1,    -1,    -1,   734,    -1,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,
     172,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,   930,
     182,    -1,   933,    -1,    -1,    -1,    -1,   938,   118,   191,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   810,
      -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,   689,    -1,
      -1,   692,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   973,   704,    -1,   976,     3,     4,     5,    -1,
      -1,     8,     9,    -1,    -1,    -1,    13,    -1,    15,    16,
      17,    -1,   172,    -1,    21,    22,    23,    24,    25,    -1,
      27,    28,   182,    30,    31,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,   810,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,
     117,   118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   131,   132,    -1,    -1,    -1,   136,
     137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    -1,     8,     9,    -1,    -1,    -1,    13,
     861,    15,    16,    17,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    -1,    27,    28,   172,    30,    31,    -1,    33,
      34,    35,    36,    37,    -1,   182,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    75,    -1,    77,    78,    79,    80,    81,    82,    -1,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,   131,   132,     8,
       9,    -1,    -1,   137,    13,    -1,    15,    -1,    17,    -1,
      -1,    -1,    -1,    22,    23,    -1,    25,    -1,    27,    28,
      -1,    -1,    31,    -1,    -1,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,
      -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,   191,    -1,    -1,
      69,    70,    71,    72,    73,    74,    75,    -1,    77,    78,
      79,    80,    81,    -1,    -1,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,   132,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    39,   172,    41,    42,    -1,    -1,   177,    -1,
      -1,    -1,    49,   182,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   191,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,    -1,    -1,   103,   104,    -1,    -1,
      -1,    -1,    -1,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,    -1,   122,    -1,    -1,    -1,    -1,
      -1,   128,   129,    -1,   131,   132,   133,    -1,    -1,   136,
     137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,
      -1,    -1,   179,   180,   181,   182,   183,   184,   185,   186,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    39,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    72,
      73,    74,    75,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,    -1,    -1,
     103,   104,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,    -1,   122,
      -1,    -1,    -1,    -1,    -1,   128,   129,    -1,   131,   132,
     133,    -1,    -1,   136,   137,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,
      -1,    -1,    -1,    -1,    -1,    -1,   179,   180,   181,   182,
     183,   184,   185,   186,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      39,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    64,    65,    66,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,   100,    -1,    -1,   103,   104,    -1,    -1,    -1,    -1,
      -1,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,    -1,   122,    -1,    -1,    -1,    -1,    -1,   128,
     129,    -1,   131,   132,   133,    -1,    -1,   136,   137,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,
     179,    -1,   181,   182,   183,   184,   185,   186,     3,     4,
       5,    -1,    -1,     8,     9,    -1,    -1,    -1,    13,    -1,
      15,    16,    17,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    -1,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78,    79,    80,    81,    82,    -1,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    94,
      95,    96,    97,    98,    99,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,    -1,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   128,   129,    -1,   131,   132,   133,    -1,
      -1,   136,   137,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,    -1,     8,     9,    -1,    -1,    -1,    13,    -1,
      15,    16,    17,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    -1,    27,    28,    -1,    30,    31,   172,    33,    34,
      35,    36,    37,    -1,    -1,    -1,   181,   182,   183,   184,
     185,   186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78,    79,    80,    81,    82,    -1,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
     115,   116,   117,   118,   119,    -1,    -1,    -1,    -1,    -1,
       4,     5,    -1,    -1,     8,     9,   131,   132,    -1,    13,
      -1,    15,   137,    17,    -1,    -1,    -1,    -1,    22,    23,
      -1,    25,    -1,    27,    28,    -1,    -1,    31,    -1,    -1,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,    62,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    75,    -1,    77,    78,    79,    80,    81,    -1,    -1,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    29,    30,   131,   132,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,   172,    73,
      74,   175,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    -1,   128,   129,    -1,   131,    -1,   133,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    -1,   172,    -1,
      -1,    -1,    62,    49,   178,    -1,    -1,   181,   182,   183,
     184,   185,   186,    73,    74,    -1,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    29,    -1,    -1,   110,   111,   112,   113,    -1,    -1,
      -1,   131,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,   128,   129,    -1,    -1,    -1,   133,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   182,    -1,    -1,    -1,   172,    95,    96,    97,
      98,    99,    -1,    -1,    -1,   181,   182,   183,   184,   185,
     186,    -1,   110,   111,   112,   113,    -1,    -1,    -1,   195,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     128,   129,    -1,    -1,    29,   133,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,
      65,    66,    67,    -1,   172,    -1,    -1,    -1,   176,   177,
      -1,   179,    -1,   181,   182,   183,   184,   185,   186,    84,
      85,    86,    87,    88,    89,    90,   194,    -1,    -1,    -1,
      95,    96,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,   128,   129,    -1,    -1,    -1,   133,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,   172,    95,    96,
      97,    98,    99,    -1,   179,    -1,   181,   182,   183,   184,
     185,   186,    -1,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,   128,   129,    -1,    -1,    -1,   133,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,   181,   182,   183,   184,   185,   186,
      -1,    95,    96,    97,    98,    99,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,   113,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,   128,   129,    -1,    -1,    -1,   133,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    84,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    94,   172,    -1,
      -1,    -1,   176,   177,    -1,   179,   180,   181,   182,   183,
     184,   185,   186,    -1,    95,    96,    97,    98,    99,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
     111,   112,   113,    -1,   131,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,   128,   129,    -1,
      -1,    -1,   133,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   172,    -1,    -1,    -1,   176,   177,    -1,   179,   180,
     181,   182,   183,   184,   185,   186,    -1,    95,    96,    97,
      98,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
     128,   129,    -1,    -1,    -1,   133,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,   176,   177,
      -1,   179,    -1,   181,   182,   183,   184,   185,   186,    -1,
      95,    96,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,   128,   129,    -1,    -1,    -1,   133,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,    95,    96,
      97,    98,    99,   178,    -1,    -1,   181,   182,   183,   184,
     185,   186,    -1,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,   128,   129,    -1,    -1,    -1,   133,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,     4,     5,    -1,    -1,
       8,     9,    -1,    -1,    -1,    13,    -1,    -1,    62,    17,
      64,    65,    66,    67,    22,    23,    -1,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,   172,    -1,    35,    36,    37,
      -1,   178,    -1,    -1,   181,   182,   183,   184,   185,   186,
      -1,    95,    96,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,   113,
      -1,    69,    70,    71,    72,    73,    74,    -1,    29,    77,
      78,    79,    80,    81,   128,   129,    -1,    -1,    -1,   133,
      41,    42,    -1,    -1,    -1,    -1,    94,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    64,    65,    66,    67,   115,   116,   117,
     118,   119,    -1,    -1,    -1,    -1,    -1,    -1,   172,   173,
      -1,    -1,    -1,   131,    -1,    -1,    -1,   181,   182,   183,
     184,   185,   186,    -1,    95,    96,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,   128,   129,    -1,
      -1,    -1,   133,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,
     181,   182,   183,   184,   185,   186,    -1,    95,    96,    97,
      98,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
     128,   129,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   172,    95,    96,    97,    98,    99,
      -1,   179,    -1,   181,   182,   183,   184,   185,   186,    -1,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,   128,   129,
      -1,    -1,    -1,   133,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   181,   182,   183,   184,   185,   186,    -1,    95,    96,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,   128,   129,    -1,    -1,    -1,   133,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   172,    95,    96,    97,    98,
      99,   178,    -1,    -1,   181,   182,   183,   184,   185,   186,
      -1,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,   128,
     129,    -1,    -1,    -1,   133,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,
     179,    -1,   181,   182,   183,   184,   185,   186,    -1,    95,
      96,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,   128,   129,    -1,    -1,    -1,   133,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   172,    95,    96,    97,
      98,    99,    -1,    -1,    -1,   181,   182,   183,   184,   185,
     186,    -1,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
     128,   129,    -1,    -1,    -1,   133,    41,    42,    -1,    -1,
      -1,    -1,    -1,    29,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    62,    -1,    64,
      65,    66,    67,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   172,    -1,    62,    -1,    64,    65,
      66,    67,    -1,   181,   182,   183,   184,   185,   186,    -1,
      95,    96,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,   111,   112,   113,    95,
      96,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,   110,   111,   112,   113,   133,    -1,
      -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   181,   182,   183,   184,
     185,   186,    -1,    -1,    -1,    -1,   172,    95,    96,    97,
      98,    99,    -1,    -1,    -1,   181,   182,   183,   184,   185,
     186,    -1,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,   133,     8,     9,    -1,    -1,
      -1,    13,    -1,    15,    16,    17,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    -1,    27,    28,    -1,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   181,   182,   183,   184,   185,   186,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    78,    79,    80,    81,
      82,    -1,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,   115,   116,   117,   118,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,   131,
     132,     8,     9,    -1,   136,   137,    13,    -1,    15,    16,
      17,    -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,
      27,    28,    -1,    30,    31,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    78,    79,    80,    81,    82,    -1,    84,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,
     117,   118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,   131,   132,     8,     9,    -1,    -1,
     137,    13,    -1,    15,    16,    17,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    -1,    27,    28,    -1,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    78,    79,    80,    81,
      82,    -1,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,   115,   116,   117,   118,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,   131,
     132,     8,     9,    -1,    -1,   137,    13,    -1,    15,    16,
      17,    -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,
      27,    28,    -1,    30,    31,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,
     117,   118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,   131,   132,     8,     9,    -1,    -1,
     137,    13,    -1,    15,    16,    17,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    -1,    27,    28,    -1,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    -1,    -1,    77,    78,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,   116,   117,   118,   119,     3,     4,
       5,    -1,    -1,     8,     9,    -1,    -1,    -1,    13,   131,
      -1,    16,    17,    -1,    -1,   137,    21,    22,    23,    24,
      25,    -1,    27,    28,    -1,    30,    -1,     3,    33,    -1,
      35,    36,    37,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    -1,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,
      -1,    37,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    77,    78,    79,    80,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
     115,   116,   117,   118,   119,    -1,     4,     5,    94,    -1,
       8,     9,    -1,    -1,    -1,    13,   131,    15,   104,    17,
      -1,    -1,   137,    -1,    22,    23,    -1,    25,    -1,    27,
      28,    -1,   118,    31,    -1,    -1,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,   131,    -1,    -1,    -1,    -1,
      -1,   137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      78,    79,    80,    81,    -1,    -1,    84,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,
     118,   119,    -1,    -1,    -1,    -1,     4,     5,    -1,    -1,
       8,     9,    -1,   131,   132,    13,    -1,    15,    -1,    17,
      -1,    -1,    -1,    -1,    22,    23,    -1,    25,    -1,    27,
      28,    -1,    -1,    31,    -1,    -1,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      78,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,
     118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     8,     9,    13,    15,    16,    17,
      21,    22,    23,    24,    25,    27,    28,    30,    31,    33,
      34,    35,    36,    37,    62,    63,    69,    70,    71,    72,
      73,    74,    75,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    94,   104,   114,
     115,   116,   117,   118,   119,   131,   132,   136,   137,   172,
     182,   195,   197,   198,   199,   237,   238,   239,   246,   250,
     251,   252,   253,   256,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   273,   275,   276,   277,
     278,   280,   283,   288,   291,   301,   304,   354,   355,   356,
     357,   358,   369,   378,   379,   380,   381,   172,   172,   172,
      91,   172,    91,    91,   172,   172,    91,   172,   172,   189,
     177,   177,   177,   172,   172,   379,   381,   253,   254,   256,
     257,   291,   378,     0,   289,   290,   291,   195,   174,   195,
     174,   195,   172,   182,   195,   199,   370,   371,   372,   373,
     374,   375,   376,   378,   195,   370,   199,   255,   256,   266,
     268,   275,   276,   277,   291,   378,   199,   256,   266,   268,
     275,   276,   277,   291,   378,   255,   276,   256,   275,   276,
     255,   256,   275,   255,   255,   255,   256,   275,   253,   275,
     253,   275,   289,   289,   289,   356,   324,   325,   359,   172,
     177,   384,   386,   388,    29,    41,    42,    49,    64,    65,
      66,    67,    95,    96,    97,    98,    99,   110,   111,   112,
     113,   128,   129,   133,   172,   181,   182,   183,   184,   185,
     186,   198,   200,   201,   202,   203,   204,   205,   206,   209,
     210,   211,   213,   214,   215,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   289,   314,   203,   172,   234,   234,   198,   234,
      25,    62,    63,   173,   174,   270,   271,   272,   314,   234,
     234,   234,   314,   233,   173,   173,   256,   257,   291,   378,
     291,   378,   370,   172,   199,   373,   375,   377,   172,   254,
     372,   375,   384,    83,   243,   244,   245,   291,   245,   289,
     289,   289,   289,   240,   289,   253,   253,   289,   241,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     273,   274,   198,   199,   302,   313,   179,   173,   385,   387,
      30,   178,   182,   233,   235,   254,   177,   172,   218,   172,
     218,   218,   313,   172,   172,   172,   172,   172,   218,   325,
     325,   325,   325,   219,   219,   172,   234,   314,   324,   219,
     219,   219,   219,   219,   219,    40,    41,    42,   172,   176,
     177,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,   194,   182,   187,   188,   183,   184,    43,    44,    45,
      46,   189,   190,    47,    48,   181,   191,   192,    49,    50,
     124,   125,   193,   173,   174,   251,   253,   259,   261,   265,
     267,   269,   173,   173,     9,   198,   286,   287,   173,   173,
     173,   173,   172,   173,   271,   190,   178,   178,   178,   173,
     174,   384,   242,   245,   377,   173,   173,   384,   377,   172,
     372,   375,    19,    37,   340,   243,   247,   248,   194,   315,
     315,   281,   313,   179,   303,     6,     7,    10,    11,    12,
      18,    19,    20,    26,    32,    39,    68,    83,    92,    93,
     100,   103,   120,   122,   180,   198,   199,   234,   236,   237,
     250,   251,   252,   253,   313,   321,   322,   323,   324,   326,
     327,   328,   330,   332,   333,   336,   337,   338,   339,   251,
     253,   256,   259,   265,   275,   361,   362,   363,   364,   365,
     366,   367,   368,   198,   309,   310,   250,   251,   252,   253,
     308,   311,   312,   235,   178,   178,   178,   235,   182,   235,
     314,   314,   314,   233,   314,   314,   314,   179,   179,   237,
     237,   233,   173,   173,   173,   198,   199,   216,   173,   217,
     233,   216,   234,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   219,   219,   219,   219,   220,   220,
     221,   221,   222,   222,   222,   222,   223,   223,   224,   225,
     226,   227,   228,   230,   230,   175,   234,   233,   172,   182,
     191,   382,   384,   389,   391,   382,   195,   172,   173,   174,
      91,    91,    91,    64,    67,   270,   177,   177,   233,   315,
     249,   173,   384,   384,   173,   173,   377,    37,    19,   172,
     315,   315,   179,   235,   316,   179,   282,   289,   305,   306,
     313,   179,   195,   235,   195,   175,   321,   331,   199,   234,
     172,   195,   234,   172,   172,   180,   340,   313,   334,   335,
      68,   179,   324,   195,   324,   195,   370,   370,   378,   378,
     175,   180,   321,   370,   275,   275,   275,   362,   199,   255,
     276,   283,   304,   255,   276,   255,   370,   174,   195,   173,
     174,   172,   182,   191,   372,   378,   383,   386,   390,   392,
     372,   378,   383,   172,   182,   378,   383,   378,   383,   173,
     174,   178,   178,   178,   178,   173,   173,   173,   174,   174,
     174,   173,   237,   237,   172,   205,   205,   174,   179,   219,
     173,   174,   178,   232,   175,   384,   389,   391,   254,   382,
     233,   284,   285,   173,   286,   173,   173,   194,   234,   234,
     173,   315,   173,   203,   341,   342,   176,   177,   198,   216,
     316,   317,   318,   319,   320,   195,   238,   289,   292,   293,
     294,   295,   296,   179,   174,   180,   289,   305,    51,   175,
     321,    39,   172,   195,   195,   234,   195,   234,   236,   172,
     179,   174,   195,    68,   101,   102,   121,   123,   321,   289,
     289,   289,   289,   313,   313,   289,   289,   289,   370,   360,
     361,   310,   173,   390,   392,   254,   383,   289,   289,   254,
     289,   289,    51,   312,   314,   314,   212,   216,   234,   234,
      11,   207,   208,   314,   317,   318,   233,   232,   173,   173,
     173,   382,   174,   173,   270,   178,   178,   173,   175,   343,
     216,   234,   175,   174,   180,   176,   177,   194,   316,   195,
     251,   253,   180,   294,   174,   195,   174,   195,   292,   306,
     289,   194,   307,   180,   235,   321,   172,   322,   327,   329,
     173,   173,   173,   341,    68,   335,   180,   324,   172,   324,
     324,   289,   289,   173,   173,   383,   173,   173,   173,   176,
     177,   180,   180,   175,   173,   174,   175,   174,   180,   384,
     384,   233,   173,   174,   177,   203,   344,   345,   175,   346,
      51,   178,   316,   180,   319,   216,   234,   316,   175,   297,
     300,   370,   298,   300,   378,   289,   298,   297,   180,   235,
     289,   175,   234,   236,   321,   321,   321,   173,   180,   234,
     172,   386,   216,   234,   233,   208,   233,   180,   270,   313,
     172,   174,   177,   203,   347,   348,   175,   349,   234,    51,
     178,   235,   289,   299,   300,   289,   299,   279,   289,   321,
     173,   195,    14,   195,   173,   178,   194,   178,   234,   344,
     313,   172,   174,   203,   350,   351,   175,   352,   178,   234,
     289,   289,   279,   195,   236,   321,   324,   270,   203,   173,
     178,   234,   347,   174,   335,   353,   178,   173,   173,   172,
     203,   173,   350,   174,   321,   234,   172,   335,   173,   234,
     173
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     204,   204,   204,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   206,   207,   207,   208,   208,   209,   209,   210,
     211,   212,   212,   212,   213,   213,   213,   213,   214,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   216,
     216,   217,   217,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   219,   219,   219,
     219,   220,   220,   220,   220,   221,   221,   221,   222,   222,
     222,   223,   223,   223,   223,   223,   224,   224,   224,   225,
     225,   226,   226,   227,   227,   228,   228,   229,   229,   230,
     230,   231,   231,   232,   232,   232,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   234,   234,
     235,   236,   236,   237,   237,   237,   237,   237,   238,   240,
     239,   241,   239,   242,   239,   243,   243,   244,   244,   245,
     245,   247,   246,   248,   246,   249,   246,   250,   250,   250,
     250,   250,   251,   251,   251,   251,   251,   252,   252,   252,
     252,   252,   253,   253,   253,   254,   254,   255,   255,   256,
     256,   256,   256,   256,   256,   256,   256,   257,   257,   258,
     258,   258,   258,   259,   259,   259,   259,   260,   260,   260,
     261,   261,   261,   262,   262,   262,   263,   263,   263,   264,
     264,   264,   265,   265,   265,   266,   266,   267,   267,   267,
     267,   268,   269,   269,   269,   269,   270,   270,   270,   271,
     271,   271,   271,   271,   271,   272,   272,   273,   273,   274,
     274,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   277,   277,   277,   278,   279,   281,
     280,   282,   280,   280,   283,   283,   284,   284,   285,   285,
     286,   286,   286,   286,   287,   287,   288,   289,   289,   290,
     290,   291,   291,   291,   291,   291,   291,   291,   291,   292,
     292,   293,   293,   294,   294,   294,   294,   295,   295,   296,
     296,   297,   297,   297,   298,   298,   299,   299,   300,   302,
     301,   303,   301,   301,   304,   305,   305,   305,   306,   307,
     307,   308,   308,   309,   309,   310,   311,   311,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   313,   313,   314,   314,   314,   314,   315,   315,
     316,   316,   316,   317,   317,   318,   318,   319,   319,   319,
     319,   320,   320,   320,   320,   320,   320,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   321,   322,
     323,   323,   323,   323,   324,   324,   324,   325,   326,   326,
     327,   328,   328,   328,   329,   329,   330,   330,   331,   330,
     332,   332,   332,   332,   332,   332,   333,   334,   334,   335,
     336,   336,   337,   337,   338,   338,   338,   339,   339,   339,
     340,   340,   340,   340,   340,   341,   341,   341,   341,   341,
     342,   343,   343,   344,   344,   345,   345,   346,   346,   347,
     347,   348,   348,   349,   349,   350,   351,   351,   352,   352,
     353,   353,   354,   354,   355,   355,   356,   356,   356,   356,
     357,   358,   359,   360,   360,   361,   361,   362,   363,   363,
     363,   364,   364,   364,   364,   365,   365,   365,   366,   366,
     367,   367,   367,   368,   368,   368,   369,   369,   369,   369,
     369,   370,   370,   371,   371,   372,   372,   372,   373,   373,
     373,   374,   374,   375,   375,   375,   375,   375,   376,   376,
     376,   377,   377,   378,   378,   379,   379,   379,   380,   380,
     380,   381,   381,   382,   382,   382,   383,   383,   384,   384,
     385,   384,   386,   386,   387,   386,   388,   388,   388,   388,
     388,   388,   388,   388,   389,   389,   389,   389,   389,   390,
     390,   390,   390,   390,   391,   391,   391,   391,   391,   392,
     392,   392,   392
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     6,     1,     3,     3,     3,     6,     6,     4,
       6,     1,     3,     4,     6,     4,     6,     4,     3,     1,
       4,     3,     4,     3,     3,     2,     2,     6,     7,     1,
       1,     1,     3,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     2,     4,     1,     4,     2,
       2,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     4,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       1,     0,     1,     2,     2,     2,     2,     2,     6,     0,
       4,     0,     4,     0,     5,     5,     1,     2,     1,     0,
       1,     0,     5,     0,     5,     0,     6,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     1,     3,
       3,     3,     3,     2,     3,     2,     3,     2,     2,     2,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     4,     4,     1,     2,     3,
       2,     4,     1,     2,     3,     2,     1,     1,     1,     1,
       4,     4,     6,    10,     1,     1,     2,     4,     3,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     7,     7,     1,     1,     1,     1,     4,     0,     0,
       9,     0,    10,     5,     1,     1,     1,     3,     0,     1,
       0,     1,     1,     4,     1,     3,     6,     0,     1,     1,
       2,     2,     2,     5,     2,     5,     5,     2,     1,     0,
       1,     1,     2,     2,     2,     1,     2,     3,     3,     3,
       3,     3,     0,     2,     3,     2,     0,     1,     2,     0,
       7,     0,     8,     3,     1,     1,     3,     2,     3,     0,
       2,     1,     3,     1,     3,     1,     1,     3,     1,     2,
       3,     2,     1,     2,     3,     1,     2,     3,     2,     1,
       2,     3,     1,     1,     2,     3,     2,     3,     0,     2,
       1,     3,     4,     1,     3,     1,     0,     1,     3,     2,
       3,     2,     3,     5,     4,     6,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     6,     3,     3,     4,     4,     0,     1,     2,
       2,     5,     7,     5,     1,     1,     5,     7,     0,     9,
       3,     3,     2,     2,     2,     3,     3,     1,     3,     1,
       6,     5,     4,     2,     7,     4,     1,     2,     4,     4,
       0,     1,     1,     2,     2,     1,     2,     3,     4,     5,
       1,     2,     1,     4,     7,     1,     3,     2,     1,     4,
       7,     1,     3,     2,     1,     1,     1,     3,     2,     1,
       1,     3,     0,     1,     1,     2,     1,     1,     1,     1,
       5,     2,     1,     0,     1,     1,     2,     2,     1,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     4,     4,
       1,     1,     1,     2,     2,     3,     1,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     2,     1,     1,     2,
       3,     3,     4,     1,     4,     5,     2,     3,     3,     4,
       4,     1,     3,     1,     1,     1,     2,     3,     2,     3,
       4,     1,     3,     1,     1,     1,     1,     1,     1,     3,
       0,     5,     1,     2,     0,     4,     2,     3,     3,     3,
       4,     4,     4,     4,     1,     2,     2,     3,     1,     1,
       2,     2,     3,     1,     3,     3,     3,     4,     4,     3,
       3,     1,     4
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
        case 15:
#line 280 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 3434 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 291 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          set((yyval), ID_generic_selection);
          mto((yyval), (yyvsp[-3]));
          stack((yyval)).add(ID_generic_associations).get_sub().swap((irept::subt&)stack((yyvsp[-1])).operands());
        }
#line 3445 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 301 "parser.y" /* yacc.c:1646  */
    {
          init((yyval)); mto((yyval), (yyvsp[0]));
        }
#line 3453 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 305 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]); mto((yyval), (yyvsp[0]));
        }
#line 3461 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 312 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          stack((yyval)).id(ID_generic_association);
          stack((yyval)).set(ID_type_arg, stack((yyvsp[-2])));
          stack((yyval)).set(ID_value, stack((yyvsp[0])));
        }
#line 3472 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 319 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          stack((yyval)).id(ID_generic_association);
          stack((yyval)).set(ID_type_arg, irept(ID_default));
          stack((yyval)).set(ID_value, stack((yyvsp[0])));
        }
#line 3483 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 329 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          stack((yyval)).id(ID_gcc_builtin_va_arg);
          mto((yyval), (yyvsp[-3]));
          stack((yyval)).type().swap(stack((yyvsp[-1])));
        }
#line 3494 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 337 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          stack((yyval)).id(ID_gcc_builtin_types_compatible_p);
          irept::subt &subtypes=stack((yyval)).add(ID_subtypes).get_sub();
          subtypes.resize(2);
          subtypes[0].swap(stack((yyvsp[-3])));
          subtypes[1].swap(stack((yyvsp[-1])));
        }
#line 3507 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 349 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          stack((yyval)).id(ID_cw_va_arg_typeof);
          stack((yyval)).add(ID_type_arg).swap(stack((yyvsp[-1])));
        }
#line 3517 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 358 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          stack((yyval)).id(ID_builtin_offsetof);
          stack((yyval)).add(ID_type_arg).swap(stack((yyvsp[-3])));
          stack((yyval)).add(ID_designator).swap(stack((yyvsp[-1])));
        }
#line 3528 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 368 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_designated_initializer);
          stack((yyval)).operands().resize(1);
          stack((yyval)).op0().id(ID_member);
          stack((yyval)).op0().add_source_location()=stack((yyvsp[0])).source_location();
          stack((yyval)).op0().set(ID_component_name, stack((yyvsp[0])).get(ID_C_base_name));
        }
#line 3540 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 376 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          set((yyvsp[-1]), ID_member);
          stack((yyvsp[-1])).set(ID_component_name, stack((yyvsp[0])).get(ID_C_base_name));
          mto((yyval), (yyvsp[-1]));
        }
#line 3551 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 383 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          set((yyvsp[-2]), ID_index);
          mto((yyvsp[-2]), (yyvsp[-1]));
          mto((yyval), (yyvsp[-2]));
        }
#line 3562 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 393 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          set((yyval), ID_forall);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[-1]));
          PARSER.pop_scope();
        }
#line 3574 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 401 "parser.y" /* yacc.c:1646  */
    {
          // The precedence of this operator is too high; it is meant
          // to bind only very weakly.
          (yyval)=(yyvsp[-3]);
          set((yyval), ID_forall);
          mto((yyval), (yyvsp[-1]));
          mto((yyval), (yyvsp[0]));
          PARSER.pop_scope();
        }
#line 3588 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 411 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          set((yyval), ID_exists);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[-1]));
          PARSER.pop_scope();
        }
#line 3600 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 419 "parser.y" /* yacc.c:1646  */
    {
          // The precedence of this operator is too high; it is meant
          // to bind only very weakly.
          (yyval)=(yyvsp[-3]);
          set((yyval), ID_exists);
          mto((yyval), (yyvsp[-1]));
          mto((yyval), (yyvsp[0]));
          PARSER.pop_scope();
        }
#line 3614 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 431 "parser.y" /* yacc.c:1646  */
    { 
          (yyval)=(yyvsp[-2]);
          set((yyval), ID_side_effect);
          stack((yyval)).set(ID_statement, ID_statement_expression);
          mto((yyval), (yyvsp[-1]));
        }
#line 3625 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 442 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-3]), (yyvsp[-2]), ID_index, (yyvsp[-1])); }
#line 3631 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 444 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_side_effect);
          stack((yyval)).set(ID_statement, ID_function_call);
          stack((yyval)).operands().resize(2);
          stack((yyval)).op0().swap(stack((yyvsp[-2])));
          stack((yyval)).op1().clear();
          stack((yyval)).op1().id(ID_arguments);
        }
#line 3644 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 453 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-2]);
          set((yyval), ID_side_effect);
          stack((yyval)).set(ID_statement, ID_function_call);
          stack((yyval)).operands().resize(2);
          stack((yyval)).op0().swap(stack((yyvsp[-3])));
          stack((yyval)).op1().swap(stack((yyvsp[-1])));
          stack((yyval)).op1().id(ID_arguments);
        }
#line 3657 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 462 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_member);
          mto((yyval), (yyvsp[-2]));
          stack((yyval)).set(ID_component_name, stack((yyvsp[0])).get(ID_C_base_name));
        }
#line 3667 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 468 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_ptrmember);
          mto((yyval), (yyvsp[-2]));
          stack((yyval)).set(ID_component_name, stack((yyvsp[0])).get(ID_C_base_name));
        }
#line 3677 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 474 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]);
          set((yyval), ID_side_effect);
          stack((yyval)).set(ID_statement, ID_postincrement);
          mto((yyval), (yyvsp[-1]));
        }
#line 3687 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 480 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]);
          set((yyval), ID_side_effect);
          stack((yyval)).set(ID_statement, ID_postdecrement);
          mto((yyval), (yyvsp[-1]));
        }
#line 3697 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 487 "parser.y" /* yacc.c:1646  */
    {
          exprt tmp(ID_initializer_list);
          tmp.add_source_location()=stack((yyvsp[-2])).source_location();
          tmp.operands().swap(stack((yyvsp[-1])).operands());
          (yyval)=(yyvsp[-5]);
          set((yyval), ID_typecast);
          stack((yyval)).move_to_operands(tmp);
          stack((yyval)).type().swap(stack((yyvsp[-4])));
        }
#line 3711 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 497 "parser.y" /* yacc.c:1646  */
    {
          // same as above
          exprt tmp(ID_initializer_list);
          tmp.add_source_location()=stack((yyvsp[-3])).source_location();
          tmp.operands().swap(stack((yyvsp[-2])).operands());
          (yyval)=(yyvsp[-6]);
          set((yyval), ID_typecast);
          stack((yyval)).move_to_operands(tmp);
          stack((yyval)).type().swap(stack((yyvsp[-5])));
        }
#line 3726 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 516 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_expression_list);
          mto((yyval), (yyvsp[0]));
        }
#line 3735 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 521 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 3744 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 530 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_side_effect);
          stack((yyval)).set(ID_statement, ID_preincrement);
          mto((yyval), (yyvsp[0]));
        }
#line 3754 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 536 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_side_effect);
          stack((yyval)).set(ID_statement, ID_predecrement);
          mto((yyval), (yyvsp[0]));
        }
#line 3764 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 542 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_address_of);
          mto((yyval), (yyvsp[0]));
        }
#line 3773 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 547 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          irep_idt identifier=PARSER.lookup_label(stack((yyvsp[0])).get(ID_C_base_name));
          set((yyval), ID_address_of);
          stack((yyval)).operands().resize(1);
          stack((yyval)).op0()=stack((yyvsp[0]));
          stack((yyval)).op0().id(ID_label);
          stack((yyval)).op0().set(ID_identifier, identifier);
        }
#line 3786 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 556 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_dereference);
          mto((yyval), (yyvsp[0]));
        }
#line 3795 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 561 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_unary_plus);
          mto((yyval), (yyvsp[0]));
        }
#line 3804 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 566 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_unary_minus);
          mto((yyval), (yyvsp[0]));
        }
#line 3813 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 571 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_bitnot);
          mto((yyval), (yyvsp[0]));
        }
#line 3822 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 576 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_not);
          mto((yyval), (yyvsp[0]));
        }
#line 3831 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 581 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_sizeof);
          mto((yyval), (yyvsp[0]));
        }
#line 3840 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 586 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-3]);
          set((yyval), ID_sizeof);
          stack((yyval)).add(ID_type_arg).swap(stack((yyvsp[-1])));
        }
#line 3849 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 591 "parser.y" /* yacc.c:1646  */
    { // note no parentheses for expressions, just like sizeof
          (yyval)=(yyvsp[-1]);
          set((yyval), ID_alignof);
          mto((yyval), (yyvsp[0]));
        }
#line 3859 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 597 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          stack((yyval)).id(ID_alignof);
          stack((yyval)).add(ID_type_arg).swap(stack((yyvsp[-1])));
        }
#line 3869 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 607 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          set((yyval), ID_typecast);
          mto((yyval), (yyvsp[0]));
          stack((yyval)).type().swap(stack((yyvsp[-2])));
        }
#line 3880 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 614 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_complex_real);
          mto((yyval), (yyvsp[0]));
        }
#line 3889 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 619 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_complex_imag);
          mto((yyval), (yyvsp[0]));
        }
#line 3898 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 628 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_mult, (yyvsp[0])); }
#line 3904 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 630 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_div, (yyvsp[0])); }
#line 3910 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 632 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_mod, (yyvsp[0])); }
#line 3916 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 638 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_plus, (yyvsp[0])); }
#line 3922 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 640 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_minus, (yyvsp[0])); }
#line 3928 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 646 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_shl, (yyvsp[0])); }
#line 3934 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 648 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_shr, (yyvsp[0])); }
#line 3940 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 654 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_lt, (yyvsp[0])); }
#line 3946 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 656 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_gt, (yyvsp[0])); }
#line 3952 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 658 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_le, (yyvsp[0])); }
#line 3958 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 660 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_ge, (yyvsp[0])); }
#line 3964 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 666 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_equal, (yyvsp[0])); }
#line 3970 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 668 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_notequal, (yyvsp[0])); }
#line 3976 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 674 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_bitand, (yyvsp[0])); }
#line 3982 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 680 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_bitxor, (yyvsp[0])); }
#line 3988 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 686 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_bitor, (yyvsp[0])); }
#line 3994 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 692 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_and, (yyvsp[0])); }
#line 4000 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 698 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_or, (yyvsp[0])); }
#line 4006 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 707 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_implies, (yyvsp[0])); }
#line 4012 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 716 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_equal, (yyvsp[0])); }
#line 4018 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 722 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-3]);
          stack((yyval)).id(ID_if);
          mto((yyval), (yyvsp[-4]));
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 4029 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 729 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-2]);
          stack((yyval)).id(ID_side_effect);
          stack((yyval)).set(ID_statement, ID_gcc_conditional_expression);
          mto((yyval), (yyvsp[-3]));
          mto((yyval), (yyvsp[0]));
        }
#line 4040 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 740 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign); }
#line 4046 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 742 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_mult); }
#line 4052 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 744 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_div); }
#line 4058 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 746 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_mod); }
#line 4064 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 748 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_plus); }
#line 4070 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 750 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_minus); }
#line 4076 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 752 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_shl); }
#line 4082 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 754 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_shr); }
#line 4088 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 756 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_bitand); }
#line 4094 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 758 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_bitxor); }
#line 4100 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 760 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_bitor); }
#line 4106 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 766 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_comma, (yyvsp[0])); }
#line 4112 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 775 "parser.y" /* yacc.c:1646  */
    { init((yyval)); stack((yyval)).make_nil(); }
#line 4118 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 783 "parser.y" /* yacc.c:1646  */
    {
          // type only, no declarator!
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
        }
#line 4128 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 789 "parser.y" /* yacc.c:1646  */
    {
          // type only, no identifier!
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
        }
#line 4138 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 801 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          set((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_static_assert(true);
          mto((yyval), (yyvsp[-3]));
          mto((yyval), (yyvsp[-1]));
        }
#line 4150 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 812 "parser.y" /* yacc.c:1646  */
    {
            init((yyval), ID_declaration);
            stack((yyval)).type().swap(stack((yyvsp[-1])));
            PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
          }
#line 4160 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 818 "parser.y" /* yacc.c:1646  */
    {
          // patch on the initializer
          (yyval)=(yyvsp[-1]);
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 4170 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 824 "parser.y" /* yacc.c:1646  */
    {
            init((yyval), ID_declaration);
            stack((yyval)).type().swap(stack((yyvsp[-1])));
            PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
          }
#line 4180 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 830 "parser.y" /* yacc.c:1646  */
    {
          // patch on the initializer
          (yyval)=(yyvsp[-1]);
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 4190 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 836 "parser.y" /* yacc.c:1646  */
    {
            // just add the declarator
            PARSER.add_declarator(stack((yyvsp[-2])), stack((yyvsp[0])));
            // Needs to be done before initializer, as we want to see that identifier
            // already there!
          }
#line 4201 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 843 "parser.y" /* yacc.c:1646  */
    {
          // patch on the initializer
          (yyval)=(yyvsp[-4]);
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 4211 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 852 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-4]);
          stack((yyval)).id(ID_asm);
        }
#line 4220 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 861 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4228 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 869 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
        }
#line 4236 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 878 "parser.y" /* yacc.c:1646  */
    {
            (yyvsp[-1])=merge((yyvsp[0]), (yyvsp[-1])); // type attribute
            
            // the symbol has to be visible during initialization
            init((yyval), ID_declaration);
            stack((yyval)).type().swap(stack((yyvsp[-2])));
            PARSER.add_declarator(stack((yyval)), stack((yyvsp[-1])));
          }
#line 4249 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 887 "parser.y" /* yacc.c:1646  */
    {
          // add the initializer
          (yyval)=(yyvsp[-1]);
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 4259 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 894 "parser.y" /* yacc.c:1646  */
    {
            (yyvsp[-1])=merge((yyvsp[0]), (yyvsp[-1]));
            
            // the symbol has to be visible during initialization
            init((yyval), ID_declaration);
            stack((yyval)).type().swap(stack((yyvsp[-2])));
            PARSER.add_declarator(stack((yyval)), stack((yyvsp[-1])));
          }
#line 4272 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 903 "parser.y" /* yacc.c:1646  */
    {
          // add the initializer
          (yyval)=(yyvsp[-1]);
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 4282 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 910 "parser.y" /* yacc.c:1646  */
    {
            // type attribute goes into declarator
            (yyvsp[-1])=merge((yyvsp[0]), (yyvsp[-1]));
            PARSER.add_declarator(stack((yyvsp[-3])), stack((yyvsp[-1])));
          }
#line 4292 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 916 "parser.y" /* yacc.c:1646  */
    {
          // add in the initializer
          (yyval)=(yyvsp[-5]);
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 4302 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 942 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4310 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 947 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4318 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 951 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4326 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 959 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4334 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 966 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4342 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 974 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4350 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 985 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_atomic); }
#line 4356 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 986 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_const); }
#line 4362 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 987 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_restrict); }
#line 4368 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 988 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_volatile); }
#line 4374 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 989 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_cprover_atomic); }
#line 4380 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 990 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_ptr32); }
#line 4386 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 991 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_ptr64); }
#line 4392 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 992 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-3]); set((yyval), ID_msc_based); mto((yyval), (yyvsp[-1])); }
#line 4398 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1002 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4406 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1006 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4414 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1010 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4422 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1014 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4430 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1021 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0])); // type attribute
        }
#line 4438 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1025 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4446 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1029 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4454 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1033 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4462 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1041 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4470 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1045 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4478 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1049 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4486 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1058 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4494 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1062 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4502 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1069 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4510 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1073 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4518 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1077 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4526 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1084 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4534 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1088 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4542 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1092 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4550 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1099 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4558 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1103 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4566 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1107 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4574 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1114 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4582 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1118 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4590 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1122 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4598 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1129 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-3]);
          stack((yyval)).id(ID_typeof);
          mto((yyval), (yyvsp[-1]));
        }
#line 4607 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1134 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-3]);
          stack((yyval)).id(ID_typeof);
          stack((yyval)).set(ID_type_arg, stack((yyvsp[-1])));
        }
#line 4616 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1143 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4624 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1147 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4632 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1151 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4640 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1158 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          stack((yyval)).id(ID_atomic_type_specifier);
          stack((yyval)).add(ID_subtype)=stack((yyvsp[-1]));
        }
#line 4650 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1168 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4658 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1172 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4666 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1176 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4674 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1183 "parser.y" /* yacc.c:1646  */
    {
          stack((yyval)).id(stack((yyval)).get(ID_identifier));
        }
#line 4682 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1187 "parser.y" /* yacc.c:1646  */
    {
          stack((yyval)).id(stack((yyval)).get(ID_identifier));
        }
#line 4690 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1191 "parser.y" /* yacc.c:1646  */
    {
          stack((yyval)).id(ID_restrict);
        }
#line 4698 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1199 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]); mto((yyval), (yyvsp[-1]));
        }
#line 4706 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1203 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]); mto((yyval), (yyvsp[-1]));
        }
#line 4714 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1207 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]); mto((yyval), (yyvsp[-3])); mto((yyval), (yyvsp[-1]));
        }
#line 4722 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1211 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-9]); mto((yyval), (yyvsp[-7])); mto((yyval), (yyvsp[-5])); mto((yyval), (yyvsp[-3])); mto((yyval), (yyvsp[-1]));
        }
#line 4730 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1214 "parser.y" /* yacc.c:1646  */
    { init((yyval), ID_nil); }
#line 4736 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1219 "parser.y" /* yacc.c:1646  */
    {
          init((yyval)); mto((yyval), (yyvsp[0]));
        }
#line 4744 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1223 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]); mto((yyval), (yyvsp[0]));
        }
#line 4752 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1230 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]); set((yyval), ID_msc_declspec);
          stack((yyval)).operands().swap(stack((yyvsp[-1])).operands());
        }
#line 4761 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1235 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]); set((yyval), ID_msc_declspec);
        }
#line 4769 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1242 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_nil);
        }
#line 4777 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1249 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_typedef); }
#line 4783 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1250 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_extern); }
#line 4789 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1251 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_static); }
#line 4795 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1252 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_auto); }
#line 4801 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1253 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_register); }
#line 4807 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1254 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_inline); }
#line 4813 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1255 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_thread_local); }
#line 4819 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1256 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_asm); }
#line 4825 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1257 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); }
#line 4831 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1261 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_int); }
#line 4837 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1262 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_int8); }
#line 4843 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1263 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_int16); }
#line 4849 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1264 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_int32); }
#line 4855 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1265 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_int64); }
#line 4861 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1266 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_char); }
#line 4867 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1267 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_short); }
#line 4873 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1268 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_long); }
#line 4879 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1269 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_float); }
#line 4885 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1270 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_float128); }
#line 4891 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1271 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_int128); }
#line 4897 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1272 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_decimal32); }
#line 4903 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1273 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_decimal64); }
#line 4909 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1274 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_decimal128); }
#line 4915 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1275 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_double); }
#line 4921 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1276 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_signed); }
#line 4927 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1277 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_unsigned); }
#line 4933 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1278 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_void); }
#line 4939 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1279 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_bool); }
#line 4945 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1280 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_complex); }
#line 4951 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1282 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          set((yyval), ID_custom_bv);
          stack((yyval)).add(ID_size).swap(stack((yyvsp[-1])));
        }
#line 4961 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1288 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-6]);
          set((yyval), ID_custom_floatbv);
          stack((yyval)).add(ID_size).swap(stack((yyvsp[-4])));
          stack((yyval)).add(ID_f).swap(stack((yyvsp[-1])));
        }
#line 4972 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1295 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-6]);
          set((yyval), ID_custom_fixedbv);
          stack((yyval)).add(ID_size).swap(stack((yyvsp[-4])));
          stack((yyval)).add(ID_f).swap(stack((yyvsp[-1])));
        }
#line 4983 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1301 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_proper_bool); }
#line 4989 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1312 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-3]); ((typet &)stack((yyval))).subtype().swap(stack((yyvsp[-2]))); }
#line 4995 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1316 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          if(PARSER.pragma_pack!=0) set((yyval), ID_packed);
        }
#line 5004 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1326 "parser.y" /* yacc.c:1646  */
    {
            // an anon struct/union
          }
#line 5012 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1332 "parser.y" /* yacc.c:1646  */
    {
          // save the members
          stack((yyvsp[-8])).add(ID_components).get_sub().swap(
            (irept::subt &)stack((yyvsp[-3])).operands());

          // throw in the gcc attributes
          (yyval)=merge((yyvsp[-8]), merge((yyvsp[-7]), merge((yyvsp[-1]), (yyvsp[0]))));
        }
#line 5025 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1344 "parser.y" /* yacc.c:1646  */
    {
            // a struct/union with tag
            stack((yyvsp[-3])).set(ID_tag, stack((yyvsp[0])));
          }
#line 5034 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1351 "parser.y" /* yacc.c:1646  */
    {
          // save the members
          stack((yyvsp[-9])).add(ID_components).get_sub().swap(
            (irept::subt &)stack((yyvsp[-3])).operands());

          // throw in the gcc attributes
          (yyval)=merge((yyvsp[-9]), merge((yyvsp[-8]), merge((yyvsp[-1]), (yyvsp[0]))));
        }
#line 5047 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1364 "parser.y" /* yacc.c:1646  */
    {
          stack((yyvsp[-4])).set(ID_tag, stack((yyvsp[-1])));
          stack((yyvsp[-4])).set(ID_components, ID_nil);
          // type attributes
          (yyval)=merge((yyvsp[-4]), merge((yyvsp[-3]), (yyvsp[0])));
        }
#line 5058 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1374 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_struct); }
#line 5064 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1376 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_union); }
#line 5070 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1381 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_expression_list);
          mto((yyval), (yyvsp[0]));
        }
#line 5079 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1386 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 5088 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1394 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_expression_list);
        }
#line 5096 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1402 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
        }
#line 5104 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1406 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          stack((yyval)).id(ID_gcc_attribute);
          stack((yyval)).set(ID_identifier, ID_const);
        }
#line 5114 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1412 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          stack((yyval)).id(ID_gcc_attribute);
        }
#line 5123 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1417 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          stack((yyval)).id(ID_gcc_attribute);
          stack((yyval)).operands().swap(stack((yyvsp[-1])).operands());
        }
#line 5133 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1427 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), (yyvsp[-1]));
        }
#line 5141 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1434 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-2]); }
#line 5147 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1439 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
        }
#line 5155 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1448 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 5163 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1455 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); set((yyval), ID_packed); }
#line 5169 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1457 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); set((yyval), ID_transparent_union); }
#line 5175 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1459 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-4]); set((yyval), ID_vector); stack((yyval)).add(ID_size)=stack((yyvsp[-2])); }
#line 5181 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1461 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); set((yyval), ID_aligned); }
#line 5187 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1463 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-4]); set((yyval), ID_aligned); stack((yyval)).set(ID_size, stack((yyvsp[-2]))); }
#line 5193 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1465 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-4]); set((yyval), ID_gcc_attribute_mode); stack((yyval)).set(ID_size, stack((yyvsp[-2])).get(ID_identifier)); }
#line 5199 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1467 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); set((yyval), ID_static); }
#line 5205 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1473 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration_list);
        }
#line 5213 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1481 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration_list);
          mto((yyval), (yyvsp[0]));
        }
#line 5222 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1486 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          mto((yyval), (yyvsp[0]));
        }
#line 5231 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1496 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
        }
#line 5239 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1509 "parser.y" /* yacc.c:1646  */
    {
          (yyvsp[-1])=merge((yyvsp[-1]), (yyvsp[-2]));

          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_member(true);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5252 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1518 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5261 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1528 "parser.y" /* yacc.c:1646  */
    {
          (yyvsp[-1])=merge((yyvsp[-1]), (yyvsp[-2]));

          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_member(true);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5274 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1537 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5283 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1545 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);

          if(stack((yyvsp[-1])).is_not_nil())
            make_subtype((yyval), (yyvsp[-1]));

          if(stack((yyvsp[0])).is_not_nil()) // type attribute
            (yyval)=merge((yyvsp[0]), (yyval));
        }
#line 5297 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1555 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_abstract);
        }
#line 5305 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1559 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          stack((yyval)).add(ID_subtype)=irept(ID_abstract);

          if(stack((yyvsp[0])).is_not_nil()) // type attribute
            (yyval)=merge((yyvsp[0]), (yyval));
        }
#line 5317 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1570 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          if(stack((yyvsp[-1])).is_not_nil())
            make_subtype((yyval), (yyvsp[-1]));
          
          if(stack((yyvsp[0])).is_not_nil()) // type attribute
            (yyval)=merge((yyvsp[0]), (yyval));
        }
#line 5330 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1579 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          stack((yyval)).add(ID_subtype)=irept(ID_abstract);

          if(stack((yyvsp[0])).is_not_nil()) // type attribute
            (yyval)=merge((yyvsp[0]), (yyval));
        }
#line 5342 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1590 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_nil);
        }
#line 5350 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1598 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          set((yyval), ID_c_bitfield);
          stack((yyval)).set(ID_size, stack((yyvsp[0])));
          stack((yyval)).add(ID_subtype).id(ID_abstract);
        }
#line 5361 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1609 "parser.y" /* yacc.c:1646  */
    {
            // an anon enum
          }
#line 5369 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 1614 "parser.y" /* yacc.c:1646  */
    {
          stack((yyvsp[-6])).operands().swap(stack((yyvsp[-2])).operands());
          (yyval)=merge((yyvsp[-6]), merge((yyvsp[-5]), (yyvsp[0]))); // throw in the gcc attributes
        }
#line 5378 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1621 "parser.y" /* yacc.c:1646  */
    {
            // an enum with tag
            stack((yyvsp[-2])).set(ID_tag, stack((yyvsp[0])));
          }
#line 5387 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1627 "parser.y" /* yacc.c:1646  */
    {
          stack((yyvsp[-7])).operands().swap(stack((yyvsp[-2])).operands());
          (yyval)=merge((yyvsp[-7]), merge((yyvsp[-6]), (yyvsp[0]))); // throw in the gcc attribute
        }
#line 5396 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 1634 "parser.y" /* yacc.c:1646  */
    {
          stack((yyvsp[-2])).set(ID_tag, stack((yyvsp[0])));
          (yyval)=merge((yyvsp[-2]), (yyvsp[-1]));
        }
#line 5405 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 1641 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          set((yyval), ID_c_enum);
        }
#line 5414 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1649 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration_list);
          mto((yyval), (yyvsp[0]));
        }
#line 5423 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1654 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 5432 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1659 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
        }
#line 5440 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1666 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_enum_constant(true);
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[-2])));
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 5451 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1676 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          stack((yyval)).make_nil();
        }
#line 5460 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1681 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
        }
#line 5468 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1689 "parser.y" /* yacc.c:1646  */
    {
          typet tmp(ID_ellipsis);
          (yyval)=(yyvsp[-2]);
          ((typet &)stack((yyval))).move_to_subtypes(tmp);
        }
#line 5478 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1698 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_parameters);
          mts((yyval), (yyvsp[0]));
        }
#line 5487 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1703 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mts((yyval), (yyvsp[0]));
        }
#line 5496 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1710 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          stack((yyval)).type()=typet(ID_KnR);
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5506 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 1719 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_parameters);
          mts((yyval), (yyvsp[0]));
        }
#line 5515 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1724 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mts((yyval), (yyvsp[0]));
        }
#line 5524 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1732 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[0])));
          exprt declarator=exprt(ID_abstract);
          PARSER.add_declarator(stack((yyval)), declarator);
        }
#line 5536 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1740 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5547 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 1747 "parser.y" /* yacc.c:1646  */
    {
          (yyvsp[-1])=merge((yyvsp[0]), (yyvsp[-1])); // type attribute to go into declarator
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-2])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[-1])));
        }
#line 5559 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1755 "parser.y" /* yacc.c:1646  */
    {
          // the second tree is really the declarator -- not part
          // of the type!
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5572 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 1764 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[0])));
          exprt declarator=exprt(ID_abstract);
          PARSER.add_declarator(stack((yyval)), declarator);
        }
#line 5584 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1772 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5595 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 1779 "parser.y" /* yacc.c:1646  */
    {
          (yyvsp[-1])=merge((yyvsp[0]), (yyvsp[-1])); // type attribute to go into declarator
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-2])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[-1])));
        }
#line 5607 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1787 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[0])));
          exprt declarator=exprt(ID_abstract);
          PARSER.add_declarator(stack((yyval)), declarator);
        }
#line 5619 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 1795 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5630 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1802 "parser.y" /* yacc.c:1646  */
    {
          (yyvsp[-1])=merge((yyvsp[0]), (yyvsp[-1])); // type attribute to go into declarator
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-2])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[-1])));
        }
#line 5642 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 1810 "parser.y" /* yacc.c:1646  */
    {
          // the second tree is really the declarator -- not part of the type!
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5654 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 1818 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[0])));
          exprt declarator=exprt(ID_abstract);
          PARSER.add_declarator(stack((yyval)), declarator);
        }
#line 5666 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 1826 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5677 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 1833 "parser.y" /* yacc.c:1646  */
    {
          (yyvsp[-1])=merge((yyvsp[0]), (yyvsp[-1])); // type attribute to go into declarator
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-2])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[-1])));
        }
#line 5689 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 1849 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[0]), (yyvsp[-1]));
        }
#line 5697 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 1853 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[-2]));
          make_subtype((yyval), (yyvsp[0]));
        }
#line 5706 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 1858 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[0]), (yyvsp[-1]));
        }
#line 5714 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 1862 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[-2]));
          make_subtype((yyval), (yyvsp[0]));
        }
#line 5723 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 1870 "parser.y" /* yacc.c:1646  */
    {
          newstack((yyval));
          stack((yyval)).make_nil();
        }
#line 5732 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 1875 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5738 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 1886 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          set((yyval), ID_initializer_list);
          stack((yyval)).operands().swap(stack((yyvsp[-1])).operands());
        }
#line 5748 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 1892 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          set((yyval), ID_initializer_list);
          stack((yyval)).operands().swap(stack((yyvsp[-2])).operands());
        }
#line 5758 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 1901 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          exprt tmp;
          tmp.swap(stack((yyval)));
          stack((yyval)).clear();
          stack((yyval)).move_to_operands(tmp);
        }
#line 5770 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 1909 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 5779 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 1918 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          set((yyval), ID_initializer_list);
          stack((yyval)).operands().clear();
        }
#line 5789 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 1928 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          stack((yyval)).id(ID_designated_initializer);
          stack((yyval)).add(ID_designator).swap(stack((yyvsp[-2])));
          mto((yyval), (yyvsp[0]));
        }
#line 5800 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 1936 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_designated_initializer);
          stack((yyval)).add(ID_designator).swap(stack((yyvsp[-1])));
          mto((yyval), (yyvsp[0]));
        }
#line 5810 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 1942 "parser.y" /* yacc.c:1646  */
    {
          // yet another GCC speciality
          (yyval)=(yyvsp[-1]);
          stack((yyval)).id(ID_designated_initializer);
          exprt designator;
          exprt member(ID_member);
          member.set(ID_component_name, stack((yyvsp[-2])).get(ID_C_base_name));
          designator.move_to_operands(member);
          stack((yyval)).add(ID_designator).swap(designator);
          mto((yyval), (yyvsp[0]));
        }
#line 5826 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 1957 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          stack((yyvsp[-1])).id(ID_member);
          stack((yyvsp[-1])).set(ID_component_name, stack((yyvsp[0])).get(ID_C_base_name));
          mto((yyval), (yyvsp[-1]));
        }
#line 5837 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 1964 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          stack((yyvsp[-2])).id(ID_index);
          mto((yyvsp[-2]), (yyvsp[-1]));
          mto((yyval), (yyvsp[-2]));
        }
#line 5848 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 1971 "parser.y" /* yacc.c:1646  */
    {
          // TODO
          init((yyval));
          stack((yyvsp[-4])).id(ID_index);
          mto((yyvsp[-4]), (yyvsp[-3]));
          mto((yyval), (yyvsp[-4]));
        }
#line 5860 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 1979 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          stack((yyvsp[-2])).id(ID_index);
          mto((yyvsp[-2]), (yyvsp[-1]));
          mto((yyval), (yyvsp[-2]));
        }
#line 5871 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 1986 "parser.y" /* yacc.c:1646  */
    {
          // TODO
          (yyval)=(yyvsp[-5]);
          stack((yyvsp[-4])).id(ID_index);
          mto((yyvsp[-4]), (yyvsp[-3]));
          mto((yyval), (yyvsp[-4]));
        }
#line 5883 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 1994 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          stack((yyvsp[-1])).id(ID_member);
          stack((yyvsp[-1])).set(ID_component_name, stack((yyvsp[0])).get(ID_C_base_name));
          mto((yyval), (yyvsp[-1]));
        }
#line 5894 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 2021 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          statement((yyval), ID_decl);
          mto((yyval), (yyvsp[0]));
        }
#line 5904 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 2030 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          statement((yyval), ID_label);
          irep_idt identifier=PARSER.lookup_label(stack((yyvsp[-2])).get(ID_C_base_name));
          stack((yyval)).set(ID_label, identifier);
          mto((yyval), (yyvsp[0]));
        }
#line 5916 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 2038 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          statement((yyval), ID_switch_case);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 5927 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 2045 "parser.y" /* yacc.c:1646  */
    {
          // this is a GCC extension
          (yyval)=(yyvsp[-5]);
          statement((yyval), ID_gcc_switch_case_range);
          mto((yyval), (yyvsp[-4]));
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 5940 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 2054 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          statement((yyval), ID_switch_case);
          stack((yyval)).operands().push_back(nil_exprt());
          mto((yyval), (yyvsp[0]));
          stack((yyval)).set(ID_default, true);
        }
#line 5952 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 2065 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          statement((yyval), ID_block);
          stack((yyval)).set(ID_C_end_location, stack((yyvsp[0])).source_location());
          PARSER.pop_scope();
        }
#line 5963 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 2072 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          statement((yyval), ID_block);
          stack((yyval)).set(ID_C_end_location, stack((yyvsp[0])).source_location());
          stack((yyval)).operands().swap(stack((yyvsp[-1])).operands());
          PARSER.pop_scope();
        }
#line 5975 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 2080 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          statement((yyval), ID_asm);
          stack((yyval)).set(ID_C_end_location, stack((yyvsp[0])).source_location());
          mto((yyval), (yyvsp[-1]));
          PARSER.pop_scope();
        }
#line 5987 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 2091 "parser.y" /* yacc.c:1646  */
    {
          unsigned prefix=++PARSER.current_scope().compound_counter;
          PARSER.new_scope(i2string(prefix)+"::");
        }
#line 5996 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 2099 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          mto((yyval), (yyvsp[0]));
        }
#line 6005 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 2104 "parser.y" /* yacc.c:1646  */
    {
          mto((yyval), (yyvsp[0]));
        }
#line 6013 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 2111 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);

          if(stack((yyvsp[-1])).is_nil())
            statement((yyval), ID_skip);
          else
          {
            statement((yyval), ID_expression);
            mto((yyval), (yyvsp[-1]));
          }
        }
#line 6029 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 2126 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-4]);
          statement((yyval), ID_ifthenelse);
          stack((yyval)).operands().reserve(3);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
          stack((yyval)).copy_to_operands(nil_exprt());
        }
#line 6042 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 2135 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-6]);
          statement((yyval), ID_ifthenelse);
          stack((yyval)).operands().reserve(3);
          mto((yyval), (yyvsp[-4]));
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6055 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 2144 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-4]);
          statement((yyval), ID_switch);
          stack((yyval)).operands().reserve(2);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6067 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 2160 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-4]);
          statement((yyval), ID_while);
          stack((yyval)).operands().reserve(2);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6079 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 2168 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-6]);
          statement((yyval), ID_dowhile);
          stack((yyval)).operands().reserve(2);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[-5]));
        }
#line 6091 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 2176 "parser.y" /* yacc.c:1646  */
    {
            // In C99 and upwards, for(;;) has a scope
            if(PARSER.for_has_scope)
            {
              unsigned prefix=++PARSER.current_scope().compound_counter;
              PARSER.new_scope(i2string(prefix)+"::");
            }
          }
#line 6104 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 2188 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-8]);
          statement((yyval), ID_for);
          stack((yyval)).operands().reserve(4);
          mto((yyval), (yyvsp[-5]));
          mto((yyval), (yyvsp[-4]));
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));

          if(PARSER.for_has_scope)
            PARSER.pop_scope(); // remove the C99 for-scope
        }
#line 6121 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 2204 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          if(stack((yyvsp[-1])).id()==ID_symbol)
          {
            statement((yyval), ID_goto);
            irep_idt identifier=PARSER.lookup_label(stack((yyvsp[-1])).get(ID_C_base_name));
            stack((yyval)).set(ID_destination, identifier);
          }
          else
          {
            // this is a gcc extension.
            // the original grammar uses identifier_or_typedef_name
            statement((yyval), ID_gcc_computed_goto);
            mto((yyval), (yyvsp[-1]));
          }
        }
#line 6142 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 2221 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          statement((yyval), ID_goto);
          irep_idt identifier=PARSER.lookup_label(stack((yyvsp[-1])).get(ID_C_base_name));
          stack((yyval)).set(ID_destination, identifier);
        }
#line 6153 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 2228 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); statement((yyval), ID_continue); }
#line 6159 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 2230 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); statement((yyval), ID_break); }
#line 6165 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 2232 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); statement((yyval), ID_return); }
#line 6171 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 2234 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-2]); statement((yyval), ID_return); mto((yyval), (yyvsp[-1])); }
#line 6177 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 2239 "parser.y" /* yacc.c:1646  */
    { 
          (yyval)=(yyvsp[-2]);
          statement((yyval), ID_gcc_local_label);
          
          // put these into the scope
          forall_operands(it, stack((yyvsp[-1])))
          {
            // labels have a separate name space
            irep_idt base_name=it->get(ID_identifier);
            irep_idt id="label-"+id2string(base_name);
            ansi_c_parsert::identifiert &i=PARSER.current_scope().name_map[id];
            i.id_class=ANSI_C_LOCAL_LABEL;
            i.base_name=base_name;
          }

          stack((yyval)).add(ID_label).get_sub().swap((irept::subt&)stack((yyvsp[-1])).operands());
        }
#line 6199 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 2260 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          mto((yyval), (yyvsp[0]));
        }
#line 6208 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 2265 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 6217 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 2276 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-5]);
          statement((yyval), ID_asm);
          stack((yyval)).set(ID_flavor, ID_gcc);
          stack((yyval)).operands().swap(stack((yyvsp[-2])).operands());
        }
#line 6227 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 2282 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-4]);
          statement((yyval), ID_asm);
          stack((yyval)).set(ID_flavor, ID_gcc);
          mto((yyval), (yyvsp[-1]));
        }
#line 6238 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 2292 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-3]);
          statement((yyval), ID_asm);
          stack((yyval)).set(ID_flavor, ID_msc);
          mto((yyval), (yyvsp[-1]));
        }
#line 6248 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 2298 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          statement((yyval), ID_asm);
          stack((yyval)).set(ID_flavor, ID_msc);
          mto((yyval), (yyvsp[0]));
        }
#line 6258 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 2308 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-6]);
          statement((yyval), ID_msc_try_except);
          mto((yyval), (yyvsp[-5]));
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6270 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 2317 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          statement((yyval), ID_msc_try_finally);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6281 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 2324 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          statement((yyval), ID_msc_leave);
        }
#line 6290 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 2332 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          statement((yyval), ID_CPROVER_throw);
        }
#line 6299 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 2338 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          statement((yyval), ID_CPROVER_try_catch);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6310 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 2346 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          statement((yyval), ID_CPROVER_try_finally);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6321 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 2372 "parser.y" /* yacc.c:1646  */
    {
            init((yyval));
            mto((yyval), (yyvsp[0]));
          }
#line 6330 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 2377 "parser.y" /* yacc.c:1646  */
    {
            init((yyval));
            mto((yyval), (yyvsp[-1]));
          }
#line 6339 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 2382 "parser.y" /* yacc.c:1646  */
    {
            init((yyval));
            mto((yyval), (yyvsp[-2]));
          }
#line 6348 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 2387 "parser.y" /* yacc.c:1646  */
    {
            init((yyval));
            mto((yyval), (yyvsp[-3]));
          }
#line 6357 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 2392 "parser.y" /* yacc.c:1646  */
    {
            init((yyval));
            mto((yyval), (yyvsp[-4]));
          }
#line 6366 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 2468 "parser.y" /* yacc.c:1646  */
    {
          // put into global list of items
          PARSER.copy_item(to_ansi_c_declaration(stack((yyvsp[0]))));
        }
#line 6375 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 2473 "parser.y" /* yacc.c:1646  */
    {
          PARSER.copy_item(to_ansi_c_declaration(stack((yyvsp[0]))));
        }
#line 6383 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 2482 "parser.y" /* yacc.c:1646  */
    {
          // Not obvious what to do with this.
        }
#line 6391 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 2490 "parser.y" /* yacc.c:1646  */
    {
          // The head is a declaration with one declarator,
          // and the body becomes the 'value'.
          (yyval)=(yyvsp[-1]);
          ansi_c_declarationt &ansi_c_declaration=
            to_ansi_c_declaration(stack((yyval)));
            
          assert(ansi_c_declaration.declarators().size()==1);
          ansi_c_declaration.add_initializer(stack((yyvsp[0])));
          
          // Kill the scope that 'function_head' creates.
          PARSER.pop_scope();
          
          // We are no longer in any function.
          PARSER.set_function(irep_idt());
        }
#line 6412 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 2514 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
        }
#line 6420 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 2522 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_decl_block);
          mto((yyval), (yyvsp[0]));
        }
#line 6429 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 2527 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          mto((yyval), (yyvsp[0]));
        }
#line 6438 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 2541 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[0]), (yyvsp[-1]));
        }
#line 6446 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 2545 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[0]), (yyvsp[-1]));
        }
#line 6454 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 2552 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 6462 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 2556 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 6470 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 2560 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 6478 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 2564 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 6486 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 2572 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 6494 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 2576 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 6502 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 2580 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 6510 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 2588 "parser.y" /* yacc.c:1646  */
    {
          stack((yyvsp[-2])).set(ID_tag, stack((yyvsp[-1])));
          (yyval)=merge((yyvsp[-3]), merge((yyvsp[-2]), (yyvsp[0])));
        }
#line 6519 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 2593 "parser.y" /* yacc.c:1646  */
    {
          stack((yyvsp[-2])).set(ID_tag, stack((yyvsp[-1])));
          (yyval)=merge((yyvsp[-3]), merge((yyvsp[-2]), (yyvsp[0])));
        }
#line 6528 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 2608 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 6538 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 2614 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 6548 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 2620 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 6557 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 2628 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          irept return_type(ID_int);
          stack((yyval)).type().swap(return_type);
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
          create_function_scope((yyval));
        }
#line 6569 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 2636 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
          create_function_scope((yyval));
        }
#line 6580 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 2643 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
          create_function_scope((yyval));
        }
#line 6591 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 2650 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
          create_function_scope((yyval));
        }
#line 6602 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 2657 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
          create_function_scope((yyval));
        }
#line 6613 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 2678 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 6622 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 2688 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          do_pointer((yyvsp[-1]), (yyvsp[0]));
        }
#line 6631 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 2693 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
          do_pointer((yyvsp[-2]), (yyvsp[-1]));
        }
#line 6640 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 2701 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 6646 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 2703 "parser.y" /* yacc.c:1646  */
    {
          /* note: this is a pointer ($2) to a function ($4) */
          /* or an array ($4)! */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 6657 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 2714 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          do_pointer((yyvsp[-3]), (yyvsp[-1]));
        }
#line 6666 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 2719 "parser.y" /* yacc.c:1646  */
    {
          // not sure where the type qualifiers belong
          (yyval)=merge((yyvsp[-3]), (yyvsp[-1]));
          do_pointer((yyvsp[-4]), (yyvsp[-3]));
        }
#line 6676 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 2725 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          do_pointer((yyvsp[-1]), (yyvsp[0]));
        }
#line 6685 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 2730 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
          do_pointer((yyvsp[-2]), (yyvsp[-1]));
        }
#line 6694 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 2738 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 6700 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 2740 "parser.y" /* yacc.c:1646  */
    {        /* note: this is a function ($3) with a typedef name ($2) */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[-1]));
        }
#line 6709 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 2745 "parser.y" /* yacc.c:1646  */
    {
          /* note: this is a pointer ($2) to a function ($4) */
          /* or an array ($4)! */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 6720 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 2756 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); }
#line 6726 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 2767 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          do_pointer((yyvsp[-1]), (yyvsp[0]));
        }
#line 6735 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 2772 "parser.y" /* yacc.c:1646  */
    {
          // the type_qualifier_list is for the pointer,
          // and not the identifier_declarator
          stack((yyvsp[-2])).id(ID_pointer);
          stack((yyvsp[-2])).add(ID_subtype)=irept(ID_abstract);
          (yyvsp[-1])=merge((yyvsp[-1]), (yyvsp[-2])); // dest=$2
          make_subtype((yyvsp[0]), (yyvsp[-1])); // dest=$3
          (yyval)=(yyvsp[0]);
        }
#line 6749 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 2785 "parser.y" /* yacc.c:1646  */
    {
          /* note: this is a function or array ($2) with name ($1) */
          (yyval)=(yyvsp[-1]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 6759 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 2791 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 6765 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 2793 "parser.y" /* yacc.c:1646  */
    {
          /* note: this is a pointer ($2) to a function ($4) */
          /* or an array ($4)! */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 6776 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 2803 "parser.y" /* yacc.c:1646  */
    {
          // We remember the last declarator for the benefit
          // of function argument scoping.
          PARSER.current_scope().last_declarator=
            stack((yyvsp[0])).get(ID_identifier);
        }
#line 6787 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 2810 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); }
#line 6793 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 2830 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          set((yyval), ID_code);
          stack((yyval)).add(ID_subtype)=irept(ID_abstract);
          stack((yyval)).add(ID_parameters);
          stack((yyval)).set(ID_C_KnR, true);
        }
#line 6805 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 2838 "parser.y" /* yacc.c:1646  */
    {
            // Use last declarator (i.e., function name) to name
            // the scope.
            PARSER.new_scope(
              id2string(PARSER.current_scope().last_declarator)+"::");
          }
#line 6816 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 2847 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-4]);
          set((yyval), ID_code);
          stack((yyval)).add(ID_subtype)=irept(ID_abstract);
          stack((yyval)).add(ID_parameters).get_sub().
            swap(stack((yyvsp[-2])).add(ID_subtypes).get_sub());
          PARSER.pop_scope();
          adjust_KnR_parameters(stack((yyval)).add(ID_parameters), stack((yyvsp[0])));
          stack((yyval)).set(ID_C_KnR, true);
        }
#line 6831 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 2862 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          set((yyval), ID_code);
          stack((yyval)).add(ID_parameters);
          stack((yyval)).add(ID_subtype)=irept(ID_abstract);
        }
#line 6842 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 2869 "parser.y" /* yacc.c:1646  */
    {
            // Use last declarator (i.e., function name) to name
            // the scope.
            PARSER.new_scope(
              id2string(PARSER.current_scope().last_declarator)+"::");
          }
#line 6853 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 2877 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          set((yyval), ID_code);
          stack((yyval)).add(ID_subtype)=irept(ID_abstract);
          stack((yyval)).add(ID_parameters).get_sub().
            swap(stack((yyvsp[-1])).add(ID_subtypes).get_sub());
          PARSER.pop_scope();
        }
#line 6866 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 2889 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          set((yyval), ID_array);
          stack((yyval)).add(ID_subtype)=irept(ID_abstract);
          stack((yyval)).add(ID_size).make_nil();
        }
#line 6877 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 2896 "parser.y" /* yacc.c:1646  */
    {
          // this is C99: e.g., restrict, const, etc
          // The type qualifier belongs to the array, not the
          // contents of the array, nor the size.
          set((yyvsp[-2]), ID_array);
          stack((yyvsp[-2])).add(ID_subtype)=irept(ID_abstract);
          stack((yyvsp[-2])).add(ID_size).make_nil();
          (yyval)=merge((yyvsp[-1]), (yyvsp[-2]));
        }
#line 6891 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 2906 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          set((yyval), ID_array);
          stack((yyval)).add(ID_subtype)=irept(ID_abstract);
          stack((yyval)).add(ID_size).make_nil();
        }
#line 6902 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 2913 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          set((yyval), ID_array);
          stack((yyval)).add(ID_size).swap(stack((yyvsp[-1])));
          stack((yyval)).add(ID_subtype)=irept(ID_abstract);
        }
#line 6913 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 2920 "parser.y" /* yacc.c:1646  */
    {
          // this is C99 and the constant_expression is a minimum size
          (yyval)=(yyvsp[-3]);
          set((yyval), ID_array);
          stack((yyval)).add(ID_size).swap(stack((yyvsp[-2])));
          stack((yyval)).add(ID_subtype)=irept(ID_abstract);
        }
#line 6925 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 2928 "parser.y" /* yacc.c:1646  */
    {
          // The type qualifier belongs to the array, not the
          // contents of the array, nor the size.
          set((yyvsp[-3]), ID_array);
          stack((yyvsp[-3])).add(ID_size).swap(stack((yyvsp[-1])));
          stack((yyvsp[-3])).add(ID_subtype)=irept(ID_abstract);
          (yyval)=merge((yyvsp[-2]), (yyvsp[-3])); // dest=$2
        }
#line 6938 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 2937 "parser.y" /* yacc.c:1646  */
    {
          // we need to push this down
          (yyval)=(yyvsp[-3]);
          set((yyvsp[-2]), ID_array);
          stack((yyvsp[-2])).add(ID_size).swap(stack((yyvsp[-1])));
          stack((yyvsp[-2])).add(ID_subtype)=irept(ID_abstract);
          make_subtype((yyvsp[-3]), (yyvsp[-2]));
        }
#line 6951 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 2946 "parser.y" /* yacc.c:1646  */
    {
          // we need to push this down
          (yyval)=(yyvsp[-3]);
          set((yyvsp[-2]), ID_array);
          stack((yyvsp[-2])).add(ID_size).make_nil();
          stack((yyvsp[-2])).add(ID_subtype)=irept(ID_abstract);
          make_subtype((yyvsp[-3]), (yyvsp[-2]));
        }
#line 6964 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 2958 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          set((yyval), ID_pointer);
          stack((yyval)).add(ID_subtype)=irept(ID_abstract);
        }
#line 6974 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 2964 "parser.y" /* yacc.c:1646  */
    {
          // The type_qualifier_list belongs to the pointer,
          // not to the (missing) abstract declarator.
          set((yyvsp[-1]), ID_pointer);
          stack((yyvsp[-1])).add(ID_subtype)=irept(ID_abstract);
          (yyval)=merge((yyvsp[0]), (yyvsp[-1]));
        }
#line 6986 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 2972 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          do_pointer((yyvsp[-1]), (yyvsp[0]));
        }
#line 6995 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 2977 "parser.y" /* yacc.c:1646  */
    {
          // The type_qualifier_list belongs to the pointer,
          // not to the abstract declarator.
          stack((yyvsp[-2])).id(ID_pointer);
          stack((yyvsp[-2])).add(ID_subtype)=irept(ID_abstract);
          (yyvsp[-1])=merge((yyvsp[-1]), (yyvsp[-2])); // dest=$2
          make_subtype((yyvsp[0]), (yyvsp[-1])); // dest=$3
          (yyval)=(yyvsp[0]);
        }
#line 7009 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 2987 "parser.y" /* yacc.c:1646  */
    {
          // This is an Apple extension to C/C++/Objective C.
          // http://en.wikipedia.org/wiki/Blocks_(C_language_extension)
          (yyval)=(yyvsp[0]);
          set((yyval), ID_block_pointer);
          stack((yyval)).add(ID_subtype)=irept(ID_abstract);
        }
#line 7021 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 2998 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          set((yyval), ID_pointer);
          stack((yyval)).add(ID_subtype)=irept(ID_abstract);
        }
#line 7031 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 3004 "parser.y" /* yacc.c:1646  */
    {
          // The type_qualifier_list belongs to the pointer,
          // not to the (missing) abstract declarator.
          set((yyvsp[-1]), ID_pointer);
          stack((yyvsp[-1])).add(ID_subtype)=irept(ID_abstract);
          (yyval)=merge((yyvsp[0]), (yyvsp[-1]));
        }
#line 7043 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 561:
#line 3012 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          do_pointer((yyvsp[-1]), (yyvsp[0]));
        }
#line 7052 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 3017 "parser.y" /* yacc.c:1646  */
    {
          // The type_qualifier_list belongs to the pointer,
          // not to the (missing) abstract declarator.
          stack((yyvsp[-2])).id(ID_pointer);
          stack((yyvsp[-2])).add(ID_subtype)=irept(ID_abstract);
          (yyvsp[-1])=merge((yyvsp[-1]), (yyvsp[-2])); // dest=$2
          make_subtype((yyvsp[0]), (yyvsp[-1])); // dest=$3
          (yyval)=(yyvsp[0]);
        }
#line 7066 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 3027 "parser.y" /* yacc.c:1646  */
    {
          // This is an Apple extension to C/C++/Objective C.
          // http://en.wikipedia.org/wiki/Blocks_(C_language_extension)
          (yyval)=(yyvsp[0]);
          set((yyval), ID_block_pointer);
          stack((yyval)).add(ID_subtype)=irept(ID_abstract);
        }
#line 7078 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 3038 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 7084 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 565:
#line 3040 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 7090 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 3042 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 7096 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 3044 "parser.y" /* yacc.c:1646  */
    {
          /* note: this is a pointer ($2) to a function or array ($4) */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 7106 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 3050 "parser.y" /* yacc.c:1646  */
    {
          /* note: this is a pointer ($2) to a function or array ($4) */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 7116 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 3059 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 7122 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 3061 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 7128 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 3064 "parser.y" /* yacc.c:1646  */
    {
          /* note: this is a pointer ($2) to a function ($4) */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 7138 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;


#line 7142 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
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
#line 3071 "parser.y" /* yacc.c:1906  */

