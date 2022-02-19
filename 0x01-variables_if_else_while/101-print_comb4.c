#include <stdio.h>

/**
 * main - display combinations of three digits
 * Return: success(0)
 */

int main(void)
{
	int c1, c2, c3;

	c1 = 48;
	c2 = 49;
	c3 = 50;

	while (c1 < 58)
	{
		while (c2 < 58)
		{
			while (c3 < 58)
			{
				putchar(c1);
				putchar(c2);
				putchar(c3);
				if (c1 != 55)
				{
					putchar(44);
					putchar(32);
				}
			c3++;
			}
			c2++;
			c3 = c2 + 1;
		}
		c1++;
		c2 = c1 + 1;
		c3 = c2 + 1;
	}
	putchar(10);
return (0);
}
