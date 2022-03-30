#include "main.h"
/**
 * _print_revrec - Print a string in reverse recursively.
 * @s: The string to print.
 */
void _print_revrec(char *s)
{
	if (s[0] == '\0')
	{
		return;
	}
	else
	{
		_print_revrec(s + 1);
		_putchar(*s);
	}
}

/**
 * _print_rev_recursion - Prints a stringi in reverse.
 * @s: The string to print.
 */
void _print_rev_recursion(char *s)
{
	_print_revrec(s);
}
