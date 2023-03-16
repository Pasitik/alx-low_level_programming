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
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	while (i < nmemb)
	{
		*(p + i) = 0;
		i++;
	}
	return (p);
}

