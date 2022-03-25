#include <stdio.h>

/**
 * _toupper - Converts a character to uppercase.
 * @c: the character to uppercase.
 * Return: A new uppercase character.
 */
char _toupper(char c)
{
	int tmp_i = (int)c;
	char res = c;

	if (tmp_i > 96 && tmp_i < 123)
		res = (char)(tmp_i - 32);
	return (res);
}

/**
 * _isseparator - Tell whether or no a character is a string separator.
 * @c: The caracter to check.
 * Return: 1 if c is a separator.
 	   0 otherwise.
*/
int _isseparator(char c)
{
	int res = 0;

	if ((int)c == 32 || c == '\t' || c == '\n' || c == ',' ||
			c == ';' || c == '.' || c == '!' || c == '?' ||
			c == '"' || c == '(' || c == ')' || c == '{' || c == '}')
		res = 1;
	return (res);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 * Return: A reference to the capitalized string.
 */
char *cap_string(char *str)
{
	int i = 0;
	char tmp;

	do {
		tmp = str[i];
		if (_isseparator(tmp))
			str[i + 1] = _toupper(str[i + 1]);
			/**printf("J'ai capitalise le caractere %c pour %c\n", tmp, _toupper(tmp));*/
		i++;
	} while ((tmp != '\0') && (str[i + 1] != '\0'));
	return (str);
}

