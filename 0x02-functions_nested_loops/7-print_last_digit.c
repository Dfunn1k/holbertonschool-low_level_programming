#include "main.h"
/**
 *print_last_digit - return the last digit
 *@n: a number
 *Description: Display the last digit of the numbers
 *using the module
 *Return: the last digit
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;

	_putchar(x);

return (x);
}
