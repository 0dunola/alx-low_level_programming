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

	for (d = 0; s < n && src[s] != '\0'; d++)
		dest[d] = src[d];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
