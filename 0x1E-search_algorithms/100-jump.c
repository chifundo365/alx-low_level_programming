#include "search_algos.h"
/**
 * print_checked - prints a number of a given index in the current array
 * @array: pointer to the first element of an array of int's
 * @index: the index to print
 */
void print_checked(int *array, int index)
{
	if (index > -1)
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
}

/**
 * jump_search - searches for an element in an array of int's
 * using jump search
 * @array: array of int'd to search in
 * @size: size of the array
 * @value: the value to search for in the array of int's
 * Return: the index of the number or -1 i not found
 */
int jump_search(int *array, size_t size, int value)
{
	int index = 0;
	int j_step = (int)sqrt((float)size);
	int step = j_step;
	int i = 0;

	while (index < (int)size)
	{
		print_checked(array, index);

		if ((j_step >= ((int)size - 1) + step) || (array[j_step] >= value))
		{
			printf("Value found between indexes [%d] and [%d]\n",
					index, j_step);

			i = index;

			while (i <= (j_step) && (i < (int)size))
			{
				print_checked(array, i);
				if  (array[i] == value)
					return (i);

				i++;
			}

			return (-1);
		}

		index = j_step;
		j_step += step;
	}

	return (-1);
}
