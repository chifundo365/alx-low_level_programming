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
listint_t *temp;
temp = *head;

if (*head == NULL)
{ return (NULL); }

listint_t *newNode = (*listint_t *)malloc(sizeof(listint_t));
if (newNode == NULL)
{ return (NULL); }
newNode->n = n;


if (index == 0)
{
newNode->next = *head;
head = newNode;

return (newNode);
}

int i = 0;
while (temp)
{
temp = temp->next;
if (i == index)
{
temp->next = newNode;
newNode->next = temp->next;
return (newNode);
}
i++;
}

temp->next = newNode;
newNode->next = NULL;

return (newNode);

}
