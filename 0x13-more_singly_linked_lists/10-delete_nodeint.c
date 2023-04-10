#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at given index
 * @head: pointer to the head of the list
 * @index: the index of the node to be deleted
 * Return: pointer of the deleted node
*/


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t  *currentNode, *previousNode;
unsigned int i;

if (head == NULL || *head == NULL)
{
return (-1);
}

previousNode = NULL;
currentNode = *head;

for (i = 0; i < index && currentNode != NULL; i++)
{
previousNode = currentNode;
currentNode = currentNode->next;
}

if (currentNode == NULL)
{ return (-1); }

if (previousNode == NULL)
{
*head = currentNode->next;
}
else
{
previousNode->next = currentNode->next;
}

free(currentNode);
return (1);

}

