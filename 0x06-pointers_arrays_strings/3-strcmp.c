/**
 * _strlen - Returns the length of a string.
 * @s: The string whose the length should be returned.
 * Return: The length of s.
 */
int _strlen(char *s)
{
	int i = -1;
	char tmp;

	do {
		tmp = s[++i];
	} while (tmp != '\0');
	return (i);
}

/**
 * _strcmp - Compare one string to another.
 * @dest: The first string and the destination.
 * @src: The second string.
 * Return: -1 if s1 < s2
 *          1 if s1 > s2
 *          0 if s1 = s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, m = 0, n = 0, res = 0;

	for (i = 0; s1[i] != '\0'; i++)
                m += (int)s1[i++];
        for (i = 0; s2[i] != '\0'; i++)
                n += (int)s2[i++];
	if (m > n)
                res = -15;
        else if(m < n)
                res = 15;
        return (res);

}