/**
 * rev_string - reverses a string
 * @s: given string
 */
void rev_string(char *s)
{
	int lt = 0, rt = 0;
	char temp;

	while (*(s + rt) != '\0')
		rt++;

	rt--;

	for (; lt < rt; lt++, rt--)
	{
		temp = *(s + lt);
		*(s + lt) = *(s + rt);
		*(s + rt) = temp;
	}
}
