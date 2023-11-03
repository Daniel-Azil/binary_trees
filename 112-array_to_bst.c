#include "binary_trees.h"

/**
 * array_to_bst - Custom function
 * @array: Argument of custom function
 * @size: Argument of custom function
 * Return: NULL
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *_arg = NULL;
	size_t _arg1;
	size_t _arg11;

	if (array == NULL)
		return (NULL);
	for (_arg1 = 0; _arg1 < size; _arg1++)
	{
		for (_arg11 = 0; _arg11 < _arg1; _arg11++)
		{
			if (array[_arg11] == array[_arg1])
				break;
		}
		if (_arg11 == _arg1)
		{
			if (bst_insert(&_arg, array[_arg1]) == NULL)
				return (NULL);
		}
	}
	return (_arg);
}
