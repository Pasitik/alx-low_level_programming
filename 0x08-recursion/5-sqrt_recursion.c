#include "main.h"
int _sqrt(int n, int nums);

/**
 * _sqrt_recursion - check the code
 *
 * @n: param2
 * Return: sqrt.
 */
int _sqrt_recursion(int n)
{
		return (_sqrt(n, 1));
}

/**
  * _sqrt - Calculates natural square root
  * @n: number to calculate the square root
  * @nums: iterate number
  *
  * Return: the natural square root
  */
int _sqrt(int n, int nums)
{
	if (nums > n)
	{
		return (-1);
	}
	if (nums * nums == n)
	{
		return (nums);
	}
	return (_sqrt(n, nums + 1));
}
