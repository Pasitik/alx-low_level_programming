#include "main.h"

/**
 * alloc_grid - my function
 *
 * @width : param1
 * @height : param2
 * Return: p
 */
int **alloc_grid(int width, int height)
{
	int **p;

	int i, j, a, b = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = (int **) malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		*(p + i) = (int *) malloc(sizeof(int) * width);
		if (*(p + i) == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(p[j]);
			}

			free(p);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			p[a][b] = 0;
		}
	}
	return (p);
}

