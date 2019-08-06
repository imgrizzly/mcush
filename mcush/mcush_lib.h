/* MCUSH designed by Peng Shulin, all rights reserved. */
#ifndef __MCUSH_LIB_H__
#define __MCUSH_LIB_H__
#include "mcush_lib_crc.h"
#include "mcush_lib_fs.h"

#ifdef __cplusplus
extern "C" {
#endif


uint32_t calc_checksum(void *p, uint32_t len);

//#define USE_REVERSE_TAB
uint32_t reverse_32_bits(uint32_t v);
uint16_t reverse_16_bits(uint16_t v);
uint8_t reverse_8_bits(uint8_t v);

int test_bit1_num(int v);
int test_bit1_position(int v, int msb);

void test_delay_us(void);
void test_delay_ms(void);

char *get_tick_time_str(char *buf, uint32_t tick, int ms);
char *get_uptime_str(char *buf, int ms);
char *get_rtc_str(char *buf);
char *get_rtc_tick_str(char *buf, uint32_t tick);

int parse_date( const char *str, int *year, int *mon, int *mday );
int parse_time( const char *str, int *hour, int *min, int *sec );
int parse_date_time( const char *str, int *year, int *mon, int *mday, int *hour, int *min, int *sec );

int set_rtc_by_str( char *s );
int set_rtc_by_val( int year, int mon, int mday, int hour, int min, int sec );
int get_rtc_tick( uint32_t *tick );
int get_rtc_tick64( uint64_t *tick );

char *strdup2( const char *s );

char *rstrip( char *s );
char *lstrip( char *s );
char *strip( char *s );

char *hexlify( const char *buf_in, char *buf_out, int len, int add_null_end );
int unhexlify( const char *buf_in, char *buf_out, int len );


int split_url( const char *url, char **protocol, char **server, int *port, char **pathfile );

void byte_to_unicode( uint8_t *buf_in, uint16_t *buf_out, int len, int add_null_end );

void swap_bytes( uint8_t *a, uint8_t *b );

int cmp_int8(const void *a, const void *b);
int cmp_int16(const void *a, const void *b);
int cmp_int32(const void *a, const void *b);
int cmp_uint8(const void *a, const void *b);
int cmp_uint16(const void *a, const void *b);
int cmp_uint32(const void *a, const void *b);
int cmp_float(const void *a, const void *b);

#ifdef __cplusplus
}
#endif

#endif

