#include "lists.h"

/**
 * get_dnodeint_at_index - returns a node at specified index
 * @head: pointer to the first node
 * @index: the index
 * Return: address of node at specified index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (0);

	while (head)
	{
		if (index == i)
			return (head);
		i++;
		head = head->next;
	}

	return (NULL);
}
