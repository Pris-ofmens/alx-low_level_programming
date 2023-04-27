#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starts from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int t, k;

	t = 0;

	while (t < 24)
	{
		k = 0;

		while (k < 60)
		{
			_putchar((t / 10) + '0');
			_putchar((t % 10) + '0');
			_putchar(':');
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar('\n');
			k++;
		}
		t++;
	}
}

