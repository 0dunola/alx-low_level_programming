#include"main.h"
/**
 * _abs - compute the absolute value of an integer
 * @num: Absolute value
 * Return: The absolute value of an integer
 */
int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (num * -1);
}
