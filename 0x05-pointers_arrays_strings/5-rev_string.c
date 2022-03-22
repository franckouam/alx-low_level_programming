#include <stdio.h>
#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose the length should be returned.
 * Return: The length of s.
 */
int _strlen(char *s)
{
	int i = -1;
	char tmp;

	do {
		tmp = s[++i];
	} while (tmp != '\0');
	return (i);
}

/**
 * permut - Permut two items of an array.
 * @arr: The array.
 * @i: The first item.
 * @j: The second item.
 */
void permut(char *arr, int i, int j)
{
	char tmp;

	tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}

/**
 * rev_string - Reverse a string.
 * @s: A pointer to the first charcter of the string
 *     to reverse.
 */
void rev_string(char *s)
{
	int n = _strlen(s) - 1;
	int i;

	for (i = 0; i <= (n / 2); i++)
		permut(s, i, n - i);
}

