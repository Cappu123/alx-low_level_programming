#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints its name, followed by a new line.
 * @argc - an integer which counts the number of program
 * that runs on the command line
 * @argv - an array of strings which outputs the name of th
 * program
 * Return:(0) (Always Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
