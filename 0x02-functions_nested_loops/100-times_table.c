#include "main.h"
/**
 * print_times_table - Function to print table
 * @n: Parameter
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15 && n >= 0)
	{
		for (a = 0 ; a <= n ; a++)
		{
			for (b = 0 ; b <= n ; b++)
			{
				c = a * b;
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (a == 0 && b != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (c != 0 && c < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				} else if (c >= 10 && c < 100)
				{
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				} else if (c >= 100 && c < 1000)
				{
					_putchar(((c / 100) % 10) + '0');
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				} else
				{
					_putchar(c + '0');
				}
			}
			_putchar('\n');
		}
	}
}
