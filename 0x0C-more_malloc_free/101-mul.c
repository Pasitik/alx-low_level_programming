#include "main.h"

/**
 * main - main function
 *
 * @argc: param1
 * @argv: param2
 * Return:int
 */
int main(int argc, char *argv[])
{
	int mul, num1, num2, lenA, lenB, length, i = 0;
	char *p;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		err_case();

	lenA = _strlen(argv[1]);
	lenB = _strlen(argv[2]);
	length = lenA + lenB;

	num1 = strtol(argv[1], NULL, 10);
	num2 = strtol(argv[2], NULL, 10);

	zero_check(num1, num2);
	mul = num1 * num2;

	p = (char *) malloc(sizeof(char) * length);
	if (p == NULL)
	{
		return (1);
	}

	while (i < length && mul > 0)
	{
		int mod = mul % 10;
		*(p + i) = mod;
		mul = mul / 10;
		i++;
	}

	i = i - 1;
	while (i >= 0)
	{
		_putchar(p[i] + '0');
		i--;
	}
	_putchar('\n');
	free(p);
	return (0);
}


/**
 * _strlen - length of string
 *
 * @str: param1
 * Return:int
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * err_case	- handle errors
 *
 * Return: void
 */
void err_case(void)
{
	int i = 0;
	char str[] = "Error";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	exit(98);
}


/**
 * is_digit	- handle character  errors
 *
 * @s: param1
 * Return: int
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * zero_check - ....
 *
 * @num1: ....
 * @num2: ....
 * Return: void
 */
void zero_check(int num1, int num2)
{
	if (num1 == 0 || num2 == 0)
	{
		_putchar('0');
		_putchar('\n');
		exit(98);
	}
}
