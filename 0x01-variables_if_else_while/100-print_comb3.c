#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - start
 * description:
 * Return: (0) always
 */
int main(void)
{
	int f, c;

	for (f = 0; f < 9; f++)
	{
		putchar(f);
		{
			for (c = f + 1; c <= 9; c++)
			{
				if (c != f)

				putchar(c);
				{
					if (f == 8 && c == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
				putchar('\n');

				return(0);
			}
		}
	}
}

