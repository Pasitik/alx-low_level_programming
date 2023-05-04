#include <stdio.h>

/**
 * print_binary - ...
 * @n: ...
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i;

	for (i = 0; i < 63; i++)
	{
		if ((mask << 1) > n)
			break;
		mask <<= 1;
	}

	for (; i >= 0; i--)
	{
		if (n & mask)
			putchar('1');
		else
			putchar('0');
		mask >>= 1;
	}
}


