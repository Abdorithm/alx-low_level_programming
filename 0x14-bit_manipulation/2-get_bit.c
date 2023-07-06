#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: checking bits
 * @index: which to check bit
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);
	if ((n & (1 << index)) == (1 << index))
		return (1);

	return (0);
}
