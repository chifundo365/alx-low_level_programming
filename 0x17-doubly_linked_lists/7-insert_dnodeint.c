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
 * insert_dnodeint_at_index - inserts a node at index
 * @h: pointer to pointer to first node
 * @idx: index
 * @n: integer
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = create_node(n);
	dlistint_t *temp;
	unsigned int x = 0;

	if (!new_node)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;

		return (new_node);
	}

	temp = *head;

	while (temp)
	{
		if (x == idx)
		{
			new_node->next = temp;
			temp->prev->next = new_node;
			new_node->prev = temp->prev;
			temp->prev = new_node;

			return (new_node);
		}

		tem = temp->next;
		x++;
	}

	free(new_node);

	return (NULL);
}
