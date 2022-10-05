#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
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
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				found = array[i];
			i++;
		}
	}
	return (found);

}

/**
 * print_array - Prints an array
 * @array: The array to print
 * @size: The size of the array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	for (i=0; i<size; i++)
		_putchar('0' + array[i]);
}

/**
 * print_str - Prints a string
 * @str: the string to print
 * Return: void.
 */
void print_str(char *str)
{
	char tmp;
	int i = 0;

	tmp = str[0];
	while (tmp != '\0')
	{
		_putchar(tmp);
		tmp = str[++i];
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
