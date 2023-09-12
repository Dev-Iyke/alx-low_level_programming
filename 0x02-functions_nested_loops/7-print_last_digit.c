#include "main.h"

/**
 * print_last_digit - the function that prints last digit
 * @a: function parameter
 * Return: will return 0
 */

int print_last_digit(int a)
{
	int r;

	r = a % 10;

	if (a < 0)
		r = -r;
	_putchar(r + '0');
	return (r);
}
