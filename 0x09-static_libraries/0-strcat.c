#include "main.h"

/**
 * _strcat - function to concatenate two strings
 * @dest: destination variable to add to
 * @src: string ti add to dest
 * Return: will return a character
 */

char *_strcat(char *dest, char *src)
{
	int srclength = 0;
	int destlength = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		destlength++;
	}
	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		srclength++;
	}
	for (i = 0 ; i <= srclength ; i++)
	{
		dest[destlength + i] = src[i];
	}
	return (dest);
}
