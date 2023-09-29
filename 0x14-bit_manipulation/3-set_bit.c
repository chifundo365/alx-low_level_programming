#include "main.h"

/**
 * set_bit - set bit to 1
 * @n: pointer to integer
 * @index: index
 * Return: 1 or -1 if failed
 * Description: set a bit at specified index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8 - 1)
	{
		return (-1);
	}

	*n |= (1UL << index);

	return (1);
}

