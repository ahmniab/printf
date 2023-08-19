#include "main.h"

/**
 * _printf - print things
 *
 * @format: the format string
 *
 *Return: number of characters
 */

int _printf(const char *format, ...)
{

	va_list ap;
	int sum = 0;

	if (!format || format[0] != '%' || !format[1])
		return (-1);

	va_start(ap, format);

	



	va_end(ap)
}

