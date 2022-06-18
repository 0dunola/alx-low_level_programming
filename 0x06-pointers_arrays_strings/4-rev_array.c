/**
 * reverse_array - reverse the content of an
 * array of integers
 * @a: given array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int lt, rt, temp;

	if (n <= 0)
		return;

	lt = 0;
	rt = n - 1;

	while (lt != rt)
	{
		temp = a[lt];
		a[lt] = a[rt];
		a[rt] = temp;
		++lt, --rt;
	}
}
