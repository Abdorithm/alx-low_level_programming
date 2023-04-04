#include "main.h"
/**
 * _memset - containing rray with memory char
 * @s: the array
 * @b: value
 * @n: the number of bytes to be contained
 * Return: the array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
