/**
 * int_index - searches for an integer
 * @array: the given array
 * @size: size of the array
 * @cmp: comparator function
 *
 * Return: index of the first element if found otherwise return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
