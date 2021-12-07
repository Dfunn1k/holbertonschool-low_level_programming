#include <stdio.h>
/**
 * main - Function to print \ in diagonal
 * Return: Return value "n"
 */
int main(void)
{
	char i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && !(i % 5 == 0))
		{
			printf("Fizz");
		} else if (i % 5 == 0 && !(i % 3 == 0))
		{
			printf("Buzz");
		} else if (i % 15 == 0)
		{
			printf("FizzBuzz");
		} else
		{
			printf("%d", i);
		}
		if (i == 100)
		{
			break;
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
