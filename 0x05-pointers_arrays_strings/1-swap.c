#include "main.h"
/**
 * a function that swaps the values of two integers
 * Return: Always zero
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

