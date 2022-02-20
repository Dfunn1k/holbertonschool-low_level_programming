#include <stdio.h>

/**
 * main - display all combination of two two-digit numbers
 * Return: success(0)
 */

int main(void)
{
	int c1 = 48, c2 = 48, c3 = 48, c4 = 49, tmp = 48;

	while (c1 < 58)
	{
		while (c2 < 58)
		{
			while (c3 < 58)
			{
				while (c4 < 58)
				{
					putchar(c1);
					putchar(c2);
					putchar(32);
					putchar(c3);
					putchar(c4);
					if (c1 != 57 || c2 != 56)
					{
						putchar(44);
						putchar(32);
					}
					c4++;
				}
				c3++;
				c4 = 48;
			}
			c2++;
			c3 = tmp;
			c4 = c2 + 1;
		}
		c1++;
		tmp = c1;
		c2 = 48;
		c3 = tmp;
		c4 = c2 + 1;
	}
	putchar(10);
return (0);
}
