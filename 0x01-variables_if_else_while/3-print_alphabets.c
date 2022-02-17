#include <stdio.h>

/**
 * main - print the alphabet in lower and uppercase
 * Return: success(0)
 */

int main(void)
{
	int letter = 97;

	while (letter < 123)
	{
		putchar(letter);
		letter += 1;
	}

	letter = 65;

	while (letter < 91)
	{
		putchar(letter);
		letter += 1;
	}
	putchar(10);
return (0);
}
