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

	int i, a, b = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = (int **) malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		*(p + i) = (int *) malloc(sizeof(int) * width);
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

