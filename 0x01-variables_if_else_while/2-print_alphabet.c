#include <stdio.h>

/**
 * main - Print the alphabet in lowercase
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
	putchar(10);
return (0);
}
