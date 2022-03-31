#include <stdio.h>

int _strlen_rec(char *s, int n)
{
	if (s[0] == '\0')
		n = 1;
	_strlen_rec(s, n++);
	return (n);
}

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string whose the length will be returned.
 * Return: The length of s.
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
