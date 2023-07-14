/*
 * Task 8: Numbers in base16
 */

#include <stdio.h>

/**
 * main - Prints the numbers from 0-9 & letters a-f using putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	char num;
	char ch;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
