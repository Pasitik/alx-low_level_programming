#include "main.h"

/**
 * _strchr - check the code
 *
 * @s: param1
 * @c: param2
 * Return: pointer.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
