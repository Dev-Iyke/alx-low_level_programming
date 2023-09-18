#include "main.h"

/**
 * print_array - function to print n elements of an array
 * @a: first param
 * @n: second param
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
