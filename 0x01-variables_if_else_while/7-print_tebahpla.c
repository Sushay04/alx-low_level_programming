/*
 * Task 7: Reverse alphabet
 */

#include <stdio.h>

/**
 * main - Prints the alphabet from z-a using putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');

	return (0);
}
