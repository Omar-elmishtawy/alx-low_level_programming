#include "lists.h"

/**
 * list_list - function
 * @h: pointer to struct list
 * Return: size_t
 */

size_t list_len(const list_t *h);
{
	size_t nodes_num = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		nodes_num++;
	}
	return (nodes_num);
}
