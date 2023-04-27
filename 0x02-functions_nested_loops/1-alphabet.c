#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - entry point
 * description: print the alphabet in lowercase
 * Return : 0 always
 */

void print_alphabet(void)
{
	char g = 'a';

	while (g <= 'z')
	{
		_putchar(g);
		g++;
	}
	_putchar('\n');
}

