#include "lists.h"

/**
 * free_listint - function
 * @head: pointer to struct list
 */

void free_listint(listint_t *head)
{
	listint_t *node = head;

	if (head)
	{
		while (head->next)
		{
			head = head->next;
			free(node);
			node = head;
		}
		free(head);
	}
}
