#include "main.h"

/**
 * rev_string - check the code
 *
 * @s: param
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int len = 0;

	int i, temp;

	while (*(s + len) != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + (len - (i + 1)));
		*(s + (len - (i + 1)) = temp;
	}
}
