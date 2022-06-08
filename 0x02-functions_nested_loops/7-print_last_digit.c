#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: given number
 * Return: last digit of the number
 */
int print_last_digit(int num)
{
	int digit;

	if (num < 0)
		num *= -1;

	digit = num % 10;
	_putchar(digit + '0');
	return (digit);
}
