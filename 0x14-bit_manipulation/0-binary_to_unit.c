#include "main.h"
/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uin;
	int length, base_two;

	if (!b)
		return (0);
	uin = 0;

	for (length = 0; b[length] != '\0'; length++)
		;
	for (length--, base_two = 1; length >= 0; length--, base_two *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}
		
		if (b[length] & 1)
		{
			uin += base_two;
		}
	}

	return (uin);
}
