#include "main.h"

/**
 * _strlen - check the code
 *
 * @s: param
 * Return: Always 0.
 */
int _strlen(int *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
