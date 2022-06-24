/**
 * is_prime_impl - is_prime_number helper function
 * checks if a number is a prime number recursively
 * @n: given number
 * @i: iterator
 * Return: 1 if n is a prime numer else 0
 */
int is_prime_impl(unsigned int n, unsigned int i)
{
	if (n % i == 0)
		return (0);

	if (i >= n / 2)
		return (1);

	return (0 + is_prime_impl(n, ++i));
}

/**
 * is_prime_number - checks if a number is a prime number recursively
 * @n: given number
 * Return: 1 if n is a prime numer else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_impl(n, 2));
}
