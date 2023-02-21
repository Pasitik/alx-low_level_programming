
#include "main.h"

/**
 * print_alphabet_x10 - Make the alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i;

	int count = 10;

	while (count > 0)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		count--;
	}
}
