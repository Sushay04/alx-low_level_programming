#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return the sum when given an unknown amount of integers
 * @n: the integers to add
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list intlist;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);
	va_start(intlist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(intlist, int);
	va_end(intlist);

	return (sum);
}
