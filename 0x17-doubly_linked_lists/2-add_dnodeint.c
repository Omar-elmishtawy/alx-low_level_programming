#include "lists.h"

/**
 * add_dnodeint - print list
 * @head: pointer to head
 * @n: number to add
 * Return: number of nodes
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	new->next = *head;
	(*head)->prev = new;
	new->prev = NULL;
	*head = new;
	return (new);
}
