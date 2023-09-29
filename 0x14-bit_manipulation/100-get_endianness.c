#include <stdint.h>
#include <string.h>
#include "main.h"

/**
 * get_endianness - finds the endianess
 * Return: 1 if little endian or 0 if big endian
 * Description: checks endianess
 */

int get_endianness(void)
{
	int i = 1;

	if ((*(char *)&i) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
