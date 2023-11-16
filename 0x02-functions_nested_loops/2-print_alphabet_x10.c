#include "main.h"
/**
 * print_alphabet_x10pprints the alphabet 10 times.
 *
 * return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j = 10 * i;

	for (i = 97; i < 122; i++)
	{
		_putchar(j);
		_putchar(\n);
	}
	return 0;
}
