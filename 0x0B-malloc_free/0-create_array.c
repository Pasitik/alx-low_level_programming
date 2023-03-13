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

	char *p;

	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	p = (char *) malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size ; i++)
	{
		*(p + i) = c;
	}
	return (p);
}
