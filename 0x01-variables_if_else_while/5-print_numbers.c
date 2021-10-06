#include <stdio.h>
/**
 *main - display numbers
 *var1: ascii 48
 *Description: My function display all numbers from 0 to 10
 *
 *Return: value 0
 */
int main(void)
{
	int var1;

	var1 = 48;

	while (var1 < 58)
	{
		putchar(var1);
		var1++;
	}
putchar(10);
return (0);
}
