#include <stdio.h>

/**
 * main - print the parameters of the running program.
 * @argc: The size of the arguments array.
 * @argv: The array of the arguments.
 * Return: always 1.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
