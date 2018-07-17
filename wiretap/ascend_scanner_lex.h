#ifndef ascendHEADER_H
#define ascendHEADER_H 1
#define ascendIN_HEADER 1

#line 6 "ascend_scanner_lex.h"
/* Include this before everything else, for various large-file definitions */
#include "config.h"

#line 10 "ascend_scanner_lex.h"

#define  YY_INT_ALIGNED short int

/* A lexical scanner generated by flex */

#define FLEX_SCANNER
#define YY_FLEX_MAJOR_VERSION 2
#define YY_FLEX_MINOR_VERSION 6
#define YY_FLEX_SUBMINOR_VERSION 0
#if YY_FLEX_SUBMINOR_VERSION > 0
#define FLEX_BETA
#endif

/* First, we deal with  platform-specific or compiler-specific issues. */

/* begin standard C headers. */
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

/* end standard C headers. */

/* flex integer type definitions */

#ifndef FLEXINT_H
#define FLEXINT_H

/* C99 systems have <inttypes.h>. Non-C99 systems may or may not. */

#if defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

/* C99 says to define __STDC_LIMIT_MACROS before including stdint.h,
 * if you want the limit (max/min) macros for int types. 
 */
#ifndef __STDC_LIMIT_MACROS
#define __STDC_LIMIT_MACROS 1
#endif

#include <inttypes.h>
typedef int8_t flex_int8_t;
typedef uint8_t flex_uint8_t;
typedef int16_t flex_int16_t;
typedef uint16_t flex_uint16_t;
typedef int32_t flex_int32_t;
typedef uint32_t flex_uint32_t;
#else
typedef signed char flex_int8_t;
typedef short int flex_int16_t;
typedef int flex_int32_t;
typedef unsigned char flex_uint8_t; 
typedef unsigned short int flex_uint16_t;
typedef unsigned int flex_uint32_t;

/* Limits of integral types. */
#ifndef INT8_MIN
#define INT8_MIN               (-128)
#endif
#ifndef INT16_MIN
#define INT16_MIN              (-32767-1)
#endif
#ifndef INT32_MIN
#define INT32_MIN              (-2147483647-1)
#endif
#ifndef INT8_MAX
#define INT8_MAX               (127)
#endif
#ifndef INT16_MAX
#define INT16_MAX              (32767)
#endif
#ifndef INT32_MAX
#define INT32_MAX              (2147483647)
#endif
#ifndef UINT8_MAX
#define UINT8_MAX              (255U)
#endif
#ifndef UINT16_MAX
#define UINT16_MAX             (65535U)
#endif
#ifndef UINT32_MAX
#define UINT32_MAX             (4294967295U)
#endif

#endif /* ! C99 */

#endif /* ! FLEXINT_H */

#ifdef __cplusplus

/* The "const" storage-class-modifier is valid. */
#define YY_USE_CONST

#else	/* ! __cplusplus */

/* C99 requires __STDC__ to be defined as 1. */
#if defined (__STDC__)

#define YY_USE_CONST

#endif	/* defined (__STDC__) */
#endif	/* ! __cplusplus */

#ifdef YY_USE_CONST
#define yyconst const
#else
#define yyconst
#endif

/* An opaque pointer. */
#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

/* For convenience, these vars (plus the bison vars far below)
   are macros in the reentrant scanner. */
#define yyin yyg->yyin_r
#define yyout yyg->yyout_r
#define yyextra yyg->yyextra_r
#define yyleng yyg->yyleng_r
#define yytext yyg->yytext_r
#define yylineno (YY_CURRENT_BUFFER_LVALUE->yy_bs_lineno)
#define yycolumn (YY_CURRENT_BUFFER_LVALUE->yy_bs_column)
#define yy_flex_debug yyg->yy_flex_debug_r

/* Size of default input buffer. */
#ifndef YY_BUF_SIZE
#ifdef __ia64__
/* On IA-64, the buffer size is 16k, not 8k.
 * Moreover, YY_BUF_SIZE is 2*YY_READ_BUF_SIZE in the general case.
 * Ditto for the __ia64__ case accordingly.
 */
