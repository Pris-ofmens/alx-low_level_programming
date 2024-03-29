#include "main.h"

/**
 * prints_sign of a number - entry point
 * @n: int to be checked
 * Return: 1 and prints + if n is greater than 0
 * 0 and prints 0 if n is 0
 * -1 and prints - if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
