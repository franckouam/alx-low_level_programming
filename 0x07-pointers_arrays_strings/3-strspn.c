/**
 * find - Test if a byte is in a string.
 * @str: The string.
 * @c: The character to look for.
 * Return: 1 if `c` occurs in `str`.
 *	   0 otherwise.
 */
int find(char *str, char c)
{
        int i = 0, res = -1, end = 0;

        do {
                if (str[i++] == c)
                        res = i;
        } while ( res == 0 && end == 0); 
        if (res == 0 && c == str[i])
                res = i;
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
	unsigned int res = 0;
	int i, end = 0;

	do {
		if (find(s, accept[i]))
			res++;
		if (accept[i] == '\0')
			end = 1;
		i++;
	} while (end == 0);
	return (res);
}
