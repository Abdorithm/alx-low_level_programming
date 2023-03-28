
#include "main.h"
#include <stdio.h>

/**
 * rev_string - Prints a string in reverse
 * @s: The string to print
 * Return: void
 */

void rev_string(char *s)

{

	int c = 0;

	char ans;

	int i = 0;

	while (s[c] != '\0')
	{
	c++;
	}


	for (i = c - 1; i >= c / 2; i--)
	{
	ans = s[i];
	s[i] = s[c - i - 1];
	s[c - i - 1] = ans;
	}
}