#define YY_BUF_SIZE 32768
#else
#define YY_BUF_SIZE 16384
#endif /* __ia64__ */
#endif

#ifndef YY_TYPEDEF_YY_BUFFER_STATE
#define YY_TYPEDEF_YY_BUFFER_STATE
typedef struct yy_buffer_state *YY_BUFFER_STATE;
#endif

#ifndef YY_TYPEDEF_YY_SIZE_T
#define YY_TYPEDEF_YY_SIZE_T
typedef size_t yy_size_t;
#endif

#ifndef YY_STRUCT_YY_BUFFER_STATE
#define YY_STRUCT_YY_BUFFER_STATE
struct yy_buffer_state
	{
	FILE *yy_input_file;

	char *yy_ch_buf;		/* input buffer */
	char *yy_buf_pos;		/* current position in input buffer */

	/* Size of input buffer in bytes, not including room for EOB
	 * characters.
	 */
	yy_size_t yy_buf_size;

	/* Number of characters read into yy_ch_buf, not including EOB
	 * characters.
	 */
	int yy_n_chars;

	/* Whether we "own" the buffer - i.e., we know we created it,
	 * and can realloc() it to grow it, and should free() it to
	 * delete it.
	 */
	int yy_is_our_buffer;

	/* Whether this is an "interactive" input source; if so, and
	 * if we're using stdio for input, then we want to use getc()
	 * instead of fread(), to make sure we stop fetching input after
	 * each newline.
	 */
	int yy_is_interactive;

	/* Whether we're considered to be at the beginning of a line.
	 * If so, '^' rules will be active on the next match, otherwise
	 * not.
	 */
	int yy_at_bol;

    int yy_bs_lineno; /**< The line count. */
    int yy_bs_column; /**< The column count. */
    
	/* Whether to try to fill the input buffer when we reach the
	 * end of it.
	 */
	int yy_fill_buffer;

	int yy_buffer_status;

	};
#endif /* !YY_STRUCT_YY_BUFFER_STATE */

void ascendrestart (FILE *input_file ,yyscan_t yyscanner );
void ascend_switch_to_buffer (YY_BUFFER_STATE new_buffer ,yyscan_t yyscanner );
YY_BUFFER_STATE ascend_create_buffer (FILE *file,int size ,yyscan_t yyscanner );
void ascend_delete_buffer (YY_BUFFER_STATE b ,yyscan_t yyscanner );
void ascend_flush_buffer (YY_BUFFER_STATE b ,yyscan_t yyscanner );
void ascendpush_buffer_state (YY_BUFFER_STATE new_buffer ,yyscan_t yyscanner );
void ascendpop_buffer_state (yyscan_t yyscanner );

YY_BUFFER_STATE ascend_scan_buffer (char *base,yy_size_t size ,yyscan_t yyscanner );
YY_BUFFER_STATE ascend_scan_string (yyconst char *yy_str ,yyscan_t yyscanner );
YY_BUFFER_STATE ascend_scan_bytes (yyconst char *bytes,yy_size_t len ,yyscan_t yyscanner );

void *ascendalloc (yy_size_t ,yyscan_t yyscanner );
void *ascendrealloc (void *,yy_size_t ,yyscan_t yyscanner );
void ascendfree (void * ,yyscan_t yyscanner );

/* Begin user sect3 */

#define ascendwrap(yyscanner) (/*CONSTCOND*/1)
#define YY_SKIP_YYWRAP

#define yytext_ptr yytext_r

#ifdef YY_HEADER_EXPORT_START_CONDITIONS
#define INITIAL 0
#define sc_gen_task 1
#define sc_gen_time_s 2
#define sc_gen_time_u 3
#define sc_gen_octets 4
#define sc_gen_counter 5
#define sc_gen_byte 6
#define sc_wds_user 7
#define sc_wds_sess 8
#define sc_wdd_date_d 9
#define sc_wdd_date_m 10
#define sc_wdd_date_y 11
#define sc_wdd_time 12
#define sc_wdd_time_h 13
#define sc_wdd_time_m 14
#define sc_wdd_time_s 15
#define sc_wdd_cause 16
#define sc_wdd_callnum 17
#define sc_wdd_chunk 18
#define sc_wdd_chunknum 19
#define sc_wdd_type 20
#define sc_chardisp 21
#define sc_isdn_call 22
#define sc_ether_direction 23

