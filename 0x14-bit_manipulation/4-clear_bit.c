#include "main.h"

/**
 * clear_bit - clears a bit
 * @n: unsigned long integer
 * @index: index
 * Return: 1 or -1 if failed
 * Description: clear bit at specified position
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1LU;

	if (index > (sizeof(*n) * 8 - 1))
	{
		return (-1);
	}

	mask = mask << index;

	*n = (*n & ~mask);

	return (1);
}

