#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings.
 * @separator: Ths string to display between two strings.
 * @n: The number of string to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *tmp;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(ap, char *);
		if (tmp)
			printf("%s", tmp);
		else
			printf("(nil)");
		if ((i != n - 1) && (separator))
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
