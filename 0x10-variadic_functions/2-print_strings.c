#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - ...
  * @separator: ...
  * @n: ...
  *
  * Return: ...
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *x;
	unsigned int i;

	if (n > 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			x = va_arg(args, char *);
			if (x == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", x);

			if (i < n - 1 && separator != NULL)
			{
				printf("%s ", separator);
			}
		}
		va_end(args);
	}
	printf("\n");
}
