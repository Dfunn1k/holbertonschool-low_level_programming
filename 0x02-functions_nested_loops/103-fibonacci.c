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
			sum += tmp;
		num1 = num2;
		num2 = tmp;
	}
	printf("%d\n", sum);
return (0);
}
