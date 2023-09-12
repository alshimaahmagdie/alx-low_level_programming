#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program prints lowercase letters.
 *
 * Return: 0 (Success).
*/

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
