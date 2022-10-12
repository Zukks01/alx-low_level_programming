#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @size: the number of elements in the array
 * @cmp: pointer to the function used to compare values
 * @array: input array
 * Return: index of integer in cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = -1;
	if (size <= 0 || !(array) || !(cmp))
		return (-1);
	while (++i < size)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
