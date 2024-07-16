#include "search_algos.h"

/**
 * linear_search - this will search value in the array of integers with the linear search algorithm
 *
 * @array: the input array
 * @size: the array size
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int k;

	if (array == NULL)
		return (-1);

	for (k = 0; k < (int)size; k++)
	{
		printf("Value checked array[%u] = [%d]\n", k, array[k]);
		if (value == array[k])
			return (k);
	}
	return (-1);
}
