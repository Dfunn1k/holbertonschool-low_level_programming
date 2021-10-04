#include <stdio.h>
/**
 *main - Display numbers with characters
 *x: code ascii number 48
 *Description: My function display all number from 0 to 10 following space
 *and commas
 *Return: 0 value
 */
int main(void)
{
	int x;

	x = 48;

	while (x < 58)
	{
		if (x != 57)
		{
			putchar(x);
			putchar(10);
			putchar(44);
			x++;
		}
		else
		{
			putchar(x);
		}
	}
return (0);
}
