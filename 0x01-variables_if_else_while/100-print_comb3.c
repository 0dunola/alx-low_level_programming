#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int a, b;

	a = 0;
	while (a < 10)
	{
		b = a + 1;
		while (b < 10)
		{
			putchar('0' + a);
			putchar('0' + b);
			if (a >= 8 && b >= 9)
				break;
			putchar(',');
			putchar(' ');
			b++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}
