
/**
 * _sqrt_impl - _sqrt_recursion helper function
 * @sqrt: sqrt counter
 * @n: given number
 * Return: the square root of n or -1 if
 * n has no square root
 */
int _sqrt_impl(int sqrt, int n)
{
	if (sqrt * sqrt == n)
		return (sqrt);

	if (sqrt * sqrt > n)
		return (-1);

	return (_sqrt_impl(++sqrt, n));
}

/**
 * _sqrt_recursion - finds the square root of a given
 * number
 * @n: given number
 * Return: the square root of n or -1 if
 * n has no square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (_sqrt_impl(1, n));
}
