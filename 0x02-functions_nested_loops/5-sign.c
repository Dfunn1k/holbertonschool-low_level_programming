#include "main.h"
/**
 *print_sign - Display the sign of the number
 *@n: a number
 *Description: Print the sign of the number
 *using a else if loops
 *Return: depending of the values
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
