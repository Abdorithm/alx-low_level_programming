#include <stdio.h>
#include "main.h"
/**
 * set_string - a function that sets a pointer to a string
 * @s: in
 * @to: in
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
