#include <stdio.h>
/**
 * main - this is the main function
 * Return: always 0
 */
int main(void)
{
	char ch;
	int itn;
	float flt;
	long int lint;
	long long int _lint;

	printf("Size of a char: %lu byte(s)\n", sizeof(ch));
	printf("Size of an int: %lu byte(s)\n", sizeof(itn));
	printf("Size of a long int: %lu byte(s)\n", sizeof(lint));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(_lint));
	printf("Size of a float: %lu byte(s)\n", sizeof(flt));
	return (0);
}
