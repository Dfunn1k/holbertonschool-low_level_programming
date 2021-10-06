#include <stdio.h>
/**
 *main - print the lower and upper case
 *void
 *Description: My function display the alphabet in uppercase and lowercase
 *
 *Return: value 0
 */
int main(void)
{
	int c, b;

	c = 97;

	b = 65;

	while (c < 123)
	{
		putchar(c);
		c++;
	}
	while (b < 91)
	{
		putchar(b);
		b++;
	}
putchar(10);
return (0);
}
