#include "main.h"

int prime(int n, int count, int i);
/**
 * is_prime_number - check the code
 *
 * @n: param2
 * Return: sqrt.
 */
int is_prime_number(int n)
{
		int track = prime(n, 1, 0);

		if (track > 2 || track < 2)
		{
			return (0);
		}
		if (track == 2)
		{
			return (1);
		}
		return (0);
}

/**
  * prime - Calculates the prime
  * @n: number to calculate the square root
  * @count: iterate number
  * @i: tracker
  *
  * Return: the prime
  */
int prime(int n, int count, int i)
{
	if (count > n)
	{
		return (i);
	}
	if (n % count == 0)
	{
		i++;
	}
	return (prime(n, count + 1, i));
}
