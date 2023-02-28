#include "main.h"

/**
*description: contains a function that prints string to stdout
*_puts - prints a string
*@str - string to print
*/

void _puts(char *str)
{
int i;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}
