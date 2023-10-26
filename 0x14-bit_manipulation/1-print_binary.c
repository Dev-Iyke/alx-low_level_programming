#include "main.h"



/**
 * print_bin - recursively print the binary equivalent of a number
 * @n: the number
 * Return: void
 */

void print_bin(unsigned long int n)
{
	if (n == 0)
		return;
	print_bin(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
		
	if ((n & 1) == 0)
		_putchar('0');
}


/**
 * print_binary - function that converts and prints the binary equivalent of an integer
 * @n: integer to convert
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_bin(n);
	}
}
