#include "lists.h"

/**
 * create_node - creates a new node
 * @n: data integer
 * Return: pointer to the new node
 */
dlistint_t *create_node(const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	return (new_node);
}

/**
 * add_dnodeint_end - append a new node to a d-linked list
 * @head: pointer to the first node
 * @n: data integer
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = create_node(n);
	dlistint_t *temp = NULL;

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
