#include "lists.h"

/**
 * insert_dnodeint_at_index - function
 * @h: address of head
 * @idx: index
 * @n: n
 * Return: pointer adress of the node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *temp = *h;
	unsigned int count = 0;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	if (idx > count)
	{
		return (NULL);
	}
	if (idx == count)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	temp = *h;
	while (idx != 1)
	{
		temp = temp->next;
		idx--;
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = temp;
	(temp->next)->prev = new;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
