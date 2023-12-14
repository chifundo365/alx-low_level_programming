#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: pointer to a pointer to first node
 * @index: index
 * Return: 1 or -1 if fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x = 1;
	dlistint_t *del, *temp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	while (temp)
	{
		if (x == index)
		{
			del = temp->next;
			temp->next = temp->next->next;
			if (temp->next->next)
			{
				temp->next->next->prev = temp;
			}
			else
			{
				temp->next = NULL;
			}

			free(del);
			return (1);
		}

		temp = temp->next;
		x++;
	}

	return (-1);
}
