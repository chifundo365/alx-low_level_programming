#include "main.h"

/**
*print_rev - print charecters in reverse
*@s: character to print in reverse
*/

void print_rev(char *s)
{
int i;

while (s[i])
{
i++;
}

while (i--)
{
_putchar(s[i]);
}

_putchar('\n');
}

