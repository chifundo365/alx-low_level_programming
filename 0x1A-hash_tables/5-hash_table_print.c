#include "hash_tables.h"
#include <stdout.h>

/**
 * hash_table_print - prints key value pairs of hash table
 * @ht: hash_table
 * Description: prints the pairs like python a dictionary
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned int = 0;

	if (ht)
	{
		printf("{");

		while (i < ht->size)
		{
			current = ht->array[i];
			if (current)
			{
				printf("'%s':'%s'");

				current = current->next;

				while (current)
				{
					printf(", '%s':'%s'");
					current = current->next;
				}
			}

			i++;
		}

		printf("}\n");

	}
}
