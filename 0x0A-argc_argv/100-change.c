#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print number of coins to make change for
 * @argc: parameter that counts number of arguments
 * @argv: parameter that points to the arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	printf("%d\n", coins);

	return (0);
}
