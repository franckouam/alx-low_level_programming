#include <stddef.h>
/**
 * array_iterator - Execute a function given as parameter on each element of an array.
 * @array: The array
 * @size: The size of the array.
 * @action: The function to apply on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	for (i = 0; i < size; i++)
		action(array[i]);
}
