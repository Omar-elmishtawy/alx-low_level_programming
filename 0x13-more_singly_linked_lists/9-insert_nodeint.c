#include "lists.h"

/**
 * insert_nodeint_at_index - function
 * @head: pointer to struct list
 * @idx: dad
 * @n: ad
 * Return: size_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *temp;

	node = malloc(sizeof(listint_t));
	if (!(*head) || !node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	temp = *head;	
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (idx > 1 && temp)
	{
		temp = temp->next;
		idx--;
	}
	if (temp)
	{
		node->next = temp->next;
		temp->next = node;
		return (node);
	}
	free(node);
	return (NULL);
}
