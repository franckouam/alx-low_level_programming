#include "main.h"
/**
 * print_1hr - Print the HH:MM format for one hour.
 * @hour: The hour to display with its minutes.
 */
void print_1hr(int hour)
{
	int i, hd, hu, md, mu;

	hd = hour / 10;
	hu = hour % 10;
	for (i = 0; i < 60; i++)
	{
		md = i / 10;
		mu = i % 10;
		_putchar('0' + hd);
		_putchar('0' + hu);
		_putchar(':');
		_putchar('0' + md);
		_putchar('0' + mu);
		_putchar('\n');
	}
}

/**
 * jack_bauer - Prints every minutes of the day.
 *
 * Description: Prints every minutes of the day of Jack Bauer.
 */
void jack_bauer(void)
{
	int i;

	for (i = 0; i < 24; i++)
	{
		print_1hr(i);
	}
}
