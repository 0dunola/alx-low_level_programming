#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: from integer value
 * @max: to integer value
 *
 * Return: the pointer to the newly allocated memory
 */
int *array_range(int min, int max)
{
	int size;
	int *array;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (size = 0; size < (max - min + 1); size++)
		array[size] = min + size;

	return (array);
}

