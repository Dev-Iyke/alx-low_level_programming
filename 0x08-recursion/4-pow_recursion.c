#include "main.h"

/**
 * _pow_recursion - function that raises x to the power of y
 * @x: param one
 * @y: param two
 * Return: will return an integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
