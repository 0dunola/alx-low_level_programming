#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char asc;

	asc = '0';
	while (asc <= '9')
		putchar(asc++);
	putchar('\n');

	return (0);
}
