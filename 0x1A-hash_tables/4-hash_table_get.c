#include "hash_tables.h"

/**
 * hash_table_get - get value
 * @ht: pointer to hash table
 * @key: the key
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!key || !ht || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
