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
 * _strcpy - Copies a string to a buffer.
 * @dest: The destination buffer.
 * @src: The source string.
 * Return: dest wich will be a copy of src.
 */
char *_strcpy(char *dest, char *src)
{
	int i, n = _strlen(dest);

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
