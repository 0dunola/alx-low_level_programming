/**
 * _strchr - locates a character in a string
 * @s: given string
 * @c: character
 * Return: pointer to first occurrence of the character
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *str = s;

	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (0);
}
