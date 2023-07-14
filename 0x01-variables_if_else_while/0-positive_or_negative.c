#include <stdlib.h>
#include <time.h>
/**
 * Task 0 - Positive anything is better than negative nothing
 */

/*
 * Main - Assigning a random number to n and printing what that number is 
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d ", "n is positive\n")
	}
	else if (n == 0)
	{
		printf("%d ", "n is 0\n")
	}
	else 
	{
		printf("%d ", "n is negative\n")
	}
	return (0);
}
