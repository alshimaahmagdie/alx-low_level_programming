#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * @val: square root
 * Return: int
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (sqaure(n, 1));
}

/**
 * square - find square root
 * @n: int to find sqaure root
 * @val: square root
 * Return: int
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);

}
