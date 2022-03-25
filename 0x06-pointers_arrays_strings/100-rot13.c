/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to encode.
 *Return: A copy of the encoded string.
 */
char *rot13(char *str)
{
	int i = 0, j = 0, a, tmp;
	int starts[2] = {97, 65};

	do {
		tmp = (int)str[i];
		for (j = 0; j < 2; j++)
		{
			a = starts[j];
			if ((tmp >= a) && (tmp <= a + 26))
				str[i] = ((tmp - a + 13) % 26) + a;
		}
		i++;
	} while (tmp != 0);
	return (str);
}

