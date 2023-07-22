#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
int _printf(const char *format, ...);
typedef struct formatter {
	char * symbol;
	void (*f)(char *);
} format_me;
void (*converter(char *))(va_list list);
void print_char(va_list list);
void print_string(va_list list);
void print_d(va_list list);
void print_i(va_list list);
#endif
