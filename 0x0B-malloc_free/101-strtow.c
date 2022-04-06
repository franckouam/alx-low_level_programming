#include <stdlib.h>

/**
 * count_words - Counts words in a string based on spaces.
 * @str: The string whose the words will be counted.
 * Return: The number of words of the string if it has some.
 *	   0 otherwise.
 */
int count_words(char *str)
{
	int i = 0, n = 0;

	for (i = 0; str[i] != '\0')
		if (str[i] == 32)
			n++;
	return (n);
}
/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 * Return: An array of string which the last item is NULL
 *	   if everthing runs well.
 *	  NULL if str == NULL or str = "".
 */
char **strtow(char *str)
{
	int i = 0, n = 0;
}

