#include "search_algos.h"
/**
* print_current_array - prints the current array being searched
* @array: pointer to the first integer of the array of int's
* @start: starting index of the array
* @end: the last index of the array
*/
void print_current_array(int *array, int start, int end)
{
    int i = start;
    if (end)
    {
        printf("Searching in array: ");
    }

    while ( i <= end)
    {
        if ( i == start)
        {
            printf("%d", array[i]);
        }
        else
        {
            printf(", %d", array[i]);
        }

        i++;
    }

    printf("\n");
}

/**
* binary_search - searches for a value in a sorted array of int's
* @array: pointer to the first int in the array of int's
* @size: size of the array
* @value: the value being searched
* Return: index of the found value else -1
*/
int binary_search(int *array, size_t size, int value)
{
    int left = 0;
    int right = (int)size - 1;
    int guess = 0;
    int mid = 0;

    if (!array)
    {
        return (-1);
    }

    
    while (left <= right)
    {
        print_current_array(array, left, right);
        mid = (left + right) / 2;
        guess = array[mid];

        if (value == guess)
        {
            return (mid);

        }
        if (guess > value)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return (-1);
}