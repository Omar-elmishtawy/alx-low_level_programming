#include "hash_tables.h"
/**
 * key_index - create a hash value for the key
 * @key: key in the hash table
 * @size: size of the hash table
 * Return: key_index to add in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_pos;

	key_pos = hash_djb2(key) % size;
	return (key_pos);
}
