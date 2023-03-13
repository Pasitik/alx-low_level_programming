#include "main.h"

/**
 * create_array - my function
 *
 * @size : size of memory to be reserved
 * @c : character
 * Return: p
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *p;

	unsigned int i = 0;

	p = (char *) malloc(sizeof(unsigned int) * size);
	for (i = 0; i < size ; i++)
	{
		*(p + i) = c;
	}
	return (p);
}
