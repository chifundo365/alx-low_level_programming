#include <stdio.h>
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

while (head != NULL)
{
temp  = head;
head = head->next;
current++;
if (index == current)
{
break;
}

}

if (temp == NULL)
{
return (NULL);
}

return (temp);
}
