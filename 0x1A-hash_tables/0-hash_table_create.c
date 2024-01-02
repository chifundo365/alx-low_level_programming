#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: pointer to the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table = malloc(sizeof(hash_table_t));

	if (!h_table)
		return (NULL);
	h_table->array = malloc(sizeof(hash_node_t *) * size);

	if (!h_table->array)
	{
		free(h_table);
		return (NULL);
	}

	h_table->size = size;

	return (h_table);
}
