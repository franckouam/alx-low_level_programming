#include "main.h"

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
 * _strncat - Concatenates two strings.
 * @dest: The first string and the destination.
 * @src: The second string.
 * @n: The number of byte to copy from src.
 * Return: dest + src[0 to n] in dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, l = _strlen(dest), m = _strlen(src);
	char tmp;

	if (n > m)
		n = m;
	do {
		tmp = src[i];
		dest[l + i] = tmp;
		i++;
	} while (i < n && tmp != '\0');
	return (dest);

}
