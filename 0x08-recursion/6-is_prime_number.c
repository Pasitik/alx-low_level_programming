#include "main.h"

/**
 * is_prime_number - check the code
 *
 * @n: param2
 * Return: sqrt.
 */
int _is_prime_number(int n)
{
		return (prime(n, 1));
}

/**
  * prime - Calculates the prime
  * @n: number to calculate the square root
  * @nums: iterate number
  *
  * Return: the prime
  */
int prime(int n, int nums)
{
	if (nums <= 1)
	{
		return (0);
	}
	if (n % nums == 0 && nums > 1)
	{
		return (0);
	}
	if ((n / nums) < nums)
		return (1);
	return (n, nums + 1);
}
