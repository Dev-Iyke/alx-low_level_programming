#include "main.h"

/**
 * _isalpha - checks for all alphabets
 * @c: the function parameter
 * Return: will be 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
