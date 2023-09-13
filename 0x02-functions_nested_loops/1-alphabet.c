#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to ptint the alphabet.
*/

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
