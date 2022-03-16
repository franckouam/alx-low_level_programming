#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int i, j, n, u, d;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			n = i * j;
			if (n < 10)
			{
				_putchar(32);
				_putchar('0' + n);
			}
			else
			{
				d = n / 10;
				u = n % 10;
				_putchar('0' + d);
				_putchar('0' + u);
			}
			if (j == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(32);
			}
		}
	}
}
