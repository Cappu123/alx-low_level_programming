#include "variadic_functions.h"
#include "stdlib.h"
#include "stddef.h"
#include "stdio.h"

/**
 * print_numbers - entry point
 * @separator: get character colon
 * @n: arguments quantity
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int count;

	va_start(args, n);
	for (count = 0; count < n; count++)
	{
		int num = va_arg(args, int);
		printf("%d", num);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(args);
}
