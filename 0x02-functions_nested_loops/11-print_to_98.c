
#include "main.h"

/**
 * print_to_98 - function for lowercase checks
 * @n: param
 * Return: 1 for lowercase and 0 for anything else
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
