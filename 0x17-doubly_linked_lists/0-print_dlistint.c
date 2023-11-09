#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return;
	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;

	}
	return (count);
}
