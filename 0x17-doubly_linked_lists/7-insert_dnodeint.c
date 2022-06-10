#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a  new node at a given position.
 * @head: The first element of the list.
 * @idx: The position of insertion.
 * @n: The data of the new node.
 * Return: The address of the new node if success.
 *	   NULL otherwise.
 */
dlistint_t *insert_dnodeint_at_index(
		dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *tmp, *node;
	unsigned int i = 0;

	node = malloc(sizeof(dlistint_t));
	if (node)
	{
		node->n = n;
		if (idx == 0)
		{
			node->prev = NULL;
			node->next = *head;
			if (*head)
				(*head)->prev = node;
			head = &node;
		}
		else
		{
			tmp = *head;
			while ((tmp != NULL) && (i + 1  < idx))
			{
				tmp = tmp->next;
				i++;
			}
			if (i + 1 == idx)
			{
				node->prev = tmp;
				node->next = tmp->next;
				tmp->next = node;
			}
		}
	}
	return (node);
}

