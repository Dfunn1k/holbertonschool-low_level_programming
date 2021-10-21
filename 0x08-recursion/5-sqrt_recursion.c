#include "main.h"
int fun_srqt(int n, int a);

/**
 *_pow_recursion - x raised to the power of y
 *@n: integer number
 *@a: integer number
 *
 *Return: x raised to the power of y, -1 if y < 0
 */
int fun_srqt(int n, int a)
{
	if (n == 0)
		return (((a - 2) + 1) / 2);
	else if (n < 0)
		return (-1);

	n-=a;
        return (fun_srqt(n, a + 2));
}

/**
 *_sqrt_recursion - Return the natural square root of a number
 *@n: integer number
 *
 *Return: x raised to the power of y, -1 if < 0
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
        	return (-1);
	return (fun_srqt(n, 1));
		
}
