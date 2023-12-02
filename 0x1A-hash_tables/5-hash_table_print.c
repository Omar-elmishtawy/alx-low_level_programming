#include "hash_tables.h"

/**
 * hash_table_print - print
 * @hash_table_t: pointer
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int n = 0;
	hash_node_t *tmp;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (n != 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			n++;
			tmp = tmp->next;
			
		}
	}
	printf("}\n");
}
