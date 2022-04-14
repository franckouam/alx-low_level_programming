/**
 * print_name - Prints a name
 * @name: The name to print
 * @f: A function that makes changes on a string.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
