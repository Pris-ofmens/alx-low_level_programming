#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes single characters to standard output stream, stdout
 * @c: character that prints
 *
 * Return: (1) sucessful
 * error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
