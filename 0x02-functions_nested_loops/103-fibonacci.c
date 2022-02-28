#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms 
 * Return: success(0)
 */

int main(void)
{
	int num1 = 0, num2 = 1, tmp, sum = 0;

	while (tmp <= 4000000)
	{
		tmp = num1 + num2;
		if (tmp % 2 == 0)
		{
			printf("%d", tmp);
			sum += tmp;
			if (tmp != 3524578)
				printf(", ");
		}
		num1 = num2;
		num2 = tmp;
	}
	putchar(10);
return (0);
}