#endif

#ifndef YY_NO_UNISTD_H
/* Special case for "unistd.h", since it is non-ANSI. We include it way
 * down here because we want the user's section 1 to have been scanned first.
 * The user has a chance to override it with an option.
 */
#include <unistd.h>
#endif

#define YY_EXTRA_TYPE ascend_state_t *

int ascendlex_init (yyscan_t* scanner);

int ascendlex_init_extra (YY_EXTRA_TYPE user_defined,yyscan_t* scanner);

/* Accessor methods to globals.
   These are made visible to non-reentrant scanners for convenience. */

int ascendlex_destroy (yyscan_t yyscanner );

int ascendget_debug (yyscan_t yyscanner );

void ascendset_debug (int debug_flag ,yyscan_t yyscanner );

YY_EXTRA_TYPE ascendget_extra (yyscan_t yyscanner );

void ascendset_extra (YY_EXTRA_TYPE user_defined ,yyscan_t yyscanner );

FILE *ascendget_in (yyscan_t yyscanner );

void ascendset_in  (FILE * _in_str ,yyscan_t yyscanner );

FILE *ascendget_out (yyscan_t yyscanner );

void ascendset_out  (FILE * _out_str ,yyscan_t yyscanner );

yy_size_t ascendget_leng (yyscan_t yyscanner );

char *ascendget_text (yyscan_t yyscanner );

int ascendget_lineno (yyscan_t yyscanner );

void ascendset_lineno (int _line_number ,yyscan_t yyscanner );

int ascendget_column  (yyscan_t yyscanner );

void ascendset_column (int _column_no ,yyscan_t yyscanner );

YYSTYPE * ascendget_lval (yyscan_t yyscanner );

void ascendset_lval (YYSTYPE * yylval_param ,yyscan_t yyscanner );

/* Macros after this point can all be overridden by user definitions in
 * section 1.
 */

#ifndef YY_SKIP_YYWRAP
#ifdef __cplusplus
extern "C" int ascendwrap (yyscan_t yyscanner );
#else
extern int ascendwrap (yyscan_t yyscanner );
#endif
#endif

#ifndef yytext_ptr
static void yy_flex_strncpy (char *,yyconst char *,int ,yyscan_t yyscanner);
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen (yyconst char * ,yyscan_t yyscanner);
#endif

#ifndef YY_NO_INPUT

#endif

/* Amount of stuff to slurp up with each read. */
#ifndef YY_READ_BUF_SIZE
#ifdef __ia64__
/* On IA-64, the buffer size is 16k, not 8k */
#define YY_READ_BUF_SIZE 16384
#else
#define YY_READ_BUF_SIZE 8192
#endif /* __ia64__ */
#endif

/* Number of entries by which start-condition stack grows. */
#ifndef YY_START_STACK_INCR
#define YY_START_STACK_INCR 25
#endif

/* Default declaration of generated scanner - a define so the user can
 * easily add parameters.
 */
#ifndef YY_DECL
#define YY_DECL_IS_OURS 1

extern int ascendlex \
               (YYSTYPE * yylval_param ,yyscan_t yyscanner);

#define YY_DECL int ascendlex \
               (YYSTYPE * yylval_param , yyscan_t yyscanner)
#endif /* !YY_DECL */

/* yy_get_previous_state - get the state just before the EOB char was reached */

#undef YY_NEW_FILE
#undef YY_FLUSH_BUFFER
#undef yy_set_bol
#undef yy_new_buffer
#undef yy_set_interactive
#undef YY_DO_BEFORE_ACTION

#ifdef YY_DECL_IS_OURS
#undef YY_DECL_IS_OURS
#undef YY_DECL
#endif

#line 379 "ascend_scanner.l"


#line 381 "ascend_scanner_lex.h"
#undef ascendIN_HEADER
#endif /* ascendHEADER_H */
