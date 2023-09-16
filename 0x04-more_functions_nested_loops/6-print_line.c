#include "main.h"

/**
 * print_line - a function draws a straight line in the terminal
 *
 *
 * @n: numbers of the _ times
*/

void print_line(int n)
{
	int dash;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (dash = 1; dash <= n; dash++)
			_putchar('_');
		_putchar('\n');
	}
}
