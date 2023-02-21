#include "main.h"

/**
 * _abs - function for lowercase checks
 * @n: char to be checked
 * Return: 1 for lowercase and 0 for anything else
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	if (n == 0)
	{
		return (n);
	}
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	return (0);
}
