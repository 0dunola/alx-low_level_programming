#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char asc;

	asc = 'a';
	while (asc <= 'z')
	{
		if (asc == 'q' || asc == 'e')
		{
			asc++;
			continue;
		}
		putchar(asc++);
	}
	putchar('\n');

	return (0);
}
