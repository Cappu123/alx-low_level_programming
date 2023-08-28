#include "main.h"
#include <stdio.h>
/**
 * this function fills memory with a constant byte
 * return: to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = *s; i < b; i++)
		;
	n = b * n;
	printf("%c\n", n);
}
