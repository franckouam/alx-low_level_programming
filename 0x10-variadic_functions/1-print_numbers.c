#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print numbers.
 * @separator: The string to be printed between tow numbers.
 * @n: The number of numbers to print.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1 && (separator))
			printf("%s",  separator);
	}
	printf("\n");
	va_end(ap);
}
