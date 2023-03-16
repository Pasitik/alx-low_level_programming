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
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	return (p);
}

