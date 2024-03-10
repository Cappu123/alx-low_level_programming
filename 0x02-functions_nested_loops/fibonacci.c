#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 1;
	int k;

	for (int count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;

		printf("%d", k);

		if(count == 49)
		{
			printf("\n");
		}
		else 
		{
			printf(",");
		}
	}
	return (0);
}
