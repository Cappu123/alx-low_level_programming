#include "main.h"
#include <stdio.h>
/*@strchr: returns a pointer to the first occurance of the character
 * "c" in the string"s" or "NULL" if the character is not found.
 * @char *s the string characters
 * @char c: the caharacter inside the string.
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
