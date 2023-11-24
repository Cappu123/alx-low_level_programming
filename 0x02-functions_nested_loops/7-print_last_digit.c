#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @int: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int)
{
	int j

	j = (int % 10);

	if (j < 0)
	{
		pld = (-1 * j);
	}

	_putchar(j);
	return (j);
}
