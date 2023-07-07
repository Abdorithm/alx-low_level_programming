#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int shift, i;
	unsigned int j = 0;

	for (i = 0; i < 32; i++)
	{
		shift = (1 << i);
		if ((n & shift) != (m & shift))
			j++;
	}

	return (j);
}
