#include "main.h"

/**
 * _strstr - check the code
 *
 * @haystack: param1
 * @needle: param2
 * Return: pointer.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, len, track = 0;

	while (*(needle + len) != '\0')
	{
		len++;
	}

	while (*(haystack + i) != '\0')
	{
		int j = 0;

		while (*(needle + j) != '\0')
		{
			if (*(haystack + i) == *(needle + j))
			{
				track++;
			}
			if (track == len)
			{
				return (&haystack[i - 1]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
