#include <stdio.h>
/**
 * main - start
 * Description:Lower case alphabet in reverse
 * Return: (0) always
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
		putchar(n);
	n--;

	putchar('\n');
	return (0);
}
