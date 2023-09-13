#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stout
 * @c: the character to print
 *
 * Return: on Success 1.						on error, -1 is returned.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
