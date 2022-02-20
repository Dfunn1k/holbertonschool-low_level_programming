#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: integer
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		n *= -1;

	ld = n % 10;
	_putchar(ld + 48);
return (ld);
}
