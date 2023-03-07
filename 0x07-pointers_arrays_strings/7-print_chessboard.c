#include "main.h"

/**
 * print_chessboard - check the code
 *
 * @a: param1
 * Return: pointer.
 */
void print_chessboard(char (*a)[8])
{
	int n = sizeof(a) / sizeof(a[0][0]);

	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
