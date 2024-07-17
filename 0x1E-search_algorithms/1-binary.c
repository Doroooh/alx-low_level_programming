#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
int recursive_binary_search(int *array, int left, int right, int value);
void print_search(int *array, int first, int last);

/**
 * binary_search - Searches value in the array of integers with the Binary search algo
 *
 * @array: Array to search
 *
 * @size: array Size
 *
 * @value: Value to search
 *
 * Return: First index where value is located or -1 for NULL array
 */

int binary_search(int *array, size_t size, int value)
{
	/* Checking the inputs and will call the recursive search return value */
	if (array && size)
	{
		return (recursive_binary_search(array, 0, (int)size - 1, value));
	}
	/* If otherwise is noted will return the value of -1 */
	return (-1);
}


/**
 * recursive_binary_search - It recursively breaks  the array into subarrays & searches
 *
 * @array: Array to search
 *
 * @left: Search on left side of array
 *
 * @right: Search on right side of array
 *
 * @value: Value to search
 *
 * Return: First index where value is located or -1 for NULL array
 */

int recursive_binary_search(int *array, int left, int right, int value)
{

	int stmid;


	/* If value is less than the middle depicted by stmid, look into the first half of array */
	if (right >= left)
	{
		stmid = left + (right - left) / 2;
		print_search(array, left, right);

		/* If the search finds a middle value, return value */
		if (array[stmid] == value)
		{
			return (stmid);
		}

		/* If the element is less than the middle,then search  theleft subarray */
		if (array[stmid] > value)
		{
			return (recursive_binary_search(array, left, stmid - 1, value));
		}

		/* Otherwise search for this value in right subarray */
		return (recursive_binary_search(array, stmid + 1, right, value));
	}
	/* If element not existing then return -1 */
	return (-1);
}

/**
 * print_search - Printing the array and side of array
 *
 * @array: Array to search
 *
 * @first: left hand side of array
 *
 * @last: right hand side of array
 *
 * Return: Void
 */

void print_search(int *array, int first, int last)
{
	int index = 0;

	printf("Searching in array: ");

	while (first <= last)
	{
		if (index > 0)
		{
			printf(", ");
		}
		index = first++;
		printf("%d", array[index++]);
	}
	printf("\n");
}
