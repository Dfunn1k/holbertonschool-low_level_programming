#include <stdio.h>
/**
 *main - display alphabet
 *var1 : ascii 97
 *Description : my function display alphabet in lowercase except q and e
 *My function display the alphabet in lower case excet q and e
 *Return: value 0
 */
int main(void)
{
	int var1;

	var1 = 97;

	while (var1 < 123)
	{
		if (var1 != 101 && var1 != 113)
		{
			putchar(var1);
			var1++;
		}
		else
		{
			var1++;
		}
	}
putchar(10);
return (0);
}
