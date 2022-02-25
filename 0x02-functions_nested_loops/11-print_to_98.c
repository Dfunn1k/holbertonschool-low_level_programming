#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer
 */

void print_to_98(int n)
{
	int temp;

	if (n == 98)
		printf("98\n");

	else if (n < 98)
	{
		for (temp = n; temp <= 98; temp++)
		{
			printf("%d", temp);
			if (temp != 98)
				printf(", ");
		}
		putchar(10);
	}
	else
	{
		for (temp = n; temp >= 98; temp--)
		{
			printf("%d", temp);
			if (temp != 98)
				printf(", ");
		}
		putchar(10);
	}
}
