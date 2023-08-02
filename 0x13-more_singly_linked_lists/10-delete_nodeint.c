#include "lists.h"

/**
 * delete_nodeint_at_index - function
 * @head: pointer to struct list
 * @index: dad
 * Return: size_t
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *temp2;

	if (!(*head))
		return (-1);
	temp = *head;
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (index > 1)
	{
		temp = temp->next;
		index--;
	}
	temp2 = temp;
	printf("heeeeeeeeeeeeeey %d\n", ((temp->next)->next)->n);
	temp->next = (temp->next)->next;
	(temp2->next)->next = NULL;
	free(temp2->next);
	return (1);
}
