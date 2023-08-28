#include "main.h"
/*@strchr: returns a pointer to the first occurance of the character
 * "c" in the string"s" or "NULL" if the character is not found.
 * @char *s the string characters
 * @char c: the caharacter inside the string.
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	char n;

	n = _strchr (*s, c);
	if (n != NULL)
	{
		printf("%s\n", n);
	}
	return (0);
}

