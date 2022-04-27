#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: The head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if(*head)
	{
		while ((*head)->next != NULL)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
		}
		free(*head);
	}
	*head = NULL;
}
