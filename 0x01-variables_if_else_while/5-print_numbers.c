#include <stdio.h>

/**
 * main - display all single digit numbers of base 10
 * Return: success(0)
 */

int main(void)
{
	int number = 48;

	while (number < 58)
	{
		putchar(number);
		number += 1;
	}
	putchar(10);
return (0);
}
