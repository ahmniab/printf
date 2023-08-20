#ifndef _PRINTF_H
#define _PRINTF_H


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct specifier - to take the Type that will be printed
 * @specifier: Type of format
 * @f: the function that will be excuted
 *
 */

typedef struct specifier
{
char *specifier; /* array to take the format */
int (*f)(va_list);
} TYPE;

/*main function*/
int _putcharr(char c);
int _puts(char *p);
int _print_TYPE(char *s, va_list ap);
int (*_specifier(char *))(char *s);
int _printf(const char *format, ...);

/*function types*/
int print_int(va_list);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_int(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_rot_13(va_list);
int print_rev(va_list);
int print_S(va_list);
int print_address(va_list);
int print_HEX(va_list);
int print_hex(va_list);
int print_binary(va_list);

/*addition function*/

int _strlen(char* s);

#endif
