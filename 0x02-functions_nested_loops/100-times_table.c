#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the 9 time tables.
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int i, j, x, y, z;

	if (n >= 0 && n < 16)
	{
		for (i = 0; i < n + 1; i++)
		{
			x = i;
			_putchar('0');
			_putchar(',');
			for (j = 0; j < n; j++)
			{
				if (x < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + x);
				}
				else if (x < 100)
				{
					_putchar(' ');
					_putchar(' ');
					y = x / 10;
					_putchar('0' + (y % 10));
					_putchar('0' + (x % 10));
				}
				else
				{
					_putchar(' ');
					y = x / 100;
					z = x / 10;
					_putchar('0' + (y % 10));
                    _putchar('0' + (z % 10));
					_putchar('0' + (x % 10));
				}
				if (j < n-1)
					_putchar(',');
				x += i;
			}
			_putchar('\n');
		}
	}
}
