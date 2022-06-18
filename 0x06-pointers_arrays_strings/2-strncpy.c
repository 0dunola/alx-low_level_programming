/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: byte count
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int d;

	for (d = 0; d < n && src[d] != '\0'; d++)
		dest[d] = src[d];

	for (; d < n; d++)
		dest[d] = '\0';

	return (dest);
}
