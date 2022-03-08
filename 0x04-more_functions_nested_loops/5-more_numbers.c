#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10 times 
 */

void more_numbers(void)
{
	int num1, num2, i;

	num1 = 48;
	num2 = 48;

	for (i = 0; i < 10; i++)
	{
		while (num1 < 50)
		{
			while (num2 < 58)
			{
				if (num1 != 49 || num2 != 53)
				{
					if (num1 >= 49)
						_putchar(num1);
					_putchar(num2);
					num2++;
				}
				else {
					break;
				}
			}
			num2 = 48;
			num1++;
		}
		num1 = 48;
	_putchar(10);
	}
}
