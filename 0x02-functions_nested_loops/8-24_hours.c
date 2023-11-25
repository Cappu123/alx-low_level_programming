#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * h = hour, m = minutes
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int h = 0, m;

	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			m++;
		}
		_putchar(h / 10 + '0');
		_putchar(h % 10 + '0');
		_putchar('\n');
		h++;
	}
