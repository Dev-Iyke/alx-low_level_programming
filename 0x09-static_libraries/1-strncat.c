#include "main.h"

/**
 * _strncat - function to concatenate two strings
 * @dest: destination parameter
 * @src: parameter to concatenate
 * @n: byte size
 * Return: will return a character
 */

char *_strncat(char *dest, char *src, int n)
{
	int srcl = 0;
	int destl = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		destl++;
	}
	for (i = 0 ; src[i] != '\0' ; i++)
		srcl++;
	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[destl + i] = *src;
		src++;
	}
	dest[destl + i] = '\0';
	return (dest);
}
