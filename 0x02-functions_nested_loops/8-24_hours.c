/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * h = hour, m = minutes
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */
#include "main.h"
void jack_bauer(void)
{
	int m, h = 0;

	while (h < 24)
	{
		if (h < 10)
		{
			_putchar('0' + h + ':');
		}
		_putchar(h + ':');
		h++;

		m = 0;

		while (m < 60)
		{
			if (m < 10)
			{
				_putchar('0' + m);
			}
			_putchar(m);
			m++;
		}
	}
}
