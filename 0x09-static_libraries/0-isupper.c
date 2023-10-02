#include <stdio.h>
#include "main.h"

/**
 * _isupper - function that checks if c is uppercase
 * @c: parameter to check
 * Return: either 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
