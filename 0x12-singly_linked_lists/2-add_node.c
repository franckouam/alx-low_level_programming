#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose the length should be returned.
 * Return: The length of s.
 */
int _strlen(const char *s)
{
	int i = -1;
	char tmp;

	do {
		tmp = s[++i];
	} while (tmp != '\0');
	return (i);
}

/**
 *add_node - Adds a node to a single linked list
 * @head: A pointer to the pointer to the first element.
 * @str: The string to initialize with.
 * Return: The address of the item just added.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *l;

	l = malloc(sizeof(list_t));
	if (l)
	{
		l->str = strdup(str);
		l->len = _strlen(str);
		l->next = *head;
		*head = l;
	}
	return (l);
}
