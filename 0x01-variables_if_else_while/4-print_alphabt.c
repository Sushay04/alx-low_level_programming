/*
 * Task 4: printing all alphabets except e and p
 */

#include <stdio.h>

/**
 * main - Prints the alphabet from a-z except e & p using putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}

	putchar('\n');

	return (0);
}
