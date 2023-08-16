#include "lists.h"

/**
 * free_list - function
 * @head: pointer to struct list
 */

void free_list(list_t *head)
{
	list_t *node = head;

		while (head != NULL)
		{
			node = head;
			head = head->next;
			free(node->str);
			free(node);
		}
}
