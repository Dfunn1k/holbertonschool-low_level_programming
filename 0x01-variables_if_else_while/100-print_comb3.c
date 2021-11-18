#include <stdio.h>
/**
 *main - function display all posible different combinations of two digits
 *Return: 1(success)
 */
int main(void)
{
	int num1, num2, tmp = 0;

	num1 = 48;
	num2 = 48;
	tmp = num2;

	while (num1 <= 57)
	{
		while (num2 <= 57)
		{
			if (num1 != num2)
			{
				putchar(num1);
				putchar(num2);
				if (num1 == 56 && num2 == 57)
					break;
				putchar(44);
				putchar(' ');
			}
			num2++;
		}
	num2 = tmp + 1;
	tmp = num2;
	num1++;
	}
putchar(10);
return (0);
}
