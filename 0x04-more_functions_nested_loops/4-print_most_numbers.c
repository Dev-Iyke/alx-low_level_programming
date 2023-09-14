#include "main.h"

/**
 * print_most_numbers - function that prints numbers except 2 and 4
 * Return: usually 0;
 */

void print_most_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		if (n != 2 || n != 4)
			_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
