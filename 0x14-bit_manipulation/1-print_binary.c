#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: ...
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	int flag;

	flag = 0;
	dev = (1 << 30);
	dev *= 2;

	while (dev != 0)
	{
		result = (n & dev);
		/* printf("%lu\n", result); */
		if (result == dev)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
