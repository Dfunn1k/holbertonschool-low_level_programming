#include <stdio.h>

/**
 * main - display the alphabet in reverse
 * Return: success(0)
 */

int main(void)
{
	int letter = 122;

	while (letter > 96)
	{
		putchar(letter);
		letter -= 1;
	}
	putchar(10);
return (0);
}
