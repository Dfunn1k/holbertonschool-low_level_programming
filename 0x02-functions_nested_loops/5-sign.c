#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: int
 * Return: 0 if n is zero, + if n is greater than zero. - otherwise
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
