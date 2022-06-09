#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int m, n, p;

	for (m = 0; m <= 9; m++)
	{
		_putchar('0');
		for (n = 1; n <= 9; n++)
		{
			p = m * n;
			_putchar(',');
			_putchar(' ');
			if (p <= 9)
			{
				_putchar(' ');
				_putchar('0' + p);
			}
			else
			{
				_putchar(((p / 10) % 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
