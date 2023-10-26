#include "main.h"

/**
 * flip_bits - function that flips bit
 * @n: param 1
 * @m: param 2
 * Return: an unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nb;

	for (nb = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nb++;
	}

	return (nb);
}
