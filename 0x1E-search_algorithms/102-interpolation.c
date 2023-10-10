#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l, r, mid;

	l = 0;
	r = size - 1;

	while (l <= r && value >= array[l] && value <= array[r])
	{
		mid = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));

		if (mid >= size)
		{
			printf("Value checked array[%ld] is out of range\n", mid);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);

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

	printf("Value checked array[2109] is out of range\n");
	return (-1);
}

