#include "function_pointers.h"

/**
* int_index - searches for an integer.
* @array: array passed.
* @size: size of array.
* @cmp: callback function.
*
* Return: index of first element for which the cmp function des not return 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			res = cmp(array[i]);
			if (res != 0)
				return (i);
		}
	}
	return (-1);
}
