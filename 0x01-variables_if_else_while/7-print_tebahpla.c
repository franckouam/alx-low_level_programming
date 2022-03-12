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
	int i;

	for (i = 122; i > 96; i--)
		putchar(i);
	putchar(10);
	return (0);
}
