#include "main.h"

/**
 * _print_rev_recursion - Prints a stringi in reverse.
 * @s: The string to print.
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
