#include "search_algos.h"

/**
 * exponential_search - searches for a value in an array of
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, j = 0, mid = 0;
	size_t start = 0;

	if (array == NULL)
		return (-1);
	size = size - 1;
	if (array[0] == value)
		return (0);
	while (array[i] < value && i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		start = i;
		i *= 2;
		if (i > size)
			i = size;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, i);
	while (start <= i)
	{
		mid = (start + i) / 2;
		printf("Searching in array: ");
		for (j = start; j <= i - 1; j++)
		{
			printf("%d, ", array[j]);
		}
		printf("%d\n", array[i]);

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			i = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}
