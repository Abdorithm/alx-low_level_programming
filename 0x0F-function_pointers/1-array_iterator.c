#include "function_pointers.h"

/**
 * array_iterator - performs actions on array elements
 * @array: ...
 * @size: ...
 * @action: ...
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
