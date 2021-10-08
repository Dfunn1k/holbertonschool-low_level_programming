#include "main.h"
/**
 *print_most_numbers - Print the numbers except any numbers
 *void
 *Description: Display the numbers from 0 to 10 except any numbers
 *using a loop while
 *Return: 0 value
 */
void print_most_numbers(void)
{
	int c;

	c = 48;

	while (c < 58)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
			c++;
		}
		else
		{
			c++;
		}
	}
	_putchar(10);

}
