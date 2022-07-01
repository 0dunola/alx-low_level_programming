#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: base string
 * @s2: string to be concatenated
 * @n: is the number of bytes to concatenates with s1
 *
 * Return: pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, len, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1]; l1++)
		;

	for (l2 = 0; l2 <= n && s2[l2]; l2++)
		;

	len = l1 + l2;

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		ptr[i] = s1[i];

	for (; i < len; i++)
		ptr[i] = s2[i - l1];

	ptr[i] = '\0';

	return (ptr);
}

