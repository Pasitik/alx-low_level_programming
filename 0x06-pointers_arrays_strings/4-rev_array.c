#include "main.h"

/**
 * reverse_array- check the code
 *
 * @a: param1
 * @n: param3
 * Return: dest.
 */
void reverse_array(int *a, int n)
{
	int j = 0;

	int temp;

	while (j < (n / 2))
	{
		temp = *(a + j);
		*(a + j) = *((a + (n - j)) - 1);
		*((a + (n - j)) - 1) = temp;
		j++;
	}

}
