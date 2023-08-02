#include "lists.h"

/**
 * get_nodeint_at_index - function
 * @head: pointer to struct list
 * @index: int
 * Return: listint
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	for (; index > 0 && head; index--)
	{
		head = head->next;
	}
	if (!head)
		return (NULL);
	return (head);
}
