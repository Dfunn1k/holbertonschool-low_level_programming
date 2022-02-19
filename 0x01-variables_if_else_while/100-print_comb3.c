#include <stdio.h>

/**
 * main - display all possible combinations of two digits
 * Return: success(0)
 */

int main(void)
{
	int c1, c2;

	c1 = 48;
	c2 = 49;

	while (c1 < 58)
	{
		while (c2 < 58)
		{
			putchar(c1);
			putchar(c2);
			if (c1 != 56 || c2 != 57)
			{
				putchar(44);
				putchar(32);
			}
			c2++;
		}
		c2 = c1 + 2;
		c1++;
	}
	putchar(10);
return (0);
}
