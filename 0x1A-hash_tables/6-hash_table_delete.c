#include "hash_tables.h"

/**
 * hash_table_delete - delete
 * @ht: pointer
 */

void hash_table_delete(hash_table_t *ht)
{
	if (ht == NULL)
		return;
	free_table(ht);
}
