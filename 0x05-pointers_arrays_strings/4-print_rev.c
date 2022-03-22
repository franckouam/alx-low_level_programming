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
 * print_rev - Prints a string in reverse.
 * @s: A pointer to the first charcter of the string
 *     to print in reverse.
 */
void print_rev(char *s)
{
	int n = _strlen(s);
	int i;

	for (i = n - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
