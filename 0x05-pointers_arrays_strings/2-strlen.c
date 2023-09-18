#include "main.h"

/**
 * _strlen - function to return length of string
 * @s: function parameter
 * Return: will retun a number
 */

int _strlen(char *s)
{
	int i;
	int counter = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		counter++;
	return (counter);
}
