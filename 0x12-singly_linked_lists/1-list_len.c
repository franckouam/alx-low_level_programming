#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - computes the length of the liked list..
 * @h: a pointer to the list to iterato to.
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	size_t i = 0;

	tmp = h;
	if (tmp)
		tmp = h;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
