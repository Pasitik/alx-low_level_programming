#include <stdio.h>
#include <ctype.h>

/**
 * main - this is the main func
 *
 * Return: 0
 */
int main(void)
{
	int x = 'A';

	for (x = 'A'; x <= 'Z'; x++)
	{
		int low_x = tolower(x);

		if (x == 'E' || x == 'Q')
		{
			continue;
		}

		putchar (low_x);
	}
		putchar('\n');
		return (0);
}
