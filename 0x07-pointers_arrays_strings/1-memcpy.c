#include "main.h"

/**
 * _memcpy - check the code
 *
 * @dest: param1
 * @src: param2
 * @n: param 3
 * Return: pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
