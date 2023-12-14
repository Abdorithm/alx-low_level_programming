#include "search_algos.h"

/**
 * binary_search - ...
 * @array: ...
 * @size: ...
 * @value: ...
 *
 * Return: ...
 */
int binary_search(int *array, size_t size, int value)
{
	size_t r, l, m, ans = -1, i;

	if (array == NULL)
		return (ans);

	r = size - 1, l = 0;

	while (l <= r)
	{
		m = l + (r - l) / 2;

		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%i", array[i]);
			if (i != r)
				printf(", ");
		}
		printf("\n");

		if (array[m] == value)
		{
			ans = m;
			break;
		}

		if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}
	return (ans);
}
