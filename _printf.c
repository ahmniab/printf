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
	char *p;
	 va_start(ap, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (p = (char *) format; *p; p++)
	{
		if (*p != '%')
		{
			sum += 1;
			_putcharr(*p);
			continue;
		}
		p++;
		if (_specifier(p))
			sum += _print_TYPE(p, ap);
	}

	va_end(ap);
	return (sum);

	}



