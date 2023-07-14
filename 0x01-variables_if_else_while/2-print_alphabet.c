/*
 * Task 2: putchar
 */

#include <stdio.h>

/**
 * main - Prints the alphabet from a-z using putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
