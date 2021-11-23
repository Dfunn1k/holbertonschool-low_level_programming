#include "main.h"
/**
 *times_table - function that prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int num, count, last_digit, first_digit, mul;

	for (num = 0; num < 10; num++)
	{
		for (count = 0; count <= 9; count++)
		{
			mul = num * count;
			first_digit = mul / 10;
			last_digit = mul % 10;
			mul += 48;

			if (first_digit > 0)
			{
				_putchar(first_digit + 48);
				_putchar(last_digit + 48);
			}
			if (first_digit <= 0)
			{
				if (count == 0)
				{
					_putchar(mul);
				} else
				{
					_putchar(32);
					_putchar(mul);
				}
			}
			if (count != 9)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	_putchar(10);
	}
}
