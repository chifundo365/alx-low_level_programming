
#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints a character
 * @c: pointer to the character
 * Description: prints character to stdout
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
