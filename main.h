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


int _putchar(char c);
int _puts(char *p);
int _print_TYPE(char *s, va_list ap);
int _specifier(char *s);
int _printf(const char *format, ...);



#endif
