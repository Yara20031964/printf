#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct type - print type
 * @c: format
 * @print: pointer to function
 */
typedef struct type
{
	char c;
	int (*print)(va_list);
} tt;

int _printf(const char *format, ...);
int _strlen(char *c);

int get_type(const char *format, int i, va_list list);
int p_char(char c);
int p_str(va_list list);
int p_int(va_list list);
int p_mod(va_list list);
int _putchar(char c);

#endif
