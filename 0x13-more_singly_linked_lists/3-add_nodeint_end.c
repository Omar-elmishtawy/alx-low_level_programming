#include "lists.h"

/**
 * add_nodeint_end - function
 * @head: pointer to struct list
 * @n: n
 * Return: size_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *itr_node;

	itr_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (!head || !new_node)
		return (NULL);
	new_node->n = n;

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
