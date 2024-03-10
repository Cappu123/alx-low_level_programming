#include "main.h"
/**
 * natural - computes and prints the sum of all the multiples of 
 * 3 or 5 below 1024 (excluded)
 * @num: input number less than 1024
 *
 */

natural (int num)
{
	while(num < 1024)
	{
		for (int i = 3; i % 3 == 0 && i <= num; i++)
		{
			for (int j = 5; j % 5 == 0 && j <= num; j++)
			{
				return (i + j);
			}
		}
	}
	return (0);
}
