#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - sum all parameters
 *@n: const
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	int valor;
	va_list parametros;

	if (n == 0)
		return (0);

	va_start(parametros, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		valor = va_arg(parametros, int);
		sum += valor;
	}
	va_end(parametros);
	return (sum);
}
