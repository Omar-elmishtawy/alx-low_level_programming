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

	if (!temp)
		return (-1);
	while (temp && index)
	{
		temp = temp->next;
		index--;
	}
	if (!temp)
		return (-1);
	if (temp == *head)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		(temp->prev)->next = temp->next;
		if (temp->next)
			(temp->next)->prev = temp->prev;
	}
	free(temp);
	return (1);

}
