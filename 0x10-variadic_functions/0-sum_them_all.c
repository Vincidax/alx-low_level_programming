#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramaters.
 * @n: The number of paramaters passed to the function.
 * @...: A variable number of paramaters to calculate the sum of.
 *
 * Return: If n == 0 return 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mus;
	unsigned int i, sum = 0;

	va_start(mus, n);

	for (i = 0; i < n; i++)
		sum += va_arg(mus, int);

	va_end(mus);

	return (sum);
}
