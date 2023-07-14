/*
 * Task 3: putchar v2.0
 */

#include <stdio.h>

/**
 * main - Prints the alphabet from a-z in lower and uppercase
 *	  using putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;
	char cH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (cH = 'A'; cH <= 'Z'; cH++)
	{
		putchar(cH);
	}
	putchar('\n');

	return (0);
}
