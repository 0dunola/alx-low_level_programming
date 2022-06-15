/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte to the buffer
 * pointed to by dest
 * @dest: target
 * @src: source
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src)
	{
		*(dest + len) = *(src + len);
		if (*(src + len) == '\0')
			break;
		len++;
	}

	return (dest);
}
