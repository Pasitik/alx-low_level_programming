#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_numbers - ...
  * @separator: ...
  * @n: ...
  *
  * Return: ...
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
		va_list args;

		unsigned int i;

		int x;

		va_start(args, n);


		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);

			printf("%d", x);
			if (i < n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	printf("\n");
}
