#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char asc;

	asc = 'z';
	while (asc >= 'a')
		putchar(asc--);
	putchar('\n');

	return (0);
}
