#include "main.h"

/**
 * binary_to_uint - converts a binary string to unsigned int
 * @b: pointer to the string of characters
 * Description: return converted number or 0 if one othe string is not 1 or 0
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned int power = 0;

	while (*b != '\0')
	{
		if ((*b != '1') || (*b != '0'))
		{
			return (0);
		}
		else
		{
			if (*b == '1')
			{
				number += << power;
			}
		}

		power++;
		b++;
	}

	return (number);
}

