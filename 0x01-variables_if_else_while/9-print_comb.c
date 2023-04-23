#include <stdio.h>
/**
 * main - start
 * Description: combination of single digit numbers
 * Return: (0) always
 */
int main(void)
{
	int r;

	for (r = 48; r <= 57; r++)
	{
		putchar(r);
		if (r == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
