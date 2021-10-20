#include "main.h"
/**
 *_pow_recursion - x raised to the power of y
 *@x: integer number
 *@y: integer number
 *
 *Return: x raised to the power of y, -1 if y < 0
 */
int _pow_recursion(int x, int y);
{
	if (y > 0)
	{
		if (y == 1)
		{
			return (x);
		}
		else
		{
			return (x * _pow_recursion(y - 1));
		}
	} else
	{
		return (-1);
	}
}
