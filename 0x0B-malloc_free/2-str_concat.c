#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: given string
 * @s2: second string
 * Return: pointer to a newly allocated space in memory
 * which contains the content of s1, followed by the contents of s2
 * and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		;

	for (len2 = 0; s2[len2]; len2++)
		;

	concat = malloc(len1 + len2 + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (i = 0; i < len2; i++)
		concat[len1 + i] = s2[i];

	concat[len1 + i] = '\0';

	return (concat);
}
