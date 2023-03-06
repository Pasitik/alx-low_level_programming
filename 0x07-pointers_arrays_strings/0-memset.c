#include "main.h"

/**
 * _memset - check the code
 *
 * @s: param1
 * @b: param2
 * @n: param 3
 * Return: pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
