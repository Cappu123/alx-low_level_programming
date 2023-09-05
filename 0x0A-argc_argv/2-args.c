#include <stdio.h>
#include "main.h"

/**
 * argV - a program that prints all arguments it receives.
 * @arge: integer, number of arguments passed
 * @argw: an argument passed into the program
 * Return: 0
 *
 */

int argV(int arge, char *argw[])
{
	int i;

	for (i = 0; i < arge; i++)
	{
		printf("%s\n", *argw);
	}
	return (0);
}
