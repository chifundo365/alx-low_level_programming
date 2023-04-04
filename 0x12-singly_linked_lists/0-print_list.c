#include <stdio.h>
#include <stdlib.h>

/**
*print_list - print elements of a list_t list
*@h: the first node
*Return:number of nodes
*/

size_t print_list(const list_t *h)
{
int i = 0;
if (h == NULL)
{
return();
}
while (h != NULL)
{
if(h->str != NULL)
{
printf("[%i] %s\n", h->len, h->str);
} 

h = h->next;
i++;

} 
return (i);

}
