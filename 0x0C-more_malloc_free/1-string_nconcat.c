#include <stdlib.h>
#include <stdio.h>

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

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (n1 = 0; *(s1 + n1); n1++)
		;
	for (n2 = 0; *(s2 + n2); n2++)
		;
	if (n <= n2)
		n2 = n;
	res = malloc((n1 + n2 - 1) * sizeof(*res));
	if (!res)
		return (NULL);
	for (i = 0; i < n1; i++)
		res[i] = s1[i];
	for (; i < n1 + n2; i++)
		res[i] = s2[i - n1];
	res[i] = '\0';
	return (res);
}
