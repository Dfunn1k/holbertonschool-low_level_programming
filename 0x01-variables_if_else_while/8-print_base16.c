#include <stdio.h>
/**
 *main - print all numbers of base 16
 *x,y: code ascii 48 and 97 respectly
 *Description: Display all number of base 16
 *
 *Return: 0 value
 */
int main(void)
{
	int x, y;

	x = 48;
	y = 97;

	while (x < 58)
	{
		putchar(x);
		x++;
	}

	while (y < 103)
	{
		putchar(y);
		y++;
	}
putchar(10);
return (0);

}
