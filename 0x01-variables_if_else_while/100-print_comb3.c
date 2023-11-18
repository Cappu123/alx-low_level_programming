#include <stdio.h>

/**
 * main - Prints combination of numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int c, i;

	for (c = '0'; c <= '9'; c++)
	{

		for (i = '0'; i <= '9'; i++)
		{
	
			while (c < i)
			{
				putchar(c);
				putchar(i);
	
				if (c == 8 || i == 9)
				continue;
			
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
