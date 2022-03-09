#include <stdio.h>

/**
 * main - print the fizzbuzz interview
 * Return: success(0)
 */

int main(void)
{
	int num;

	for (num = 1; num < 101; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else
			printf("%i", num);
		if (num == 100)
			putchar(10);
		else
			putchar(' ');
	}

return (0);
}
