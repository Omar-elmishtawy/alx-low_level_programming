#include "lists.h"
 
int main(void)
{
	listint_t *head;
	listint_t *n;

	head = NULL;
	n = insert_nodeint_at_index(&head, 0, 98);
	if (n)
		printf("-> %d\n", n->n);
	else
		printf("(nil)\n");
	print_listint(head);
	return (0);
}

