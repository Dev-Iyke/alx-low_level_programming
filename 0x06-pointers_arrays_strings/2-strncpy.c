#include "main.h"

/**
 * _strncpy - function to copy string
 * @dest: first param
 * @src: second param
 * @n: third param
 * Return: will return a character
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
