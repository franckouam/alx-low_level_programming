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
 * _strcat - Concatenates two strings.
 * @dest: The first string and the destination.
 * @src: The second string.
 * Return: dest + src in dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, n = _strlen(dest);
	char tmp;

	do {
		tmp = src[i];
		dest[n + i] = tmp;
		i++;
	} while (tmp != '\0');
	return (dest);

}
