#include "main.h"

/**
 * rev_string - function to print a reverse string
 * @s: function parameter
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int counter = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		counter++;
	for (i = 0 ; i < counter / 2 ; i++)
	{
		char g;

		g = s[i];
		s[i] = s[counter - 1 - i];
		s[counter - 1 - i] = g;
	}
}
