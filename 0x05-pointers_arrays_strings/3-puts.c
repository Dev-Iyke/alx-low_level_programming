#include "main.h"

/**
 * _puts - function to print a string to stdout
 * @str: function parameter
 * Return: void
 */

void _puts(char *str)
{
	int s;

	for (s = 0 ; str[s] != '\0' ; s++)
		_putchar(str[s]);
	_putchar('\n');
}
