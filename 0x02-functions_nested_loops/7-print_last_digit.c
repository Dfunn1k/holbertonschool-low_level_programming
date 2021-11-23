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
	int ld, tmp;

	ld = n % 10;
	if (ld < 0)
		ld *= -1;
	tmp = ld;
	ld += 48;
	_putchar(ld);

return (tmp);
}
