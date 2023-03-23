#include <stdio.h>
#include "variadic_functions.h"

/**
  * sum_them_all - ...
  * @n: ...
  *
  * Return: ...
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
	return (sum);
}
