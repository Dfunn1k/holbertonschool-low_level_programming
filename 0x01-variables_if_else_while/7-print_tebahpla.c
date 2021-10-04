#include <stdio.h>
/**
 *main - display the alphabete
 *var1: code ascii number 122
 *Description: Display the alphabet in reverse
 *Return: 0 value
 */
int main(void)
{
	int var1;

	var1 = 122;

	while (var1 > 96)
	{
		putchar(var1);
		var1--;
	}
putchar(10);
return (0);
}
