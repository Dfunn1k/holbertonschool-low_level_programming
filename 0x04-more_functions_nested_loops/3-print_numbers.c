#include "main.h"
/**
 *print_numbers - Print the numbers from 0 to 10
 *void
 *Description: Display the numbers from 0 to 10
 *using a loop while
 *Return: 0 value
 */
void print_numbers(void)
{
	int c;

	c = 48;

	while (c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar(10);

}
