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

		putchar (low_x);
	}

	for (x = 'A'; x <= 'Z'; x++)
	{
		int up_x = toupper(x);

		putchar (up_x);
	}

		putchar('\n');
		return (0);
}
