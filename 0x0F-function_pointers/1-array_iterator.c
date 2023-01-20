#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as parameter on
 *		    each element of an array
 * @array: Array
 * @size: Size of array
 * @action: Pointer to function
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	if (action == NULL || array == NULL)
		return;
	while (size--)
		action(*array++);
}
