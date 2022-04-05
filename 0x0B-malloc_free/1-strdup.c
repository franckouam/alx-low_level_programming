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
 * _strdup - Returns a pointer to a newly allocated space in memory.
 * @str: The string to duplicate.
 * Return: A pointer to a duplication of str if everthing runs well.
 *	   NULL if str = NULL
 *
 * Description: Returns a pointer to a newly allocated space in
 *	        memory, which contains a copy of the string given
 *		as parameter.
 */

char *_strdup(char *str)
{
	int i = 0, n;
	char *res = NULL;

	if (str != NULL)
	{
		n = _strlen(str) + 1;
		res = malloc(n * sizeof(char));
		if (res != NULL)
			for (i = 0; i < n; i++)
				res[i] = str[i];
	}
	return (res);
}

