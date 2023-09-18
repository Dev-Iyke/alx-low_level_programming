#include "main.h"

/**
 * swap_int - function to swap pointer variable values
 * @a: first parameter
 * @b: second parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
