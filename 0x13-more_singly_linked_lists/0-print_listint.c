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
listint_t *temp;
temp = h;
int i = 0;

while (h[i])
{
temp = temp->next;
printf("%i\n", temp->age);
i++;
num_nodes++;
}
return num_nodes;
}
