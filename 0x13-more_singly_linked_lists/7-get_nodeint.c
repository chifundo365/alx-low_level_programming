#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of linstint_t lists
 * @head: nodes of the listint_t list
 * @index: index of the listint_t list node
 * Return: nth node of the list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp;
unsigned int current = 0;

if (head == NULL)
{
return (NULL);
}

temp = head;

while (temp != NULL)
{
temp = temp->next;
current++;
if (index == current)
{
return (temp);
}

}

return (NULL);
}
