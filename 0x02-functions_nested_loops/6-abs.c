#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: int
 * Return: the absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else
		return (n);
}
