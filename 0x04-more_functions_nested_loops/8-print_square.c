#include "main.h"

/**
 * print_square - a function that prints a square.
 *
 * @size: the size of the square
 *
 * Return: 0 (Success)
*/

void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; column++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
