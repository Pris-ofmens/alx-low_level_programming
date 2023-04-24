#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - start
 * Description: combinations of two two-digit numbers
 * Return: (0) always
 */
int main(void)
{
	int b, h;

	for (b = 0; b <= 98; b++)
	{
	for (h = b + 1; h <= 99; h++)
	{
		putchar((b / 10) + '0');
		putchar((b % 10) + '0');
		putchar((h / 10) + '0');
		putchar((h % 10) + '0');
		{
			if (b == 98 && h == 99)
				continue;
		putchar(',');
		putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}
