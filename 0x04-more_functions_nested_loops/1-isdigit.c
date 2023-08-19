#include "main.h"
/**
 * This program checks for a digit(0 through 9)
 * Returns 1 if c is a digit
 * Returns 0 otherwise
 */

int _isdigit(intc)
{
	if (c >= 0 || c < 9)
		return (1);

	else
		return (0);
}

