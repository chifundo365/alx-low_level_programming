#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/*
*void make_string(char **dest, const char *key, const char *value)
  {
  unsigned int length;

  if (!value)
  value = "(null)";

  length = strlen(key) + strlen(value) + 3;

  if (*dest)
  {
 *dest = malloc(sizeof(char) * length);
 if (*dest)
 {
 strcpy(*dest, key);
 strcat(*dest, ":");
 strcat(*dest, value);
 strcat(*dest, "\n");
 }
 }
 else
 {
 *dest = realloc(*dest, sizeof(char) * length);
 if (*dest)
 {
 strcat(*dest, key);
 strcat(*dest, ":");
 strcat(*dest, value);
 strcat(*dest, "\n");
 }
 }
 }
 */

/**
 * hash_table_get - gets a key value pair at specified key
 * @ht:Hash table
 * @key: The key
 * Return:pointer to a string
 * containing  the key, value
 * seperated by a new line
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *result = NULL;
	hash_node_t *current = NULL;

	if (!ht)
		return (NULL);

	if (!*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	if (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			result = current->value;
		}
		else if (current->next)
		{
			current = current->next;

			while (current)
			{
				if (strcmp(current->key, key) == 0)
				{
					result = current->value;
					break;
				}

				current = current->next;
			}
		}
	}

	return (result);
}
