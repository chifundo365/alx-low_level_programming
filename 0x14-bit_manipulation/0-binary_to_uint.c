#include "main.h"
#include <stdio.h>

/**
 * _strlen - finds the length of a string
 * @str - pointer to the string
 * Return: integer
 * Description: finds the length of a null terminated string
 */

unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}


/**
 * binary_to_uint - converts a binary string to unsigned int
 * @b: pointer to the string of characters
 * Description: return converted number or 0 if one othe string is not 1 or 0
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned int position_value = 0;
	unsigned int power = 0;
	unsigned int strlen = 0;

	
	if (b != NULL)
	{
		strlen = (_strlen(b));

		while (strlen > 0)
		{
			if ((b[strlen - 1] == '1') || (b[strlen - 1] == '0'))
			{
				if (b[strlen - 1] == '1')
				{
					position_value = 1 << power;
					number += position_value;
				}
			}
			else
			{
				return (0);
			}

			strlen--;
			power++;
		}
	}

	return (number);
}

