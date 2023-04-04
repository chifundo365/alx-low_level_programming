#include "lists.h"

/**
* print_lists - prints the elements of a list_t lists
* @h:pointer to the lists
* Return: the number of nodes
*/

size_t print_lists(const lists_t *h)
{
int len = 0;
while (h != NULL)
{
if (h->str != NULL)
{
printf("[%d] (%s)]\n", h->len, h->str);
}
else
{
printf("[0] (nil)\n");
}
h = h->next;
}
}
