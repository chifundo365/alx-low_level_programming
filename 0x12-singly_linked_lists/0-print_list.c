  1 #include "lists.h"
  2 #include <stdio.h>
  3 
  4 /**
  5  * print_list - prints a list_t linked list
  6  *
  7  * @h: first node of linked list to print
  8  *
  9  * Return: number of nodes printed
 10  */
 11 size_t print_list(const list_t *h)
 12 {
 13         size_t len = 0;
 14 
 15         if (h == NULL)
 16                 return (0);
 17         while (h != NULL)
 18         {
 19                 if (h->str != NULL)
 20                         printf("[%d] %s\n", h->len, h->str);
 21                 else
 22                         printf("[0] (nil)\n");
 23                 len++;
 24                 h = h->next;
 25         }
 26         return (len);
 27 }

