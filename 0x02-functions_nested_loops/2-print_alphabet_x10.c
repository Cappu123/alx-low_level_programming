#include "main.h"

/**
 * main - entry function
 *
 * Return: NULL
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		int j = 10 * i;

		_putchar(j);
		_putchar('\n');
	}
	
}
