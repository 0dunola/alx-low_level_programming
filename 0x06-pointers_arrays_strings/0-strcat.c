/**
 * _strcat - concatenates two strings
 * @dest: target string
 * @src: source string
 * Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	int d, s;

	d = s = 0;
	while (*(dest + d) != '\0')
		d++;

	for (; *(src + s) != '\0'; s++, d++)
		*(dest + d) = *(src + s);

	*(dest + d) = '\0';

	return (dest);
}
