#include "main.h"
/**
 *factorial - print the factorial of a given number
 *@n: integer number
 *
 *Return: factorial de n
 */
int factorial(int n)
{
	if (n > 0)
	{
		if (n == 1)
		{
			return (1);
		}
		else
		{
			return (n * factorial(n - 1));
		}

	} else
	{
		return (-1);
	}
}
