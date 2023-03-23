#include "variadic_functions.h"

/**
  * print_numbers - ...
  * @separator: ...
  * @n: ...
  *
  * Return: ...
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		va_list args;

		va_start(args, n);

		unsigned int i;

		for (i = 0; i < n; i++)
		{
			int x = va_arg(args, int);

			printf("%d", x);
			if (i < n - 1)
			{
				printf("%s", separator);
			}
	}

}
