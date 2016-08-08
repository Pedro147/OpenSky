#ifndef __DEBUG__H_
#define __DEBUG__H_

#define DEBUG 1

#if DEBUG
#include <stdint.h>
#include "uart.h"

extern EXTERNAL_MEMORY uint8_t debug_init_done;
void debug_init(void);

#define debug_is_initialized() (debug_init_done)

#define debug(__ax) uart_puts(__ax)
#define debug_put_hex8(__a) uart_put_hex8(__a)
#define debug_put_hex16(__a) uart_put_hex16(__a)
#define debug_put_hex32(__a) uart_put_hex32(__a)
#define debug_put_uint8(__a) uart_put_uint8(__a)
#define debug_put_uint16(__a) uart_put_uint16(__a)
#define debug_put_int8(__a) uart_put_int8(__a)
#define debug_put_newline() uart_put_newline()
#define debug_putc(__c) uart_putc(__c)
//#define debug_printf(...) printf(__VA_ARGS__)
#define debug_flush() uart_flush()
#else
#define debug(...) {}
#define debug_flush() {uart_flush()}}
#endif

#endif
