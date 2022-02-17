#include <stdio.h>

/**
 * main - display all the numbers of base 16
 * Return: success(0)
 */

int main(void)
{
	int letter, number;

	letter = 97;
	number = 48;

	while (number < 58)
	{
		putchar(number);
		number++;
	}

	while (letter < 103)
	{
		putchar(letter);
		letter++;
	}
	putchar(10);
return (0);
}
