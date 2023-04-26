#include "main.h"

/**
 *_isalpha - checks alphabetic order
 *@c: an alphabet that checks for
 *Return: 1 if c is an alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'));
}
