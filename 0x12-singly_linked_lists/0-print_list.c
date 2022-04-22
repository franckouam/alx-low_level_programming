#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list.
 * @h: a pointer to the list to iterato to.
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t tmp;
	size_t i = 0;

	tmp = *h;
	if (h == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		while (tmp.next)
		{
			printf("[%d] %s\n", tmp.len, tmp.str);
			i++;
			tmp = *(tmp.next);
		}
		printf("[%d] %s\n", tmp.len, tmp.str);
		i++;

	}
	return (i);
}
