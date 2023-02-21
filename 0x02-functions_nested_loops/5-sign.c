#include "main.h"

/**
 * print_sign - function for lowercase checks
 * @n: char to be checked
 * Return: 1 for lowercase and 0 for anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
