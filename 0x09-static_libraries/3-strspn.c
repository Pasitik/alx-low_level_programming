#include "main.h"

/**
 * _strspn - check the code
 *
 * @s: param1
 * @accept: param2
 * Return: pointer.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		int flag = 0;

		int j = 0;

		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				flag++;
			}
			j++;
		}
		if (flag == 0)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
