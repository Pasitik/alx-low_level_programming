#include "main.h"

/**
 * set_bit - ...
 *
 * @n: ...
 * @index: ...
 * Return: ...
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n | (1ul << next);
	return (1);
}
