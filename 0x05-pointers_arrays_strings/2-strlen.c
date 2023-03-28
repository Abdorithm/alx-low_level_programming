#include "main.h"
#include <stdio.h>
/**
 * _strlen - the length of the string
 * @s : every single char of the string
 * Return: the size of string.
 */
int _strlen(char *s)
{
	int p = 0;

	while (*s++)
	p++;
	return (p);
}
