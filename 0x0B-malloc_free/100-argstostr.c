#include "main.h"
#include <stdlib.h>
/**
 * argstostr -main entry
 * @ac: input input
 * @av: double pointer array
 *
 */
void free_grid(int **grid, int height)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0 av[i][n]; n++)
			i++;
	}
	l += ac;

	str = malloc(sized of (char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = av[i][n];
			r++;
		}

		if (str[r] == '\0')
		{		
			str[r++] = '\n';
		}	
}