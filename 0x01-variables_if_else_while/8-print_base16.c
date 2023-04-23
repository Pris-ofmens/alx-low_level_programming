#include <stdio.h>
/**
 * main - start
 * Description: numbers of base sixteen in lowercase
 * Return: (0) always
 */
int main(void)
{
	int i;
	int n;

	for (i = 48; n <= 57; i++)
	{
		putchar(i);
	}
	for (n = 97; n <= 102; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
