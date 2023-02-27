#include "main.h"

/**
 * swap_int - check the code
 *
 * @a: param
 * @b: param1
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
