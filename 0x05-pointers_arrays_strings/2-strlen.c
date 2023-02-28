#include "main.h"

/**
*_strlen - returns length of a string
*@s: string character
*Return: length of string
*/

int _strlen(char *s)
{
int counter = 0;
while (*(s++))
{
counter++;
}
return (counter);
}
