#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long i, x = 1, y = 2, z;

	printf("%lld, %lld, ", x, y);
	for (i = 0; i < 48; i++)
	{
		z = x + y;
		printf("%lld", z);
		if (i < 47)
			printf(", ");
		x = y;
		y = z;
	}
	printf("%c", '\n');
	return (0);
}
