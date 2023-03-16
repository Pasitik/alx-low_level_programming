#include "main.h"

/**
 * _calloc - calloc func
 *
 * @nmemb: param1
 * @size: param2
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	unsigned int i = 0;

	unsigned int n = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	while (i < n)
	{
		*(p + i) = 0;
		i++;
	}
	return (p);
}

