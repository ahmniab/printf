#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putcharr(char c)
{
	return (write(1, &c, 1));
}




/**
 * _puts - print string
 *
 * @p: string to print
 *
 * Return: numbers of char
 */


int _puts(char *p)
{
	char *tmp = p;

	while (*p)
	{
		_putcharr(*p);
		p++;
	}

	return (p - tmp);/*to return the lenth of what printed*/
}

