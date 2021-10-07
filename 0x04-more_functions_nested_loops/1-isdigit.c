#include <ctype.h>
/**
 *_isdigit - Check if a char is digit
 *@c: character
 *Description: Check if a char is digit or no
 *with help "isdigit" function
 *Return: 1(if is a digit)
 */
int _isdigit(int c)
{
	if (isdigit(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
