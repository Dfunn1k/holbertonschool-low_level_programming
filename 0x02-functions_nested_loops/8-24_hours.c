#include "main.h"
/**
 *jack_bauer - function that prints every minute of the day of jack bauer
 */

void jack_bauer(void)
{
	int w, x, y, z;

    w = 48;
    x = 48;
    y = 48;
    z = 48;

	while (w < 51)
	{
		while (x < 52)
		{
			while (y < 54)
			{
				while (z < 58)
				{
					_putchar(w);
					_putchar(x);
					_putchar(58);
					_putchar(y);
					_putchar(z);
					_putchar(10);
					z++;
				}
			z = 48;
			y++;
			}
		y = 48;
		x++;
		}
	x = 48;
	w++;	
	}	
}		
