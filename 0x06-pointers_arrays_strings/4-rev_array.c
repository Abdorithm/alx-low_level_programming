#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int i;
int t;
int o = n / 2;
for (i = 0; i < o; i++)
{
t = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = t;
}
}
