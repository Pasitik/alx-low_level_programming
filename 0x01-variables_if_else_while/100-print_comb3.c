#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - this is the main func
 *
 * Return: 0
 */
int main(void)
{
	int a, b;

	typedef int be_happy;

	for (a = 0; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a/10) + '0');
			putchar((a%10) + '0');
			putchar(' ');
			putchar((b/10) + '0');
			putchar((b%10) + '0');
			if (a == 98 && b == 99)
			{
				continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
