#include "main.h"

/**
*_strlen - returns length of a string
*@c : string charecter
*/

int _strlen(char *s)
{
int counter = 0;
while(*(s++))
{
counter++;
}
return counter;
}
