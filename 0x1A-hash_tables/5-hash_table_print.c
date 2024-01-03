#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints key value pairs of hash table
 * @ht: hash_table
 * Description: prints the pairs like python a dictionary
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned int i = 0;
	unsigned int found = 0;

	if (ht)
	{
		printf("{");

		while (i < ht->size)
		{
			current = ht->array[i];
			if (current)
			{
				if (!found)
					printf("'%s': '%s'", current->key, current->value);
				if (found)
					printf(", '%s': '%s'", current->key, current->value);


				current = current->next;
				found++;
				while (current)
				{
					printf(", '%s': '%s'", current->key, current->value);
					current = current->next;
					found++;
				}
			}

			i++;
		}

		printf("}\n");

	}
}
