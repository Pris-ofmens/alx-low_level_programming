#include "main.h"

/**

 * _islower - Checks for lowercase letters

 * @c: Character to be checked

 * Return: 1 if character is lowercase or 0 if otherwise

 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')

                return (1);
        else
                return (0);

}
