#include "lists.h"

/**
 * sum_dlistint - function
 * @head: address of head
 * Return: pointer adress of the node
 */

int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (!head)
		return (count);

	while (head)
	{
		count = count + head->n;
		head = head->next;
	}
	return (count);
}
