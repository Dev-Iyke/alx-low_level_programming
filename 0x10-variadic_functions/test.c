#include <stdio.h>
#include <stdarg.h>

int sum(int numofargs, ...);


int main(void)
{
	sum(5,2,4,6,9,8);
}

int sum(int numofargs, ...)
{
	int i;
	int sum = 0;

	va_list	arguments;
	va_start(arguments, numofargs);
	for (i = 0; i < numofargs; i++)
	{
		sum = sum + va_arg(arguments, int);
	}
	printf("%d\n", sum);
	va_end(arguments);
}
