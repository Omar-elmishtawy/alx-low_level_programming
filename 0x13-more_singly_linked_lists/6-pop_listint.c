#include "lists.h"

/**
 * pop_listint - function
 * @head: pointer to struct list
 * Return: size_t
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *node;

	if (!head)
		return (0);
	n = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (n);
}
