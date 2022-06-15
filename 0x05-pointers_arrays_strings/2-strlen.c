/**
 * _strlen - returns the length of a string
 * @s: given string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *(s + len) != '\0'; len++)
		;

	return (len);
}
