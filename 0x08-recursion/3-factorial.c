#include "main.h"

/**
 * factorial - check the code
 *
 * @n: param2
 * Return: factorial.
 */
int factorial(int n)
{
	if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
