
#include "main.h"

/**
 * print_to_98 - function for lowercase checks
 * @n: param
 * Return: 1 for lowercase and 0 for anything else
 */
int print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
		}
	}
	if (n > 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
		}
	}
}
