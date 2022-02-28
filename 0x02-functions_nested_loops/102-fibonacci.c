#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * Return: success(0)
 */

int main(void)
{
	long int num1 = 0, num2 = 1, sum;
	short int count = 2;

	printf("0, 1, ");

	while (count <= 50)
	{
		sum = num1 + num2;
		printf("%ld", sum);
		if (count != 50)
			printf(", ");
		num1 = num2;
		num2 = sum;
		count++;
	}
	putchar(10);
}

