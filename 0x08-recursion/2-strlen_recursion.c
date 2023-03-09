#include "main.h"

/**
 * _strlen_recursion - check the code
 *
 * @s: param2
 * Return: pointer.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
