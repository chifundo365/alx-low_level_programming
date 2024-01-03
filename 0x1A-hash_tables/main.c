#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *s = malloc(sizeof(char) * 5);
	s[0] = '\0';
	free(s);
	printf("%s", s);
}
