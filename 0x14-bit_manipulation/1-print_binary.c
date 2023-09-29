#include "main.h"
/**
 * print_binary - prints a binary presentation of a number
 * @n: number to be converted
 * Description: prints the binary presentation without leading zeros
 */

void print_binary(unsigned long int n)
{
	int shift = sizeof(n) * 8 - 1;
	int zero_flag = 1;
	unsigned long int mask;

	while (shift >= 0)
	{
		mask = 1LU << shift;

		if (n & mask)
		{
			_putchar("1");
			zero_flag = 0;
		}
		else if (zero_flag == 0)
		{
			_putchar("0");
		}


		shift--;
	}

	if (zero_flag == 1)
	{
		_putchar("0");
	}
}

