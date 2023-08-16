#include "lists.h"

/**
 * add_node - function
 * @head: pointer to struct list
 * @str: str
 * Return: size_t
 */

list_t *add_node(list **head, const char **str)
{
	list *new_node;

	new_node = malloc(sizeof(list_t));
	if (!head || !new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
