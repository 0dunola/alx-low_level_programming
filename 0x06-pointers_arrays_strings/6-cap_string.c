/**
 * isSeparator - checks if a character is
 * in the given list of separator
 * @ch: given character
 * Return: 1 if ch is present else 0
 */
int isSeparator(int ch)
{
	int i = 0;

	char sep[] = {
		',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}',
		' ', '\t', '\n'
	};

	for (i = 0; i < 13; i++)
		if (ch == sep[i])
			return (1);
	return (0);
}

/**
 * isLowercase - checks if a character is
 * in lowercase
 * @ch: given character
 * Return: 1 if ch is a lowercase otherwise 0
 */
int isLowercase(int ch)
{
	return (ch >= 'a' && ch <= 'z');
}

/**
 * cap_string - capitalizes all words of string
 * @s: given string
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;

	if (isLowercase(s[i]))
		s[i] += ('A' - 'a');

	while (s[i] && s[i + 1])
	{
		if (isSeparator(s[i]))
			if (isLowercase(s[i + 1]))
				s[i + 1] += ('A' - 'a');
		i++;
	}
	return (s);
}
