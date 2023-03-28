#include "main.h"
/**
 * swap_int - swap the values between them
 * @a : the first input
 * @b : the second input
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
