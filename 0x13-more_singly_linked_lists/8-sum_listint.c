#include "lists.h"

/**
 *sum_listint - function
 * @head: pointer to struct list
 * Return: listint
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head->next)
	{
		sum = sum + head->n;
		head = head->next;
	}
	sum = sum + head->n;

	return (sum);
}
