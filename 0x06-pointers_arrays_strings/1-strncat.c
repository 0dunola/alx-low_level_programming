/**
 * _strncat - concatenates n bytes from a source string
 * to a target string
 * @dest: target string
 * @src: source string
 * @n: byte count
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int d, s;

	d = s = 0;
	while (*(dest + d) != '\0')
		d++;

	for (; s < n && *(src + s) != '\0'; s++, d++)
		*(dest + d) = *(src + s);

	*(dest + d) = '\0';

	return (dest);
}
