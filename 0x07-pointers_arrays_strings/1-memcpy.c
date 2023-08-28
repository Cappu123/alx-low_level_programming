#include "main.h"
/**
 * @memcpy function copies n bytes from memory area src
 * to memory area dest;
 * @char *dest: pointer to destination
 * @char *src: pointer to memory area of the source
 * @n: bytes from the memory data
 * Returns: Always a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		src[i] = dest[i];
		i++;
	}
	return (dest);
}
