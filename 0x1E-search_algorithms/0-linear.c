#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - it Searches the value in the array of ints using the Linear search algo
 *
 * @array: Array to search
 *
 * @size: Size of the array
 *
 * @value: Value to search
 *
 * Return: First index where value is located or -1 for NULL array
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int index;

	for (index = 0; array && index < size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}
