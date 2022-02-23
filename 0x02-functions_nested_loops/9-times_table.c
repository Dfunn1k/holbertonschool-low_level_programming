#include "main.h"

/**
 * times_table - prints hte 9 time table, starting with 0
 */

void times_table(void)
{
	int num1 = 0, num2 = 0, j, i, mul, fd, ld;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mul = num1 * num2;
			fd = mul / 10;
			ld = mul % 10;
			if (fd > 0)
			{
				_putchar(fd + 48);
				_putchar(ld + 48);
			}
			else
				_putchar(mul + 48);
			if (num2 != 9)
			{
				_putchar(44);
				_putchar(32);
			}
			if (fd <= 0)
			{
				_putchar(32);
			}
			num2++;
		}
		num2 = 0;
		_putchar(10);
		num1++;
	}
}
