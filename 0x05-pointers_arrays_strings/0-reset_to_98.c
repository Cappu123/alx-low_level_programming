#include"main.h"
#include<stdio.h>
/**
 * This function takes an "int" pointer as parameter and
 * update the value it points to 98.
 * Return: always 0
 *
 */
void reset_to_98(int *n)
	{
		int p;
		int *n;

		p = 402;
		*n = &p;
		printf("value of p is: %d\n", p);
		printf("address of n is: %p\n", &p);
		printf("value of p is: %p\n", p);
		*n = 98;
	
	printf("value of p is: %d\n", n);
	return (0);
	}

