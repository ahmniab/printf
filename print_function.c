#include "main.h"

/**
 * print_int - print integer
 *@ap:pointer arg
 *
 *Return: number of char
 */

int print_int(va_list ap)
{
	int sum = 0, i = 0;
	int num = va_arg(ap, int);
	    if (num < 0)
    {
        _putchar('-'); // Print minus sign for negative numbers
        sum++;
        num = -num; // Make the number positive for further processing
    }
	int temp = num;
    int digits = 0;
    do {
        digits++;
        temp /= 10;
    } while (temp != 0);

    // Print each digit in reverse order
    temp = num;
    for (int i = 0; i < digits; i++)
    {
        int digit = temp % 10;
        _putchar(digit + '0'); // Convert digit to character and print
        temp /= 10;
        sum++;
    }

    return (sum);
	/*while (num >= "0" && num <= "9")
	{
		_putchar(*num);
		num++;
		sum += 1;
	}
	i = sum;
	while (i--)
	ap++;
	return (sum);*/
}
