#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: given string
 * Return: Pointer to the duplicate of str
 */
char *_strdup(char *str)
{
	int len;
	char *dup;

	if (str == NULL)
		return (NULL);

	/* Get length of string */
	for (len = 0; str[len]; len++)
		;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	/* Copy into the duplicates */
	dup[len] = '\0';
	for (--len; len >= 0; len--)
		dup[len] = str[len];

	return (dup);
}
