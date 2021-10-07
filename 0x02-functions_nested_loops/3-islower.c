#include <ctype.h>
/**
 *_islower - checked if a letter is lowercase
 *@c: a character
 *Description: My funcion check if a letter is lowercase
 *with help islower function
 *Return: 1(if is lowercase)
 */
int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
