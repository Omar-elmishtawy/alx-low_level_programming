#include "lists.h"

/**
 * get_dnodeint_at_index - function
 * @head: address of head
 * @index: index
 * Return: pointer adress of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	if (!head)
		return (NULL);

	while (temp->next)
	{
		count++;
		temp = temp->next;
	}
	if (index > count)
	{
		return (NULL);
	}
	while (index != 0)
	{
		head = head->next;
		index--;
	}
	return (head);
}
