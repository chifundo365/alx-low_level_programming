#include "main.h"

/**
*description: contains a function that prints string to stdout
*_puts - prints a string
*@str - string to print
*/

void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

