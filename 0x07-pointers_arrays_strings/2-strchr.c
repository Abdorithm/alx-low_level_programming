#include <stdio.h>
#include "main.h"
/**
 * _strchr - En
 * @s: int
 * @c: in
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}

	}
	return (NULL);
}
