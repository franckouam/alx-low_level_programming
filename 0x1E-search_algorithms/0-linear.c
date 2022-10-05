#include <stdlib.h>
#include <limits.h>
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
			print_str("Value checked array[");
			_putint(i);
			print_str("] = [");
			_putint(array[i]);
			print_str("]\n");
			if (array[i] == value)
				found = array[i];
			i++;
		}
	}
	return (found);

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
 * _putint - Prints an integer.
 * @n: The integer to print.
 * Return: The number of digit printed.
 */
int _putint(int n)
{
	int tmp, i = 1, j = 0, r = 0, abs_n = n;

	if (n < 0)
	{
		if (n == INT_MIN)
		{
			abs_n = INT_MAX;
			r = 1;
		}
		else
		{
			abs_n = -n;
			_putchar('-');
		}
	}
	tmp = abs_n;
	while (tmp >= 10)
	{
		tmp = tmp / 10;
		i++;
	}
	for (j = i; j > 0; j--)
	{
		if (j == 10)
			tmp = (abs_n / _pow(10, 9)) % 10;
		tmp = (abs_n % _pow(10, j)) / _pow(10, j - 1);
		if (j == 1)
			tmp += r;
		_putchar(48 + tmp);
	}
	return (i);

}

/**
 * _pow - Computes x raised to power of y.
 * @x: The mantisse.
 * @y: The exposant.
 * Return: x ^ y.
 */
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow(x, y - 1));
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
