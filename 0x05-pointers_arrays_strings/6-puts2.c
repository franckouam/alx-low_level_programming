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
 * puts2 - Print every odd characters of a string.
 * @str: The string to print.
 */
void puts2(char *str)
{
	int n = _strlen(str);
	int i;

	for (i = 0; i < n; i = i + 2)
		_putchar(str[i]);
	_putchar('\n');
}
