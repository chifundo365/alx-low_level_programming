#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 *			linear search
 * @array: pointer to the first integer in the array
 * @size: size of the array of numbers
 * @value: the value to search in the array of int's
 * Return: the first index of the found value
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	while (i < (int)size)
	{
		if (array[i] != value)
		{

			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		}
		else
		{
			return (array[i]);
		}

		i++;
	}


	return (-1);
}
