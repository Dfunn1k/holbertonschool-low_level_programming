#include "main.h"
/**
 *print_alphabet - print the alphabet in lowercase
 *void
 *Description: Print the alphabet in lowercase
 *with the function _putchar
 *Return: 0 value
 */
void print_alphabet(void)
{
	int var1;

	var1 = 'a';

	while (var1 <= 'z')
	{
		_putchar(var1);
		var1++;
	}
	_putchar('\n');
}
