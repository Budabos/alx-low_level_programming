#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index -  searches for an integer
 * @array: array of value
 * @size: number of elements in array
 * @cmp: pointer to fx
 * Return: element found in an array or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
