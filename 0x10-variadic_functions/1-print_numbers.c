#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - ...
 * @separator: ...
 * @n: ...
 *
 * Return: ...
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
