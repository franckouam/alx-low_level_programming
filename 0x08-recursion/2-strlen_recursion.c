#include <stdio.h>

int _strlen_rec(char *s, int n)
{
	if (s[0] == '\0')
		return (n + 1);
	return (_strlen_rec(s, n++));
}

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string whose the length will be returned.
 * Return: The length of s.
 */
int _strlen_recursion(char *s)
{
	int n = 0;
	n = _strlen_rec(s, n);
	return (n);
}
