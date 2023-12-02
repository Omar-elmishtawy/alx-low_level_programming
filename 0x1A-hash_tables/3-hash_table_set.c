#include "hash_tables.h"

/**
 * hash_table_set - set keys and value in the hash tbale
 * @ht: pointer to the hash table
 * @key: key
 * @value: value
 * Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_pos;
	hash_node_t *node, *tmp;

	if (!key || strlen(key) == 0 || !value || !ht)
	{
		free_table(ht);
		return (0);
	}
	node = create_item(key, value);
	if (!node)
	{
		free_table(ht);
		return (0);
	}
	key_pos = key_index((const unsigned char *) key, ht->size);
	tmp = (ht->array)[key_pos];
	if (!tmp)
	{
		ht->array[key_pos] = node;
		return (1);
	}
	else
	{
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				free_item(node);
				return (1);
			}
			tmp = tmp->next;
		}
		tmp = ht->array[key_pos];
		node->next = tmp;
		ht->array[key_pos] = node;
	}
	return (1);
}
/**
 * create_item - function to create node in the hash table
 * @key: key
 * @value: value
 * Return: pointer to the created node
 */

hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *node = NULL;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);
	node->key = strdup(key);
	if (!(node->key))
		return (NULL);
	node->value = strdup(value);
	if (!(node->value))
		return (NULL);
	node->next = NULL;

	return (node);
}

/**
 * free_item - to free every item at index
 * @item: elemnt in the hash
 */
void free_item(hash_node_t *item)
{
	free(item->key);
	free(item->value);
	free(item);
}
/**
 * free_table - to free the whole hash table
 * @table: pointer to the hash table
 */

void free_table(hash_table_t *table)
{
	unsigned long int i;
	hash_node_t *tmp;

	for (i = 0; i < table->size; i++)
	{
		hash_node_t *item = table->array[i];

		while (item != NULL)
		{
			tmp = item;
			free_item(item);
			item = tmp->next;
		}
	}

	free(table->array);
	free(table);
}
