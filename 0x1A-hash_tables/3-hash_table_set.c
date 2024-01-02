#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_hash_node - creates a node of a hash table
 * @key: key
 * @value: value
 * Return: pointer to the new node
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (NULL);
	new_node->key = malloc(strlen(key) + 1);

	if (!new_node->key)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = malloc(strlen(value) + 1);

	if (!new_node->value)
	{
		free(new_node);
		return (NULL);
	}

	strcpy(new_node->key, key);
	strcpy(new_node->value, value);

	return (new_node);
}
/**
 * hash_table_set - inserts a new node in hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 on success or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int slot;
	hash_node_t *current;
	hash_node_t *node;

	if (key == "" || !key)
		return (0);

	if (value == "" || !value)
		return (0);

	slot = key_index(key, ht->size);
	node = create_hash_node(key, value);

	if (ht->array[slot])
	{
		current = ht->array[slow];
		node->next = current;
		ht->array[slot] = node;
	}
	else
		ht->array[slot] = node;

	return (node);
}
