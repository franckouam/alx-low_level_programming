/**
 * string_toupper - change all lowecase letters to uppercase.
 * @str: The string to change.
 * Return: A copy of a uppercased string.
 */
char *string_toupper(char *str)
{
	int i = 0, tmp_i;
	char tmp_c;

	do {
		tmp_c = str[i];
		tmp_i = (int)tmp_c;
		if (tmp_i > 96 && tmp_i < 123)
			str[i] = (char)(tmp_i - 32);
		i++;
	} while (tmp_c != '\0');
	return (str);
}
