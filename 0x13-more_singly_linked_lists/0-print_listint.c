#include "lists.h"

/**
 * print_list - function
 * @h: pointer to struct list
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes_num = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_num++;
	}
	return (nodes_num);
}
