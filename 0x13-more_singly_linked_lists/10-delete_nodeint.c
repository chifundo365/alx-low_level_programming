#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at given index
 * @head: pointer to the head of the list
 * @ index: the index of the node to be deleted
 * Return: pointer of the deleted node
*/


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *currentNode;
unsigned int i;
if (*head == NULL)
{ return (-1); }

for (i = 0; i < index && *head != NULL; i++)
{
  currentNode = *head;
  *head = (*head)->next;
}

if (i == index)
{
free(currentNode);
*head = NULL;
return (1);
} 
else
{
return (-1);
}

}
