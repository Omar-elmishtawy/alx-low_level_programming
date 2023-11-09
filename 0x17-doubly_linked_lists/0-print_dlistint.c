#include "lists.h"

/**
 * print_dlistint - print list
 * @h: pointer to head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;

	}
	return (count);
}
