#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - print the result off adds positive numbers
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	
	if(argc == 1)
	{
		printf("0\n");
	}

	for(i = 1; i < argc; i++)
	{
		if(isdigit(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		} else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);	
return (0);
}
