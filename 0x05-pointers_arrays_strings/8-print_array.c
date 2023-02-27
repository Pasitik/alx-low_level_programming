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

	while (*(str + len) != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		if (i != n - 1)
		{
			printf("%d, ", *(a + i));
		}
		else
		{
			printf("%d", *(a + i));
		}
	}
	_putchar('\n');
}
