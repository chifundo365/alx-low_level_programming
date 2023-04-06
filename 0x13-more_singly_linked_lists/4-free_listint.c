#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the nodes to be frred
*/

void free_listint(listint_t *head)
{
listint *temp = head;

while (head != NULL)
{
free(head->n);
free(head);
head = temp->next;
}
}
