#include "main.h"

/**
 * puts2 - check the code
 *
 * @str: param
 * Return: Always 0.
 */
void puts2(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		if (len == 0 || len % 2 == 0)
		{
			putchar(*(str + len));
		}
		len++;
	}
	_putchar('\n');
}
