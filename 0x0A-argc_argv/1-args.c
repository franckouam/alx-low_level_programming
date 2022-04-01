#include <stdio.h>

/**
 * main - print the number of parameters of the running program.
 * @argc: The size of the arguments array.
 * @argv: The array of the arguments.
 * Return: always 1.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
