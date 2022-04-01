#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coin for a change.
 * @argc: The number of console arguments.
 * @argv: The array of console arguments.
 * Return: 1 if the program is called without an argument.
 *	   0 otherwise.
 *
 * Description: Prints the minimum number of coins to make
 *		change for an amount of money.
 */
int main(int argc, char *argv[])
{
	int r, n = 0, i = 0;
	int p[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		r = atoi(argv[1]);
		while (r > 0 && i < 5)
		{
			if (r - p[i] >= 0)
			{
				r = r - p[i];
				n++;
			}
			else
			{
				i++;
			}
		}
		printf("%d\n", n);
	}

	return (0);
}
