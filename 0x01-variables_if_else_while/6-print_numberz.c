#include <stdio.h>
/**
 *main - start
 *Description: single digit numbers base of ten
 *Return:  (0) always
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)

		putchar(n + 48);

	putchar('\n');

	return (0);
}
