#include "main.h"

/**
 * print_alphabet_x10 - entry function
 *
 *
 * Return: NULL
 */

void print_alphabet_x10(void)
{
	int i;
	int j = 1;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
		while (j < 11)
		{
			i++;
		}
		_putchar('\n');
	}	
}
