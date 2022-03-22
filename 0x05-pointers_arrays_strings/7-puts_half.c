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
 * puts_half - Print the second half of a string.
 * @str: The string to print.
 */
void puts_half(char *str)
{
	int n = _strlen(str);
	int i;

	for (i = n / 2; i < n; i++)
		_putchar(str[i]);
	_putchar('\n');
}
