#include "lists.h"

/**
 * add_node_end - function
 * @head: pointer to struct list
 * @str: str
 * Return: size_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *itr_node;

	itr_node = *head;
	new_node = malloc(sizeof(list_t));
	if (!head || !new_node || !str)
		return (NULL);
	new_node->str = strdup(str);

	if (itr_node)
	{
		while (itr_node->next)
			itr_node = itr_node->next;
		itr_node->next = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = itr_node;
		*head = new_node;
	}

	return (new_node);
}
