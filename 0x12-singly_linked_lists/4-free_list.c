#include "lists.h"

/**
 * free_list - function
 * @head: pointer to struct list
 */

void free_list(list_t *head)
{
	list_t *node = head;

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
