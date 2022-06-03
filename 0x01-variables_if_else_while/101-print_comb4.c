#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	a = 0;
	while (a < 10)
	{
		b = a + 1;
		while (b < 10)
		{
			c = b + 1;
			while (c < 10)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
				if (a >= 7 && b >= 8 && c >= 9)
					break;
				putchar(',');
				putchar(' ');
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}
