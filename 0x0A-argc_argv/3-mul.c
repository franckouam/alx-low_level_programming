#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply two given numbers given as argumets.
 * @argc: The size of the arguments array.
 * @argv: The array of the arguments.
 * Return: 0 if at least two arguments was send. 1 otherwise.
 */
int main(int argc, char *argv[])
{
	int e = 0;
	long p;

	if (argc < 3)
	{
		printf("Error\n");
		e = 1;
	}
	else
	{
		p = atol(argv[1]) * atol(argv[2]);
		printf("%ld\n", p);
	}
	return (e);
}
