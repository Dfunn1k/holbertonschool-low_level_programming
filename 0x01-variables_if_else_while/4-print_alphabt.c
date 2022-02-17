#include <stdio.h>

/**
 * main - display the alphabet except 'q' and 'e'
 * Return: success(0)
 */

int main(void)
{
	int letter = 97;

	while (letter < 123)
	{
		if (letter != 113 && letter != 101)
			putchar(letter);
		letter += 1;
	}
	putchar(10);
return (0);
}
