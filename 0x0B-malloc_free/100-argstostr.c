#include "main.h"

/**
 * argstostr - my function
 *
 * @ac : size of memory to be reserved
 * @av : character
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, count = 0, a = 0, b = 0, c = 0;

	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (i < ac)
	{
		while (av[i][j] != '\0')
		{
			count++;
			j++;
		}
		j = 0;
		i++;
	}
	p = (char *) malloc((sizeof(char) * count) + ac + 1);

	while (av[a])
	{
		while (av[a][b])
		{
			*(p + c) = av[a][b];
			c++;
			b++;
		}
		*(p + c) = '\n';
		b = 0;
		c++;
		a++;
	}
	c++;
	*(p + c) = '\0';

	return (p);
}
