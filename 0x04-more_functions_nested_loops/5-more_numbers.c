#include "main.h"

/**
 * more_numbers - prints more numbers
 * Return: usually void
 */

void more_numbers(void)
{
	int r;
	int n;

	for (r = 0 ; r < 10 ; r++)
	{
		for (n = 0 ; n < 15 ; n++)
		{
			if (n > 9)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
