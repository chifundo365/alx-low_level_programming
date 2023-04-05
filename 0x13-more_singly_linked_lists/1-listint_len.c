#include "lists.h"

/**
 * listint_len - return number of elements in a listint linked list
 * @h: pointer to the listint elements
 * Return: interger
*/

size_t listint_len(const listint_t *h)
{
size_t len = 0;
listint_t *temp = h;

while (temp != NULL)
{
len++;
temp = temp->next;
}
return (len);
}
