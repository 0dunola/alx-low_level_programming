/**
 * leet - encode a string into 1337
 * @s: given string
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;
	char from[] = {
		'a', 'e', 'o', 't', 'l',
		'A', 'E', 'O', 'T', 'L'
	};
	char to[] = {
		'4', '3', '0', '7', '1',
		'4', '3', '0', '7', '1'
	};

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 10; j++)
			if (s[i] == from[j])
			{
				s[i] = to[j];
				break;
			}
	}
	return (s);
}
