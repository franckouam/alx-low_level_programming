#include <stdlib.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose the length will be returned.
 * Return: The length of s.
 */
int _strlen(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * string_nconcat - Concates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of byte to copy from s2.
 * Return: A pointer containing s1 + s2[0..n]
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, n1, n2;
	char *res;

	n1 = _strlen(s1);
	n2 = _strlen(s2);
	if (n <= n2)
		n2 = n2;
	res = malloc((n1 + n2 + 1) * sizeof(*res));
	if (res != NULL)
	{
		for (i = 0; i < n1; i++)
			res[i] = s1[i];
		for (i = 0; i < n2 + 1; i++)
			res[n1 + i] = s2[i];
		res[i] = '\0';
	}
	return (res);
}
