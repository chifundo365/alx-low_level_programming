#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: listint_t lists to be freed
*/

void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL || *head == NULL)
{
return;
}

while (*head != NULL)
{
temp = *head;
*head = (*head)->next;
free(temp);
}

*head = NULL;
}
