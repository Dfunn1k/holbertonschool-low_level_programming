#include <stdio.h>
/**
 *main - program that prints all possible combinations of two two-digit
 *Return: 0(success)
 */
int main(void)
{
	int w, x, y, z;

	w = 48;
	x = 48;
	y = 48;
	z = 48;

	while (w <= 57)
	{
		while (x <= 57)
		{
			while (y <= 57)
			{
				while (z <= 57)
				{
					if (x > 48 && (y == 48 && z == 48))
						z++, continue;

					if (x == z)
						z++, continue;
					putchar(w);
					putchar(x);
					putchar(32);
					putchar(y);
					putchar(z);
					if (w == 57 && x == 56 && y == 57 && z == 57)
						break;
					putchar(44);
					putchar(32);
					z++;
				}
			z = 48, y++;
			}
		z = x + 1;
		y = w, x++;
		}
	x = 48, w++;
	}
putchar(10);
return (0);
}
