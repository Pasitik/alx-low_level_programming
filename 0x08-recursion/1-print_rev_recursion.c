#include "main.h"

/**
 * _print_rev_recursion - check the code
 *
 * @s: param2
 * Return: pointer.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
