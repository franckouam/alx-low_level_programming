#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - The program entry point.
 * Return: 0 if everything happened well. other int otherwise.
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	printf("Last digit of %d is %d", n, l);
	if (l > 5)
		printf(" and is greater than 5\n");
	if (l == 0)
		printf(" and is 0\n");
	if (l < 6 && l != 0)
		printf(" and is less than 6 and not 0\n");
	return (0);
}
