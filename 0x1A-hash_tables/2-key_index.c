#include "hash_tables.h"

/**
 * key_index - finds the index of the key in hash table
 * @key: key
 * @size: size of the hash table
 * Return: index of the key in table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int slot = hash_djb2(key);

	return (slot % size);
}
