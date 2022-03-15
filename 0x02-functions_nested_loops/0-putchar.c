#include "main.h"
/**
 * print_str - Prints a string
 * @str: the string to print
 * Return: void.
 */
void print_str(char *str)
{
	char tmp;
	int i = 0;

	do {
		tmp = str[i++];
		_putchar(tmp);
	} while (tmp != '\0');
}

/**
 * main - The entry point of the program.
 * Return: 1 on success. An errno value otherwise.
 */

int main(void)
{
	print_str("_putchar\n");
	return (0);
}
