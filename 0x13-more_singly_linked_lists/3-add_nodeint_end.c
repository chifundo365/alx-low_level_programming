#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the listint_t list
 * @n: data value of nodes
 * Return: pointer of newly created node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *lastNode;
listint_t *temp = *head;
lastNode = (listint_t *)malloc(sizeof(listint_t));

if (lastNode == NULL) return NULL;

lastNode->n = n;
lastNode->next = NULL;

while(*head == NULL)
{
*head = lastNode;
return(lastNode);
}

while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = lastNode;

return lastNode;
}
