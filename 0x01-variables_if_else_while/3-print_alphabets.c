#include <stdio.h>
/**
 * main - start
 * description:alphabet in lowercase and uppercase with a new line
 * Return: (0) always
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
	}
	while (m <= 90)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
