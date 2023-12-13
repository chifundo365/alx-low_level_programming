#include "lists.h"

/**
 * add_dnodeint - add a node at the begginning in a d list
 * @head: pointer to the first node
 * @n: interger
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp  = *head;

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	new_node->next = temp;
	temp->prev = new_node;
	*head = new_node;

	return (new_node);
}
