#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t linked list
 * @head: pointer to the nodes
 * @n: listint _t data n to be set
 * Return: Address of new element or null
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;
newNode = (listint_t *)malloc(sizeof(listint_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->n = n;
newNode->next = *head;
*head = newNode;

return (newNode);
}
