#include "main.h"
#include "_putchar.c"

/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * h = hour, m = minutes
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int h, m;

	while (h < 24)
	{
		while (m < 60)
		{
			_putchar(h/10);
			_putchar(h % 10);
			_putchar(':');
			_putchar(m / 10);
			_putchar(m % 10);
			_putchar ('\n');
		}
		m++;
	}
	h++;
}

