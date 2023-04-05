#include "main.h"
/**
 * _memcpy - func
 * @dest: in
 * @src: in
 * @n: in
 * Return: array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
