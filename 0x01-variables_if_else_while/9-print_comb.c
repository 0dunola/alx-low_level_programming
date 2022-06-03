#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int asc;

	asc = 0;
	while (asc <= 9)
	{
		putchar('0' + asc);
		if (asc < 9)
		{
			putchar(',');
			putchar(' ');
		}
		asc++;
	}
	putchar('\n');

	return (0);
}
