#include "variadic_functions.h"

/**
 * print_numbers - function to print numbers
 * @separator: character to seperate numbers
 * @n: num of numbers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pri;

	va_start(pri, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pri, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pri);
}
