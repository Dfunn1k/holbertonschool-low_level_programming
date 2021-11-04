#include <stdio.h>
#include <stdlib.h>
/**
 *op_add - return the sum of a and b
 *@a: integer number
 *@b: integer number
 *Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - return the difference
 *@a: integer number
 *@b: integer number
 *Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - return the product
 *@a: integer number
 *@b: integer number
 *Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - return the result of the division
 *@a: integer number
 *@b: integer number
 *Return: the result of the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - return the module
 *@a: integer number
 *@b: integer number
 *Return: the remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
