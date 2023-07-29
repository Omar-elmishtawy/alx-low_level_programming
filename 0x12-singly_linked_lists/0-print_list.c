#include "lists.h"

/**
 * print_list - function
 * @h: pointer to struct list
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t nodes_num = 0;
	list_t *ptr;

	if (!h)
		return (-1);

	ptr = h;
	while (ptr)
	{
		if (ptr->str)
			printf("[%d] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		ptr = ptr->next;
		nodes_num++;
	}
	return (nodes_num);
}
