#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, i = 0;
	size_t mid = 0;
	size_t r = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (l <= r)
	{
		mid = l + (r - l) / 2;

		printf("Searching in array: ");
		for (i = l; i <= r; ++i)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
		}
		printf("\n");

		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}

	return (-1);
}
