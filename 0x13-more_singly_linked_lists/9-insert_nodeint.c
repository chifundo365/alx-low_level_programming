#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: value to store in the new node
 * Return: address of the new node, or NULL if it failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newNode, *prevNode, *currentNode;
unsigned int i;

if (head == NULL)
{ return (NULL); }

newNode = (listint_t *)malloc(sizeof(listint_t *));
if (newNode == NULL)
{ return (NULL); }
newNode->n = n;

if (idx == 0)
{
newNode->next = *head;
*head = newNode;
return (newNode);
}

prevNode = NULL;
currentNode = *head;

for (i = 0; i < idx && currentNode != NULL; i++)
{
prevNode = currentNode;
currentNode = currentNode->next;
}

if (i != idx)
{
free(newNode);
return (NULL);
}

newNode->next = currentNode;
prevNode->next = newNode;

return (newNode);
}
