#include <stdlib.h>

/**
 * argstostr - concatenates args to a string with newline delimeter
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to the string output
 */
char *argstostr(int ac, char **av)
{
	char *buffer;
	int len, i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (len = i = 0; i < ac; i++, len++)
		for (j = 0; av[i][j] != '\0'; j++)
			len++;

	buffer = malloc(sizeof(char) * len);
	if (buffer == NULL)
		return (NULL);

	for (i = k = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			buffer[k] = av[i][j];
		if (k < len)
			buffer[k] = '\n';
	}
	buffer[k] = '\0';

	return (buffer);
}
