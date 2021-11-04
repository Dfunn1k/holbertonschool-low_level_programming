#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *main - Function main
 *@argc: number of arguments
 *@argv: stored arguments
 *Return: function selected
 */
int main(int argc, char *argv[])
{
	int b, c;
	char *a;

	if (argc == 4)
	{
		a = argv[2];
		b = atoi(argv[1]);
		c = atoi(argv[3]);
		if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
		{
			printf("Error\n");
			exit(99);
		}
		return (printf("%d\n", get_op_func(a)(b, c)));
	}
	printf("Error\n");
	exit(98);
}
