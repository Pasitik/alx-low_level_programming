#include "main.h"

/**
 * _strpbrk - check the code
 *
 * @s: param1
 * @accept: param2
 * Return: pointer.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		int j = 0;

		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
