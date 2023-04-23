#include <stdio.h>
/**
 * main - start
 * Description: combination of single digit numbers
 * Return: (0) always
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
