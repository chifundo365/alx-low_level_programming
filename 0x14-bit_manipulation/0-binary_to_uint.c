  1 #include "main.h"
  2 #include <stdio.h>
  3
  4 /**
  5  * binary_to_uint - convert a binary number to an unsigned int
  6  * @b: char string
  7  * Return: converted decimal number or 0 if there is an unconvertable char
  8  */
  9 unsigned int binary_to_uint(const char *b)
 10 {
 11         unsigned int total, power;
 12         int len;
 13
 14         if (b == NULL)
 15                 return (0);
 16
 17         for (len = 0; b[len]; len++)
 18         {
 19                 if (b[len] != '0' && b[len] != '1')
 20                         return (0);
 21         }
 22
 23         for (power = 1, total = 0, len--; len >= 0; len--, power *= 2)
 24         {
 25                 if (b[len] == '1')
 26                         total += power;
 27         }
 28
 29         return (total);
 30 }
~

