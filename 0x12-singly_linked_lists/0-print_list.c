#include "lists.h"

/**
 * print_list - function
 * @h: pointer to struct list
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t nodes_num = 0;

	if (!h)
		return (-1);

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		nodes_num++;
	}
	return (nodes_num);
}
