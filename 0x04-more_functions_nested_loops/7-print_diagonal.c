
#include "main.h"

/**
 * print_diagonal - check the code
 *
 * @n: param
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	if (n < 1)
	{
		putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
		putchar('\n');
	}
}
