#include <ctype.h>
/**
 *_isalpha - check if a char is alphabetic or not
 *@c: char
 *Description: Check if a char is alphabetic or not
 *with help isalpha function
 *Return: 1(if is alphabetic char)
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
