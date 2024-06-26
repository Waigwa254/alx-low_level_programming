#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  *                 of ibinary search.
  * @array: A pointer tont of the array to search.
  * @size: The number ofts in the array.
  * @value: The value torch for.
  *
  * Return: If the valueis not present or the array is NULL, -1.
  *         Otherwise, t the value is located.
  *
  * Description: Prints b]array being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
