#include "main.h"

/**
 * print_binary - converts to binary
 * @value: argument
 * Return: integer
 */

int print_binary(va_list value)
{
	int flag = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(value, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (32 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
		       _putchar(b + 48);
		       cont++;
		}
	}
	if (cont == 0)
	{
		cont ++;
		_putchar('0');
	}
	return(cont);
}
