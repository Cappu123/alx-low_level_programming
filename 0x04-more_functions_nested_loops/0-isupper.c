#include "main.h"

/**
 * Description - The programs check for uppercase or lowercase
 * Return: 1 if uppercase and 0 if lowercase.
 */

int _isupper(int c)
{

	if (c <= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
