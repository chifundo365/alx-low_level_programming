#include "lists.h"

/**
 * print_dlistint - print a double linked list
 * @h: pointer to the first node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int x  = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}

	return (x);
}
