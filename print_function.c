#include "main.h"

/**
 * print_int - print integer
 *@ap:pointer arg
 *
 *Return: number of char
 */

int print_int(va_list ap)
{
    int sum = 0;
    int i = 0;
    int num = va_arg(ap, int);
    int digits = 0;
    int temp = num;
    int digitArray[50]; /* Store individual digits*/

    if (num < 0)
    {
        _putcharr('-'); /* Print minus sign for negative numbers*/
        sum++;
        num = -num;
    }

    /* Calculate the number of digits in the number*/
    do {
        digits++;
        temp /= 10;
    } while (temp != 0);


    /* Extract each digit and store it in the array*/
    for (i = digits - 1; i >= 0; i--)
    {
        digitArray[i] = num % 10;
        num /= 10;
    }

    /*Print each digit in normal order*/
    for (i = 0; i < digits; i++)
    {
        sum++;
        _putcharr(digitArray[i] + '0'); /* Convert digit to character and print*/
    }

    return sum;
}


/**
* print_char - to print char
* 
* @ap: pointer of list type
* Return: return num of char printed
*/

int print_char(va_list ap)
{
        int count = 0; /* Count of characters printed*/

        char ch;
        ch = va_arg(ap, int);
        _putcharr(ch);
        count++;

        return (count);
}


/**
*
* print_string - print string
* 
* @ap: pointer to type
* 
* Return: num of char
*/
int print_string(va_list ap)
{
    int sum = 0;
    char *string = va_arg(ap, char *);
    sum = _strlen(string);
    _puts(string);

    return (sum);
}


