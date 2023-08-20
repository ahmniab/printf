#include "main.h"

/**
 * _specifier - find the type
 *
 *@s: string
 *Return: v
 */

int (*_specifier(char *s))(va_list ap)
{
	int i;
	TYPE spec[] = {

		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		/*{"u", print_unsigned},
		*{"o", print_octal},
		*{"R", print_rot_13},
		*{"r", print_rev},
		*{"S", print_S},
		*{"p", print_address},
		*{"X", print_HEX},
		*{"x", print_hex},
		*{"b", print_binary},
		*{"%", print_percent},*/
		{NULL, NULL}
	};
	
	for (i = 0; spec[i].specifier; i++)
	{
		if (*s == *spec[i].specifier)
			return (spec[i].f);
	}
	return (NULL);
}

/**
 *
 *
 *
 *
 *
 */


int _print_TYPE(char *s, va_list ap)
{
	int (*f)(va_list ap) = _specifier(s);
	if (f)
		return (f(ap));
	return (0);
}
