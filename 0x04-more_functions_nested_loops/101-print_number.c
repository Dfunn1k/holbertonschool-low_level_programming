#include "main.h"
/**
 * print_number - Function to print a integer number
 * @n: Parameter
 * Return: Return value "n"
 */
void print_number(int n)
{
	int b, i, f, t;
	unsigned int num;
	unsigned int r;

	f = 1;
	b = 1;
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	} else
	{
		num = n;
	}
	r = num;
	while (num / 10 >= 1)/*contador de digitos = b */
	{
		num = num / 10;
		b++;
	}
	for (i = 1 ; i < b ; i++)/*potencia de 10*/
	{
		f *= 10;
	}
	while (b >= 1 || f > 0)/*imprime digitos de izquierda a derecha*/
	{
		t = (r / f) % 10;
		f = f / 10;
		_putchar(t + '0');
		b--;
	}
}
