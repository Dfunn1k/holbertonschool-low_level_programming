#include <stdio.h>
/**
 *main - program that print all possible different combinations of three digits
 *Return: 0(success)
 */
int main(void)
{
	int x, y, z;

	x = 48;
	y = 49;
	z = 50;

	while (x <= 55)
	{
		while (y <= 56)
		{
			while (z <= 57)
			{
				if (x == y || y == z || z == x)
				{
					z++;
					continue;
				}

				putchar(x);
				putchar(y);
				putchar(z);

				if (x == 55 && y == 56 && z == 57)
					break;
				putchar(44);
				putchar(' ');
				z++;
			}

		z = y + 1;
		y++;
		}

	y = x + 1;
	x++;
	}
putchar('\n');
return (0);
}
