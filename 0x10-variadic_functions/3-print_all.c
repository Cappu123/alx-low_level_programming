#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 * @separator: ...
 * @n: ...
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	va_start(args, format);
	char c;
	int i;
	float f;
	char *s;

	while ((c = *format))
	{
		if (c == 'c')
		{
			i = va_arg(args, int);
			printf("%c", (char)i);
		}
	else if (c == 'i')
	{
		i = va_arg(args, int);
		printf("%d", i);
	}
	else if (c == 'f')
	{
		f = va_arg(args, double);
		printf("%f", f);

		else if (c == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
		format++;
	}
	va_end(args);
	printf("\n");
}
