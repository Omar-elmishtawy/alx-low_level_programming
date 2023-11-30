#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: size of the hash table
 * Return: pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t*));

	for(i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}

	return hash_table;
}
