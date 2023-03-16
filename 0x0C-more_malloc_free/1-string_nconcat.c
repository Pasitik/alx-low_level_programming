#include "main.h"

/**
 * string_nconcat - function for concat
 *
 * @s1: param1
 * @s2: param2
 * @n: param3
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int lenA, i, j, size;

	while (*(s1 + lenA) != '\0')
	{
		lenA++;
	}
	size = lenA + n;

	p = (char *) malloc((sizeof(char) * size) + 1);

	while (*(s1 + i) != '\0')
	{
		*(p + i) = *(s1 + i);
		i++;
	}

	while (i < size && j < n)
	{
		j++;
		i++;
	}

	*(p + size + 1) = '\0';
	return (p);
}

