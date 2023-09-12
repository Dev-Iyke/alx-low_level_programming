#include "main.h"
/**
 * _islower - function that checks is c is lowercase
 * @c: the parameter to check
 * Return: will return either 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
