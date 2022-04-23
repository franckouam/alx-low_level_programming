#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 *add_node - Adds a node to a single linked list
 * @head: A pointer to the pointer to the first element.
 * @str: The string to initialize with.
 * Returns: The address of the item just added.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *l;

	l = malloc(sizeof(list_t));
	if(l)
	{
		l->str = strdup(str);
		l->next = *head;
	}
	return (l);
}
