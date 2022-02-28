#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5
 * Return: success(0)
 */

int main(void)
{
	int num = 1, sum = 0;

	while (num < 1024)
	{
		if (num % 3 == 0 || num % 5 == 0)
			sum += num;
		num++;
	}
	printf("%d\n", sum);
return (0);
}
