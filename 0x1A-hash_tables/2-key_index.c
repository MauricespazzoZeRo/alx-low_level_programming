#include "hash_tables.h"

/**
 * key_index - Get the index of a key in a hash table
 * @key: The key
 * @size: The size of the array
 *
 * Return: The index at which the key should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);

	hash_value = hash_djb2(key) % size;
	return (hash_value);
}
