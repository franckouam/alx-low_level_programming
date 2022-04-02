/** find - Test if a byte is in a string.
 * @str: The string.
 * @c: The character to look for.
 * Return: The index of the first occurrence if `c` occurs in `str`.
 *         -1 otherwise.
 */
int find(char *str, char c)
{
        int i = 0, res = -1, end = 0;

        do {
                if (str[i++] == c)
                        res = i;
        } while ( res == 0 && end == 0);
/*	if (res == 0 && c == str[i])
		res = i;*/
        return (res);
}

/**
 * _strpbrk - Searches a string for set of bytes.
 * @s: The main string.
 * @accept: The matching string.
 * Return: A pointer to the first occurrence in the string `s` 
 * 	   of any of the bytes in `accept`.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, tmp, min = -1;
	char *res = 0;

	do {
		tmp = find(s, accept[i++]);
		if (tmp > 0 && tmp < min)
			min = tmp;
	} while (accept[i] != '\0');
/*	tmp = find(s, accept[i]);
	if (tmp > 0 && tmp < min)
		min = tmp;*/
	if (min > 0)
		res = s + min;
	return (res);
}

