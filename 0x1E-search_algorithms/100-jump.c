#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers,
 * using the Jump search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: first index where value is located,
 * or -1 if value is not present or array is NULL.
 **/
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, step = sqrt(size);

	if (array == NULL)
		return (-1);
	while (array[a] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, array[a]);
		a += step;
		if (a >= size)
			break;
	}
	a -= step;
	printf("Value found between indexes [%d] and [%d]\n",
					(int)a, (int)(a + step));
	while (array[a] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, array[a]);
		a++;
		if (a == size)
			return (-1);
	}

	if (array[a] == value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, array[a]);
		return (a);
	}
	return (-1);
}
