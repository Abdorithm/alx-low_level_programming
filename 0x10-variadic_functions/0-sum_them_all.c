#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - ...
 * @n: ...
 *
 * Return: ...
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	va_list ap;
	int i, sum;

	va_start(ap, n);
	sum = 0;
	for (int i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
