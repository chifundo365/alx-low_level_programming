#include "lists.h"

/**
 * free_dlistint - freez a d-linked list
 * @head: pointer to the first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
