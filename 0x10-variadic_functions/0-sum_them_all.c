#include "variadic_functions.h"

/**
 * sum_them_all - function to sum
 * @n: number of parameters to sum
 * Return: an integer
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s = 0;
	va_list add;

	va_start(add, n);
	for (i = 0; i < n; i++)
	{
		s = s + va_arg(add, int);
	}
	return (s);
	va_end(add);
}
