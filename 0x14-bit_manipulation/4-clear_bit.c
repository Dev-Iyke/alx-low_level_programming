#include "main.h"

/**
 * clear_bit - function to set the value of a bit to 0 at a given index
 * @n: bit
 * @index: index of bit
 * Return: always 0 or 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int change;

	change = 1;
	change = change << index;

	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n) >> index & 1) == 1)
		*n = change ^ *n;

	return (1);
}
