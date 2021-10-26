#include <stdio.h>
#include "main.h"
/**
 *main - a program that prints the number of arguments passed into it
 *@argc: count of the arguments
 *@argv: array of the strings
 *
 *Return: 0(function success)
 */
int main(int argc, char __attribute__ ((unused))*argv[])
{
	printf("%d\n", argc - 1);

return (0);
}
