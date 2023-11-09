#include "lists.h"

/**
 * add_dnodeint_end - print list
 * @head: pointer to head
 * @n: number to add
 * Return: number of nodes
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (temp->next)
	{
		temp = temp->next; 
	}
	temp->next = new;
	new->prev = temp;
	new->next = NULL;
	return (new);
}
