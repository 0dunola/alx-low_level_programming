#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char
 * @size: the size of the array
 * @c: fill char
 * Return: a pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	if (size == 0)
		return (NULL);

	buffer = malloc(sizeof(char) * size);
       	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = c;

	return (buffer);
}
