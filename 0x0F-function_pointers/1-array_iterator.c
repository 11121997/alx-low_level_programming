#include "function_pointers.h"
/**
*array_iterator - function executes a function given as a parameter
*@array: string array
*@size: size of array
*@action: function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
