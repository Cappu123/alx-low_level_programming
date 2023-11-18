#include "main.h"
/**
 * _islower - the function name
 * @c: the lower case
 * A function _islower  that checks for a lowercase character.
 * accepts parameters
 * Returns 1 if c is lowercase.
 * Returns 0 otherwise
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
