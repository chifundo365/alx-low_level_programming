#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *prev, *current = NULL;
	unsigned int i = 0;

	if (ht)
	{
		while (i < ht->size)
		{
			current = ht->array[i];

			if (current->next)
			{
				while (current)
				{
					prev = current;
					current = current->next;
					free(prev);
				}
			}
			else if (current)
			{
				free(current);
			}

			i++;
		}

		free(ht);
	}
}
