#include "main.h"

/**
 * get_endianness - ...
 *
 * Return: : ...
 */
int get_endianness(void)
{
	uint16_t n = 1;

	uint8_t *p = (uint8_t *) &n;

	return ((int)(*p));
}

