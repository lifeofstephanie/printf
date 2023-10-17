#include "main.h"

/**
 * _strlen - retuns the length of s string
 * @str: string pointer
 * Return: 1
 */

int _strlen(char *str)
{
	int j;
	
	for (j = 0; str[j] != 0; j++)
		;
	return (j);
}
/**
 * _strlenc - strlen function but applied for constants
 * @str: char pointer 
 * Return: 1
 */
int _strlenc(const char *str)
{
	int j;
	
	for (j = 0; str[j] != 0; j++)
		;
	return (j);
}
