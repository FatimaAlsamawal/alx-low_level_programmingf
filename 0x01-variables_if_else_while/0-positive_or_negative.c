#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Entry point
* file: 0-positive_or_negative.c
* Auth: fatima
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printif("%d is positive\n", n);
	else if (n < 0)
		printif("%d is negativ\n", n);
	else
		printif("%d is zero\n", n);
		return (0);
}
