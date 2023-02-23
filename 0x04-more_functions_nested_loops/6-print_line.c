#include "main.h"

/**
 * print_line - check the code
 *
 * @n: param
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	if (n < 1)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
