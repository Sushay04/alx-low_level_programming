/*
 * Bonus Task 2: Printing the exact text to a standard error.
 */

#include <unlisted.h>

/**
 * main - prints the specified message followed by a new line to standard error
 *
 *  Return: 1 this time.
 */
int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);

	return (1);
}
