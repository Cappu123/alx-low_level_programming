#include "main.h"

/**
 * main - entry function
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	for (int i = 'a'; i <= 'z'; i++)
	{
		int j = 10 * i;

		_putchar(j);
		_putchar('\n');
	}
	return (0);
}
