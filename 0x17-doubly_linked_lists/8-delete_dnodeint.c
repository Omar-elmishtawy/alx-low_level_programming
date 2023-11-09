#include "lists.h"

/**
 * delete_dnodeint_at_index - function
 * @head: address of head
 * @index: index
 *
 * Return: pointer adress of the node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		(temp->next)->prev = NULL;
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp->next != NULL && index > 0)
	{
		temp = temp->next;
		index--;
	}
	if (temp->next == NULL && index == 0)
	{
		(temp->prev)->next = NULL;
		free(temp);
		return (1);

	}
	if (index == 0)
	{
		(temp->next)->prev = temp->prev;
		temp->prev = temp->next;
		free(temp);
		return (1);
	}

	return (-1);
}
