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
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: A pointer to a newly allocated space in memory
 *	   which contains the containts of s1 followed by
 *	   the containts of s2.
 *	   NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, n1, n2;
	char *res = NULL;


	if (s1 == NULL)
		n1 = 0;
	else
		n1 = _strlen(s1);
	if (s2 == NULL)
		n2 = 0;
	else
		n2 = _strlen(s2);
	res = malloc((n1 + n2 + 1) * sizeof(char));
	if (res != NULL)
	{
		for (i = 0; i < n1; i++)
			res[i] = s1[i];
		for (j = 0; j < n2; j++)
			res[i + j] = s2[j];
	}
	return (res);
}

