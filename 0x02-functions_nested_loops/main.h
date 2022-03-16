#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char);

/**
 * print_alphabet - Print the alphabet in lowecase,
 * Return: void.
 */
void print_alphabet(void);

/**
 * print_alphabet - Print the alphabet in lowecase 10 times.
 * Return: void.
 */
void print_alphabet_x10(void);

/**
 * _islower - Checks for lowercase character.
 * @c: The decimal representation of the characteur to check.
 * Return: 1 if c is lowercase. 0 otherwise.
 */
int _islower(int);

/**
 * _isalpha - Checks for alphabetic character.
 * @c: The decimal representation of the character to check.
 * Return: 1 if c is a letter, lowercase or lowercase. 0 otherwise.
 */
int _isalpha(int);

/**
 * print_sign - Prints the sign of a number.
 * @n: The number whose the sign is displayed.
 * Return: 1 and prints + if n is greater than 0.
 *	   0 and prints 0 if n is zero.
 *	  -1 and prints - if n is less than zero.
 */
int print_sign(int);

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The number whose the absolute is computed.
 * Return: n if n is greater than or equal to 0.
 *	  -n if n is less than zero.
 */
int _abs(int);

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number whose the last digit will be returned.
 * Return: The last digit of n.
 */
int print_last_digit(int n);

/**
 * jack_bauer - Prints every minutes of the day.
 *
 * Description: Prints every minutes of the day of Jack Bauer.
 */
void jack_bauer(void);

/**
 * add - Adds two integers and returns the result.
 * @x: The first number.
 * @y: The second number.
 * Return: x + y.
 */
int add(int, int);

/**
 * print_1hr - Print the HH:MM format for one hour.
 * @hour: The hour to display with its minutes.
 */
void print_1hr(int);

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 */
void times_table(void);

/**
 * display_nbr - Display a number.
 * @nbr: The number which should be displayed.
 */
void display_nbr(int nbr);

/**
 * print_to_98 - Prints all natural numbers from n to 98, followed by a new line..
 *@n: The starting point number.
 */
void print_to_98(int n);

#endif /* MAIN_H */
