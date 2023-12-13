#include "lists.h"

/**
 * add_dnodeint_end - append a node to a d-linked list
 * @head: pointer to a pointer to the first node
 * @n: integer
 * Return: pointer to the new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node = malloc(sizeof(dlistint_t));

	if (new_node)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		new_node->n = n;
	}

	if (!new_node)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;

		return (new_node);
	}

	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
