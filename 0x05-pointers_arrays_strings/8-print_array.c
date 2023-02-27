#include "main.h"

/**
 * print_array - check the code
 *
 * @a: param
 * @n: param1
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int len = 0;

	int i;

	while (*(a + len) != '\0')
	{
		len++;
	}
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", *(a + i));
			fflush(stdout);
		}
		else
		{
			printf("%d", *(a + i));
			fflush(stdout);
		}
	}
	_putchar('\n');
}
