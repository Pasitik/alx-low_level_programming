
#include "main.h"

/**
 * print_last_digit - function for lowercase checks
 * @n: char to be checked
 * Return: 1 for lowercase and 0 for anything else
 */
int print_last_digit(int n)
{
	int last_num = n % 10;

	if (n < 0)
	{
		last_num = last_num * -1;
	}
	_putchar(last_num + '0');
	return last_num;
}
