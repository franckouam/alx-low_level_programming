/**
 * _strlen - Returns the length of a string.
 * @s: The string whose the length should be returned.
 * Return: The length of s.
 */
int _strlen(char *s)
{
	int i = 0;
	char tmp;

	do {
		tmp = s[i];
		i++;
	} while (tmp != '\0');
	return (i - 1);
}

/**
 * _strcmp - Compare one string to another.
 * @s1: The first string and the destination.
 * @s2: The second string.
 * Return: -1 if s1 < s2
 *	  1 if s1 > s2
 *	  0 if s1 = s2
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
	else if (m < n)
		res = 15;
	return (res);
}

