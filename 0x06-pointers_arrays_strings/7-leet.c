/**
 * leet - Encode a string into 1337.
 * @str: The string to encode.
 * Return: A copy of the encoded string.
 */
char *leet(char *str)
{
	int i = 0, j = 0;
	char tmp;
	int lc_letters[5] = {65, 69, 79, 84, 76};
	char corresps[5] = {'4', '3', '0', '7', '1'};

	do {
		tmp = str[i];
		for (j = 0; j < 5; j++)
			if ((tmp == lc_letters[j]) || (((int)tmp - 32) == lc_letters[j]))
				str[i] = corresps[j];
		i++;
	} while (tmp != '\0');
	return (str);
}

