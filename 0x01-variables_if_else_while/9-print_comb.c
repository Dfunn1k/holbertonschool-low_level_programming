#include <stdio.h>

/**
 * main - display all single numbers starting from 0
 * Return: success(0)
 */

int main(void)
{
	int number = 48;

	while (number < 58)
	{
		putchar(number);
		if (number == 57)
			break;
		putchar(44);
		putchar(32);
		number++;
	}
	putchar(10);
return (0);
}
