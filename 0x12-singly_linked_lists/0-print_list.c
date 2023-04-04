#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_list - print elements of a list_t list
* @h: the first node
* Return:number of nodes
*/

size_t print_list(const list_t *h)
{
int i = 0;
if (h == NULL)
{
return(0);
}
while (h != NULL)
{
if(h->str != NULL)
{
printf("[%i] %s\n", h->len, h->str);
}
else
{printf("[0](nil)");}

i++;
h = h->next;

} 
return (i);

}
