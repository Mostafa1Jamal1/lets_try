#include "search_algos.h"
#include <math.h>

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t start = 0, end = 0;

	if (!array)
		return (-1);

	while (value > array[end] && end < size)
	{
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		start = end;
		end += step;
	}

	printf("Value found between indexes [%lu] and [%ld]\n", start, end);

	if (end >= size)
		end = size - 1;

	while (start <= end)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
	}
	return (-1);
}
