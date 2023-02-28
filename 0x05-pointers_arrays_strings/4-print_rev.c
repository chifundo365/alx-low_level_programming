#include "main.h"

/**
*print_rev - print charecters in reverse
*@s: character to print in reverse
*/

void print_rev(char *s)
{
if (*s == '\0')
{
return;
}
print_rev(s + 1);
_putchar(*s);
}

