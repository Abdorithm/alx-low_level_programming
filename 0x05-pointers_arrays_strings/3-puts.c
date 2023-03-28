#include "main.h"

/**
 * _puts - print every single char of string
 * @str : the char of the string
 * Return: Always 0.
 */
void _puts(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*str);
	while (*str++ && *str != '\0')
	{
		if (*str == '\0')
		break;
		_putchar(*str);
	}
	_putchar('\n');
}
