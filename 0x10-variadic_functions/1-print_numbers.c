#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print a given amount of integers
 * @separator: separates the numbers
 * @n: number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list intlist;
	unsigned int i;

	if (n > 0)
	{
		va_start(intlist, n);
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(intlist, int));
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(intlist);
	}
	printf("\n");
}
