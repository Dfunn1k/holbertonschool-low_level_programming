#include <stdio.h>
/**
 *main - display numbers
 *var 1: ascii code number 48
 *Description: My function display numbers from 0 to 10 in lowercase
 *My functopm return the value of the numbers from 0 to 10 in lowercase
 *Return: 0 value
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
