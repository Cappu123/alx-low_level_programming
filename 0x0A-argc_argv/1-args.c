#include <stdio.h>
#include "main.h"

/**
 * nargs - a program that prints the number of arguments
 * passed into it followed by a new line
 * @argc: a program that counts and outputs the number
 * of arguments passed into the program
 * Return: (0) (Always success)
 *
 */

int nargs(int argc)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argc);
	}
	return (0);
}
