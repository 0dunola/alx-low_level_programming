#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int asc;

	asc = 0;
	while (asc < 10)
		putchar('0' + asc++);
	putchar('\n');

	return (0);
}
