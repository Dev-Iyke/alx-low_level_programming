#include "variadic_functions.h"

/**
 * print_strings - function to print strings
 * @separator: character to seperate strings
 * @n: num of strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *strn;
	unsigned int i;
	va_list pri;

	va_start(pri, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		strn = va_arg(pri, char*);
		if (strn == NULL)
			strn = "(nil)";
		printf("%s", strn);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pri);
}
