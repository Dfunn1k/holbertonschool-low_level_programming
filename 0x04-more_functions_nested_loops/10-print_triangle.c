#include "main.h"
/**
 *
 *
 *
 *
 *
 */

void print_triangle(int size)
{
	int i, a, b, spa, sharp;
	sharp = 1;
	spa = size - 1; 
	
	
	for(i = 1; i <= size; i++)
	{
		for(a = 1; i <= spa; a++)	
		{
			_putchar(32);
		}
		for(b = 1; b <= sharp ; b++)
		{
			_putchar(35);
		}
	_putchar(10);
	sharp= sharp + 1;
	spa= spa - 1;
	}		
}
