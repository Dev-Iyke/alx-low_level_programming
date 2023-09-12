#include "main.h"

/**
 * print_sign - function to print the sign of numbers
 * @n: parameter to be passed
 * Return: will return 0 or 1 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
