#include <stdio.h>
/**
 * main - start
 * description:alphabet in lowercase and uppercase with a new line
 * Return: (0) always
 */
int main(void)
{
	int p = (97);
	int n = (65);

	while (p <= 122)
	{
		putchar(p);
	}
	while (n <= 90)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
