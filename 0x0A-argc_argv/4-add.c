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
	int i; 
	
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return 0;
	}
	for (i = 1; i <= argc; i++)
	{
		int x = strtol(argv[i], NULL, 10);
		sum = sum + x;
		if (x < 48)
		{
			printf("Error\n");
			return 1;
		}
	}
	printf("%d\n", sum);
	return (0);
}
