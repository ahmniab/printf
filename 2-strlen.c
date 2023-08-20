#include "main.h"
/**
* _strlen - lenth the string
*
* @s: num 2
* Return: i for fun
*/
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0';)
{
i++;
}
return (i);
}
