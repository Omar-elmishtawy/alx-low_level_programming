#include "lists.h"

/**
 * free_list - function
 * @head: pointer to struct list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

		while (head != NULL)
		{
			node = head;
			head = head->next;
			free(node);
		}
}
