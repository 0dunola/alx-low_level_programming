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
		putchar(asc++);
	putchar('\n');

	return (0);
}
