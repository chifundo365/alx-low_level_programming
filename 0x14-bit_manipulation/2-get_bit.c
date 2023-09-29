#include "main.h"

/**
 * get_bit - prints the value of a bit
 * @n: integer to find the value of
 * @index: index
 * Return: value of bit at position or -1 if failed
 * Description: find the value of a bit at particular position in an integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit = 0;
	unsigned int bit_size = sizeof(n) * 8 - 1;

	if (index > bit_size)
	{
		return (-1);
	}

	n = n >> index;
	bit = n & 1;

	return (bit);
}

