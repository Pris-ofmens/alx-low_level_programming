#include "main.h"
#include <unistd.h>

/**
 * main -  start
 * Description:function that prints alphabet in lowercase
 * Return: (0) success
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


