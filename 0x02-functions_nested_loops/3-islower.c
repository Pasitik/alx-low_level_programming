#include "main.h"

/**
 * _islower - function for lowercase checks
 * @c: char to be checked
 * Return: 1 for lowercase and 0 for anything else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
