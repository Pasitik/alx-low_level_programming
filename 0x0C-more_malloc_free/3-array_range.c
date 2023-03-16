#include "main.h"

/**
 * array_range - range func
 *
 * @min: param1
 * @max: param2
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;

	int size, i = 0;

	size = max - min;

	if (min > max)
		return (NULL);

	p = (int *) malloc((sizeof(int) * size) + sizeof(int));
	if (p == NULL)
		return (NULL);

	while (min <= max)
	{
		*(p + i) = min;
		min++;
		i++;
	}
	return (p);
}

