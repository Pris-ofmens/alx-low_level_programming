#include <stdio.h>
/**
 * main - start
 * Description: Alphabet in lower case except q and e
 * Return: (0) always
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
			{
				putchar(n);
				n++;
			}
			putchar('\n');
			return (0);
		}
	}
}
