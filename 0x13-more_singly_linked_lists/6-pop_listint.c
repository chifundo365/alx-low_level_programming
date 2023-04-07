#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of s listint_t linked list
 * @head: pointer to the listint_t list
 * Return: head nodes data (n)
*/

int pop_listint(listint_t **head)
{
listint_t *temp;
int data;

if (*head == NULL)
{
return (0);
}

temp = *head;
*head = (*head)->next;
data = temp->n;
free(temp);

return (data);
}
