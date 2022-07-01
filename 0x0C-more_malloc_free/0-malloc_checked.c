#include <stdlib.h>

/**
 * malloc_checked - allocates memeory using malloc
 * @b: amount of memory to allocate
 * return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}

