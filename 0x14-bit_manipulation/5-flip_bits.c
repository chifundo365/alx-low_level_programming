#include "main.h"

/**
 * flip_bits - find the number if bits to flip
 * @n: integer 1
 * @m: integer 2
 * Return: the number of bit to flip
 * Description: finds and returns the number of bits to
 * flip from 1 number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff = 0;

	while (n != 0 || m != 0)
	{
		 if ((n & 1) ^ (m & 1))
		 {
			diff++;
		 }

		if (n != 0)
		{
			n >>= 1LU;
		}

		if (m != 0)
		{
			m >>= 1LU;
		}

	}

	return (diff);
}
