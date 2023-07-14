/*
 * Task 6: putchar for numbers v2.0
 */

#include <stdio.h>

/**
 * main - Prints the numbers from 0-9 using putchar but without char type
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');

	putchar('\n');

	return (0);
}
