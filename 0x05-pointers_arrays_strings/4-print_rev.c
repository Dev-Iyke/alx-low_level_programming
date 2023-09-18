#include "main.h"

/**
 * print_rev - function to print a string in reverse
 * @s: function parameter
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int counter = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		counter++;
	for (i = counter - 1 ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
