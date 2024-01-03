#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *prev, *current = NULL;

	if (ht)
	{
		for (unsigned int i = 0; i < ht->size; i++)
		{
			current = ht->array[i];

			while (current)
			{
				prev = current;
				current = current->next;
				free(prev->key);
				free(prev->value);
				free(prev);
			}
		}

		free(ht->array);
		free(ht);
	}
}
