#include "hash_tables.h"

/**
 * hash_table_delete - delete
 * @ht: pointer
 */

void hash_table_delete(hash_table_t *ht)
{
	free_table(ht);
}
