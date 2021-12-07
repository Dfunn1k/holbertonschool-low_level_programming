#include "main.h"
/**
 * more_numbers - Function to return 1 if  upper alphabet
 * Return: Return value "n"
 */
void more_numbers(void)
{
	int a;
	char b;
	int r;
	int s;

	for (a = '0' ; a <= '9' ; a++)
	{
		for (b = 0 ; b <= 14 ; b++)
		{
			s = b % 10;
			if (b >= 10)
			{
				r = b / 10;
				s = b % 10;
				_putchar(r + '0');
			}
			_putchar(s + '0');
		}
		_putchar('\n');
	}
}
