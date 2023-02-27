#include "main.h"

/**
 * _puts - check the code
 *
 * @s: param
 * Return: Always 0.
 */
void _puts(char *s)
{
	int len = 0;

	int i;

	while (*(s + len) != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
