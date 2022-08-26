#include "search_algos.h"

/**
* binary_search - searches for a value in an array recursing binary search
* @array: pointer to the first element in the array
* @size: number of elements in the array
* @value: value to search for
* Return: first index where value is located, -1 if fails
*/
int binary_search(int *array, size_t size, int value)
{
	size_t idx = 0, left = 0, mid = 0, right = size - 1;

	if (!array)
		return (-1);

	while (left <= right)
	{
		/*for printing while searches*/
		printf("Searching in array: ");
		for (idx = left; idx <= right; idx++)
		{
			if (idx != right)
				printf("%d, ", array[idx]);
			else
				printf("%d\n", array[idx]);
		}
		/*if right same or equal to left, set mid*/
		mid = left + (right - left) / 2;
		/*when is equal, value was found*/
		if (array[mid] == value)
			return (mid);
		/*else, sets new left and right for the loop to keep searching*/
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
