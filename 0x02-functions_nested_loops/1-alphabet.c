#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - entry point
 * description: print the alphabet in lowercase
 * Return : 0 always
 */

void print_alphabet(void)
{
	char c = 's';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

