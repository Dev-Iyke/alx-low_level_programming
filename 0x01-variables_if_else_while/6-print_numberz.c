#include <stdio.h>

/**
 * main - this is our main function
 * Return: usually 0
 */
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
