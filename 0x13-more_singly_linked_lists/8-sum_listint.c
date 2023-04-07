#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of linked list.
 * @head: pointer to the listint_t elements
 * Return: integer
*/

int sum_listint(listint_t *head)
{
listint_t *temp;
int sum;
sum = 0;
temp = head;

while (temp != NULL)
{
sum = sum + temp->n;
temp = temp->next;
}

return (sum);

}
