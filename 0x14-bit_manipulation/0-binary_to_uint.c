#include "main.h"

/**
 * binary_to_unit - ...
 *
 * @b: ...
 * Return: ...
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_num = 0;
	size_t len = 0;
	size_t i = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		len++;
	}

	while (i < len)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		dec_num = dec_num << 1 | (b[i] - '0');
	}
	return (dec_num);

}
