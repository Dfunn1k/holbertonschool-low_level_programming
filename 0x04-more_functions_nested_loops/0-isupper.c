#include <ctype.h>
/**
 *_isupper - Display if a character is uppercase
 *@c: a char
 *Description: Display if a character is uppercase
 *with help "isupper" function
 *Return: 1(if c is uppercase)
 */
int _isupper(int c)
{
	if (isupper(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
