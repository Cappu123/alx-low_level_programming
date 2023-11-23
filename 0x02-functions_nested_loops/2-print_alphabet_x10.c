#include "main.h"

/**
 * print_alphabet_x10 - entry function
 *
 *
 * Return: NULL
 */

void print_alphabet_x10(void)
{
	int j = 0;
	char c;

	while (j < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}	
		_putchar('\n');
		j++;
	}
}
