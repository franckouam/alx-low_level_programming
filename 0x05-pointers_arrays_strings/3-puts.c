#include "main.h"

/**
 * _puts - Prints a string.
 * @str: The string to print.
 */
void _puts(char *str)
{
	char tmp;
	int i = 0;

	do {
		tmp = str[i++];
		_putchar(tmp);
	} while (tmp != '\0');
	_putchar('\n');
}
