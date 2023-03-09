#include "main.h"

/**
 * _pow_recursion - check the code
 *
 * @x: param1
 * @y: param2
 * Return: pow.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
