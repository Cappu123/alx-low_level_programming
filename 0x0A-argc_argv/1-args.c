#include <stdio.h>
#include "main.h"

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: (0) (Always success)
 *
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);/*Ignore argv*/

	return (0);
}
