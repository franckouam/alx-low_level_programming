#include <stdio.h>

/**
 * main - print the name of the running program.
 * @argc: The size of the arguments array.
 * @argv: The array of the arguments.
 * Return: always 1.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
