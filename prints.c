#include "main.h"

/**
 * print_string - print a string
 * @value: argument
 * Return: the length of the string
 */
int print_string(va_list value)
{
	char *str;
	int j;
	int length;

	str = va_arg(value, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (j = 0; j < length; j++)
			_putchar(str[j]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (j = 0; j < length; j++)
			_putchar(str[i]);
		return(length);
	}
}
