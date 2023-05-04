#include "main.h"

/**
 * clear_bit - ...
 *
 * @n: ...
 * @index: ...
 * Return: ...
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n & (~(1ul << index));
	return (1);
}

