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
	int idx;

	if (!array)
		return (-1);

	idx = 0;
	while (idx < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
		idx++;
	}

	return (-1);
}


