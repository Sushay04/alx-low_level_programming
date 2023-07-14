/*
 * Task 5: putchar for numberrs
 */

#include <stdio.h>

/**
 * main - Prints the numbers in base 10 from 0-9 using putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
