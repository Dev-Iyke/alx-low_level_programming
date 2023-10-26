#include "main.h"

/**
 * binary_to_uint - function to convert binary to integer
 * @b: binary number
 * Return: a unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i, k, added, p;
	int base;

	base = 2;
	added = 0;
	p = 1;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '\0' && b[i] != '1')
			return (0);
		for (k = len -1; k > 0; k--)
		p = p * base;
		added = added + (p * (b[i] - 48));
		len--;
		p = 1;
	}
	return (added);
}
