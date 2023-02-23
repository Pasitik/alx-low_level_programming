#include "main.h"

/**
 * print_square - check the code
 *
 * @size: param
 * Return: Always 0.
 */
void print_square(int size)
{
	if (size < 1)
	{
		putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
