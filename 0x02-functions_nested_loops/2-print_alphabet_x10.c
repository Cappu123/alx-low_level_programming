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
	int j;

	for (i = '1'; i <= '10'; i++)
	{
		for (j = 'a'; i < 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
