#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - Tests if a string is a number.
 * @s: The string to check.
 * Return: 1 if s is a number. 0 otherwise.
 */
int is_number(char *s)
{
	if (s[0] == '\0')
		return (1);
	if (!isdigit(s[0]))
		return (0);
	else
		return (is_number(s + 1));
	return (1);
}

/**
 * main - Sums and prints all integers given as argument.
 * @argc: The size of the arguments array.
 * @argv: The array of the arguments.
 * Return: 0 if all arguments are integers. 1 otherwise.
 */
int main(int argc, char *argv[])
{
	int e = 0, i = 1;
	long s = 0;

	while (i < argc && e == 0)
	{
		if (is_number(argv[i]))
			s += atol(argv[i++]);
		else
			e = 1;
	}
	if (e)
		printf("Error\n");
	else
		printf("%ld\n", s);
	return (e);
}
