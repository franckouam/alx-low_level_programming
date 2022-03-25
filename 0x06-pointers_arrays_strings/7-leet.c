/**
 * leet - Encode a string into 1337.
 * @str: The string to encode.
 * Return: A copy of the encoded string.
 */
char *leet(char *str)
{
	int i = 0;
	char tmp;

	do {
		tmp = str[i];
		if (tmp == 'a' || tmp == 'A')
			str[i] = '4';
		else if (tmp == 'e' || tmp == 'E')
			str[i] = '3';
		else if (tmp == 'o' || tmp == 'O')
			str[i] = '0';
		else if (tmp == 't' || tmp == 'T')
			str[i] = '7';
		else if (tmp == 'l' || tmp == 'L')
			str[i] = '1';
		i++;
	} while (tmp != '\0');
	return (str);
}

