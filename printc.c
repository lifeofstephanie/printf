#include "main.h"

/**
 * print_char - prints a character
 * @value: arguement
 * Return: return 1
 */

print_char(va_list value)
{
	char string;

	string = va_arg(value, int);
	_putchar(string);
	return(1);
}
