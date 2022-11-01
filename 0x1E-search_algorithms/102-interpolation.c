#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers,
 * using the Interpolation search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: first index where value is located,
 * or -1 if value is not present or array is NULL.
 **/
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, pos = 0;

	if (array == NULL)
		return (-1);
	pos = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
	if (pos >= size)
		printf("Value checked array[%d] is out of range\n", (int) pos);
	while ((array[r] != array[l]) && (value >= array[l]) && (value <= array[r]))
	{
		pos = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		printf("Value checked array[%d] = [%d]\n", (int) pos, array[pos]);

		if (array[pos] < value)
			l = pos + 1;
		else if (array[pos] > value)
			r = pos - 1;
		else
			return (pos);
	}
	if (array[l] == value)
		return (l);
	return (-1);
}
