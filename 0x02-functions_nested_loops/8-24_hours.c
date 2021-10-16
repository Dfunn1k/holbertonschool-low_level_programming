#include "main.h"
/**
 *
 *
 *
 *
 *
 */

void jack_bauer(void)
{
	int x, y, z, w;

    w = 48;
    z = 48;
    y = 48;
    x = 48;
	while(x < 51)
	{
		if(x == 50 && y == 52)
		{
			break;
		}
		else
		{			
			while(y < 58)
			{
				while(z < 54)
				{	
				    while(w < 58)
				    {
		       			 _putchar(x);
		       			 _putchar(y);
		       			 _putchar(58);
		       			 _putchar(z);
		       			 _putchar(w);
		       			 _putchar(10);
		       			 w++; 
				    }
				w = 48;
				z++;	
				}
			z = 48;
			y++;
			}
		y = 48;
		x++;	
		}
	}
}
