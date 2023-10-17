#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to print
 *
 * Return: On success, 1 is returned. On error, -1 is returned.
 */
int _putchar(char c);

int _printf(const char *format, ...);

int print_char(va_list value);

int print_string(va_list value);

int _strlen(char *str);

int _strlenc(const char *str);

int print_37(void);

int print_bin(va_list value);
#endif
