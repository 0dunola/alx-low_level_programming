/**
 * _strcmp - compares two string
 * @s1: first string
 * @s2: second string
 * Return: an integer indicating the result of the
 * comparison, as follows:
 * 0, if s1 and s2 are equal
 * a negative value if s1 is less than s2
 * a positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && (s1[i] == s2[i]))
		i++;

	return (s1[i] - s2[i]);
}
