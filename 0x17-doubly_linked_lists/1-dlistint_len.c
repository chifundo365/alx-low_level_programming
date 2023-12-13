#include "lists.h"

/**
 * dlistint_len - find length of a double linked list
 * @h: pointer to the first node
 * Return: length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
