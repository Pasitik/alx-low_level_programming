#include "main.h"

int len(char *a);
/**
 * *str_concat - my function
 *
 * @s1 : param1
 * @s2 : param2
 * Return: p
 */
char *str_concat(char *s1, char *s2)
{
	char *p;

	int i, j = 0;

	int lenA, lenB, size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	lenA = len(s1);

	lenB = len(s2);

	size = lenA + lenB;

	p = (char *) malloc((sizeof(char) * size) + 1);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < lenA ; i++)
	{
		*(p + i) = *(s1 + i);
	}
	while (j < lenB)
	{
		*(p + i + j) = *(s2 + j);
		j++;
	}
	return (p);
}

/**
 * *len - my function
 *
 * @a : param1
 * Return: p
 */

int len(char *a)
{
	int i = 0;

	while (*(a + i) != '\0')
	{
		i++;
	}
	return (i);
}
