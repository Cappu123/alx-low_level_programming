#include "main.h"

/**
 * main - entry function
 *
 * Return: NULL
 */

void print_alphabet_x10(void)
{
	int i = 'a';

	int j = 10 * i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(j);
		_putchar('\n');
	}
	
}
