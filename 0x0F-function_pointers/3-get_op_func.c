#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *get_op_func - Function pointer to function
 *@s: pointer to char
 *Return: pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i <= 4)
	{
		if (*s == *ops[i].op)
		{
			return (*(ops[i]).f);
		}
		i++;
	}
	return (NULL);
}
