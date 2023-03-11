#include <stdio.h>
#include <stdlib.h>

/**
 * main - my main func
 *
 * @argc: arguments array length
 * @argv: arguments array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul, a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
