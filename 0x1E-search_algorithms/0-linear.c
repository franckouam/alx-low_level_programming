#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"


/**
 * linear_search - Linear search algorithm implementation
 * @array: The array to search within
 * @size: The length of the array
 * @value: The value to search
 * Return: The first index where `value` is located if it is in `array`
 *         -1 otherwise.
 */
int linear_search(int *array, size_t size, int value)
{
	int found = -1;
	size_t i;

	if (array)
	{
		i = 0;
		while (i < size && found == -1)
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
			if (array[i] == value)
				found = array[i];
			i++;
		}
	}
	return (found);

}
