/**
 * find - Test if a byte is in a string.
 * @str: The string.
 * @c: The character to look for.
 * Return: 1 if `c` occurs in `str`.
 *	   0 otherwise.
 */
int find(char *str, char c)
{
	int i = 0, res = 0;

	for (i = 0; res == 0 && str[i] != '\0'; i++)
	{
		if (str[i] == c)
			res = 1;
	}
	return (res);
}

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The main string.
 * @accept: The prefix substring.
 * Return: The number of bytes in `s` which consist only of bytes in `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 1;
	int i;

	for (i = 0; accept[i] != '\0'; i++)
		if (find(s, accept[i]))
			res++;
	return (res);
}
