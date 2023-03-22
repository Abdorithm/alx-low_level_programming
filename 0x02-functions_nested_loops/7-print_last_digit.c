#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer.
 *
 * @n: the integer parameter.
 *
 * Return: the last digit of n.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	_putchar('0' + (n % 10));
	return (n % 10);
}
