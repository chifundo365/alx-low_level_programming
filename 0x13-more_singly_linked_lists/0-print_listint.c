#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer of the elements to print
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t num_nodes = 0;
const listint_t *temp;
temp = h;

while (temp != NULL)
{
printf("%i\n", temp->n);
temp = temp->next;
num_nodes++;
}
return (num_nodes);
}
