#include "lists.h"

/**
 * free_listint2 - function
 * @head: pointer to struct list
 */

void free_listint2(listint_t **head)
{
	listint_t *node;
	
	if (!head)
		return;
	node = *head;
	if (*head)
	{
		while ((*head)->next)
		{
			*head = (*head)->next;
			free(node);
			node = *head;
		}
		free(*head);
		*head = NULL;
	}
}
