/*
 * Task 1
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Applies a random value to n, gets the last value ,l, and says
 *	  whether l>5, is 0 or is <6 and not 0
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
