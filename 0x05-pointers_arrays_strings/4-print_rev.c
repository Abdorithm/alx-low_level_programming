#include "main.h"
#include <stdio.h>
/**
 * print_rev - printing the string in reverse order
 * @s : the char of string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{	p++;
	}
	 p = p - 1;

	for (; p >= 0; p--)
	{
	_putchar(s[p]);
	}
	_putchar('\n');
}
