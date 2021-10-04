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
		if (x < 58)
		{
			putchar(x);
			if (x != 57)
				putchar(32);
				putchar(44);
				x++;
			else
			{
				x++;
			}
		}
		else
		{
		}
	}
putchar(10);
return (0);
}
