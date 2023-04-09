#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a given index in a lis
 * @head: the pointer to the first node
 * @idx: the index of the new node to be inserted
 * @n: node data value
 * Return: pointer to the newly inserted node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp = *head;
unsigned int i;
listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
newNode->n = n;
newNode->next = NULL;

if (*head == NULL)
{ return (NULL); }

if (idx == 0)
{
newNode->next = *head;
*head = newNode;
return (newNode);
}


for (i = 0; i < idx - 1; i++)
{
temp = temp->next;
}
newNode->next = temp->next;
temp->next = newNode;

if (newNode == NULL)
{
return (NULL);
}

return (newNode);
}
