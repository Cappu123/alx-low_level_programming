#include "main.h"
/**
 * A function that checks for a lowercase character.
 * Returns 1 if c is lowercase.
 * Returns 0 otherwise
 *
 */
int c;
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return(1);
	}
	else
	{
		return(0);
	}
	_putchar('\n');
}
