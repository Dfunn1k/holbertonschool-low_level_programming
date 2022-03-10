#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer that will be printed
 */

void print_number(int n)
{
	unsigned int tmp, tmp2, digits, qcient, i, divisor;

	digits = 0;
	divisor = 1;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	tmp = n;

	while (tmp > 0) /* Contador de digitos */
	{
		tmp /= 10;
		digits++;
	}

	tmp2 = digits;

	while (tmp2 > 1) /* calcular el divisor segun la cantidad de digitos */
	{
		divisor *= 10;
		tmp2--;
	}

	if (digits == 1 || n == 0)
		_putchar(n + 48);
	else
	{	 /*imprimiendo digitos de izquierda a derecha */
		for (i = 0; i < digits; divisor /= 10)
		{
			qcient = n / divisor;
			n %= divisor;
			_putchar(qcient + 48);
			i++;
		}
	}
}
